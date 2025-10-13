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
#ifndef CODESNIPPETSMANAGER_H
#define CODESNIPPETSMANAGER_H

#include <QObject>
#include "parser/parserutils.h"
#include <QAbstractListModel>

/**
 * @brief Model for managing code snippets in a list view
 * 
 * The CodeSnippetsModel class provides a model interface for displaying
 * and manipulating code snippets in Qt's model/view framework. It stores
 * the collection of code snippets and provides interfaces for adding,
 * removing, and modifying snippets.
 */
class CodeSnippetsModel : public QAbstractListModel
{
    Q_OBJECT
public:
    /**
     * @brief Add a new code snippet
     * 
     * @param caption Display name of the snippet
     * @param prefix Text prefix that triggers the snippet
     * @param code Actual code content of the snippet
     * @param description Description of what the snippet does
     * @param menuSection Section in the menu where the snippet appears
     */
    void addSnippet(const QString& caption, const QString& prefix, const QString& code,
                    const QString& description, int menuSection);
    
    /**
     * @brief Remove a snippet by index
     * 
     * @param index Index of the snippet to remove
     */
    void remove(int index);
    
    /**
     * @brief Clear all snippets
     */
    void clear();
    
    /**
     * @brief Get the model index of the last snippet's caption
     * 
     * @return QModelIndex Model index of the last snippet's caption
     */
    QModelIndex lastSnippetCaption();

    // QAbstractItemModel interface
public:
    /**
     * @brief Get the number of rows (snippets) in the model
     * 
     * @param parent Parent index (not used for list models)
     * @return int Number of snippets
     */
    int rowCount(const QModelIndex& parent) const override;
    
    /**
     * @brief Get the number of columns in the model
     * 
     * @param parent Parent index (not used for list models)
     * @return int Number of columns (2 in this implementation)
     */
    int columnCount(const QModelIndex& parent) const override;
    
    /**
     * @brief Get data for a specific model index
     * 
     * @param index Model index to get data for
     * @param role Data role requested
     * @return QVariant Requested data
     */
    QVariant data(const QModelIndex& index, int role) const override;
    
    /**
     * @brief Set data for a specific model index
     * 
     * @param index Model index to set data for
     * @param value New value for the data
     * @param role Data role to set
     * @return bool True if data was successfully set
     */
    bool setData(const QModelIndex& index, const QVariant& value, int role) override;
    
    /**
     * @brief Get header data for the model
     * 
     * @param section Section number
     * @param orientation Header orientation
     * @param role Data role requested
     * @return QVariant Header data
     */
    QVariant headerData(int section, Qt::Orientation orientation, int role) const override;
    
    /**
     * @brief Get item flags for a specific index
     * 
     * @param index Model index to get flags for
     * @return Qt::ItemFlags Flags for the item
     */
    Qt::ItemFlags flags(const QModelIndex& index) const override;
    
    /**
     * @brief Get the list of all snippets
     * 
     * @return const QList<PCodeSnippet>& List of snippets
     */
    const QList<PCodeSnippet>& snippets() const;
    
    /**
     * @brief Update the list of snippets
     * 
     * @param snippets New list of snippets
     */
    void updateSnippets(const QList<PCodeSnippet>& snippets);

private:
    QList<PCodeSnippet> mSnippets;  //!< List of code snippets managed by this model
};

/**
 * @brief Manages code snippets for the IDE
 * 
 * The CodeSnippetsManager class handles the lifecycle of code snippets,
 * including loading, saving, and providing access to code snippets for
 * use in the editor. It works with the CodeSnippetsModel to provide
 * a complete solution for code snippet management.
 * 
 * Code snippets are templates of code that can be quickly inserted into
 * the editor by typing a short prefix and triggering the completion.
 */
class CodeSnippetsManager : public QObject
{
    Q_OBJECT
public:
    explicit CodeSnippetsManager(QObject* parent = nullptr);

    void load();
    void save();

    const QList<PCodeSnippet>& snippets() const;

    void setSnippets(const QList<PCodeSnippet>& newSnippets);

    const QString& newCppFileTemplate() const;
    void setNewCppFileTemplate(const QString& newContent);

    QString newCFileTemplate() const;
    void setNewCFileTemplate(const QString& newContent);

    QString newGASFileTemplate() const;
    void setNewGASFileTemplate(const QString& newContent);

private:
    void loadSnippets();
    void saveSnippets();
    QString loadNewFileTemplate(const QString& filename);

    void saveNewFileTemplate(const QString& filename, const QString& templateContent);

private:
    QList<PCodeSnippet> mSnippets;
    QString mNewCppFileTemplate; // C++ file template
    QString mNewCFileTemplate;
    QString mNewGASFileTemplate;
};

using PCodeSnippetManager = std::shared_ptr<CodeSnippetsManager>;

#endif // CODESNIPPETSMANAGER_H
