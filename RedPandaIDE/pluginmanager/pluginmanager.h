/*
 * @file pluginmanager.h
 *
 * meta data file ({PluginName}.json) template:
 * {
 *  "pluginName": "Plugin API",
 *  "pluginVersion": "1.0.0",
 *  "introduction": "the core api for all plugin",
 *  "ID" : "com.redpandaide.apicore.1.0.0"
 * }
 */

#ifndef PLUGINMANAGER_H
#define PLUGINMANAGER_H

#include <QObject>
#include <QList>
#include <QDir>
#include <QStringList>
#include <QPluginLoader>
#include <QAction>
#include <QWidget>

#include "settingsdialog/settingswidget.h"
#include "../utils.h"

class IRedPandaPlugin;
class MainWindow;

/**
 * @brief Manages IDE plugins and extensions
 * 
 * The PluginManager class handles the loading, unloading, and management of
 * plugins that extend the IDE's functionality. It supports both dynamic
 * loading of plugin libraries and provides interfaces for plugins to
 * integrate with the IDE.
 * 
 * Plugin features:
 * - Load plugins from a specified directory
 * - Load individual plugins by path
 * - Unload and reload plugins
 * - Manage plugin lifecycle
 * - Provide access to loaded plugin instances
 * 
 * Plugins are based on Qt's plugin system and must implement the IRedPandaPlugin
 * interface. Each plugin should also have a metadata JSON file with information
 * about the plugin name, version, and unique ID.
 */
class PluginManager : public QObject
{
    Q_OBJECT
public:
    /**
     * @brief Construct a new PluginManager object
     * 
     * @param parent Parent QObject
     */
    explicit PluginManager(QObject* parent = nullptr);
    
    /**
     * @brief Destroy the PluginManager object
     * 
     * Cleans up resources and unloads all loaded plugins.
     */
    ~PluginManager();

    /**
     * @brief Load all plugins from a folder
     * 
     * Loads all plugins found in the specified folder. The search is
     * non-recursive and only checks the immediate contents of the folder.
     * 
     * @param folder Path to the folder containing plugins
     * @param showUI Whether to show UI during plugin loading
     * @return QMap<QString, QString> Map of plugin paths to error messages (empty if successful)
     */
    QMap<QString, QString> loadPlugins(const QString& folder, const bool showUI = false);

    /**
     * @brief Load a single plugin by absolute path
     * 
     * @param path Absolute path to the plugin library file
     * @return QString Error message if loading failed, empty string if successful
     */
    QString loadPlugin(const QString& path);

    /**
     * @brief Unload a previously loaded plugin
     * 
     * @param path Absolute path of the plugin to unload
     * @return true If plugin was successfully unloaded
     * @return false If plugin unloading failed
     */
    bool unloadPlugin(const QString& path);

    /**
     * @brief Reload a plugin (unload then load)
     * 
     * @param path Absolute path of the plugin to reload
     * @return true If plugin was successfully reloaded
     * @return false If plugin reloading failed
     */
    bool reloadPlugin(const QString& path);

    /**
     * @brief Get the list of loaded plugin instances
     * 
     * @return const QList<IRedPandaPlugin*>& List of loaded plugin instances
     */
    const QList<IRedPandaPlugin*>& plugins() const;

    /**
     * @brief Get the list of plugin file paths found in a folder
     * 
     * @param folder Path to the folder containing plugins
     * @return QStringList List of plugin file paths
     */
    QStringList availablePlugins(const QString& folder) const;

    /**
     * @brief Get metadata parsed from plugin json file for a loaded plugin
     * 
     * @param path Absolute path of the plugin
     * @return QVariantMap Metadata map
     */
    QVariantMap pluginMetadata(const QString& path) const;

    /**
     * @brief Process plugin dependencies
     * 
     * Checks and processes dependencies for loaded plugins.
     * 
     * @return size_t Number of processed dependencies
     */
    size_t processDepends() noexcept;

    /**
     * @brief Find a plugin by its unique ID
     * 
     * @param pluginID Unique ID of the plugin
     * @return IRedPandaPlugin* Pointer to the plugin instance, or nullptr if not found
     */
    IRedPandaPlugin* findPluginByID(const QString& pluginID) noexcept;

    /**
     * @brief Find a plugin by its name
     * 
     * @param pluginName Name of the plugin
     * @return IRedPandaPlugin* Pointer to the plugin instance, or nullptr if not found
     */
    IRedPandaPlugin* findPluginByName(const QString& pluginName) noexcept;

signals:
    /**
     * @brief Emitted when a plugin is loaded
     * 
     * @param plugin Pointer to the loaded plugin instance
     * @param path Absolute path of the plugin
     */
    void pluginLoaded(IRedPandaPlugin* plugin, const QString& path);

    /**
     * @brief Emitted when a plugin is unloaded
     * 
     * @param plugin Pointer to the unloaded plugin instance
     * @param path Absolute path of the plugin
     */
    void pluginUnloaded(IRedPandaPlugin* plugin, const QString& path);

public:
    struct PluginRecord {
        QString path;
        QPluginLoader* loader{nullptr};
        IRedPandaPlugin* plugin{nullptr};
        QList<QAction*> toolActions;
        QList<QWidget*> explorerTabs;
        QList<QWidget*> messagesTabs;
        QList<class SettingsWidget*> settingsWidgets;
        QVariantMap metadata; // parsed from plugin_name.json if present
    };

    QList<PluginRecord> mRecords;
    QSet<QString> unprocessedDepends;
};

#endif // PLUGINMANAGER_H
