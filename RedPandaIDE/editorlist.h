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
#ifndef EDITORLIST_H
#define EDITORLIST_H

#include <QTabWidget>
#include <QSplitter>
#include <QWidget>
#include "utils.h"

class Project;
class Editor;

/**
 * @brief Manages a list of open editors in the IDE
 * 
 * The EditorList class manages all open editor tabs in the IDE, handling
 * operations such as creating new editors, closing editors, switching
 * between editors, and saving files. It supports a dual-panel layout
 * with left and right tab widgets for organizing multiple files.
 * 
 * Key features:
 * - Manages multiple editor instances across two tab panels
 * - Handles editor lifecycle (creation, closing, switching)
 * - Supports saving operations for individual and all editors
 * - Provides layout management for dual-panel view
 * - Integrates with project system for project-specific editors
 */
class EditorList : public QObject
{
    Q_OBJECT
public:
    /**
     * @brief Layout show types for editor panels
     * 
     * Defines which panels are visible in the editor layout.
     */
    enum class LayoutShowType { 
        lstLeft,   //!< Show only the left panel
        lstRight,  //!< Show only the right panel
        lstBoth    //!< Show both panels
    };

    /**
     * @brief Construct a new EditorList object
     * 
     * @param leftPageWidget Tab widget for the left panel
     * @param rightPageWidget Tab widget for the right panel
     * @param splitter Splitter widget that manages panel sizes
     * @param panel Parent widget for the editor panels
     * @param parent Parent QObject
     */
    explicit EditorList(QTabWidget* leftPageWidget, QTabWidget* rightPageWidget,
                        QSplitter* splitter, QWidget* panel, QObject* parent = nullptr);

    /**
     * @brief Create a new editor
     * 
     * @param filename Path to the file to open, or empty for new file
     * @param encoding Encoding to use for the file
     * @param fileType Type of the file (C, C++, etc.)
     * @param contextFile Context file for code completion
     * @param pProject Associated project, if any
     * @param newFile Whether this is a new (unsaved) file
     * @param page Specific tab widget to add the editor to, or nullptr for default
     * @return Editor* Pointer to the newly created editor
     */
    Editor* newEditor(const QString& filename, const QByteArray& encoding, FileType fileType,
                      const QString& contextFile, Project* pProject, bool newFile,
                      QTabWidget* page = nullptr);

    /**
     * @brief Get an editor by index
     * 
     * @param index Index of the editor to retrieve, or -1 for current editor
     * @param tabsWidget Specific tab widget to look in, or nullptr for current
     * @return Editor* Pointer to the requested editor, or nullptr if not found
     */
    Editor* getEditor(int index = -1, QTabWidget* tabsWidget = nullptr) const;

    /**
     * @brief Close a specific editor
     * 
     * @param editor Editor to close
     * @param transferFocus Whether to transfer focus to another editor
     * @param force Whether to force close without saving
     * @return true If editor was successfully closed
     * @return false If editor closing was cancelled (e.g., user cancelled save dialog)
     */
    bool closeEditor(Editor* editor, bool transferFocus = true, bool force = false);

    /**
     * @brief Swap an editor between left and right panels
     * 
     * @param editor Editor to swap
     * @return true If editor was successfully swapped
     * @return false If editor swapping failed
     */
    bool swapEditor(Editor* editor);

    /**
     * @brief Save all open editors
     */
    void saveAll();
    
    /**
     * @brief Save all editors belonging to the current project
     * 
     * @return true If all files were saved successfully
     * @return false If saving was cancelled or failed
     */
    bool saveAllForProject();

    /**
     * @brief Check if any project editors have been modified
     * 
     * @return true If any project editors have unsaved changes
     * @return false If no project editors have unsaved changes
     */
    bool projectEditorsModified();
    
    /**
     * @brief Clear the modified flag on all project editors
     */
    void clearProjectEditorsModified();

    /**
     * @brief Close all open editors
     * 
     * @param force Whether to force close without saving
     * @return true If all editors were closed successfully
     * @return false If closing was cancelled (e.g., user cancelled save dialog)
     */
    bool closeAll(bool force = false);

    /**
     * @brief Close all editors except the specified one
     * 
     * @param editor Editor to keep open
     * @return true If all other editors were closed successfully
     * @return false If closing was cancelled (e.g., user cancelled save dialog)
     */
    bool closeOthers(Editor* editor);

    /**
     * @brief Force close an editor without saving
     * 
     * @param editor Editor to close
     */
    void forceCloseEditor(Editor* editor);

    /**
     * @brief Get an editor by filename
     * 
     * @param filename Path to the file
     * @return Editor* Pointer to the editor if found, or nullptr if not
     */
    Editor* getOpenedEditorByFilename(QString filename) const;

    /**
     * @brief Get content from an open editor by filename
     * 
     * @param filename Path to the file
     * @param buffer Buffer to store the content
     * @return true If content was successfully retrieved
     * @return false If the file is not open
     */
    bool getContentFromOpenedEditor(const QString& filename, QStringList& buffer) const;

    /**
     * @brief Get the currently visible editors in both panels
     * 
     * @param left Pointer to store the left panel editor
     * @param right Pointer to store the right panel editor
     */
    void getVisibleEditors(Editor*& left, Editor*& right) const;

    /**
     * @brief Update the layout of the editor panels
     */
    void updateLayout();

    /**
     * @brief Begin a batch update to prevent unnecessary layout updates
     */
    void beginUpdate();

    /**
     * @brief End a batch update and apply any pending layout changes
     */
    void endUpdate();

    /**
     * @brief Apply settings to all editors
     */
    void applySettings();

    /**
     * @brief Apply color schemes to all editors
     * 
     * @param name Name of the color scheme to apply
     */
    void applyColorSchemes(const QString& name);

    /**
     * @brief Check if a file is currently open
     * 
     * @param fullfilepath Full path to the file
     * @return true If the file is open
     * @return false If the file is not open
     */
    bool isFileOpened(const QString& fullfilepath) const;

    /**
     * @brief Check if any editor has the specified filename
     * 
     * @param filename Filename to check
     * @return true If any editor has the filename
     * @return false If no editor has the filename
     */
    bool hasFilename(const QString& filename) const;

    /**
     * @brief Get the total number of open editors
     * 
     * @return int Number of open editors
     */
    int pageCount() const;

    /**
     * @brief Select the next editor tab
     */
    void selectNextPage();

    /**
     * @brief Select the previous editor tab
     */
    void selectPreviousPage();

    /**
     * @brief Get an editor by index using array-like syntax
     * 
     * @param index Index of the editor
     * @return Editor* Pointer to the editor
     */
    Editor* operator[](int index);

    /**
     * @brief Get the tab widget for the left panel
     * 
     * @return QTabWidget* Pointer to the left panel tab widget
     */
    QTabWidget* leftPageWidget() const;

    /**
     * @brief Get the tab widget for the right panel
     * 
     * @return QTabWidget* Pointer to the right panel tab widget
     */
    QTabWidget* rightPageWidget() const;

signals:
    void editorClosed();
    void editorRenamed(const QString& oldFilename, const QString& newFilename, bool firstSave);
    void editorOpenned();

private:
    QTabWidget* getNewEditorPageControl() const;
    QTabWidget* getFocusedPageControl() const;
    void showLayout(LayoutShowType layout);
    void doRemoveEditor(Editor* e);
private slots:
    void onEditorRenamed(const QString& oldFilename, const QString& newFilename, bool firstSave);

private:
    LayoutShowType mLayout;
    QTabWidget* mLeftPageWidget;
    QTabWidget* mRightPageWidget;
    QSplitter* mSplitter;
    QWidget* mPanel;
    int mUpdateCount;
};

#endif // EDITORLIST_H
