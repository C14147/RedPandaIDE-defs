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
#ifndef EDITOR_H
#define EDITOR_H

#include <QObject>
#include <utils.h>
#include <QTabWidget>
#include "qsynedit/qsynedit.h"
#include "colorscheme.h"
#include "common.h"
#include "parser/cppparser.h"
#include "widgets/codecompletionpopup.h"
#include "widgets/headercompletionpopup.h"

#define USER_CODE_IN_INSERT_POS "%INSERT%"
#define USER_CODE_IN_REPL_POS_BEGIN "%REPL_BEGIN%"
#define USER_CODE_IN_REPL_POS_END "%REPL_END%"

class Project;
struct TabStop {
    int x;
    int endX;
    int y;
};

class QTemporaryFile;

using PTabStop = std::shared_ptr<TabStop>;

/**
 * @brief Code editor component based on QSynEdit
 * 
 * This class extends QSynEdit to provide specialized functionality for 
 * source code editing, including syntax highlighting, code completion,
 * bracket matching, and integration with the IDE's features.
 * 
 * The Editor class handles:
 * - Syntax highlighting and color schemes
 * - Code completion and header completion
 * - Bracket and parenthesis matching
 * - Code folding
 * - Bookmarks and breakpoints
 * - Integration with project and compiler systems
 */
class Editor : public QSynedit::QSynEdit
{
    Q_OBJECT
public:
    /**
     * @brief Types of last symbol processed for context-aware operations
     * 
     * Used to determine context for code completion and other language-aware features.
     */
    enum class LastSymbolType {
        Identifier,                    //!< Regular identifier
        ScopeResolutionOperator,       //!< '::' operator
        ObjectMemberOperator,          //!< '.' operator
        PointerMemberOperator,         //!< '->' operator
        PointerToMemberOfObjectOperator, //!< '.*' operator
        PointerToMemberOfPointerOperator, //!< '->*' operator
        MatchingBracket,               //!< Bracket matching in progress
        BracketMatched,                //!< Bracket matching completed
        MatchingParenthesis,           //!< Parenthesis matching in progress
        ParenthesisMatched,            //!< Parenthesis matching completed
        TildeSign,                     //!< '~' character
        AsteriskSign,                  //!< '*' character
        AmpersandSign,                 //!< '&' character
        MatchingAngleQuotation,        //!< Matching angle brackets or quotation marks
        AngleQuotationMatched,         //!< Angle brackets or quotation marks matched
        None                           //!< No specific symbol type
    };

    /**
     * @brief Margin numbers for the editor gutter
     * 
     * Defines the different margin areas in the editor's gutter.
     */
    enum MarginNumber {
        LineNumberMargin = 0,          //!< Line numbers margin
        MarkerMargin = 1,              //!< Marker margin (breakpoints, errors)
        FoldMargin = 2,                //!< Code folding margin
    };

    /**
     * @brief Marker numbers for the editor
     * 
     * Defines different types of markers that can be displayed in the editor.
     */
    enum MarkerNumber { 
        BreakpointMarker,              //!< Breakpoint marker
        ErrorMarker,                   //!< Error marker
        WarningMarker                  //!< Warning marker
    };

    /**
     * @brief Status of quotation parsing
     * 
     * Used to track the state when parsing strings and character literals.
     */
    enum class QuoteStatus {
        NotQuote,                      //!< Not in a quotation
        SingleQuote,                   //!< In a single-quoted string
        SingleQuoteEscape,             //!< In a single-quoted string after escape character
        DoubleQuote,                   //!< In a double-quoted string
        DoubleQuoteEscape,             //!< In a double-quoted string after escape character
        RawString,                     //!< In a raw string literal
        RawStringNoEscape,             //!< In a raw string with no escape sequences
        RawStringEnd                   //!< At the end of a raw string
    };

    /**
     * @brief Purpose of word operations
     * 
     * Defines the context for word-based operations like completion and evaluation.
     */
    enum class WordPurpose {
        wpCompletion, // walk backwards over words, array, functions, parents, no forward movement
        wpEvaluation, // walk backwards over words, array, functions, parents, forwards over words, array
        wpHeaderCompletion, // walk backwards over path
        wpHeaderCompletionStart, // walk backwards over path, including start '<' or '"'
        wpDirective, // preprocessor
        wpJavadoc, //javadoc
        wpInformation, // walk backwards over words, array, functions, parents, forwards over words
        wpATTASMKeywords,
        wpKeywords
    };

    /**
     * @brief Types of tooltips that can be displayed
     * 
     * Defines different types of information that can be shown in tooltips.
     */
    enum class TipType {
      Include, // cursor hovers above include
      Identifier, // cursor hovers above identifier
      Selection, // cursor hovers above selection
      Keyword,
      Number,
      None, // mouseover not allowed
      Error //Cursor hovers above error line/item;
    };

    struct SyntaxIssue {
        int startChar;
        int endChar;
        CompileIssueType issueType;
        QString token;
        QString hint;
    };

    using PSyntaxIssue = std::shared_ptr<SyntaxIssue>;
    using SyntaxIssueList = QVector<PSyntaxIssue>;
    using PSyntaxIssueList = std::shared_ptr<SyntaxIssueList>;

    explicit Editor(QWidget* parent);

    explicit Editor(QWidget* parent, const QString& filename, const QByteArray& encoding,
                    FileType fileType, const QString& contextFile, Project* pProject, bool isNew,
                    QTabWidget* parentPageControl);

    ~Editor();

    // tell the compiler to prohibit copy/moving editor objects ( we should only use pointers to the
    // editor object)
    Editor(const Editor&) = delete;
    Editor(const Editor&&) = delete;
    Editor& operator=(const Editor&) = delete;
    Editor& operator=(const Editor&&) = delete;

    const QByteArray& encodingOption() const noexcept;
    void setEncodingOption(const QByteArray& encoding) noexcept;
    const QByteArray& fileEncoding() const noexcept;
    void convertToEncoding(const QByteArray& encoding);
    const QString& filename() const noexcept;

    bool inProject() const noexcept;
    bool isNew() const noexcept;

    void loadFile(QString filename = "");
    void saveFile(QString filename);
    bool save(bool force = false, bool reparse = true);
    bool saveAs(const QString& name = "", bool fromProject = false);
    void setFilename(const QString& newName);
    void activate(bool focus = true);

    QTabWidget* pageControl() noexcept;
    void setPageControl(QTabWidget* newPageControl);

    void updateCaption(const QString& newCaption = QString());
    void applySettings();
    void applyColorScheme(const QString& schemeName);
    void setAutoIndent(bool indent);
    bool autoIndent();

    void copyToClipboard() override;
    void cutToClipboard() override;
    void copyAsHTML();

    void setCaretPosition(int line, int aChar);
    void setCaretPositionAndActivate(int line, int aChar);

    void addSyntaxIssues(int line, int startChar, int endChar, CompileIssueType errorType,
                         const QString& hint);
    void clearSyntaxIssues();
    void gotoNextSyntaxIssue();
    void gotoPrevSyntaxIssue();
    bool hasPrevSyntaxIssue() const;
    bool hasNextSyntaxIssue() const;
    PSyntaxIssueList getSyntaxIssuesAtLine(int line);
    PSyntaxIssue getSyntaxIssueAtPosition(const QSynedit::BufferCoord& pos);
    int gutterClickedLine() const;
    void toggleBreakpoint(int line);
    void clearBreakpoints();
    bool hasBreakpoint(int line);
    void toggleBookmark(int line);
    void addBookmark(int line);
    void removeBookmark(int line);
    bool hasBookmark(int line) const;
    void clearBookmarks();
    void removeBreakpointFocus();
    void modifyBreakpointProperty(int line);
    void setActiveBreakpointFocus(int Line, bool setFocus = true);
    QString getPreviousWordAtPositionForSuggestion(const QSynedit::BufferCoord& p,
                                                   QSynedit::TokenType& tokenType);
    QString getPreviousWordAtPositionForCompleteFunctionDefinition(const QSynedit::BufferCoord& p);
    void reformat(bool doReparse = true);
    void replaceContent(const QString& newContent, bool doReparse = true);
    void checkSyntaxInBack();
    void gotoDeclaration(const QSynedit::BufferCoord& pos);
    void gotoDefinition(const QSynedit::BufferCoord& pos);
    void reparse(bool resetParser);
    void reparseTodo();
    void insertString(const QString& value, bool moveCursor);
    void insertCodeSnippet(const QString& code);
    void print();
    void exportAsRTF(const QString& rtfFilename);
    void exportAsHTML(const QString& htmlFilename);
    void resetBreakpoints();
    bool notParsed();
    void insertLine();
    void breakLine();
    void deleteWord();
    void deleteToWordStart();
    void deleteToWordEnd();
    void deleteLine();
    void duplicateLine();
    void deleteToEOL();
    void deleteToBOL();
    void gotoBlockStart();
    void gotoBlockEnd();
    void showCodeCompletion();

    QStringList getOwnerExpressionAndMemberAtPositionForCompletion(const QSynedit::BufferCoord& pos,
                                                                   QString& memberOperator,
                                                                   QStringList& memberExpression);
    QString getWordForCompletionSearch(const QSynedit::BufferCoord& pos, bool permitTilde);
    QStringList getExpressionAtPosition(const QSynedit::BufferCoord& pos);
    void resetBookmarks();

    const PCppParser& parser() const;

    void tab() override;

    static PCppParser sharedParser(ParserLanguage language);

    void pageUp()
    {
        processCommand(QSynedit::EditCommand::PageUp);
    }
    void pageDown()
    {
        processCommand(QSynedit::EditCommand::PageDown);
    }
    void gotoLineStart()
    {
        processCommand(QSynedit::EditCommand::LineStart);
    }
    void gotoLineEnd()
    {
        processCommand(QSynedit::EditCommand::LineEnd);
    }
    void gotoPageStart()
    {
        processCommand(QSynedit::EditCommand::PageTop);
    }
    void gotoPageEnd()
    {
        processCommand(QSynedit::EditCommand::PageBottom);
    }
    void gotoFileStart()
    {
        processCommand(QSynedit::EditCommand::FileStart);
    }
    void gotoFileEnd()
    {
        processCommand(QSynedit::EditCommand::FileEnd);
    }
    void toggleReadonly();

    void pageUpAndSelect()
    {
        processCommand(QSynedit::EditCommand::SelPageUp);
    }
    void pageDownAndSelect()
    {
        processCommand(QSynedit::EditCommand::SelPageDown);
    }
    void selectToLineStart()
    {
        processCommand(QSynedit::EditCommand::SelLineStart);
    }
    void selectToLineEnd()
    {
        processCommand(QSynedit::EditCommand::SelLineEnd);
    }
    void selectToPageStart()
    {
        processCommand(QSynedit::EditCommand::SelPageTop);
    }
    void selectToPageEnd()
    {
        processCommand(QSynedit::EditCommand::SelPageBottom);
    }
    void selectToFileStart()
    {
        processCommand(QSynedit::EditCommand::SelFileStart);
    }
    void selectToFileEnd()
    {
        processCommand(QSynedit::EditCommand::SelFileEnd);
    }

    bool inTab()
    {
        return mParentPageControl != nullptr;
    }

signals:
    void renamed(const QString& oldName, const QString& newName, bool firstSave);
    void fileSaved(const QString& filename, bool inProject);
private slots:
    void onStatusChanged(QSynedit::StatusChanges changes);
    void onGutterClicked(Qt::MouseButton button, int x, int y, int line);
    void onTipEvalValueReady(const QString& value);
    void onLinesDeleted(int first, int count);
    void onLinesInserted(int first, int count);
    void onFunctionTipsTimer();
    void onAutoBackupTimer();
    void onTooltipTimer();
    void onEndParsing();

private:
    void loadContent(const QString& filename);
    void resolveAutoDetectEncodingOption();
    bool isBraceChar(QChar ch);
    bool shouldOpenInReadonly();
    QChar getCurrentChar();
    bool handleSymbolCompletion(QChar key);
    bool handleParentheseCompletion();
    bool handleParentheseSkip();
    bool handleBracketCompletion();
    bool handleBracketSkip();
    bool handleMultilineCommentCompletion();
    bool handleBraceCompletion();
    bool handleBraceSkip();
    bool handleSemiColonSkip();
    bool handlePeriodSkip();
    bool handleSingleQuoteCompletion();
    bool handleDoubleQuoteCompletion();
    bool handleGlobalIncludeCompletion();
    bool handleGlobalIncludeSkip();

    bool handleCodeCompletion(QChar key);
    void initParser();
    ParserLanguage calcParserLanguage();
    void undoSymbolCompletion(int pos);
    QuoteStatus getQuoteStatus();

    void showCompletion(const QString& preWord, bool autoComplete, CodeCompletionType type);
    void showHeaderCompletion(bool autoComplete, bool forceShow = false);

    void initAutoBackup();
    void saveAutoBackup();
    void cleanAutoBackup();

    bool testInFunc(const QSynedit::BufferCoord& pos);

    void completionInsert(bool appendFunc = false);

    void headerCompletionInsert();

    bool onCompletionKeyPressed(QKeyEvent* event);
    bool onHeaderCompletionKeyPressed(QKeyEvent* event);
    bool onCompletionInputMethod(QInputMethodEvent* event);

    TipType getTipType(QPoint point, QSynedit::BufferCoord& pos);
    void cancelHint();
    QString getHeaderFileHint(const QString& s, bool fromNext);
    QString getParserHint(const QStringList& expression, const QSynedit::BufferCoord& p);
    void showDebugHint(const QString& s,int line);
    QString getErrorHint(const PSyntaxIssue& issue);
    QString getHintForFunction(const PStatement& statement, const QString& filename, int line);

    void updateFunctionTip(bool showTip);
    void clearUserCodeInTabStops();
    void popUserCodeInTabStops();
    void onExportedFormatToken(QSynedit::PSyntaxer syntaxer, int Line, int column,
                               const QString& token, QSynedit::PTokenAttribute& attr);
    void onScrollBarValueChanged();
    void updateHoverLink(int line);
    void cancelHoverLink();

    QSize calcCompletionPopupSize();
    void doSetFileType(FileType newFileType);

    Editor* openFileInContext(const QString& filename);
    bool needReparse();

    PStatement constructorToClass(PStatement constuctorStatement, const QSynedit::BufferCoord& p);

private:
    bool mInited;
    QDateTime mBackupTime;
    QFile* mBackupFile;
    QByteArray mEncodingOption; // the encoding type set by the user
    QByteArray mFileEncoding;   // the real encoding of the file (auto detected)
    QString mFilename;
    QTabWidget* mParentPageControl;
    Project* mProject;
    bool mIsNew;
    QMap<int, PSyntaxIssueList> mSyntaxIssues;
    QColor mSyntaxErrorColor;
    QColor mSyntaxWarningColor;
    QColor mActiveBreakpointForegroundColor;
    QColor mActiveBreakpointBackgroundColor;
    QColor mBreakpointForegroundColor;
    QColor mBreakpointBackgroundColor;
    QColor mCurrentHighlighWordForeground;
    QColor mCurrentHighlighWordBackground;
    int mSyntaxErrorLine;
    int mLineCount;
    int mGutterClickedLine;
    QSet<int> mBreakpointLines;
    QSet<int> mBookmarkLines;
    int mActiveBreakpointLine;
    PCppParser mParser;
    CodeCompletionPopup* mCompletionPopup;
    HeaderCompletionPopup* mHeaderCompletionPopup;
    bool mUseCppSyntax;
    QString mCurrentWord;
    QString mCurrentDebugTipWord;
    TipType mCurrentTipType;
    QString mOldHighlightedWord;
    QString mCurrentHighlightedWord;
    QDateTime mHideTime;

    bool mSaving;
    bool mCurrentLineModified;
    int mXOffsetSince;
    int mTabStopBegin;
    int mTabStopEnd;
    int mTabStopY;
    bool mCanAutoSave;
    QString mLineBeforeTabStop;
    QString mLineAfterTabStop;
    QList<PTabStop> mUserCodeInTabStops;
    QSynedit::BufferCoord mHighlightCharPos1;
    QSynedit::BufferCoord mHighlightCharPos2;
    std::shared_ptr<QHash<StatementKind, std::shared_ptr<ColorSchemeItem>>> mStatementColors;
    QTimer mFunctionTipTimer;
    QTimer mAutoBackupTimer;
    QTimer mTooltipTimer;
    int mHoverModifiedLine;
    int mWheelAccumulatedDelta;
    bool mCtrlClicking;
    FileType mFileType;
    QString mContextFile;

    QMap<QString, StatementKind> mIdentCache;
    qint64 mLastFocusOutTime;

    static QHash<ParserLanguage, std::weak_ptr<CppParser>> mSharedParsers;

    // SynEdit interface
protected:
    void onGutterPaint(QPainter& painter, int aLine, int X, int Y) override;
    void onGetEditingAreas(int Line, QSynedit::EditingAreaList& areaList) override;
    bool onGetSpecialLineColors(int Line, QColor& foreground, QColor& backgroundColor) override;
    void onPreparePaintHighlightToken(int line, int aChar, const QString& token,
                                      QSynedit::PTokenAttribute attr, QSynedit::FontStyles& style,
                                      QColor& foreground, QColor& background) override;

    // QObject interface
public:
    bool event(QEvent* event) override;

    // QWidget interface
    void setProject(Project* pProject);

    bool useCppSyntax() const;
    void setUseCppSyntax(bool newUseCppSyntax);

    const std::shared_ptr<QHash<StatementKind, std::shared_ptr<ColorSchemeItem>>>&
    statementColors() const;
    void setStatementColors(
        const std::shared_ptr<QHash<StatementKind, std::shared_ptr<ColorSchemeItem>>>&
            newStatementColors);

    const QDateTime& hideTime() const;
    void setHideTime(const QDateTime& newHideTime);

    bool canAutoSave() const;
    void setCanAutoSave(bool newCanAutoSave);

    quint64 lastFocusOutTime() const;

    FileType fileType() const;
    void setFileType(FileType newFileType);
    const QString& contextFile() const;
    void setContextFile(const QString& newContextFile);

protected:
    // QWidget interface
    void wheelEvent(QWheelEvent* event) override;
    void focusInEvent(QFocusEvent* event) override;
    void focusOutEvent(QFocusEvent* event) override;
    void keyPressEvent(QKeyEvent* event) override;
    void keyReleaseEvent(QKeyEvent* event) override;
    void mouseMoveEvent(QMouseEvent* event) override;
    void mouseReleaseEvent(QMouseEvent* event) override;
    void mousePressEvent(QMouseEvent* event) override;
    void inputMethodEvent(QInputMethodEvent*) override;
    void closeEvent(QCloseEvent* event) override;
    void showEvent(QShowEvent* event) override;
    void hideEvent(QHideEvent* event) override;
    void resizeEvent(QResizeEvent* event) Q_DECL_OVERRIDE;
};

QString getWordAtPosition(QSynedit::QSynEdit* editor, const QSynedit::BufferCoord& p,
                          QSynedit::BufferCoord& pWordBegin, QSynedit::BufferCoord& pWordEnd,
                          Editor::WordPurpose purpose);

#endif // EDITOR_H
