#ifndef REDPANDA_API_V1_H
#define REDPANDA_API_V1_H

#include "apicore.h"
#include "RedPandaIDE/pluginmanager/plugininterface.h"
#include "RedPandaIDE/mainwindow.h"
#include "RedPandaIDE/settings.h"
#include "RedPandaIDE/toolsmanager.h"
#include "RedPandaIDE/compiler/compilermanager.h"
#include "RedPandaIDE/debugger/debugger.h"
#include <QAction>
#include <QToolBar>
#include <QMenu>
#include <QWidget>
#include <QList>
#include <QPair>
#include <QProcess>
#include <QMetaObject>

namespace RedPandaIDE {
class MainWindow;
class PluginManager;
class SettingsWidget;

namespace API {
namespace v1 {

class PluginAPI : public RedPandaIDE::ApiCore, public IRedPandaPlugin
{
public:
    explicit PluginAPI(QObject *parent = nullptr)
        : ApiCore(parent), m_mainWindow(nullptr), m_pluginManager(nullptr)
    {}

    void attachContext(MainWindow* mainWindow, PluginManager* pm) {
        m_mainWindow = mainWindow;
        m_pluginManager = pm;
    }

    // IRedPandaPlugin defaults
    QList<SettingsWidget*> settingsWidgets() override { return m_settingsWidgets; }
    QList<QAction*> toolActions() override { return m_toolActions; }
    QList<QPair<QString, QWidget*>> explorerTabs() override { return m_explorerTabs; }
    QList<QPair<QString, QWidget*>> messagesTabs() override { return m_messagesTabs; }

    // allow plugin to override when needed
    void initialize(MainWindow *mainWindow) override { Q_UNUSED(mainWindow); }

    // ApiCore lifecycle hooks (defaults)
    void onInstall() override {}
    void onInstallFinished() override {}
    void onUninstall() override {}
    void onLoad() override { if (m_mainWindow) initialize(m_mainWindow); }
    void onUnload() override {}

    void onMainWindowReady() override {}
    void onMainWindowClosed() override {}

    void onUpdateStatusbarMessage(const QString &msg) override {
        if (m_mainWindow) m_mainWindow->updateStatusbarMessage(msg);
    }

    // File/editor events
    void onFileOpened(const QString &filePath) override { Q_UNUSED(filePath); }
    void onFileClosed(const QString &filePath) override { Q_UNUSED(filePath); }
    void onFileSaved(const QString &path, bool inProject) override { Q_UNUSED(path); Q_UNUSED(inProject); }
    void onEditorRenamed(const QString &oldFilename, const QString &newFilename, bool firstSave) override { Q_UNUSED(oldFilename); Q_UNUSED(newFilename); Q_UNUSED(firstSave); }

    // Project events
    void onProjectCreated(const QString &projectPath) override { Q_UNUSED(projectPath); }
    void onProjectOpened(const QString &projectPath) override { Q_UNUSED(projectPath); }
    void onProjectClosed(const QString &projectPath) override { Q_UNUSED(projectPath); }
    void onProjectUnitAdded(const QString &filename) override { Q_UNUSED(filename); }
    void onProjectUnitRemoved(const QString &filename) override { Q_UNUSED(filename); }
    void onProjectUnitRenamed(const QString &oldFilename, const QString &newFilename) override { Q_UNUSED(oldFilename); Q_UNUSED(newFilename); }
    void onProjectModifyChanged(bool modified) override { Q_UNUSED(modified); }

    // Plugin manager
    void onPluginLoaded(const QString &pluginPath) override { Q_UNUSED(pluginPath); }
    void onPluginUnloaded(const QString &pluginPath) override { Q_UNUSED(pluginPath); }

    // Compile / run
    void onCompileStarted() override {}
    void onCompileFinished(const QString &filename, bool isSyntaxCheck) override { Q_UNUSED(filename); Q_UNUSED(isSyntaxCheck); }
    void onCompileErrorOccured(const QString &reason) override { Q_UNUSED(reason); }
    void onRunStarted() override {}
    void onRunFinished() override {}
    void onRunErrorOccured(const QString &reason) override { Q_UNUSED(reason); }
    void onRunPausingForFinish() override {}
    void onProjectCompileStarted() override {}

    // Parsing / todo
    void onStartParsing() override {}
    void onParserProgress(const QString &fileName, int total, int current) override { Q_UNUSED(fileName); Q_UNUSED(total); Q_UNUSED(current); }
    void onEndParsing(int total, int updateView) override { Q_UNUSED(total); Q_UNUSED(updateView); }
    void onTodoParseStarted() override {}
    void onTodoFound(const QString &filename, int lineNo, int ch, const QString &line) override { Q_UNUSED(filename); Q_UNUSED(lineNo); Q_UNUSED(ch); Q_UNUSED(line); }
    void onTodoParseFinished() override {}

    // Debugger
    void onDebugStarted() override {}
    void onDebugFinished() override {}
    void onDebugEvaluateInput() override {}
    void onDebugMemoryAddressInput() override {}
    void onDebugCommandInput(const QString &command) override { Q_UNUSED(command); }
    void onEvalValueReady(const QString &value) override { Q_UNUSED(value); }
    void onLocalsReady(const QStringList &value) override { Q_UNUSED(value); }
    void onWatchpointHitted(const QString &var, const QString &oldVal, const QString &newVal) override { Q_UNUSED(var); Q_UNUSED(oldVal); Q_UNUSED(newVal); }

    // OJ
    void onOJProblemCaseStarted(const QString &id, int current, int total) override { Q_UNUSED(id); Q_UNUSED(current); Q_UNUSED(total); }
    void onOJProblemCaseFinished(const QString &id, int current, int total) override { Q_UNUSED(id); Q_UNUSED(current); Q_UNUSED(total); }
    void onOJProblemCaseNewOutputGetted(const QString &id, const QString &line) override { Q_UNUSED(id); Q_UNUSED(line); }
    void onOJProblemCaseResetOutput(const QString &id, const QString &line) override { Q_UNUSED(id); Q_UNUSED(line); }

    // UI
    void onEditorContextMenu(const QPoint &pos) override { Q_UNUSED(pos); }
    void onEditorTabContextMenu(QWidget *tabWidget, const QPoint &pos) override { Q_UNUSED(tabWidget); Q_UNUSED(pos); }
    void onFilesViewContextMenu(const QPoint &pos) override { Q_UNUSED(pos); }

    void onSearchResultDoubleClicked(const QString &path, int line) override { Q_UNUSED(path); Q_UNUSED(line); }
    void onTableIssuesDoubleClicked(const QString &filename, int line) override { Q_UNUSED(filename); Q_UNUSED(line); }

    void onApplicationSettingsChanged() override {}
    void onUpdateToolsOutput(const QString &msg) override { Q_UNUSED(msg); }
    void onSaveAll() override {}
    void onLoadLastOpens() override {}

    // ----------------- Host-facing helper functions --------------
    void registerSettingsWidget(SettingsWidget* w) { if (w && !m_settingsWidgets.contains(w)) m_settingsWidgets.append(w); }
    void unregisterSettingsWidget(SettingsWidget* w) { m_settingsWidgets.removeAll(w); }

    QAction* createGlobalAction(const QString &text,
                                const QString &objectName = QString(),
                                const QString &groupName = QString(),
                                const QKeySequence &shortcut = QKeySequence()) override
    {
        QAction* a = new QAction(text, m_mainWindow ? reinterpret_cast<QObject*>(m_mainWindow) : nullptr);
        if (!objectName.isEmpty()) a->setObjectName(objectName);
        if (!shortcut.isEmpty()) a->setShortcut(shortcut);
        Q_UNUSED(groupName);
        addToolAction(a);
        return a;
    }

    void addToolAction(QAction* a) override { if (a && !m_toolActions.contains(a)) m_toolActions.append(a); }
    void removeToolAction(QAction* a) override { m_toolActions.removeAll(a); }

    QToolBar* createToolBar(const QString &title) override {
        if (!m_mainWindow) return nullptr;
        QToolBar* tb = new QToolBar(title, reinterpret_cast<QWidget*>(m_mainWindow));
        // add toolbar to main window immediately
        m_mainWindow->addToolBar(tb);
        return tb;
    }

    QMenu* createMenu(const QString &title, QMenu* parent = nullptr) override {
        QMenu* m = new QMenu(title, parent);
        // if possible, add to main window menu bar
        if (m_mainWindow && parent == nullptr) {
            QMenuBar *mb = m_mainWindow->menuBar();
            if (mb) mb->addMenu(m);
        }
        return m;
    }
    void addMenuAction(QMenu* menu, QAction* action) override { if (menu && action) menu->addAction(action); }

    void addExplorerTab(const QString &title, QWidget* widget, int /*order*/ = -1) override { m_explorerTabs.append(qMakePair(title, widget)); }
    void removeExplorerTab(QWidget* widget) override { for (int i=m_explorerTabs.count()-1;i>=0;--i) if (m_explorerTabs[i].second==widget) m_explorerTabs.removeAt(i); }
    void addMessagesTab(const QString &title, QWidget* widget, int /*order*/ = -1) override { m_messagesTabs.append(qMakePair(title, widget)); }
    void removeMessagesTab(QWidget* widget) override { for (int i=m_messagesTabs.count()-1;i>=0;--i) if (m_messagesTabs[i].second==widget) m_messagesTabs.removeAt(i); }

    void openFile(const QString &filename, bool activate = true) override { if (m_mainWindow) m_mainWindow->openFiles(QStringList(filename)); Q_UNUSED(activate); }
    void openProject(const QString &filename, bool openFiles = true) override { if (m_mainWindow) m_mainWindow->openProject(filename, openFiles); }
    void closeProject() override {
        if (!m_mainWindow) return;
        // call the slot in the main window via invokeMethod (slot is invokable)
        QMetaObject::invokeMethod(m_mainWindow, "on_actionClose_Project_triggered", Qt::QueuedConnection);
    }

    void appendToolsOutput(const QString &msg) override { if (m_mainWindow) m_mainWindow->logToolsOutput(msg); }
    void clearToolsOutput() override { if (m_mainWindow) m_mainWindow->clearToolsOutput(); }

    bool runExternalTool(const QString &program, const QStringList &arguments, const QString &workingDirectory = QString()) override {
        Q_UNUSED(workingDirectory);
        QProcess *p = new QProcess(reinterpret_cast<QObject*>(m_mainWindow));
        p->start(program, arguments);
        return p->waitForStarted(1000);
    }

    QObject* mainWindowObject() const override { return reinterpret_cast<QObject*>(m_mainWindow); }
    QObject* pluginManagerObject() const override { return reinterpret_cast<QObject*>(m_pluginManager); }
    // Settings is not a QObject, return nullptr here but provide typed accessor below
    QObject* settingsObject() const override { return nullptr; }
    QObject* toolsManagerObject() const override { return m_mainWindow ? reinterpret_cast<QObject*>(m_mainWindow->toolsManager()) : nullptr; }
    QObject* compilerManagerObject() const override { return m_mainWindow ? reinterpret_cast<QObject*>(m_mainWindow->compilerManager()) : nullptr; }
    QObject* debuggerObject() const override { return m_mainWindow ? reinterpret_cast<QObject*>(m_mainWindow->debugger()) : nullptr; }

    // Typed accessors (concrete project types)
    MainWindow* mainWindow() const { return m_mainWindow; }
    PluginManager* pluginManager() const { return m_pluginManager; }
    Settings* settings() const { return ::pSettings; }
    ToolsManager* toolsManager() const { return m_mainWindow ? m_mainWindow->toolsManager() : nullptr; }
    CompilerManager* compilerManager() const { return m_mainWindow ? m_mainWindow->compilerManager() : nullptr; }
    Debugger* debugger() const { return m_mainWindow ? m_mainWindow->debugger() : nullptr; }

private:
    MainWindow* m_mainWindow;
    PluginManager* m_pluginManager;
    QList<SettingsWidget*> m_settingsWidgets;
    QList<QAction*> m_toolActions;
    QList<QPair<QString, QWidget*>> m_explorerTabs;
    QList<QPair<QString, QWidget*>> m_messagesTabs;
};

} // namespace v2
} // namespace API
} // namespace RedPandaIDE

#endif // REDPANDA_API_V1_H
