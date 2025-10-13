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
#ifndef COMPILER_H
#define COMPILER_H

#include <QThread>
#include "settings.h"
#include "../common.h"
#include "../parser/cppparser.h"

class Project;

/**
 * @brief Handles the compilation process for source files
 * 
 * The Compiler class manages the compilation of individual source files or
 * entire projects. It runs in a separate thread to prevent blocking the UI
 * and provides real-time feedback on the compilation process.
 * 
 * Key features:
 * - Supports both full compilation and syntax checking only
 * - Emits signals for various compilation events
 * - Handles compilation errors and issues
 * - Integrates with the project system for project-wide compilation
 */
class Compiler : public QThread
{
    Q_OBJECT
public:
    /**
     * @brief Types of compilation targets
     * 
     * Defines what is being compiled - a single file, a project, or standard input.
     */
    enum class TargetType { 
        Invalid,      //!< Invalid target
        cttNone,      //!< No target
        File,         //!< Single file target
        Project,      //!< Project target
        StdIn         //!< Standard input target
    };
    
    /**
     * @brief Construct a new Compiler object for a specific file
     * 
     * @param filename Path to the file to compile
     * @param onlyCheckSyntax If true, only perform syntax checking without generating output
     */
    Compiler(const QString& filename, bool onlyCheckSyntax);
    
    /**
     * @brief Copy constructor (deleted)
     * 
     * Prevent copying of Compiler objects to avoid resource conflicts.
     */
    Compiler(const Compiler&) = delete;
    
    /**
     * @brief Assignment operator (deleted)
     * 
     * Prevent assignment of Compiler objects to avoid resource conflicts.
     */
    Compiler& operator=(const Compiler&) = delete;

    /**
     * @brief Check if this is a rebuild operation
     * 
     * @return true If this is a rebuild (clean and recompile)
     * @return false If this is an incremental compilation
     */
    bool isRebuild() const;
    
    /**
     * @brief Set whether this should be a rebuild operation
     * 
     * @param isRebuild True for rebuild, false for incremental compilation
     */
    void setRebuild(bool isRebuild);

    /**
     * @brief Get the project associated with this compilation
     * 
     * @return const std::shared_ptr<Project>& Shared pointer to the project
     */
    const std::shared_ptr<Project>& project() const;
    
    /**
     * @brief Set the project for this compilation
     * 
     * @param newProject Shared pointer to the project
     */
    void setProject(const std::shared_ptr<Project>& newProject);

    /**
     * @brief Get the parser used by this compiler
     * 
     * @return PCppParser Shared pointer to the C++ parser
     */
    PCppParser parser() const;

signals:
    /**
     * @brief Signal emitted when compilation starts
     */
    void compileStarted();
    
    /**
     * @brief Signal emitted when compilation finishes successfully
     * 
     * @param filename Name of the file that was compiled
     */
    void compileFinished(const QString& filename);
    
    /**
     * @brief Signal emitted when compilation produces output
     * 
     * @param msg Compilation output message
     */
    void compileOutput(const QString& msg);
    
    /**
     * @brief Signal emitted when a compilation issue is found
     * 
     * @param issue Details of the compilation issue
     */
    void compileIssue(PCompileIssue issue);
    
    /**
     * @brief Signal emitted when a compilation error occurs
     * 
     * @param reason Description of the error
     */
    void compileErrorOccured(const QString& reason);
    
public slots:
    /**
     * @brief Slot to stop the compilation process
     */
    void stopCompile();

protected:
    void run() override;
    void processOutput(QString& line);
    void getParserForFile(const QString& filename);
    virtual QString getFileNameFromOutputLine(QString& line);
    virtual int getLineNumberFromOutputLine(QString& line);
    virtual int getColunmnFromOutputLine(QString& line);
    virtual CompileIssueType getIssueTypeFromOutputLine(QString& line);

protected:
    virtual Settings::PCompilerSet compilerSet();
    virtual bool prepareForCompile() = 0;
    virtual QByteArray pipedText();
    virtual bool prepareForRebuild() = 0;
    virtual bool beforeRunExtraCommand(int idx);
    virtual QStringList getCharsetArgument(const QByteArray& encoding, FileType fileType,
                                           bool onlyCheckSyntax);
    virtual QStringList getCppGccImportStdSources(bool checkSyntax);
    virtual QStringList getCCompileArguments(bool checkSyntax);
    virtual QStringList getCppCompileArguments(bool checkSyntax);
    virtual QStringList getCIncludeArguments();
    virtual QStringList getProjectIncludeArguments();
    virtual QStringList getCppIncludeArguments();
    virtual QStringList getLibraryArguments(FileType fileType);
    virtual QStringList parseFileIncludesForAutolink(const QString& filename,
                                                     QSet<QString>& parsedFiles);
    virtual bool parseForceUTF8ForAutolink(const QString& filename, QSet<QString>& parsedFiles);
    void log(const QString& msg);
    void error(const QString& msg);
    void runCommand(const QString& cmd, const QStringList& arguments, const QString& workingDir,
                    const QByteArray& inputText = QByteArray(),
                    const QString& outputFile = QString());
    QString escapeCommandForLog(const QString& cmd, const QStringList& arguments);

protected:
    bool mOnlyCheckSyntax;
    QString mCompiler;
    QStringList mArguments;
    QList<QString> mExtraCompilersList;
    QList<QStringList> mExtraArgumentsList;
    QList<QString> mExtraOutputFilesList;
    QString mOutputFile;
    int mErrorCount;
    int mWarningCount;
    PCompileIssue mLastIssue;
    QString mFilename;
    QString mDirectory;
    bool mRebuild;
    std::shared_ptr<Project> mProject;
    bool mSetLANG;
    PCppParser mParserForFile;
    bool mForceEnglishOutput;

private:
    bool mStop;
};

#endif // COMPILER_H
