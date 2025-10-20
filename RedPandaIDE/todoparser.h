/*
 * Copyright (C) 2020-2022 Roy Qu (royqh1979@gmail.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */
#ifndef TODOPARSER_H
#define TODOPARSER_H

#include <QObject>
#include <QThread>
#include <QMutex>
#include <QAbstractListModel>
#include "syntaxermanager.h"
#include "qsynedit/constants.h"

/**
 * @brief Represents a TODO item found in source code
 * 
 * This structure holds information about a TODO or FIXME comment found
 * in the source code during parsing, including its location and content.
 */
struct TodoItem {
    QString filename;  //!< Name of the file containing the TODO item
    int lineNo;        //!< Line number where the TODO item is located
    int ch;            //!< Character position of the TODO item in the line
    QString line;      //!< The full content of the line containing the TODO item
};

using PTodoItem = std::shared_ptr<TodoItem>;

/**
 * @brief Model for managing TODO items in a Qt view
 * 
 * This class extends QAbstractListModel to provide a model for displaying
 * TODO items found in source code. It manages two separate lists of items:
 * one for project-wide TODOs and one for general TODOs.
 */
class TodoModel : public QAbstractListModel
{
    Q_OBJECT
public:
    /**
     * @brief Constructor
     * @param parent Parent object
     */
    explicit TodoModel(QObject* parent = nullptr);
    
    /**
     * @brief Add a new TODO item to the model
     * @param filename Name of the file containing the TODO
     * @param lineNo Line number of the TODO
     * @param ch Character position of the TODO
     * @param line Content of the line containing the TODO
     */
    void addItem(const QString& filename, int lineNo, int ch, const QString& line);
    
    /**
     * @brief Remove all TODO items associated with a specific file
     * @param filename Name of the file whose TODO items should be removed
     */
    void removeTodosForFile(const QString& filename);
    
    /**
     * @brief Clear all TODO items in the current list (based on isForProject setting)
     */
    void clear();
    
    /**
     * @brief Clear TODO items in the specified list
     * @param forProject Whether to clear project TODO items (true) or general TODO items (false)
     */
    void clear(bool forProject);
    
    /**
     * @brief Get a TODO item at the specified model index
     * @param index Model index of the item to retrieve
     * @return Shared pointer to the TODO item, or null if index is invalid
     */
    PTodoItem getItem(const QModelIndex& index);

    /**
     * @brief Get the number of rows in the model
     * @param parent Parent index (not used for list models)
     * @return Number of TODO items in the current list
     */
    int rowCount(const QModelIndex& parent) const override;
    
    /**
     * @brief Get data for a specific model index
     * @param index Model index to retrieve data for
     * @param role Data role to retrieve
     * @return Data for the specified index and role
     */
    QVariant data(const QModelIndex& index, int role) const override;
    
    /**
     * @brief Get header data for a specific section
     * @param section Section number
     * @param orientation Header orientation
     * @param role Data role to retrieve
     * @return Header data for the specified section
     */
    QVariant headerData(int section, Qt::Orientation orientation, int role) const override;
    
    /**
     * @brief Get the number of columns in the model
     * @param parent Parent index (not used for list models)
     * @return Number of columns (always 3 for filename, line number, and content)
     */
    int columnCount(const QModelIndex& parent) const override;
    
    /**
     * @brief Check if the model is currently showing project TODO items
     * @return True if showing project TODO items, false otherwise
     */
    bool isForProject() const;
    
    /**
     * @brief Set whether the model should show project TODO items
     * @param newIsForProject True to show project TODO items, false for general TODO items
     */
    void setIsForProject(bool newIsForProject);

private:
    QList<PTodoItem>& getItems(bool forProject);
    const QList<PTodoItem>& getConstItems(bool forProject) const;

private:
    QList<PTodoItem> mItems;
    QList<PTodoItem> mProjectItems;
    bool mIsForProject;

    // QAbstractItemModel interface
};

/**
 * @brief Thread for parsing TODO items in source files
 * 
 * This class runs in a separate thread to parse source files and identify
 * TODO and FIXME comments without blocking the UI.
 */
class TodoThread : public QThread
{
    Q_OBJECT
public:
    /**
     * @brief Constructor for parsing a single file
     * @param filename Name of the file to parse
     * @param parent Parent object
     */
    explicit TodoThread(const QString& filename, QObject* parent = nullptr);
    
    /**
     * @brief Constructor for parsing multiple files
     * @param files List of filenames to parse
     * @param parent Parent object
     */
    explicit TodoThread(const QStringList& files, QObject* parent = nullptr);

signals:
    /**
     * @brief Emitted when parsing starts
     */
    void parseStarted();
    
    /**
     * @brief Emitted when starting to parse a specific file
     * @param fileName Name of the file being parsed
     */
    void parsingFile(const QString& fileName);
    
    /**
     * @brief Emitted when a TODO item is found
     * @param filename Name of the file containing the TODO
     * @param lineNo Line number where the TODO was found
     * @param ch Character position of the TODO
     * @param line Content of the line containing the TODO
     */
    void todoFound(const QString& filename, int lineNo, int ch, const QString& line);
    
    /**
     * @brief Emitted when parsing is finished
     */
    void parseFinished();

private:
    /**
     * @brief Parse a single file
     */
    void parseFile();
    
    /**
     * @brief Parse multiple files
     */
    void parseFiles();
    
    /**
     * @brief Parse a specific file for TODO items
     * @param filename Name of the file to parse
     * @param syntaxer Syntaxer to use for parsing
     */
    void doParseFile(const QString& filename, QSynedit::PSyntaxer syntaxer);

private:
    QString mFilename;
    QStringList mFiles;
    bool mParseFiles;

    // QThread interface
protected:
    /**
     * @brief Main thread execution function
     */
    void run() override;
};

using PTodoThread = std::shared_ptr<TodoThread>;

/**
 * @brief Main parser class for managing TODO parsing operations
 * 
 * This class manages the creation and execution of TodoThread objects
 * to parse source files for TODO and FIXME comments.
 */
class TodoParser : public QObject
{
    Q_OBJECT
public:
    /**
     * @brief Constructor
     * @param parent Parent object
     */
    explicit TodoParser(QObject* parent = nullptr);
    
    /**
     * @brief Parse a single file for TODO items
     * @param filename Name of the file to parse
     * @param isForProject Whether this is for a project TODO list
     */
    void parseFile(const QString& filename, bool isForProject);
    
    /**
     * @brief Parse multiple files for TODO items
     * @param files List of filenames to parse
     */
    void parseFiles(const QStringList& files);
    
    /**
     * @brief Check if a parsing operation is currently in progress
     * @return True if parsing is in progress, false otherwise
     */
    bool parsing() const;

private:
    TodoThread* mThread;
    mutable QRecursiveMutex mMutex;
};

using PTodoParser = std::shared_ptr<TodoParser>;

#endif // TODOPARSER_H
