// SPDX-License-Identifier: GPL-3.0-or-later
#ifndef REDPANADA_APICORE_H
#define REDPANADA_APICORE_H

#include <QDebug>
#include <QObject>
#include <QString>
#include <QStringList>
#include <QPoint>

namespace RedPandaIDE {

/**
 * ApiCore
 *
 * Base class for plugins. Plugins implement this interface so the host
 * application can notify them about important events. The set of
 * pure-virtual slots below is gathered from the application headers and
 * represents the most commonly used signals / lifecycle hooks a plugin
 * may want to handle (mainwindow, editor, project, compiler, debugger,
 * tools, settings and plugin manager related events).
 */
class ApiCore : public QObject
{
    Q_OBJECT
public:
    explicit ApiCore(QObject *parent = nullptr) : QObject(parent) {}
    virtual ~ApiCore() = default;

    // -- Host-facing helper functions that plugins can call --
public:
    // UI / settings registration
    virtual void registerSettingsWidget(QWidget* widget, const QString &section = QString()) = 0;
    virtual void unregisterSettingsWidget(QWidget* widget) = 0;

    // Actions / menus / toolbars
    virtual QAction* createGlobalAction(const QString &text,
                                        const QString &objectName = QString(),
                                        const QString &groupName = QString(),
                                        const QKeySequence &shortcut = QKeySequence()) = 0;
    virtual void addToolAction(QAction* action) = 0;
    virtual void removeToolAction(QAction* action) = 0;
    virtual QToolBar* createToolBar(const QString &title) = 0;
    virtual QMenu* createMenu(const QString &title, QMenu* parent = nullptr) = 0;
    virtual void addMenuAction(QMenu* menu, QAction* action) = 0;

    // Explorer / Messages tabs
    virtual void addExplorerTab(const QString &title, QWidget* widget, int order = -1) = 0;
    virtual void removeExplorerTab(QWidget* widget) = 0;
    virtual void addMessagesTab(const QString &title, QWidget* widget, int order = -1) = 0;
    virtual void removeMessagesTab(QWidget* widget) = 0;

    // Files / project operations
    virtual void openFile(const QString &filename, bool activate = true) = 0;
    virtual void openProject(const QString &filename, bool openFiles = true) = 0;
    virtual void closeProject() = 0;

    // Tools & output
    virtual void appendToolsOutput(const QString &msg) = 0;
    virtual void clearToolsOutput() = 0;

    // Run tools / commands
    virtual bool runExternalTool(const QString &program, const QStringList &arguments, const QString &workingDirectory = QString()) = 0;

    // Accessors to core managers (forward-declared types)
    virtual QObject* mainWindowObject() const = 0; // usually MainWindow*
    virtual QObject* pluginManagerObject() const = 0; // usually PluginManager*
    virtual QObject* settingsObject() const = 0; // usually Settings*
    virtual QObject* toolsManagerObject() const = 0; // usually ToolsManager*
    virtual QObject* compilerManagerObject() const = 0; // usually CompilerManager*
    virtual QObject* debuggerObject() const = 0; // usually Debugger*


public slots:
    // lifecycle
    virtual void onInstall() = 0;
    virtual void onInstallFinished() = 0;
    virtual void onUninstall() = 0;

    virtual void onLoad() = 0;
    virtual void onUnload() = 0;

    // main window / application
    virtual void onMainWindowReady() = 0;                  // called when main window finished constructing
    virtual void onMainWindowClosed() = 0;
    virtual void onUpdateStatusbarMessage(const QString &msg) = 0;

    // file / editor events
    virtual void onFileOpened(const QString &filePath) = 0;
    virtual void onFileClosed(const QString &filePath) = 0;
    virtual void onFileSaved(const QString &path, bool inProject) = 0;
    virtual void onEditorRenamed(const QString &oldFilename, const QString &newFilename, bool firstSave) = 0;

    // project events
    virtual void onProjectCreated(const QString &projectPath) = 0;
    virtual void onProjectOpened(const QString &projectPath) = 0;
    virtual void onProjectClosed(const QString &projectPath) = 0;
    virtual void onProjectUnitAdded(const QString &filename) = 0;
    virtual void onProjectUnitRemoved(const QString &filename) = 0;
    virtual void onProjectUnitRenamed(const QString &oldFilename, const QString &newFilename) = 0;
    virtual void onProjectModifyChanged(bool modified) = 0;

    // plugin manager notifications
    virtual void onPluginLoaded(const QString &pluginPath) = 0;
    virtual void onPluginUnloaded(const QString &pluginPath) = 0;

    // compile / run / tools
    virtual void onCompileStarted() = 0;
    virtual void onCompileFinished(const QString &filename, bool isSyntaxCheck) = 0;
    virtual void onCompileErrorOccured(const QString &reason) = 0;
    virtual void onRunStarted() = 0;
    virtual void onRunFinished() = 0;
    virtual void onRunErrorOccured(const QString &reason) = 0;
    virtual void onRunPausingForFinish() = 0;

    // build/project compile specific
    virtual void onProjectCompileStarted() = 0;

    // syntax, parsing and todo
    virtual void onStartParsing() = 0;
    virtual void onParserProgress(const QString &fileName, int total, int current) = 0;
    virtual void onEndParsing(int total, int updateView) = 0;
    virtual void onTodoParseStarted() = 0;
    virtual void onTodoFound(const QString &filename, int lineNo, int ch, const QString &line) = 0;
    virtual void onTodoParseFinished() = 0;

    // debugger related
    virtual void onDebugStarted() = 0;
    virtual void onDebugFinished() = 0;
    virtual void onDebugEvaluateInput() = 0;
    virtual void onDebugMemoryAddressInput() = 0;
    virtual void onDebugCommandInput(const QString &command) = 0;
    virtual void onEvalValueReady(const QString &value) = 0;
    virtual void onLocalsReady(const QStringList &value) = 0;
    virtual void onWatchpointHitted(const QString &var, const QString &oldVal, const QString &newVal) = 0;

    // OJ / problem set events
    virtual void onOJProblemCaseStarted(const QString &id, int current, int total) = 0;
    virtual void onOJProblemCaseFinished(const QString &id, int current, int total) = 0;
    virtual void onOJProblemCaseNewOutputGetted(const QString &id, const QString &line) = 0;
    virtual void onOJProblemCaseResetOutput(const QString &id, const QString &line) = 0;

    // UI / context menu / editor context
    virtual void onEditorContextMenu(const QPoint &pos) = 0;
    virtual void onEditorTabContextMenu(QWidget *tabWidget, const QPoint &pos) = 0;
    virtual void onFilesViewContextMenu(const QPoint &pos) = 0;

    // search / todo / issues
    virtual void onSearchResultDoubleClicked(const QString &path, int line) = 0;
    virtual void onTableIssuesDoubleClicked(const QString &filename, int line) = 0;

    // miscellaneous
    virtual void onApplicationSettingsChanged() = 0;
    virtual void onUpdateToolsOutput(const QString &msg) = 0;

    // small helper hooks for plugins that need to persist state on save/close
    virtual void onSaveAll() = 0;
    virtual void onLoadLastOpens() = 0;
};

} // namespace RedPandaIDE

#endif // REDPANADA_APICORE_H
