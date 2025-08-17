/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <widgets/editorstabwidget.h>
#include <widgets/issuestable.h>
#include <widgets/linenumbertexteditor.h>
#include <widgets/qconsole.h>
#include <widgets/shrinkabletabwidget.h>
#include <widgets/terminalwidget.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSaveAs;
    QAction *actionSaveAll;
    QAction *actionOptions;
    QAction *actionCompile;
    QAction *actionRun;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionSelectAll;
    QAction *actionIndent;
    QAction *actionUnIndent;
    QAction *actionToggleComment;
    QAction *actionFoldAll;
    QAction *actionUnfoldAll;
    QAction *actionEncode_in_ANSI;
    QAction *actionEncode_in_UTF_8;
    QAction *actionAuto_Detect;
    QAction *actionConvert_to_ANSI;
    QAction *actionConvert_to_UTF_8;
    QAction *actionRebuild;
    QAction *actionStop_Execution;
    QAction *actionDebug;
    QAction *actionStep_Over;
    QAction *actionStep_Into;
    QAction *actionStep_Out;
    QAction *actionRun_To_Cursor;
    QAction *actionContinue;
    QAction *actionAdd_Watch;
    QAction *actionView_CPU_Window;
    QAction *actionExit;
    QAction *actionFind;
    QAction *actionFind_in_files;
    QAction *actionReplace;
    QAction *actionFind_Next;
    QAction *actionFind_Previous;
    QAction *actionRemove_Watch;
    QAction *actionRemove_All_Watches;
    QAction *actionModify_Watch;
    QAction *actionReformat_Code;
    QAction *actionBack;
    QAction *actionForward;
    QAction *actionClose;
    QAction *actionClose_All;
    QAction *actionMaximize_Editor;
    QAction *actionNext_Editor;
    QAction *actionPrevious_Editor;
    QAction *actionToggle_Breakpoint;
    QAction *actionClear_all_breakpoints;
    QAction *actionBreakpoint_property;
    QAction *actionGoto_Declaration;
    QAction *actionGoto_Definition;
    QAction *actionFind_references;
    QAction *actionOpen_Containing_Folder;
    QAction *actionOpen_Terminal;
    QAction *actionFile_Properties;
    QAction *actionClose_Project;
    QAction *actionProject_options;
    QAction *actionNew_Project;
    QAction *actionProject_New_File;
    QAction *actionAdd_to_project;
    QAction *actionRemove_from_project;
    QAction *actionView_Makefile;
    QAction *actionMakeClean;
    QAction *actionProject_Open_Folder_In_Explorer;
    QAction *actionProject_Open_In_Terminal;
    QAction *actionAbout;
    QAction *actionRename_Symbol;
    QAction *actionPrint;
    QAction *actionExport_As_RTF;
    QAction *actionExport_As_HTML;
    QAction *actionMove_To_Other_View;
    QAction *actionC_C_Reference;
    QAction *actionEGE_Manual;
    QAction *actionModify_Bookmark_Description;
    QAction *actionLocate_in_Files_View;
    QAction *actionOpen_Folder;
    QAction *actionRun_Parameters;
    QAction *actionC_Reference;
    QAction *actionTool_Window_Bars;
    QAction *actionStatus_Bar;
    QAction *actionProject;
    QAction *actionWatch;
    QAction *actionStructure;
    QAction *actionFiles;
    QAction *actionProblem_Set;
    QAction *actionIssues;
    QAction *actionTools_Output;
    QAction *actionDebug_Window;
    QAction *actionSearch;
    QAction *actionTODO;
    QAction *actionBookmark;
    QAction *actionProblem;
    QAction *actionDelete_Line;
    QAction *actionDuplicate_Line;
    QAction *actionDelete_Word;
    QAction *actionDelete_to_EOL;
    QAction *actionDelete_to_BOL;
    QAction *actionInterrupt;
    QAction *actionDelete_Last_Word;
    QAction *actionDelete_to_Word_End;
    QAction *actionNew_Class;
    QAction *actionNew_Header;
    QAction *actionWebsite;
    QAction *actionFilesView_Hide_Non_Support_Files;
    QAction *actionToggle_Block_Comment;
    QAction *actionMatch_Bracket;
    QAction *actionMove_Selection_Up;
    QAction *actionMove_Selection_Down;
    QAction *actionConvert_to_UTF_8_BOM;
    QAction *actionEncode_in_UTF_8_BOM;
    QAction *actionCompiler_Options;
    QAction *actionToggle_Explorer_Panel;
    QAction *actionToggle_Messages_Panel;
    QAction *actionRaylib_Manual;
    QAction *actionSelect_Word;
    QAction *actionGo_to_Line;
    QAction *actionNew_Template;
    QAction *actionGoto_block_start;
    QAction *actionGoto_block_end;
    QAction *actionSwitchHeaderSource;
    QAction *actionGenerate_Assembly;
    QAction *actionTrim_trailing_spaces;
    QAction *actionToggle_Readonly;
    QAction *actionSubmit_Issues;
    QAction *actionDocument;
    QAction *actionNew_GAS_File;
    QAction *actionGNU_Assembler_Manual;
    QAction *actionx86_Assembly_Language_Reference_Manual;
    QAction *actionIA_32_Assembly_Language_Reference_Manual;
    QAction *actionAdd_Watchpoint;
    QAction *actionNew_Text_File;
    QAction *actionPage_Up;
    QAction *actionPage_Down;
    QAction *actionGoto_Line_Start;
    QAction *actionGoto_Line_End;
    QAction *actionGoto_File_Start;
    QAction *actionGoto_File_End;
    QAction *actionPage_Up_and_Select;
    QAction *actionPage_Down_and_Select;
    QAction *actionGoto_Page_Start;
    QAction *actionGoto_Page_End;
    QAction *actionGoto_Page_Start_and_Select;
    QAction *actionGoto_Page_End_and_Select;
    QAction *actionGoto_Line_Start_and_Select;
    QAction *actionGoto_Line_End_and_Select;
    QAction *actionGoto_File_Start_and_Select;
    QAction *actionGoto_File_End_and_Select;
    QAction *actionClose_Others;
    QAction *actionOI_Wiki;
    QAction *actionTurtle_Graphics_Manual;
    QAction *actionToggle_Bookmark;
    QAction *actionCode_Completion;
    QAction *actionC_C_Header;
    QAction *actionATT_ASM;
    QAction *actionText_File;
    QAction *actionC_File;
    QAction *actionCPP_File;
    QAction *actionIntel_ASM;
    QAction *actionGenerate_GIMPLE;
    QAction *actionPreprocess;
    QAction *actionPaste_indentation;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QWidget *EditorPanel;
    QVBoxLayout *verticalLayout_2;
    QSplitter *splitterEditorPanel;
    EditorsTabWidget *EditorTabsLeft;
    EditorsTabWidget *EditorTabsRight;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuTools;
    QMenu *menuExecute;
    QMenu *menuEdit;
    QMenu *menuMove_Caret;
    QMenu *menuFile_Type;
    QMenu *menuSearch;
    QMenu *menuCode;
    QMenu *menuWindow;
    QMenu *menuProject;
    QMenu *menuHelp;
    QMenu *menuRefactor;
    QMenu *menuView;
    QMenu *menuTool_Windows;
    QMenu *menuSelection;
    QStatusBar *statusbar;
    QToolBar *toolbarMain;
    QToolBar *toolbarCode;
    QToolBar *toolbarCompile;
    QToolBar *toolbarDebug;
    QToolBar *toolbarCompilerSet;
    QDockWidget *dockExplorer;
    ShrinkableTabWidget *tabExplorer;
    QWidget *tabFiles;
    QVBoxLayout *verticalLayout_3;
    QWidget *panelFiles;
    QHBoxLayout *horizontalLayout_13;
    QComboBox *cbFilesPath;
    QTreeView *treeFiles;
    QWidget *tabProject;
    QVBoxLayout *verticalLayout_9;
    QTreeView *projectView;
    QWidget *tabWatch;
    QHBoxLayout *horizontalLayout_10;
    QTreeView *watchView;
    QWidget *tabStructure;
    QVBoxLayout *verticalLayout_5;
    QTreeView *classBrowser;
    QWidget *tabProblemSet;
    QVBoxLayout *verticalLayout_6;
    QLabel *lblProblemSet;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_15;
    QToolButton *btnNewProblemSet;
    QToolButton *btnAddProblem;
    QToolButton *btnRemoveProblem;
    QToolButton *btnSaveProblemSet;
    QToolButton *btnLoadProblemSet;
    QToolButton *btnImportFPS;
    QToolButton *btnExportFPS;
    QSpacerItem *horizontalSpacer_3;
    QListView *lstProblemSet;
    QDockWidget *dockMessages;
    ShrinkableTabWidget *tabMessages;
    QWidget *tabIssues;
    QHBoxLayout *horizontalLayout_3;
    IssuesTable *tableIssues;
    QWidget *tabToolsOutput;
    QHBoxLayout *horizontalLayout_2;
    QPlainTextEdit *txtToolsOutput;
    QWidget *tabConsole;
    QHBoxLayout *horizontalLayout_cons;
    TerminalWidget *terminalWidget;
    QWidget *tabDebug;
    QHBoxLayout *horizontalLayout_4;
    QSplitter *splitterDebug;
    QFrame *frmEvaluate;
    QGridLayout *gridLayout_2;
    QLabel *lblEvaluate;
    QComboBox *cbEvaluate;
    QPlainTextEdit *txtEvalOutput;
    QTabWidget *debugViews;
    QWidget *tabDebugConsole;
    QHBoxLayout *horizontalLayout_6;
    QConsole *debugConsole;
    QWidget *tabStackTrace;
    QHBoxLayout *horizontalLayout_7;
    QTableView *tblStackTrace;
    QWidget *tabBreakpoints;
    QHBoxLayout *horizontalLayout_8;
    QTableView *tblBreakpoints;
    QWidget *tabLocals;
    QHBoxLayout *horizontalLayout_9;
    QPlainTextEdit *txtLocals;
    QWidget *tabMemory;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QTableView *tblMemoryView;
    QComboBox *cbMemoryAddress;
    QWidget *tabSearch;
    QVBoxLayout *verticalLayout_4;
    QWidget *searchHistoryPanel;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label;
    QComboBox *cbSearchHistory;
    QPushButton *btnSearchAgain;
    QSpacerItem *horizontalSpacer;
    QWidget *replacePanel;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_2;
    QComboBox *cbReplaceInHistory;
    QCheckBox *chkOpenFileInEditors;
    QPushButton *btnReplace;
    QPushButton *btnCancelReplace;
    QSpacerItem *horizontalSpacer_2;
    QTreeView *searchView;
    QWidget *tabTODO;
    QHBoxLayout *horizontalLayout_5;
    QTableView *tableTODO;
    QWidget *tabBookmark;
    QHBoxLayout *horizontalLayout_14;
    QTableView *tableBookmark;
    QWidget *tabProblem;
    QVBoxLayout *verticalLayout_8;
    QSplitter *splitterProblem;
    QWidget *panelProblemCaseInfo;
    QVBoxLayout *verticalLayout_7;
    QLabel *lblProblem;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_16;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_17;
    QToolButton *btnAddProblemCase;
    QToolButton *btnRemoveProblemCase;
    QToolButton *btnOpenProblemAnswer;
    QFrame *line;
    QToolButton *btnRunAllProblemCases;
    QToolButton *btnCaseValidateOptions;
    QSpacerItem *horizontalSpacer_4;
    QProgressBar *pbProblemCases;
    QTableView *tblProblemCases;
    QWidget *panelProblemCase;
    QGridLayout *gridLayout_3;
    QWidget *widgetProblemCaseInputCaption;
    QGridLayout *gridLayout_4;
    QLineEdit *txtProblemCaseInputFileName;
    QToolButton *btnProblemCaseInputFileName;
    QToolButton *btnProblemCaseClearInputFileName;
    QLabel *label_4;
    QLabel *lblProblemCaseInput;
    LineNumberTextEditor *txtProblemCaseInput;
    LineNumberTextEditor *txtProblemCaseExpected;
    LineNumberTextEditor *txtProblemCaseOutput;
    QWidget *widgetProblemCaseExpectedCaption;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_5;
    QLineEdit *txtProblemCaseExpectedOutputFileName;
    QToolButton *btnProblemCaseClearExpectedOutputFileName;
    QToolButton *btnProblemCaseExpectedOutputFileName;
    QWidget *widgetProblemCaseOutputCaption;
    QHBoxLayout *horizontalLayout_19;
    QLabel *lblProblemCaseOutputCaption;
    QSpacerItem *horizontalSpacer_5;
    QComboBox *cbProblemCaseValidateType;
    QLabel *lblProblemCaseExpected;
    QLabel *lblProblemCaseOutput;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(2054, 628);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/images/devcpp.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        MainWindow->setWindowIcon(icon);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName("actionNew");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resources/iconsets/newlook/actions/01File-01New.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionNew->setIcon(icon1);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName("actionOpen");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/resources/iconsets/newlook/actions/01File-02Open.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionOpen->setIcon(icon2);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName("actionSave");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/resources/iconsets/newlook/actions/01File-03Save.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSave->setIcon(icon3);
        actionSaveAs = new QAction(MainWindow);
        actionSaveAs->setObjectName("actionSaveAs");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/resources/iconsets/newlook/actions/01File-04SaveAs.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSaveAs->setIcon(icon4);
        actionSaveAll = new QAction(MainWindow);
        actionSaveAll->setObjectName("actionSaveAll");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/resources/iconsets/newlook/actions/01File-05SaveAll.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSaveAll->setIcon(icon5);
        actionOptions = new QAction(MainWindow);
        actionOptions->setObjectName("actionOptions");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/resources/iconsets/newlook/actions/00Misc-05Gear.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionOptions->setIcon(icon6);
        actionCompile = new QAction(MainWindow);
        actionCompile->setObjectName("actionCompile");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/resources/iconsets/newlook/actions/05Run-01Compile.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionCompile->setIcon(icon7);
        actionRun = new QAction(MainWindow);
        actionRun->setObjectName("actionRun");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/resources/iconsets/newlook/actions/05Run-03Run.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionRun->setIcon(icon8);
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName("actionUndo");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/resources/iconsets/newlook/actions/03Edit-01Undo.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionUndo->setIcon(icon9);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName("actionRedo");
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/resources/iconsets/newlook/actions/03Edit-02Redo.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionRedo->setIcon(icon10);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName("actionCut");
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/resources/iconsets/newlook/actions/03Edit-03Cut.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionCut->setIcon(icon11);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName("actionCopy");
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/resources/iconsets/newlook/actions/03Edit-04Copy.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionCopy->setIcon(icon12);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName("actionPaste");
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/resources/iconsets/newlook/actions/03Edit-05Paste.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionPaste->setIcon(icon13);
        actionSelectAll = new QAction(MainWindow);
        actionSelectAll->setObjectName("actionSelectAll");
        actionIndent = new QAction(MainWindow);
        actionIndent->setObjectName("actionIndent");
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/resources/iconsets/newlook/actions/03Edit-06Indent.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionIndent->setIcon(icon14);
        actionUnIndent = new QAction(MainWindow);
        actionUnIndent->setObjectName("actionUnIndent");
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/resources/iconsets/newlook/actions/03Edit-07Unindent.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionUnIndent->setIcon(icon15);
        actionToggleComment = new QAction(MainWindow);
        actionToggleComment->setObjectName("actionToggleComment");
        actionFoldAll = new QAction(MainWindow);
        actionFoldAll->setObjectName("actionFoldAll");
        actionFoldAll->setEnabled(true);
        actionUnfoldAll = new QAction(MainWindow);
        actionUnfoldAll->setObjectName("actionUnfoldAll");
        actionEncode_in_ANSI = new QAction(MainWindow);
        actionEncode_in_ANSI->setObjectName("actionEncode_in_ANSI");
        actionEncode_in_UTF_8 = new QAction(MainWindow);
        actionEncode_in_UTF_8->setObjectName("actionEncode_in_UTF_8");
        actionAuto_Detect = new QAction(MainWindow);
        actionAuto_Detect->setObjectName("actionAuto_Detect");
        actionConvert_to_ANSI = new QAction(MainWindow);
        actionConvert_to_ANSI->setObjectName("actionConvert_to_ANSI");
        actionConvert_to_UTF_8 = new QAction(MainWindow);
        actionConvert_to_UTF_8->setObjectName("actionConvert_to_UTF_8");
        actionRebuild = new QAction(MainWindow);
        actionRebuild->setObjectName("actionRebuild");
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/resources/iconsets/newlook/actions/05Run-04Rebuild.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionRebuild->setIcon(icon16);
        actionStop_Execution = new QAction(MainWindow);
        actionStop_Execution->setObjectName("actionStop_Execution");
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/resources/iconsets/newlook/actions/05Run-11Stop.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionStop_Execution->setIcon(icon17);
        actionDebug = new QAction(MainWindow);
        actionDebug->setObjectName("actionDebug");
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/resources/iconsets/newlook/actions/05Run-06Debug.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionDebug->setIcon(icon18);
        actionStep_Over = new QAction(MainWindow);
        actionStep_Over->setObjectName("actionStep_Over");
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/resources/iconsets/newlook/actions/05Run-07StepOver.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionStep_Over->setIcon(icon19);
        actionStep_Into = new QAction(MainWindow);
        actionStep_Into->setObjectName("actionStep_Into");
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/resources/iconsets/newlook/actions/05Run-08StepInto.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionStep_Into->setIcon(icon20);
        actionStep_Out = new QAction(MainWindow);
        actionStep_Out->setObjectName("actionStep_Out");
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/resources/iconsets/newlook/actions/05Run-08StepOut.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionStep_Out->setIcon(icon21);
        actionRun_To_Cursor = new QAction(MainWindow);
        actionRun_To_Cursor->setObjectName("actionRun_To_Cursor");
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/resources/iconsets/newlook/actions/05Run-09RunToCursor.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionRun_To_Cursor->setIcon(icon22);
        actionContinue = new QAction(MainWindow);
        actionContinue->setObjectName("actionContinue");
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/resources/iconsets/newlook/actions/05Run-10Continue.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionContinue->setIcon(icon23);
        actionAdd_Watch = new QAction(MainWindow);
        actionAdd_Watch->setObjectName("actionAdd_Watch");
        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/resources/iconsets/newlook/actions/05Run-12AddWatch.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionAdd_Watch->setIcon(icon24);
        actionView_CPU_Window = new QAction(MainWindow);
        actionView_CPU_Window->setObjectName("actionView_CPU_Window");
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        actionFind = new QAction(MainWindow);
        actionFind->setObjectName("actionFind");
        actionFind_in_files = new QAction(MainWindow);
        actionFind_in_files->setObjectName("actionFind_in_files");
        actionReplace = new QAction(MainWindow);
        actionReplace->setObjectName("actionReplace");
        actionFind_Next = new QAction(MainWindow);
        actionFind_Next->setObjectName("actionFind_Next");
        actionFind_Previous = new QAction(MainWindow);
        actionFind_Previous->setObjectName("actionFind_Previous");
        actionRemove_Watch = new QAction(MainWindow);
        actionRemove_Watch->setObjectName("actionRemove_Watch");
        QIcon icon25;
        icon25.addFile(QString::fromUtf8(":/resources/iconsets/newlook/actions/05Run-13RemoveWatch.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionRemove_Watch->setIcon(icon25);
        actionRemove_All_Watches = new QAction(MainWindow);
        actionRemove_All_Watches->setObjectName("actionRemove_All_Watches");
        actionModify_Watch = new QAction(MainWindow);
        actionModify_Watch->setObjectName("actionModify_Watch");
        actionReformat_Code = new QAction(MainWindow);
        actionReformat_Code->setObjectName("actionReformat_Code");
        QIcon icon26;
        icon26.addFile(QString::fromUtf8(":/resources/iconsets/newlook/actions/04Code-05Reformat.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionReformat_Code->setIcon(icon26);
        actionBack = new QAction(MainWindow);
        actionBack->setObjectName("actionBack");
        QIcon icon27;
        icon27.addFile(QString::fromUtf8(":/resources/iconsets/newlook/actions/04Code-01Back.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionBack->setIcon(icon27);
        actionForward = new QAction(MainWindow);
        actionForward->setObjectName("actionForward");
        QIcon icon28;
        icon28.addFile(QString::fromUtf8(":/resources/iconsets/newlook/actions/04Code-02Forward.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionForward->setIcon(icon28);
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName("actionClose");
        actionClose_All = new QAction(MainWindow);
        actionClose_All->setObjectName("actionClose_All");
        actionMaximize_Editor = new QAction(MainWindow);
        actionMaximize_Editor->setObjectName("actionMaximize_Editor");
        actionNext_Editor = new QAction(MainWindow);
        actionNext_Editor->setObjectName("actionNext_Editor");
        actionPrevious_Editor = new QAction(MainWindow);
        actionPrevious_Editor->setObjectName("actionPrevious_Editor");
        actionToggle_Breakpoint = new QAction(MainWindow);
        actionToggle_Breakpoint->setObjectName("actionToggle_Breakpoint");
        QIcon icon29;
        icon29.addFile(QString::fromUtf8(":/icons/images/editor/breakpoint.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        actionToggle_Breakpoint->setIcon(icon29);
        actionClear_all_breakpoints = new QAction(MainWindow);
        actionClear_all_breakpoints->setObjectName("actionClear_all_breakpoints");
        actionBreakpoint_property = new QAction(MainWindow);
        actionBreakpoint_property->setObjectName("actionBreakpoint_property");
        actionGoto_Declaration = new QAction(MainWindow);
        actionGoto_Declaration->setObjectName("actionGoto_Declaration");
        actionGoto_Definition = new QAction(MainWindow);
        actionGoto_Definition->setObjectName("actionGoto_Definition");
        actionFind_references = new QAction(MainWindow);
        actionFind_references->setObjectName("actionFind_references");
        actionOpen_Containing_Folder = new QAction(MainWindow);
        actionOpen_Containing_Folder->setObjectName("actionOpen_Containing_Folder");
        actionOpen_Containing_Folder->setShortcutContext(Qt::ShortcutContext::WidgetShortcut);
        actionOpen_Terminal = new QAction(MainWindow);
        actionOpen_Terminal->setObjectName("actionOpen_Terminal");
        actionOpen_Terminal->setShortcutContext(Qt::ShortcutContext::WidgetShortcut);
        actionFile_Properties = new QAction(MainWindow);
        actionFile_Properties->setObjectName("actionFile_Properties");
        actionClose_Project = new QAction(MainWindow);
        actionClose_Project->setObjectName("actionClose_Project");
        actionProject_options = new QAction(MainWindow);
        actionProject_options->setObjectName("actionProject_options");
        actionNew_Project = new QAction(MainWindow);
        actionNew_Project->setObjectName("actionNew_Project");
        actionProject_New_File = new QAction(MainWindow);
        actionProject_New_File->setObjectName("actionProject_New_File");
        actionAdd_to_project = new QAction(MainWindow);
        actionAdd_to_project->setObjectName("actionAdd_to_project");
        actionRemove_from_project = new QAction(MainWindow);
        actionRemove_from_project->setObjectName("actionRemove_from_project");
        actionView_Makefile = new QAction(MainWindow);
        actionView_Makefile->setObjectName("actionView_Makefile");
        actionMakeClean = new QAction(MainWindow);
        actionMakeClean->setObjectName("actionMakeClean");
        actionProject_Open_Folder_In_Explorer = new QAction(MainWindow);
        actionProject_Open_Folder_In_Explorer->setObjectName("actionProject_Open_Folder_In_Explorer");
        actionProject_Open_In_Terminal = new QAction(MainWindow);
        actionProject_Open_In_Terminal->setObjectName("actionProject_Open_In_Terminal");
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName("actionAbout");
        actionRename_Symbol = new QAction(MainWindow);
        actionRename_Symbol->setObjectName("actionRename_Symbol");
        actionPrint = new QAction(MainWindow);
        actionPrint->setObjectName("actionPrint");
        actionExport_As_RTF = new QAction(MainWindow);
        actionExport_As_RTF->setObjectName("actionExport_As_RTF");
        actionExport_As_HTML = new QAction(MainWindow);
        actionExport_As_HTML->setObjectName("actionExport_As_HTML");
        actionMove_To_Other_View = new QAction(MainWindow);
        actionMove_To_Other_View->setObjectName("actionMove_To_Other_View");
        actionMove_To_Other_View->setShortcutContext(Qt::ShortcutContext::WidgetShortcut);
        actionC_C_Reference = new QAction(MainWindow);
        actionC_C_Reference->setObjectName("actionC_C_Reference");
        actionEGE_Manual = new QAction(MainWindow);
        actionEGE_Manual->setObjectName("actionEGE_Manual");
        actionModify_Bookmark_Description = new QAction(MainWindow);
        actionModify_Bookmark_Description->setObjectName("actionModify_Bookmark_Description");
        actionLocate_in_Files_View = new QAction(MainWindow);
        actionLocate_in_Files_View->setObjectName("actionLocate_in_Files_View");
        actionOpen_Folder = new QAction(MainWindow);
        actionOpen_Folder->setObjectName("actionOpen_Folder");
        actionRun_Parameters = new QAction(MainWindow);
        actionRun_Parameters->setObjectName("actionRun_Parameters");
        QIcon icon30;
        icon30.addFile(QString::fromUtf8(":/resources/iconsets/newlook/actions/05Run-05Options.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionRun_Parameters->setIcon(icon30);
        actionC_Reference = new QAction(MainWindow);
        actionC_Reference->setObjectName("actionC_Reference");
        actionTool_Window_Bars = new QAction(MainWindow);
        actionTool_Window_Bars->setObjectName("actionTool_Window_Bars");
        actionTool_Window_Bars->setCheckable(true);
        actionStatus_Bar = new QAction(MainWindow);
        actionStatus_Bar->setObjectName("actionStatus_Bar");
        actionStatus_Bar->setCheckable(true);
        actionProject = new QAction(MainWindow);
        actionProject->setObjectName("actionProject");
        actionProject->setCheckable(true);
        actionWatch = new QAction(MainWindow);
        actionWatch->setObjectName("actionWatch");
        actionWatch->setCheckable(true);
        actionStructure = new QAction(MainWindow);
        actionStructure->setObjectName("actionStructure");
        actionStructure->setCheckable(true);
        actionFiles = new QAction(MainWindow);
        actionFiles->setObjectName("actionFiles");
        actionFiles->setCheckable(true);
        actionProblem_Set = new QAction(MainWindow);
        actionProblem_Set->setObjectName("actionProblem_Set");
        actionProblem_Set->setCheckable(true);
        actionIssues = new QAction(MainWindow);
        actionIssues->setObjectName("actionIssues");
        actionIssues->setCheckable(true);
        actionTools_Output = new QAction(MainWindow);
        actionTools_Output->setObjectName("actionTools_Output");
        actionTools_Output->setCheckable(true);
        actionDebug_Window = new QAction(MainWindow);
        actionDebug_Window->setObjectName("actionDebug_Window");
        actionDebug_Window->setCheckable(true);
        actionSearch = new QAction(MainWindow);
        actionSearch->setObjectName("actionSearch");
        actionSearch->setCheckable(true);
        actionTODO = new QAction(MainWindow);
        actionTODO->setObjectName("actionTODO");
        actionTODO->setCheckable(true);
        actionBookmark = new QAction(MainWindow);
        actionBookmark->setObjectName("actionBookmark");
        actionBookmark->setCheckable(true);
        actionProblem = new QAction(MainWindow);
        actionProblem->setObjectName("actionProblem");
        actionProblem->setCheckable(true);
        actionDelete_Line = new QAction(MainWindow);
        actionDelete_Line->setObjectName("actionDelete_Line");
        actionDuplicate_Line = new QAction(MainWindow);
        actionDuplicate_Line->setObjectName("actionDuplicate_Line");
        actionDelete_Word = new QAction(MainWindow);
        actionDelete_Word->setObjectName("actionDelete_Word");
        actionDelete_to_EOL = new QAction(MainWindow);
        actionDelete_to_EOL->setObjectName("actionDelete_to_EOL");
        actionDelete_to_BOL = new QAction(MainWindow);
        actionDelete_to_BOL->setObjectName("actionDelete_to_BOL");
        actionInterrupt = new QAction(MainWindow);
        actionInterrupt->setObjectName("actionInterrupt");
        QIcon icon31;
        icon31.addFile(QString::fromUtf8(":/resources/iconsets/newlook/actions/05Run-16Interrupt.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionInterrupt->setIcon(icon31);
        actionDelete_Last_Word = new QAction(MainWindow);
        actionDelete_Last_Word->setObjectName("actionDelete_Last_Word");
        actionDelete_to_Word_End = new QAction(MainWindow);
        actionDelete_to_Word_End->setObjectName("actionDelete_to_Word_End");
        actionNew_Class = new QAction(MainWindow);
        actionNew_Class->setObjectName("actionNew_Class");
        actionNew_Header = new QAction(MainWindow);
        actionNew_Header->setObjectName("actionNew_Header");
        actionWebsite = new QAction(MainWindow);
        actionWebsite->setObjectName("actionWebsite");
        actionFilesView_Hide_Non_Support_Files = new QAction(MainWindow);
        actionFilesView_Hide_Non_Support_Files->setObjectName("actionFilesView_Hide_Non_Support_Files");
        actionFilesView_Hide_Non_Support_Files->setCheckable(true);
        actionToggle_Block_Comment = new QAction(MainWindow);
        actionToggle_Block_Comment->setObjectName("actionToggle_Block_Comment");
        actionMatch_Bracket = new QAction(MainWindow);
        actionMatch_Bracket->setObjectName("actionMatch_Bracket");
        actionMove_Selection_Up = new QAction(MainWindow);
        actionMove_Selection_Up->setObjectName("actionMove_Selection_Up");
        actionMove_Selection_Down = new QAction(MainWindow);
        actionMove_Selection_Down->setObjectName("actionMove_Selection_Down");
        actionConvert_to_UTF_8_BOM = new QAction(MainWindow);
        actionConvert_to_UTF_8_BOM->setObjectName("actionConvert_to_UTF_8_BOM");
        actionEncode_in_UTF_8_BOM = new QAction(MainWindow);
        actionEncode_in_UTF_8_BOM->setObjectName("actionEncode_in_UTF_8_BOM");
        actionCompiler_Options = new QAction(MainWindow);
        actionCompiler_Options->setObjectName("actionCompiler_Options");
        QIcon icon32;
        icon32.addFile(QString::fromUtf8(":/resources/iconsets/newlook/actions/05Run-17CompilerOptions.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionCompiler_Options->setIcon(icon32);
        actionToggle_Explorer_Panel = new QAction(MainWindow);
        actionToggle_Explorer_Panel->setObjectName("actionToggle_Explorer_Panel");
        actionToggle_Messages_Panel = new QAction(MainWindow);
        actionToggle_Messages_Panel->setObjectName("actionToggle_Messages_Panel");
        actionRaylib_Manual = new QAction(MainWindow);
        actionRaylib_Manual->setObjectName("actionRaylib_Manual");
        actionSelect_Word = new QAction(MainWindow);
        actionSelect_Word->setObjectName("actionSelect_Word");
        actionGo_to_Line = new QAction(MainWindow);
        actionGo_to_Line->setObjectName("actionGo_to_Line");
        actionNew_Template = new QAction(MainWindow);
        actionNew_Template->setObjectName("actionNew_Template");
        actionGoto_block_start = new QAction(MainWindow);
        actionGoto_block_start->setObjectName("actionGoto_block_start");
        actionGoto_block_end = new QAction(MainWindow);
        actionGoto_block_end->setObjectName("actionGoto_block_end");
        actionSwitchHeaderSource = new QAction(MainWindow);
        actionSwitchHeaderSource->setObjectName("actionSwitchHeaderSource");
        actionGenerate_Assembly = new QAction(MainWindow);
        actionGenerate_Assembly->setObjectName("actionGenerate_Assembly");
        actionTrim_trailing_spaces = new QAction(MainWindow);
        actionTrim_trailing_spaces->setObjectName("actionTrim_trailing_spaces");
        actionToggle_Readonly = new QAction(MainWindow);
        actionToggle_Readonly->setObjectName("actionToggle_Readonly");
        actionSubmit_Issues = new QAction(MainWindow);
        actionSubmit_Issues->setObjectName("actionSubmit_Issues");
        actionDocument = new QAction(MainWindow);
        actionDocument->setObjectName("actionDocument");
        actionNew_GAS_File = new QAction(MainWindow);
        actionNew_GAS_File->setObjectName("actionNew_GAS_File");
        actionGNU_Assembler_Manual = new QAction(MainWindow);
        actionGNU_Assembler_Manual->setObjectName("actionGNU_Assembler_Manual");
        actionx86_Assembly_Language_Reference_Manual = new QAction(MainWindow);
        actionx86_Assembly_Language_Reference_Manual->setObjectName("actionx86_Assembly_Language_Reference_Manual");
        actionIA_32_Assembly_Language_Reference_Manual = new QAction(MainWindow);
        actionIA_32_Assembly_Language_Reference_Manual->setObjectName("actionIA_32_Assembly_Language_Reference_Manual");
        actionAdd_Watchpoint = new QAction(MainWindow);
        actionAdd_Watchpoint->setObjectName("actionAdd_Watchpoint");
        actionNew_Text_File = new QAction(MainWindow);
        actionNew_Text_File->setObjectName("actionNew_Text_File");
        actionPage_Up = new QAction(MainWindow);
        actionPage_Up->setObjectName("actionPage_Up");
        actionPage_Up->setMenuRole(QAction::MenuRole::NoRole);
        actionPage_Down = new QAction(MainWindow);
        actionPage_Down->setObjectName("actionPage_Down");
        actionPage_Down->setMenuRole(QAction::MenuRole::NoRole);
        actionGoto_Line_Start = new QAction(MainWindow);
        actionGoto_Line_Start->setObjectName("actionGoto_Line_Start");
        actionGoto_Line_Start->setMenuRole(QAction::MenuRole::NoRole);
        actionGoto_Line_End = new QAction(MainWindow);
        actionGoto_Line_End->setObjectName("actionGoto_Line_End");
        actionGoto_Line_End->setMenuRole(QAction::MenuRole::NoRole);
        actionGoto_File_Start = new QAction(MainWindow);
        actionGoto_File_Start->setObjectName("actionGoto_File_Start");
        actionGoto_File_Start->setMenuRole(QAction::MenuRole::NoRole);
        actionGoto_File_End = new QAction(MainWindow);
        actionGoto_File_End->setObjectName("actionGoto_File_End");
        actionGoto_File_End->setMenuRole(QAction::MenuRole::NoRole);
        actionPage_Up_and_Select = new QAction(MainWindow);
        actionPage_Up_and_Select->setObjectName("actionPage_Up_and_Select");
        actionPage_Up_and_Select->setMenuRole(QAction::MenuRole::NoRole);
        actionPage_Down_and_Select = new QAction(MainWindow);
        actionPage_Down_and_Select->setObjectName("actionPage_Down_and_Select");
        actionPage_Down_and_Select->setMenuRole(QAction::MenuRole::NoRole);
        actionGoto_Page_Start = new QAction(MainWindow);
        actionGoto_Page_Start->setObjectName("actionGoto_Page_Start");
        actionGoto_Page_Start->setMenuRole(QAction::MenuRole::NoRole);
        actionGoto_Page_End = new QAction(MainWindow);
        actionGoto_Page_End->setObjectName("actionGoto_Page_End");
        actionGoto_Page_End->setMenuRole(QAction::MenuRole::NoRole);
        actionGoto_Page_Start_and_Select = new QAction(MainWindow);
        actionGoto_Page_Start_and_Select->setObjectName("actionGoto_Page_Start_and_Select");
        actionGoto_Page_Start_and_Select->setMenuRole(QAction::MenuRole::NoRole);
        actionGoto_Page_End_and_Select = new QAction(MainWindow);
        actionGoto_Page_End_and_Select->setObjectName("actionGoto_Page_End_and_Select");
        actionGoto_Page_End_and_Select->setMenuRole(QAction::MenuRole::NoRole);
        actionGoto_Line_Start_and_Select = new QAction(MainWindow);
        actionGoto_Line_Start_and_Select->setObjectName("actionGoto_Line_Start_and_Select");
        actionGoto_Line_Start_and_Select->setMenuRole(QAction::MenuRole::NoRole);
        actionGoto_Line_End_and_Select = new QAction(MainWindow);
        actionGoto_Line_End_and_Select->setObjectName("actionGoto_Line_End_and_Select");
        actionGoto_Line_End_and_Select->setMenuRole(QAction::MenuRole::NoRole);
        actionGoto_File_Start_and_Select = new QAction(MainWindow);
        actionGoto_File_Start_and_Select->setObjectName("actionGoto_File_Start_and_Select");
        actionGoto_File_Start_and_Select->setMenuRole(QAction::MenuRole::NoRole);
        actionGoto_File_End_and_Select = new QAction(MainWindow);
        actionGoto_File_End_and_Select->setObjectName("actionGoto_File_End_and_Select");
        actionGoto_File_End_and_Select->setMenuRole(QAction::MenuRole::NoRole);
        actionClose_Others = new QAction(MainWindow);
        actionClose_Others->setObjectName("actionClose_Others");
        actionClose_Others->setMenuRole(QAction::MenuRole::NoRole);
        actionOI_Wiki = new QAction(MainWindow);
        actionOI_Wiki->setObjectName("actionOI_Wiki");
        actionOI_Wiki->setMenuRole(QAction::MenuRole::NoRole);
        actionTurtle_Graphics_Manual = new QAction(MainWindow);
        actionTurtle_Graphics_Manual->setObjectName("actionTurtle_Graphics_Manual");
        actionTurtle_Graphics_Manual->setMenuRole(QAction::MenuRole::NoRole);
        actionToggle_Bookmark = new QAction(MainWindow);
        actionToggle_Bookmark->setObjectName("actionToggle_Bookmark");
        actionToggle_Bookmark->setMenuRole(QAction::MenuRole::NoRole);
        actionCode_Completion = new QAction(MainWindow);
        actionCode_Completion->setObjectName("actionCode_Completion");
        actionCode_Completion->setMenuRole(QAction::MenuRole::NoRole);
        actionC_C_Header = new QAction(MainWindow);
        actionC_C_Header->setObjectName("actionC_C_Header");
        actionC_C_Header->setCheckable(true);
        actionATT_ASM = new QAction(MainWindow);
        actionATT_ASM->setObjectName("actionATT_ASM");
        actionATT_ASM->setCheckable(true);
        actionText_File = new QAction(MainWindow);
        actionText_File->setObjectName("actionText_File");
        actionText_File->setCheckable(true);
        actionC_File = new QAction(MainWindow);
        actionC_File->setObjectName("actionC_File");
        actionC_File->setCheckable(true);
        actionCPP_File = new QAction(MainWindow);
        actionCPP_File->setObjectName("actionCPP_File");
        actionCPP_File->setCheckable(true);
        actionIntel_ASM = new QAction(MainWindow);
        actionIntel_ASM->setObjectName("actionIntel_ASM");
        actionIntel_ASM->setCheckable(true);
        actionGenerate_GIMPLE = new QAction(MainWindow);
        actionGenerate_GIMPLE->setObjectName("actionGenerate_GIMPLE");
        actionPreprocess = new QAction(MainWindow);
        actionPreprocess->setObjectName("actionPreprocess");
        actionPaste_indentation = new QAction(MainWindow);
        actionPaste_indentation->setObjectName("actionPaste_indentation");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("#centralwidget { image: url(:/icons/images/devcpp-gray.png);}"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        EditorPanel = new QWidget(centralwidget);
        EditorPanel->setObjectName("EditorPanel");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(EditorPanel->sizePolicy().hasHeightForWidth());
        EditorPanel->setSizePolicy(sizePolicy);
        EditorPanel->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_2 = new QVBoxLayout(EditorPanel);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        splitterEditorPanel = new QSplitter(EditorPanel);
        splitterEditorPanel->setObjectName("splitterEditorPanel");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(splitterEditorPanel->sizePolicy().hasHeightForWidth());
        splitterEditorPanel->setSizePolicy(sizePolicy1);
        splitterEditorPanel->setOrientation(Qt::Orientation::Horizontal);
        splitterEditorPanel->setHandleWidth(1);
        EditorTabsLeft = new EditorsTabWidget(splitterEditorPanel);
        EditorTabsLeft->setObjectName("EditorTabsLeft");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Ignored, QSizePolicy::Policy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(EditorTabsLeft->sizePolicy().hasHeightForWidth());
        EditorTabsLeft->setSizePolicy(sizePolicy2);
        EditorTabsLeft->setDocumentMode(true);
        EditorTabsLeft->setTabsClosable(true);
        EditorTabsLeft->setMovable(true);
        splitterEditorPanel->addWidget(EditorTabsLeft);
        EditorTabsRight = new EditorsTabWidget(splitterEditorPanel);
        EditorTabsRight->setObjectName("EditorTabsRight");
        EditorTabsRight->setEnabled(true);
        EditorTabsRight->setStyleSheet(QString::fromUtf8(""));
        EditorTabsRight->setDocumentMode(true);
        EditorTabsRight->setTabsClosable(true);
        EditorTabsRight->setMovable(true);
        splitterEditorPanel->addWidget(EditorTabsRight);

        verticalLayout_2->addWidget(splitterEditorPanel);


        horizontalLayout->addWidget(EditorPanel);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 2054, 33));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuTools = new QMenu(menubar);
        menuTools->setObjectName("menuTools");
        menuExecute = new QMenu(menubar);
        menuExecute->setObjectName("menuExecute");
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName("menuEdit");
        menuMove_Caret = new QMenu(menuEdit);
        menuMove_Caret->setObjectName("menuMove_Caret");
        menuFile_Type = new QMenu(menuEdit);
        menuFile_Type->setObjectName("menuFile_Type");
        menuSearch = new QMenu(menubar);
        menuSearch->setObjectName("menuSearch");
        menuCode = new QMenu(menubar);
        menuCode->setObjectName("menuCode");
        menuWindow = new QMenu(menubar);
        menuWindow->setObjectName("menuWindow");
        menuProject = new QMenu(menubar);
        menuProject->setObjectName("menuProject");
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName("menuHelp");
        menuRefactor = new QMenu(menubar);
        menuRefactor->setObjectName("menuRefactor");
        menuView = new QMenu(menubar);
        menuView->setObjectName("menuView");
        menuTool_Windows = new QMenu(menuView);
        menuTool_Windows->setObjectName("menuTool_Windows");
        menuSelection = new QMenu(menubar);
        menuSelection->setObjectName("menuSelection");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolbarMain = new QToolBar(MainWindow);
        toolbarMain->setObjectName("toolbarMain");
        toolbarMain->setIconSize(QSize(24, 24));
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolbarMain);
        toolbarCode = new QToolBar(MainWindow);
        toolbarCode->setObjectName("toolbarCode");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolbarCode);
        toolbarCompile = new QToolBar(MainWindow);
        toolbarCompile->setObjectName("toolbarCompile");
        toolbarCompile->setIconSize(QSize(24, 24));
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolbarCompile);
        toolbarDebug = new QToolBar(MainWindow);
        toolbarDebug->setObjectName("toolbarDebug");
        toolbarDebug->setIconSize(QSize(24, 24));
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolbarDebug);
        toolbarCompilerSet = new QToolBar(MainWindow);
        toolbarCompilerSet->setObjectName("toolbarCompilerSet");
        toolbarCompilerSet->setIconSize(QSize(24, 24));
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolbarCompilerSet);
        dockExplorer = new QDockWidget(MainWindow);
        dockExplorer->setObjectName("dockExplorer");
        dockExplorer->setFeatures(QDockWidget::DockWidgetFeature::NoDockWidgetFeatures);
        dockExplorer->setAllowedAreas(Qt::DockWidgetArea::NoDockWidgetArea);
        tabExplorer = new ShrinkableTabWidget();
        tabExplorer->setObjectName("tabExplorer");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(tabExplorer->sizePolicy().hasHeightForWidth());
        tabExplorer->setSizePolicy(sizePolicy3);
        tabExplorer->setTabPosition(QTabWidget::TabPosition::North);
        tabExplorer->setUsesScrollButtons(true);
        tabExplorer->setMovable(false);
        tabFiles = new QWidget();
        tabFiles->setObjectName("tabFiles");
        tabFiles->setAutoFillBackground(true);
        verticalLayout_3 = new QVBoxLayout(tabFiles);
        verticalLayout_3->setSpacing(2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        panelFiles = new QWidget(tabFiles);
        panelFiles->setObjectName("panelFiles");
        horizontalLayout_13 = new QHBoxLayout(panelFiles);
        horizontalLayout_13->setSpacing(2);
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        horizontalLayout_13->setContentsMargins(0, 0, 2, 0);
        cbFilesPath = new QComboBox(panelFiles);
        cbFilesPath->setObjectName("cbFilesPath");
        cbFilesPath->setEditable(true);
        cbFilesPath->setInsertPolicy(QComboBox::InsertPolicy::NoInsert);

        horizontalLayout_13->addWidget(cbFilesPath);


        verticalLayout_3->addWidget(panelFiles);

        treeFiles = new QTreeView(tabFiles);
        treeFiles->setObjectName("treeFiles");
        treeFiles->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        treeFiles->setDragEnabled(true);
        treeFiles->setDragDropMode(QAbstractItemView::DragDropMode::NoDragDrop);
        treeFiles->setDefaultDropAction(Qt::DropAction::IgnoreAction);
        treeFiles->setSelectionMode(QAbstractItemView::SelectionMode::NoSelection);
        treeFiles->setSortingEnabled(false);
        treeFiles->header()->setVisible(false);

        verticalLayout_3->addWidget(treeFiles);

        tabExplorer->addTab(tabFiles, QString());
        tabProject = new QWidget();
        tabProject->setObjectName("tabProject");
        tabProject->setAutoFillBackground(true);
        verticalLayout_9 = new QVBoxLayout(tabProject);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        projectView = new QTreeView(tabProject);
        projectView->setObjectName("projectView");
        projectView->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        projectView->setDragEnabled(true);
        projectView->setDragDropMode(QAbstractItemView::DragDropMode::NoDragDrop);
        projectView->setDefaultDropAction(Qt::DropAction::IgnoreAction);
        projectView->setSelectionMode(QAbstractItemView::SelectionMode::ExtendedSelection);
        projectView->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectItems);
        projectView->setAutoExpandDelay(500);
        projectView->header()->setVisible(false);

        verticalLayout_9->addWidget(projectView);

        tabExplorer->addTab(tabProject, QString());
        tabWatch = new QWidget();
        tabWatch->setObjectName("tabWatch");
        tabWatch->setAutoFillBackground(true);
        horizontalLayout_10 = new QHBoxLayout(tabWatch);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_10->setContentsMargins(2, 2, 2, 2);
        watchView = new QTreeView(tabWatch);
        watchView->setObjectName("watchView");
        watchView->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        watchView->setSelectionMode(QAbstractItemView::SelectionMode::NoSelection);
        watchView->setTextElideMode(Qt::TextElideMode::ElideLeft);
        watchView->setWordWrap(false);
        watchView->header()->setDefaultSectionSize(100);

        horizontalLayout_10->addWidget(watchView);

        tabExplorer->addTab(tabWatch, QString());
        tabStructure = new QWidget();
        tabStructure->setObjectName("tabStructure");
        tabStructure->setAutoFillBackground(true);
        verticalLayout_5 = new QVBoxLayout(tabStructure);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        classBrowser = new QTreeView(tabStructure);
        classBrowser->setObjectName("classBrowser");
        classBrowser->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAsNeeded);
        classBrowser->setRootIsDecorated(true);
        classBrowser->header()->setVisible(false);

        verticalLayout_5->addWidget(classBrowser);

        tabExplorer->addTab(tabStructure, QString());
        tabProblemSet = new QWidget();
        tabProblemSet->setObjectName("tabProblemSet");
        tabProblemSet->setAutoFillBackground(true);
        verticalLayout_6 = new QVBoxLayout(tabProblemSet);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        lblProblemSet = new QLabel(tabProblemSet);
        lblProblemSet->setObjectName("lblProblemSet");
        lblProblemSet->setFrameShape(QFrame::Shape::NoFrame);
        lblProblemSet->setMargin(5);

        verticalLayout_6->addWidget(lblProblemSet);

        widget_2 = new QWidget(tabProblemSet);
        widget_2->setObjectName("widget_2");
        horizontalLayout_15 = new QHBoxLayout(widget_2);
        horizontalLayout_15->setSpacing(7);
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        btnNewProblemSet = new QToolButton(widget_2);
        btnNewProblemSet->setObjectName("btnNewProblemSet");
        QIcon icon33;
        icon33.addFile(QString::fromUtf8(":/resources/iconsets/newlook/actions/08Problem-01Problem.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        btnNewProblemSet->setIcon(icon33);

        horizontalLayout_15->addWidget(btnNewProblemSet);

        btnAddProblem = new QToolButton(widget_2);
        btnAddProblem->setObjectName("btnAddProblem");
        QIcon icon34;
        icon34.addFile(QString::fromUtf8(":/resources/iconsets/newlook/actions/00Misc-03Add.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        btnAddProblem->setIcon(icon34);

        horizontalLayout_15->addWidget(btnAddProblem);

        btnRemoveProblem = new QToolButton(widget_2);
        btnRemoveProblem->setObjectName("btnRemoveProblem");
        QIcon icon35;
        icon35.addFile(QString::fromUtf8(":/resources/iconsets/newlook/actions/00Misc-04Remove.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        btnRemoveProblem->setIcon(icon35);

        horizontalLayout_15->addWidget(btnRemoveProblem);

        btnSaveProblemSet = new QToolButton(widget_2);
        btnSaveProblemSet->setObjectName("btnSaveProblemSet");
        QIcon icon36;
        icon36.addFile(QString::fromUtf8(":/resources/iconsets/newlook/actions/01File-04SaveAs.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        btnSaveProblemSet->setIcon(icon36);

        horizontalLayout_15->addWidget(btnSaveProblemSet);

        btnLoadProblemSet = new QToolButton(widget_2);
        btnLoadProblemSet->setObjectName("btnLoadProblemSet");
        QIcon icon37;
        icon37.addFile(QString::fromUtf8(":/resources/iconsets/newlook/actions/06View-03Files.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        btnLoadProblemSet->setIcon(icon37);

        horizontalLayout_15->addWidget(btnLoadProblemSet);

        btnImportFPS = new QToolButton(widget_2);
        btnImportFPS->setObjectName("btnImportFPS");
        QIcon icon38;
        icon38.addFile(QString::fromUtf8(":/resources/iconsets/newlook/actions/00Misc-01Back.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        btnImportFPS->setIcon(icon38);

        horizontalLayout_15->addWidget(btnImportFPS);

        btnExportFPS = new QToolButton(widget_2);
        btnExportFPS->setObjectName("btnExportFPS");
        QIcon icon39;
        icon39.addFile(QString::fromUtf8(":/resources/iconsets/newlook/actions/00Misc-02Forward.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        btnExportFPS->setIcon(icon39);

        horizontalLayout_15->addWidget(btnExportFPS);

        horizontalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_3);


        verticalLayout_6->addWidget(widget_2);

        lstProblemSet = new QListView(tabProblemSet);
        lstProblemSet->setObjectName("lstProblemSet");
        lstProblemSet->setDragEnabled(true);
        lstProblemSet->setDragDropMode(QAbstractItemView::DragDropMode::NoDragDrop);
        lstProblemSet->setDefaultDropAction(Qt::DropAction::IgnoreAction);
        lstProblemSet->setAlternatingRowColors(true);
        lstProblemSet->setSelectionMode(QAbstractItemView::SelectionMode::NoSelection);
        lstProblemSet->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectItems);

        verticalLayout_6->addWidget(lstProblemSet);

        tabExplorer->addTab(tabProblemSet, QString());
        dockExplorer->setWidget(tabExplorer);
        MainWindow->addDockWidget(Qt::DockWidgetArea::LeftDockWidgetArea, dockExplorer);
        dockMessages = new QDockWidget(MainWindow);
        dockMessages->setObjectName("dockMessages");
        dockMessages->setFeatures(QDockWidget::DockWidgetFeature::NoDockWidgetFeatures);
        dockMessages->setAllowedAreas(Qt::DockWidgetArea::NoDockWidgetArea);
        tabMessages = new ShrinkableTabWidget();
        tabMessages->setObjectName("tabMessages");
        sizePolicy3.setHeightForWidth(tabMessages->sizePolicy().hasHeightForWidth());
        tabMessages->setSizePolicy(sizePolicy3);
        tabMessages->setTabPosition(QTabWidget::TabPosition::North);
        tabMessages->setIconSize(QSize(16, 16));
        tabIssues = new QWidget();
        tabIssues->setObjectName("tabIssues");
        horizontalLayout_3 = new QHBoxLayout(tabIssues);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(5, 5, 5, 5);
        tableIssues = new IssuesTable(tabIssues);
        tableIssues->setObjectName("tableIssues");
        QFont font;
        font.setBold(false);
        tableIssues->setFont(font);
        tableIssues->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        tableIssues->setTabKeyNavigation(false);
        tableIssues->setProperty("showDropIndicator", QVariant(false));
        tableIssues->setAlternatingRowColors(true);
        tableIssues->setSelectionMode(QAbstractItemView::SelectionMode::NoSelection);
        tableIssues->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectItems);
        tableIssues->horizontalHeader()->setStretchLastSection(true);

        horizontalLayout_3->addWidget(tableIssues);

        tabMessages->addTab(tabIssues, QString());
        tabToolsOutput = new QWidget();
        tabToolsOutput->setObjectName("tabToolsOutput");
        horizontalLayout_2 = new QHBoxLayout(tabToolsOutput);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(5, 5, 5, 5);
        txtToolsOutput = new QPlainTextEdit(tabToolsOutput);
        txtToolsOutput->setObjectName("txtToolsOutput");
        txtToolsOutput->setUndoRedoEnabled(false);
        txtToolsOutput->setLineWrapMode(QPlainTextEdit::LineWrapMode::NoWrap);
        txtToolsOutput->setReadOnly(true);
        txtToolsOutput->setBackgroundVisible(false);

        horizontalLayout_2->addWidget(txtToolsOutput);

        tabMessages->addTab(tabToolsOutput, QString());
        tabConsole = new QWidget();
        tabConsole->setObjectName("tabConsole");
        horizontalLayout_cons = new QHBoxLayout(tabConsole);
        horizontalLayout_cons->setSpacing(7);
        horizontalLayout_cons->setObjectName("horizontalLayout_cons");
        horizontalLayout_cons->setContentsMargins(0, 0, 0, 0);
        terminalWidget = new TerminalWidget(tabConsole);
        terminalWidget->setObjectName("terminalWidget");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(terminalWidget->sizePolicy().hasHeightForWidth());
        terminalWidget->setSizePolicy(sizePolicy4);

        horizontalLayout_cons->addWidget(terminalWidget);

        tabMessages->addTab(tabConsole, QString());
        tabDebug = new QWidget();
        tabDebug->setObjectName("tabDebug");
        horizontalLayout_4 = new QHBoxLayout(tabDebug);
        horizontalLayout_4->setSpacing(7);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        splitterDebug = new QSplitter(tabDebug);
        splitterDebug->setObjectName("splitterDebug");
        splitterDebug->setOrientation(Qt::Orientation::Horizontal);
        splitterDebug->setHandleWidth(3);
        frmEvaluate = new QFrame(splitterDebug);
        frmEvaluate->setObjectName("frmEvaluate");
        frmEvaluate->setFrameShape(QFrame::Shape::NoFrame);
        gridLayout_2 = new QGridLayout(frmEvaluate);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(7, 7, 7, 7);
        lblEvaluate = new QLabel(frmEvaluate);
        lblEvaluate->setObjectName("lblEvaluate");

        gridLayout_2->addWidget(lblEvaluate, 0, 0, 1, 1);

        cbEvaluate = new QComboBox(frmEvaluate);
        cbEvaluate->setObjectName("cbEvaluate");
        sizePolicy4.setHeightForWidth(cbEvaluate->sizePolicy().hasHeightForWidth());
        cbEvaluate->setSizePolicy(sizePolicy4);
        cbEvaluate->setEditable(true);
        cbEvaluate->setInsertPolicy(QComboBox::InsertPolicy::NoInsert);

        gridLayout_2->addWidget(cbEvaluate, 0, 1, 1, 1);

        txtEvalOutput = new QPlainTextEdit(frmEvaluate);
        txtEvalOutput->setObjectName("txtEvalOutput");
        txtEvalOutput->setUndoRedoEnabled(false);
        txtEvalOutput->setReadOnly(true);

        gridLayout_2->addWidget(txtEvalOutput, 1, 1, 1, 1);

        splitterDebug->addWidget(frmEvaluate);
        debugViews = new QTabWidget(splitterDebug);
        debugViews->setObjectName("debugViews");
        debugViews->setTabPosition(QTabWidget::TabPosition::North);
        tabDebugConsole = new QWidget();
        tabDebugConsole->setObjectName("tabDebugConsole");
        horizontalLayout_6 = new QHBoxLayout(tabDebugConsole);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(2, 2, 2, 2);
        debugConsole = new QConsole(tabDebugConsole);
        debugConsole->setObjectName("debugConsole");
        debugConsole->setFrameShape(QFrame::Shape::NoFrame);

        horizontalLayout_6->addWidget(debugConsole);

        debugViews->addTab(tabDebugConsole, QString());
        tabStackTrace = new QWidget();
        tabStackTrace->setObjectName("tabStackTrace");
        horizontalLayout_7 = new QHBoxLayout(tabStackTrace);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(2, 2, 2, 0);
        tblStackTrace = new QTableView(tabStackTrace);
        tblStackTrace->setObjectName("tblStackTrace");
        tblStackTrace->setAlternatingRowColors(true);
        tblStackTrace->setSelectionMode(QAbstractItemView::SelectionMode::NoSelection);
        tblStackTrace->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectItems);
        tblStackTrace->setTextElideMode(Qt::TextElideMode::ElideLeft);
        tblStackTrace->horizontalHeader()->setStretchLastSection(true);

        horizontalLayout_7->addWidget(tblStackTrace);

        debugViews->addTab(tabStackTrace, QString());
        tabBreakpoints = new QWidget();
        tabBreakpoints->setObjectName("tabBreakpoints");
        horizontalLayout_8 = new QHBoxLayout(tabBreakpoints);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(2, 2, 2, 0);
        tblBreakpoints = new QTableView(tabBreakpoints);
        tblBreakpoints->setObjectName("tblBreakpoints");
        tblBreakpoints->setAlternatingRowColors(true);
        tblBreakpoints->setSelectionMode(QAbstractItemView::SelectionMode::NoSelection);
        tblBreakpoints->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectItems);
        tblBreakpoints->setTextElideMode(Qt::TextElideMode::ElideLeft);
        tblBreakpoints->horizontalHeader()->setStretchLastSection(true);

        horizontalLayout_8->addWidget(tblBreakpoints);

        debugViews->addTab(tabBreakpoints, QString());
        tabLocals = new QWidget();
        tabLocals->setObjectName("tabLocals");
        horizontalLayout_9 = new QHBoxLayout(tabLocals);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_9->setContentsMargins(2, 2, 2, 0);
        txtLocals = new QPlainTextEdit(tabLocals);
        txtLocals->setObjectName("txtLocals");
        txtLocals->setUndoRedoEnabled(false);
        txtLocals->setReadOnly(true);

        horizontalLayout_9->addWidget(txtLocals);

        debugViews->addTab(tabLocals, QString());
        tabMemory = new QWidget();
        tabMemory->setObjectName("tabMemory");
        gridLayout = new QGridLayout(tabMemory);
        gridLayout->setObjectName("gridLayout");
        label_3 = new QLabel(tabMemory);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        tblMemoryView = new QTableView(tabMemory);
        tblMemoryView->setObjectName("tblMemoryView");
        tblMemoryView->horizontalHeader()->setVisible(false);
        tblMemoryView->horizontalHeader()->setMinimumSectionSize(20);

        gridLayout->addWidget(tblMemoryView, 1, 0, 1, 2);

        cbMemoryAddress = new QComboBox(tabMemory);
        cbMemoryAddress->setObjectName("cbMemoryAddress");
        sizePolicy4.setHeightForWidth(cbMemoryAddress->sizePolicy().hasHeightForWidth());
        cbMemoryAddress->setSizePolicy(sizePolicy4);
        cbMemoryAddress->setEditable(true);
        cbMemoryAddress->setInsertPolicy(QComboBox::InsertPolicy::NoInsert);

        gridLayout->addWidget(cbMemoryAddress, 0, 1, 1, 1);

        debugViews->addTab(tabMemory, QString());
        splitterDebug->addWidget(debugViews);

        horizontalLayout_4->addWidget(splitterDebug);

        tabMessages->addTab(tabDebug, QString());
        tabSearch = new QWidget();
        tabSearch->setObjectName("tabSearch");
        verticalLayout_4 = new QVBoxLayout(tabSearch);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(5, 5, 5, 5);
        searchHistoryPanel = new QWidget(tabSearch);
        searchHistoryPanel->setObjectName("searchHistoryPanel");
        horizontalLayout_11 = new QHBoxLayout(searchHistoryPanel);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(searchHistoryPanel);
        label->setObjectName("label");
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy5);

        horizontalLayout_11->addWidget(label);

        cbSearchHistory = new QComboBox(searchHistoryPanel);
        cbSearchHistory->setObjectName("cbSearchHistory");
        QSizePolicy sizePolicy6(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(cbSearchHistory->sizePolicy().hasHeightForWidth());
        cbSearchHistory->setSizePolicy(sizePolicy6);
        cbSearchHistory->setMinimumSize(QSize(150, 0));
        cbSearchHistory->setSizeAdjustPolicy(QComboBox::SizeAdjustPolicy::AdjustToContents);

        horizontalLayout_11->addWidget(cbSearchHistory);

        btnSearchAgain = new QPushButton(searchHistoryPanel);
        btnSearchAgain->setObjectName("btnSearchAgain");
        btnSearchAgain->setEnabled(false);
        sizePolicy6.setHeightForWidth(btnSearchAgain->sizePolicy().hasHeightForWidth());
        btnSearchAgain->setSizePolicy(sizePolicy6);

        horizontalLayout_11->addWidget(btnSearchAgain);

        horizontalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer);


        verticalLayout_4->addWidget(searchHistoryPanel);

        replacePanel = new QWidget(tabSearch);
        replacePanel->setObjectName("replacePanel");
        horizontalLayout_12 = new QHBoxLayout(replacePanel);
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(replacePanel);
        label_2->setObjectName("label_2");

        horizontalLayout_12->addWidget(label_2);

        cbReplaceInHistory = new QComboBox(replacePanel);
        cbReplaceInHistory->setObjectName("cbReplaceInHistory");
        cbReplaceInHistory->setMinimumSize(QSize(150, 0));
        cbReplaceInHistory->setEditable(true);
        cbReplaceInHistory->setInsertPolicy(QComboBox::InsertPolicy::NoInsert);
        cbReplaceInHistory->setSizeAdjustPolicy(QComboBox::SizeAdjustPolicy::AdjustToContents);

        horizontalLayout_12->addWidget(cbReplaceInHistory);

        chkOpenFileInEditors = new QCheckBox(replacePanel);
        chkOpenFileInEditors->setObjectName("chkOpenFileInEditors");

        horizontalLayout_12->addWidget(chkOpenFileInEditors);

        btnReplace = new QPushButton(replacePanel);
        btnReplace->setObjectName("btnReplace");

        horizontalLayout_12->addWidget(btnReplace);

        btnCancelReplace = new QPushButton(replacePanel);
        btnCancelReplace->setObjectName("btnCancelReplace");

        horizontalLayout_12->addWidget(btnCancelReplace);

        horizontalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_2);


        verticalLayout_4->addWidget(replacePanel);

        searchView = new QTreeView(tabSearch);
        searchView->setObjectName("searchView");
        searchView->header()->setVisible(false);

        verticalLayout_4->addWidget(searchView);

        tabMessages->addTab(tabSearch, QString());
        tabTODO = new QWidget();
        tabTODO->setObjectName("tabTODO");
        horizontalLayout_5 = new QHBoxLayout(tabTODO);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(5, 5, 5, 5);
        tableTODO = new QTableView(tabTODO);
        tableTODO->setObjectName("tableTODO");
        tableTODO->horizontalHeader()->setStretchLastSection(true);

        horizontalLayout_5->addWidget(tableTODO);

        tabMessages->addTab(tabTODO, QString());
        tabBookmark = new QWidget();
        tabBookmark->setObjectName("tabBookmark");
        horizontalLayout_14 = new QHBoxLayout(tabBookmark);
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        horizontalLayout_14->setContentsMargins(5, 5, 5, 5);
        tableBookmark = new QTableView(tabBookmark);
        tableBookmark->setObjectName("tableBookmark");
        tableBookmark->setAlternatingRowColors(true);
        tableBookmark->setSelectionMode(QAbstractItemView::SelectionMode::NoSelection);
        tableBookmark->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectItems);
        tableBookmark->setSortingEnabled(true);
        tableBookmark->horizontalHeader()->setStretchLastSection(true);

        horizontalLayout_14->addWidget(tableBookmark);

        tabMessages->addTab(tabBookmark, QString());
        tabProblem = new QWidget();
        tabProblem->setObjectName("tabProblem");
        verticalLayout_8 = new QVBoxLayout(tabProblem);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(5, 5, 5, 5);
        splitterProblem = new QSplitter(tabProblem);
        splitterProblem->setObjectName("splitterProblem");
        splitterProblem->setOrientation(Qt::Orientation::Horizontal);
        panelProblemCaseInfo = new QWidget(splitterProblem);
        panelProblemCaseInfo->setObjectName("panelProblemCaseInfo");
        verticalLayout_7 = new QVBoxLayout(panelProblemCaseInfo);
        verticalLayout_7->setSpacing(3);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        lblProblem = new QLabel(panelProblemCaseInfo);
        lblProblem->setObjectName("lblProblem");
        lblProblem->setFrameShape(QFrame::Shape::NoFrame);
        lblProblem->setMargin(5);
        lblProblem->setOpenExternalLinks(true);

        verticalLayout_7->addWidget(lblProblem);

        widget_3 = new QWidget(panelProblemCaseInfo);
        widget_3->setObjectName("widget_3");
        widget_3->setMinimumSize(QSize(0, 0));
        horizontalLayout_16 = new QHBoxLayout(widget_3);
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        horizontalLayout_16->setContentsMargins(0, 0, 0, 0);

        verticalLayout_7->addWidget(widget_3);

        widget_6 = new QWidget(panelProblemCaseInfo);
        widget_6->setObjectName("widget_6");
        horizontalLayout_17 = new QHBoxLayout(widget_6);
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        horizontalLayout_17->setContentsMargins(0, 0, 0, 0);
        btnAddProblemCase = new QToolButton(widget_6);
        btnAddProblemCase->setObjectName("btnAddProblemCase");
        QIcon icon40;
        icon40.addFile(QString::fromUtf8(":/resources/iconsets/newlook/actions/00Misc-03Add.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btnAddProblemCase->setIcon(icon40);

        horizontalLayout_17->addWidget(btnAddProblemCase);

        btnRemoveProblemCase = new QToolButton(widget_6);
        btnRemoveProblemCase->setObjectName("btnRemoveProblemCase");
        QIcon icon41;
        icon41.addFile(QString::fromUtf8(":/resources/iconsets/newlook/actions/00Misc-04Remove.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btnRemoveProblemCase->setIcon(icon41);

        horizontalLayout_17->addWidget(btnRemoveProblemCase);

        btnOpenProblemAnswer = new QToolButton(widget_6);
        btnOpenProblemAnswer->setObjectName("btnOpenProblemAnswer");
        QIcon icon42;
        icon42.addFile(QString::fromUtf8(":/resources/iconsets/newlook/actions/08Problem-04EditSource.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btnOpenProblemAnswer->setIcon(icon42);

        horizontalLayout_17->addWidget(btnOpenProblemAnswer);

        line = new QFrame(widget_6);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        horizontalLayout_17->addWidget(line);

        btnRunAllProblemCases = new QToolButton(widget_6);
        btnRunAllProblemCases->setObjectName("btnRunAllProblemCases");
        QIcon icon43;
        icon43.addFile(QString::fromUtf8(":/resources/iconsets/newlook/actions/08Problem-05RunCases.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btnRunAllProblemCases->setIcon(icon43);

        horizontalLayout_17->addWidget(btnRunAllProblemCases);

        btnCaseValidateOptions = new QToolButton(widget_6);
        btnCaseValidateOptions->setObjectName("btnCaseValidateOptions");
        btnCaseValidateOptions->setIcon(icon6);

        horizontalLayout_17->addWidget(btnCaseValidateOptions);

        horizontalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_4);

        pbProblemCases = new QProgressBar(widget_6);
        pbProblemCases->setObjectName("pbProblemCases");
        sizePolicy6.setHeightForWidth(pbProblemCases->sizePolicy().hasHeightForWidth());
        pbProblemCases->setSizePolicy(sizePolicy6);
        pbProblemCases->setMaximum(0);
        pbProblemCases->setValue(0);

        horizontalLayout_17->addWidget(pbProblemCases);


        verticalLayout_7->addWidget(widget_6);

        tblProblemCases = new QTableView(panelProblemCaseInfo);
        tblProblemCases->setObjectName("tblProblemCases");
        tblProblemCases->setDragEnabled(true);
        tblProblemCases->setDragDropOverwriteMode(false);
        tblProblemCases->setDragDropMode(QAbstractItemView::DragDropMode::NoDragDrop);
        tblProblemCases->setDefaultDropAction(Qt::DropAction::IgnoreAction);
        tblProblemCases->setAlternatingRowColors(true);
        tblProblemCases->setSelectionMode(QAbstractItemView::SelectionMode::NoSelection);
        tblProblemCases->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectItems);
        tblProblemCases->horizontalHeader()->setDefaultSectionSize(200);
        tblProblemCases->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_7->addWidget(tblProblemCases);

        splitterProblem->addWidget(panelProblemCaseInfo);
        panelProblemCase = new QWidget(splitterProblem);
        panelProblemCase->setObjectName("panelProblemCase");
        gridLayout_3 = new QGridLayout(panelProblemCase);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        widgetProblemCaseInputCaption = new QWidget(panelProblemCase);
        widgetProblemCaseInputCaption->setObjectName("widgetProblemCaseInputCaption");
        gridLayout_4 = new QGridLayout(widgetProblemCaseInputCaption);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        txtProblemCaseInputFileName = new QLineEdit(widgetProblemCaseInputCaption);
        txtProblemCaseInputFileName->setObjectName("txtProblemCaseInputFileName");
        txtProblemCaseInputFileName->setEnabled(false);
        txtProblemCaseInputFileName->setReadOnly(true);

        gridLayout_4->addWidget(txtProblemCaseInputFileName, 0, 1, 1, 1);

        btnProblemCaseInputFileName = new QToolButton(widgetProblemCaseInputCaption);
        btnProblemCaseInputFileName->setObjectName("btnProblemCaseInputFileName");
        QIcon icon44;
        icon44.addFile(QString::fromUtf8(":/resources/iconsets/newlook/actions/00Misc-07Folder.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btnProblemCaseInputFileName->setIcon(icon44);

        gridLayout_4->addWidget(btnProblemCaseInputFileName, 0, 3, 1, 1);

        btnProblemCaseClearInputFileName = new QToolButton(widgetProblemCaseInputCaption);
        btnProblemCaseClearInputFileName->setObjectName("btnProblemCaseClearInputFileName");

        gridLayout_4->addWidget(btnProblemCaseClearInputFileName, 0, 2, 1, 1);

        label_4 = new QLabel(widgetProblemCaseInputCaption);
        label_4->setObjectName("label_4");

        gridLayout_4->addWidget(label_4, 0, 0, 1, 1);


        gridLayout_3->addWidget(widgetProblemCaseInputCaption, 0, 0, 1, 1);

        lblProblemCaseInput = new QLabel(panelProblemCase);
        lblProblemCaseInput->setObjectName("lblProblemCaseInput");

        gridLayout_3->addWidget(lblProblemCaseInput, 3, 0, 1, 1);

        txtProblemCaseInput = new LineNumberTextEditor(panelProblemCase);
        txtProblemCaseInput->setObjectName("txtProblemCaseInput");
        sizePolicy3.setHeightForWidth(txtProblemCaseInput->sizePolicy().hasHeightForWidth());
        txtProblemCaseInput->setSizePolicy(sizePolicy3);
        txtProblemCaseInput->setLineWrapMode(QPlainTextEdit::LineWrapMode::NoWrap);

        gridLayout_3->addWidget(txtProblemCaseInput, 2, 0, 1, 1);

        txtProblemCaseExpected = new LineNumberTextEditor(panelProblemCase);
        txtProblemCaseExpected->setObjectName("txtProblemCaseExpected");
        sizePolicy3.setHeightForWidth(txtProblemCaseExpected->sizePolicy().hasHeightForWidth());
        txtProblemCaseExpected->setSizePolicy(sizePolicy3);
        txtProblemCaseExpected->setLineWrapMode(QPlainTextEdit::LineWrapMode::NoWrap);

        gridLayout_3->addWidget(txtProblemCaseExpected, 2, 3, 1, 1);

        txtProblemCaseOutput = new LineNumberTextEditor(panelProblemCase);
        txtProblemCaseOutput->setObjectName("txtProblemCaseOutput");
        sizePolicy3.setHeightForWidth(txtProblemCaseOutput->sizePolicy().hasHeightForWidth());
        txtProblemCaseOutput->setSizePolicy(sizePolicy3);
        txtProblemCaseOutput->setLineWrapMode(QPlainTextEdit::LineWrapMode::NoWrap);
        txtProblemCaseOutput->setReadOnly(true);

        gridLayout_3->addWidget(txtProblemCaseOutput, 2, 2, 1, 1);

        widgetProblemCaseExpectedCaption = new QWidget(panelProblemCase);
        widgetProblemCaseExpectedCaption->setObjectName("widgetProblemCaseExpectedCaption");
        horizontalLayout_18 = new QHBoxLayout(widgetProblemCaseExpectedCaption);
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        horizontalLayout_18->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widgetProblemCaseExpectedCaption);
        label_5->setObjectName("label_5");

        horizontalLayout_18->addWidget(label_5);

        txtProblemCaseExpectedOutputFileName = new QLineEdit(widgetProblemCaseExpectedCaption);
        txtProblemCaseExpectedOutputFileName->setObjectName("txtProblemCaseExpectedOutputFileName");
        txtProblemCaseExpectedOutputFileName->setEnabled(false);
        txtProblemCaseExpectedOutputFileName->setReadOnly(true);

        horizontalLayout_18->addWidget(txtProblemCaseExpectedOutputFileName);

        btnProblemCaseClearExpectedOutputFileName = new QToolButton(widgetProblemCaseExpectedCaption);
        btnProblemCaseClearExpectedOutputFileName->setObjectName("btnProblemCaseClearExpectedOutputFileName");

        horizontalLayout_18->addWidget(btnProblemCaseClearExpectedOutputFileName);

        btnProblemCaseExpectedOutputFileName = new QToolButton(widgetProblemCaseExpectedCaption);
        btnProblemCaseExpectedOutputFileName->setObjectName("btnProblemCaseExpectedOutputFileName");
        btnProblemCaseExpectedOutputFileName->setIcon(icon44);

        horizontalLayout_18->addWidget(btnProblemCaseExpectedOutputFileName);


        gridLayout_3->addWidget(widgetProblemCaseExpectedCaption, 0, 3, 1, 1);

        widgetProblemCaseOutputCaption = new QWidget(panelProblemCase);
        widgetProblemCaseOutputCaption->setObjectName("widgetProblemCaseOutputCaption");
        horizontalLayout_19 = new QHBoxLayout(widgetProblemCaseOutputCaption);
        horizontalLayout_19->setObjectName("horizontalLayout_19");
        horizontalLayout_19->setContentsMargins(0, 0, 0, 0);
        lblProblemCaseOutputCaption = new QLabel(widgetProblemCaseOutputCaption);
        lblProblemCaseOutputCaption->setObjectName("lblProblemCaseOutputCaption");

        horizontalLayout_19->addWidget(lblProblemCaseOutputCaption);

        horizontalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_5);

        cbProblemCaseValidateType = new QComboBox(widgetProblemCaseOutputCaption);
        cbProblemCaseValidateType->setObjectName("cbProblemCaseValidateType");

        horizontalLayout_19->addWidget(cbProblemCaseValidateType);


        gridLayout_3->addWidget(widgetProblemCaseOutputCaption, 0, 2, 1, 1);

        lblProblemCaseExpected = new QLabel(panelProblemCase);
        lblProblemCaseExpected->setObjectName("lblProblemCaseExpected");

        gridLayout_3->addWidget(lblProblemCaseExpected, 3, 3, 1, 1);

        lblProblemCaseOutput = new QLabel(panelProblemCase);
        lblProblemCaseOutput->setObjectName("lblProblemCaseOutput");

        gridLayout_3->addWidget(lblProblemCaseOutput, 3, 2, 1, 1);

        splitterProblem->addWidget(panelProblemCase);

        verticalLayout_8->addWidget(splitterProblem);

        tabMessages->addTab(tabProblem, QString());
        dockMessages->setWidget(tabMessages);
        MainWindow->addDockWidget(Qt::DockWidgetArea::BottomDockWidgetArea, dockMessages);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuSelection->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuSearch->menuAction());
        menubar->addAction(menuCode->menuAction());
        menubar->addAction(menuRefactor->menuAction());
        menubar->addAction(menuProject->menuAction());
        menubar->addAction(menuExecute->menuAction());
        menubar->addAction(menuTools->menuAction());
        menubar->addAction(menuWindow->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionOpen_Folder);
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSaveAs);
        menuFile->addAction(actionSaveAll);
        menuFile->addSeparator();
        menuFile->addAction(actionClose);
        menuFile->addAction(actionClose_Project);
        menuFile->addSeparator();
        menuFile->addAction(actionClose_All);
        menuFile->addAction(actionPrint);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuTools->addAction(actionOptions);
        menuExecute->addAction(actionCompile);
        menuExecute->addAction(actionRun);
        menuExecute->addAction(actionRebuild);
        menuExecute->addAction(actionGenerate_Assembly);
        menuExecute->addAction(actionGenerate_GIMPLE);
        menuExecute->addAction(actionPreprocess);
        menuExecute->addSeparator();
        menuExecute->addAction(actionRun_Parameters);
        menuExecute->addAction(actionCompiler_Options);
        menuExecute->addSeparator();
        menuExecute->addAction(actionDebug);
        menuExecute->addAction(actionInterrupt);
        menuExecute->addAction(actionStep_Over);
        menuExecute->addAction(actionStep_Into);
        menuExecute->addAction(actionStep_Out);
        menuExecute->addAction(actionRun_To_Cursor);
        menuExecute->addAction(actionContinue);
        menuExecute->addAction(actionStop_Execution);
        menuExecute->addSeparator();
        menuExecute->addAction(actionAdd_Watch);
        menuExecute->addAction(actionAdd_Watchpoint);
        menuExecute->addAction(actionView_CPU_Window);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addSeparator();
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionPaste_indentation);
        menuEdit->addSeparator();
        menuEdit->addAction(actionIndent);
        menuEdit->addAction(actionUnIndent);
        menuEdit->addSeparator();
        menuEdit->addAction(actionToggleComment);
        menuEdit->addAction(actionToggle_Block_Comment);
        menuEdit->addSeparator();
        menuEdit->addAction(menuFile_Type->menuAction());
        menuEdit->addSeparator();
        menuEdit->addAction(actionFoldAll);
        menuEdit->addAction(actionUnfoldAll);
        menuEdit->addSeparator();
        menuEdit->addAction(menuMove_Caret->menuAction());
        menuEdit->addAction(actionDelete_Line);
        menuEdit->addAction(actionDuplicate_Line);
        menuEdit->addAction(actionDelete_Word);
        menuEdit->addAction(actionDelete_Last_Word);
        menuEdit->addAction(actionDelete_to_Word_End);
        menuEdit->addAction(actionDelete_to_BOL);
        menuEdit->addAction(actionDelete_to_EOL);
        menuEdit->addSeparator();
        menuEdit->addAction(actionToggle_Readonly);
        menuMove_Caret->addAction(actionPage_Up);
        menuMove_Caret->addAction(actionPage_Down);
        menuMove_Caret->addAction(actionGoto_Line_Start);
        menuMove_Caret->addAction(actionGoto_Line_End);
        menuMove_Caret->addAction(actionGoto_File_Start);
        menuMove_Caret->addAction(actionGoto_File_End);
        menuMove_Caret->addAction(actionGoto_Page_Start);
        menuMove_Caret->addAction(actionGoto_Page_End);
        menuFile_Type->addAction(actionC_C_Header);
        menuFile_Type->addAction(actionC_File);
        menuFile_Type->addAction(actionCPP_File);
        menuFile_Type->addAction(actionATT_ASM);
        menuFile_Type->addAction(actionIntel_ASM);
        menuFile_Type->addAction(actionText_File);
        menuSearch->addAction(actionFind);
        menuSearch->addAction(actionFind_in_files);
        menuSearch->addAction(actionReplace);
        menuSearch->addSeparator();
        menuSearch->addAction(actionFind_Next);
        menuSearch->addAction(actionFind_Previous);
        menuCode->addSeparator();
        menuCode->addAction(actionBack);
        menuCode->addAction(actionForward);
        menuCode->addSeparator();
        menuCode->addAction(actionMatch_Bracket);
        menuCode->addAction(actionGo_to_Line);
        menuCode->addAction(actionGoto_block_start);
        menuCode->addAction(actionGoto_block_end);
        menuCode->addSeparator();
        menuCode->addAction(actionCode_Completion);
        menuCode->addSeparator();
        menuCode->addAction(actionToggle_Bookmark);
        menuCode->addAction(actionModify_Bookmark_Description);
        menuCode->addSeparator();
        menuCode->addAction(actionTrim_trailing_spaces);
        menuCode->addAction(actionReformat_Code);
        menuWindow->addAction(actionClose_All);
        menuWindow->addAction(actionClose);
        menuWindow->addAction(actionMaximize_Editor);
        menuWindow->addSeparator();
        menuWindow->addAction(actionMove_To_Other_View);
        menuWindow->addAction(actionNext_Editor);
        menuWindow->addAction(actionPrevious_Editor);
        menuProject->addAction(actionProject_New_File);
        menuProject->addAction(actionNew_Class);
        menuProject->addAction(actionNew_Header);
        menuProject->addAction(actionAdd_to_project);
        menuProject->addAction(actionRemove_from_project);
        menuProject->addSeparator();
        menuProject->addAction(actionProject_Open_Folder_In_Explorer);
        menuProject->addAction(actionProject_Open_In_Terminal);
        menuProject->addSeparator();
        menuProject->addSeparator();
        menuProject->addAction(actionView_Makefile);
        menuProject->addAction(actionMakeClean);
        menuProject->addSeparator();
        menuProject->addAction(actionProject_options);
        menuHelp->addAction(actionDocument);
        menuHelp->addAction(actionC_Reference);
        menuHelp->addAction(actionC_C_Reference);
        menuHelp->addSeparator();
        menuHelp->addAction(actionOI_Wiki);
        menuHelp->addAction(actionRaylib_Manual);
        menuHelp->addAction(actionEGE_Manual);
        menuHelp->addAction(actionTurtle_Graphics_Manual);
        menuHelp->addSeparator();
        menuHelp->addAction(actionGNU_Assembler_Manual);
        menuHelp->addAction(actionx86_Assembly_Language_Reference_Manual);
        menuHelp->addAction(actionIA_32_Assembly_Language_Reference_Manual);
        menuHelp->addSeparator();
        menuHelp->addAction(actionWebsite);
        menuHelp->addAction(actionSubmit_Issues);
        menuHelp->addAction(actionAbout);
        menuRefactor->addAction(actionRename_Symbol);
        menuView->addAction(actionTool_Window_Bars);
        menuView->addAction(menuTool_Windows->menuAction());
        menuView->addAction(actionStatus_Bar);
        menuView->addSeparator();
        menuView->addAction(actionToggle_Explorer_Panel);
        menuView->addAction(actionToggle_Messages_Panel);
        menuTool_Windows->addAction(actionProject);
        menuTool_Windows->addAction(actionWatch);
        menuTool_Windows->addAction(actionStructure);
        menuTool_Windows->addAction(actionFiles);
        menuTool_Windows->addAction(actionProblem_Set);
        menuTool_Windows->addSeparator();
        menuTool_Windows->addAction(actionIssues);
        menuTool_Windows->addAction(actionTools_Output);
        menuTool_Windows->addAction(actionDebug_Window);
        menuTool_Windows->addAction(actionSearch);
        menuTool_Windows->addAction(actionTODO);
        menuTool_Windows->addAction(actionBookmark);
        menuTool_Windows->addAction(actionProblem);
        menuSelection->addAction(actionSelectAll);
        menuSelection->addAction(actionSelect_Word);
        menuSelection->addSeparator();
        menuSelection->addAction(actionMove_Selection_Up);
        menuSelection->addAction(actionMove_Selection_Down);
        menuSelection->addSeparator();
        menuSelection->addAction(actionPage_Up_and_Select);
        menuSelection->addAction(actionPage_Down_and_Select);
        menuSelection->addAction(actionGoto_Page_Start_and_Select);
        menuSelection->addAction(actionGoto_Page_End_and_Select);
        menuSelection->addAction(actionGoto_Line_Start_and_Select);
        menuSelection->addAction(actionGoto_Line_End_and_Select);
        menuSelection->addAction(actionGoto_File_Start_and_Select);
        menuSelection->addAction(actionGoto_File_End_and_Select);
        toolbarMain->addAction(actionNew);
        toolbarMain->addAction(actionOpen);
        toolbarMain->addAction(actionSave);
        toolbarMain->addAction(actionSaveAs);
        toolbarMain->addAction(actionSaveAll);
        toolbarCode->addAction(actionBack);
        toolbarCode->addAction(actionForward);
        toolbarCode->addSeparator();
        toolbarCode->addAction(actionReformat_Code);
        toolbarCompile->addAction(actionCompile);
        toolbarCompile->addAction(actionRun);
        toolbarCompile->addAction(actionRebuild);
        toolbarCompile->addSeparator();
        toolbarCompile->addAction(actionRun_Parameters);
        toolbarDebug->addAction(actionDebug);
        toolbarDebug->addAction(actionInterrupt);
        toolbarDebug->addAction(actionStep_Over);
        toolbarDebug->addAction(actionStep_Into);
        toolbarDebug->addAction(actionStep_Out);
        toolbarDebug->addAction(actionRun_To_Cursor);
        toolbarDebug->addAction(actionContinue);
        toolbarDebug->addAction(actionStop_Execution);
        toolbarDebug->addSeparator();
        toolbarDebug->addAction(actionAdd_Watch);
        toolbarCompilerSet->addAction(actionCompiler_Options);

        retranslateUi(MainWindow);

        EditorTabsLeft->setCurrentIndex(-1);
        tabExplorer->setCurrentIndex(1);
        tabMessages->setCurrentIndex(2);
        debugViews->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "RedPandaIDE CE", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "New C/C++ File", nullptr));
#if QT_CONFIG(tooltip)
        actionNew->setToolTip(QCoreApplication::translate("MainWindow", "New Source File", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open...", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSaveAs->setText(QCoreApplication::translate("MainWindow", "Save As...", nullptr));
#if QT_CONFIG(tooltip)
        actionSaveAs->setToolTip(QCoreApplication::translate("MainWindow", "Save As", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionSaveAs->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSaveAll->setText(QCoreApplication::translate("MainWindow", "Save All", nullptr));
#if QT_CONFIG(shortcut)
        actionSaveAll->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+K, Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOptions->setText(QCoreApplication::translate("MainWindow", "Options", nullptr));
        actionCompile->setText(QCoreApplication::translate("MainWindow", "Compile", nullptr));
#if QT_CONFIG(tooltip)
        actionCompile->setToolTip(QCoreApplication::translate("MainWindow", "Compile", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionCompile->setShortcut(QCoreApplication::translate("MainWindow", "F9", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRun->setText(QCoreApplication::translate("MainWindow", "Run", nullptr));
#if QT_CONFIG(tooltip)
        actionRun->setToolTip(QCoreApplication::translate("MainWindow", "Run", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionRun->setShortcut(QCoreApplication::translate("MainWindow", "F11", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUndo->setText(QCoreApplication::translate("MainWindow", "Undo", nullptr));
#if QT_CONFIG(shortcut)
        actionUndo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRedo->setText(QCoreApplication::translate("MainWindow", "Redo", nullptr));
#if QT_CONFIG(shortcut)
        actionRedo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Y", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCut->setText(QCoreApplication::translate("MainWindow", "Cut", nullptr));
#if QT_CONFIG(shortcut)
        actionCut->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCopy->setText(QCoreApplication::translate("MainWindow", "Copy", nullptr));
#if QT_CONFIG(shortcut)
        actionCopy->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPaste->setText(QCoreApplication::translate("MainWindow", "Paste", nullptr));
#if QT_CONFIG(shortcut)
        actionPaste->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSelectAll->setText(QCoreApplication::translate("MainWindow", "Select All", nullptr));
#if QT_CONFIG(shortcut)
        actionSelectAll->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionIndent->setText(QCoreApplication::translate("MainWindow", "Indent", nullptr));
#if QT_CONFIG(shortcut)
        actionIndent->setShortcut(QCoreApplication::translate("MainWindow", "Tab", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUnIndent->setText(QCoreApplication::translate("MainWindow", "UnIndent", nullptr));
#if QT_CONFIG(shortcut)
        actionUnIndent->setShortcut(QCoreApplication::translate("MainWindow", "Shift+Tab", nullptr));
#endif // QT_CONFIG(shortcut)
        actionToggleComment->setText(QCoreApplication::translate("MainWindow", "Toggle Comment", nullptr));
#if QT_CONFIG(shortcut)
        actionToggleComment->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+/", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFoldAll->setText(QCoreApplication::translate("MainWindow", "Collapse All", nullptr));
        actionUnfoldAll->setText(QCoreApplication::translate("MainWindow", "Uncollapse All", nullptr));
        actionEncode_in_ANSI->setText(QCoreApplication::translate("MainWindow", "Encode in ANSI", nullptr));
        actionEncode_in_UTF_8->setText(QCoreApplication::translate("MainWindow", "Encode in UTF-8", nullptr));
        actionAuto_Detect->setText(QCoreApplication::translate("MainWindow", "Auto Detect", nullptr));
        actionConvert_to_ANSI->setText(QCoreApplication::translate("MainWindow", "Convert to ANSI", nullptr));
        actionConvert_to_UTF_8->setText(QCoreApplication::translate("MainWindow", "Convert to UTF-8", nullptr));
        actionRebuild->setText(QCoreApplication::translate("MainWindow", "Rebuild All", nullptr));
#if QT_CONFIG(tooltip)
        actionRebuild->setToolTip(QCoreApplication::translate("MainWindow", "Rebuild All", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionRebuild->setShortcut(QCoreApplication::translate("MainWindow", "F12", nullptr));
#endif // QT_CONFIG(shortcut)
        actionStop_Execution->setText(QCoreApplication::translate("MainWindow", "Stop Execution", nullptr));
#if QT_CONFIG(shortcut)
        actionStop_Execution->setShortcut(QCoreApplication::translate("MainWindow", "F6", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDebug->setText(QCoreApplication::translate("MainWindow", "Debug", nullptr));
#if QT_CONFIG(tooltip)
        actionDebug->setToolTip(QCoreApplication::translate("MainWindow", "Debug", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionDebug->setShortcut(QCoreApplication::translate("MainWindow", "F5", nullptr));
#endif // QT_CONFIG(shortcut)
        actionStep_Over->setText(QCoreApplication::translate("MainWindow", "Step Over", nullptr));
#if QT_CONFIG(shortcut)
        actionStep_Over->setShortcut(QCoreApplication::translate("MainWindow", "F8", nullptr));
#endif // QT_CONFIG(shortcut)
        actionStep_Into->setText(QCoreApplication::translate("MainWindow", "Step Into", nullptr));
#if QT_CONFIG(shortcut)
        actionStep_Into->setShortcut(QCoreApplication::translate("MainWindow", "F7", nullptr));
#endif // QT_CONFIG(shortcut)
        actionStep_Out->setText(QCoreApplication::translate("MainWindow", "Step Out", nullptr));
#if QT_CONFIG(shortcut)
        actionStep_Out->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+F8", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRun_To_Cursor->setText(QCoreApplication::translate("MainWindow", "Run To Cursor", nullptr));
#if QT_CONFIG(shortcut)
        actionRun_To_Cursor->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+F5", nullptr));
#endif // QT_CONFIG(shortcut)
        actionContinue->setText(QCoreApplication::translate("MainWindow", "Continue", nullptr));
#if QT_CONFIG(shortcut)
        actionContinue->setShortcut(QCoreApplication::translate("MainWindow", "F4", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAdd_Watch->setText(QCoreApplication::translate("MainWindow", "Add Watch...", nullptr));
        actionView_CPU_Window->setText(QCoreApplication::translate("MainWindow", "View CPU Window...", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionFind->setText(QCoreApplication::translate("MainWindow", "Find...", nullptr));
#if QT_CONFIG(shortcut)
        actionFind->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFind_in_files->setText(QCoreApplication::translate("MainWindow", "Find in Files...", nullptr));
#if QT_CONFIG(shortcut)
        actionFind_in_files->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionReplace->setText(QCoreApplication::translate("MainWindow", "Replace...", nullptr));
#if QT_CONFIG(shortcut)
        actionReplace->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFind_Next->setText(QCoreApplication::translate("MainWindow", "Find Next", nullptr));
#if QT_CONFIG(shortcut)
        actionFind_Next->setShortcut(QCoreApplication::translate("MainWindow", "F3", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFind_Previous->setText(QCoreApplication::translate("MainWindow", "Find Previous", nullptr));
#if QT_CONFIG(shortcut)
        actionFind_Previous->setShortcut(QCoreApplication::translate("MainWindow", "Shift+F3", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRemove_Watch->setText(QCoreApplication::translate("MainWindow", "Remove Watch", nullptr));
        actionRemove_All_Watches->setText(QCoreApplication::translate("MainWindow", "Remove All Watches", nullptr));
        actionModify_Watch->setText(QCoreApplication::translate("MainWindow", "Modify Watch...", nullptr));
        actionReformat_Code->setText(QCoreApplication::translate("MainWindow", "Reformat Code", nullptr));
#if QT_CONFIG(shortcut)
        actionReformat_Code->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionBack->setText(QCoreApplication::translate("MainWindow", "Go back", nullptr));
#if QT_CONFIG(shortcut)
        actionBack->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+Left", nullptr));
#endif // QT_CONFIG(shortcut)
        actionForward->setText(QCoreApplication::translate("MainWindow", "Forward", nullptr));
#if QT_CONFIG(shortcut)
        actionForward->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+Right", nullptr));
#endif // QT_CONFIG(shortcut)
        actionClose->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
#if QT_CONFIG(shortcut)
        actionClose->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+W", nullptr));
#endif // QT_CONFIG(shortcut)
        actionClose_All->setText(QCoreApplication::translate("MainWindow", "Close All", nullptr));
#if QT_CONFIG(shortcut)
        actionClose_All->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+W", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMaximize_Editor->setText(QCoreApplication::translate("MainWindow", "Maximize Editor", nullptr));
#if QT_CONFIG(shortcut)
        actionMaximize_Editor->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+F11", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNext_Editor->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
#if QT_CONFIG(shortcut)
        actionNext_Editor->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Tab", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPrevious_Editor->setText(QCoreApplication::translate("MainWindow", "Previous", nullptr));
#if QT_CONFIG(shortcut)
        actionPrevious_Editor->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+Tab", nullptr));
#endif // QT_CONFIG(shortcut)
        actionToggle_Breakpoint->setText(QCoreApplication::translate("MainWindow", "Toggle breakpoint", nullptr));
#if QT_CONFIG(shortcut)
        actionToggle_Breakpoint->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+F4", nullptr));
#endif // QT_CONFIG(shortcut)
        actionClear_all_breakpoints->setText(QCoreApplication::translate("MainWindow", "Clear all breakpoints", nullptr));
        actionBreakpoint_property->setText(QCoreApplication::translate("MainWindow", "Breakpoint property...", nullptr));
        actionGoto_Declaration->setText(QCoreApplication::translate("MainWindow", "Goto Declaration", nullptr));
#if QT_CONFIG(shortcut)
        actionGoto_Declaration->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+J", nullptr));
#endif // QT_CONFIG(shortcut)
        actionGoto_Definition->setText(QCoreApplication::translate("MainWindow", "Goto Definition", nullptr));
#if QT_CONFIG(shortcut)
        actionGoto_Definition->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+J", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFind_references->setText(QCoreApplication::translate("MainWindow", "Find references", nullptr));
        actionOpen_Containing_Folder->setText(QCoreApplication::translate("MainWindow", "Open containing folder", nullptr));
        actionOpen_Terminal->setText(QCoreApplication::translate("MainWindow", "Open a terminal here", nullptr));
        actionFile_Properties->setText(QCoreApplication::translate("MainWindow", "File Properties...", nullptr));
        actionClose_Project->setText(QCoreApplication::translate("MainWindow", "Close Project", nullptr));
        actionProject_options->setText(QCoreApplication::translate("MainWindow", "Project options", nullptr));
        actionNew_Project->setText(QCoreApplication::translate("MainWindow", "New Project...", nullptr));
        actionProject_New_File->setText(QCoreApplication::translate("MainWindow", "New Project File", nullptr));
#if QT_CONFIG(tooltip)
        actionProject_New_File->setToolTip(QCoreApplication::translate("MainWindow", "New Project File", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAdd_to_project->setText(QCoreApplication::translate("MainWindow", "Add to project...", nullptr));
        actionRemove_from_project->setText(QCoreApplication::translate("MainWindow", "Remove from project", nullptr));
        actionView_Makefile->setText(QCoreApplication::translate("MainWindow", "View Makefile", nullptr));
        actionMakeClean->setText(QCoreApplication::translate("MainWindow", "Clean", nullptr));
        actionProject_Open_Folder_In_Explorer->setText(QCoreApplication::translate("MainWindow", "Open Folder in Explorer", nullptr));
        actionProject_Open_In_Terminal->setText(QCoreApplication::translate("MainWindow", "Open In Terminal", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        actionRename_Symbol->setText(QCoreApplication::translate("MainWindow", "Rename Symbol", nullptr));
#if QT_CONFIG(shortcut)
        actionRename_Symbol->setShortcut(QCoreApplication::translate("MainWindow", "Shift+F6", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPrint->setText(QCoreApplication::translate("MainWindow", "Print...", nullptr));
#if QT_CONFIG(shortcut)
        actionPrint->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExport_As_RTF->setText(QCoreApplication::translate("MainWindow", "Export As RTF", nullptr));
        actionExport_As_HTML->setText(QCoreApplication::translate("MainWindow", "Export As HTML", nullptr));
        actionMove_To_Other_View->setText(QCoreApplication::translate("MainWindow", "Move To Other View", nullptr));
#if QT_CONFIG(shortcut)
        actionMove_To_Other_View->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+M", nullptr));
#endif // QT_CONFIG(shortcut)
        actionC_C_Reference->setText(QCoreApplication::translate("MainWindow", "C++ Reference", nullptr));
#if QT_CONFIG(tooltip)
        actionC_C_Reference->setToolTip(QCoreApplication::translate("MainWindow", "C++ Reference", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEGE_Manual->setText(QCoreApplication::translate("MainWindow", "EGE Manual", nullptr));
        actionModify_Bookmark_Description->setText(QCoreApplication::translate("MainWindow", "Modify Bookmark Description", nullptr));
        actionLocate_in_Files_View->setText(QCoreApplication::translate("MainWindow", "Locate in Files View", nullptr));
        actionOpen_Folder->setText(QCoreApplication::translate("MainWindow", "Choose Working Folder", nullptr));
#if QT_CONFIG(tooltip)
        actionOpen_Folder->setToolTip(QCoreApplication::translate("MainWindow", "Choose Working Folder", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRun_Parameters->setText(QCoreApplication::translate("MainWindow", "Running Parameters...", nullptr));
        actionC_Reference->setText(QCoreApplication::translate("MainWindow", "C Reference", nullptr));
        actionTool_Window_Bars->setText(QCoreApplication::translate("MainWindow", "Show Tool Panels", nullptr));
        actionStatus_Bar->setText(QCoreApplication::translate("MainWindow", "Status Bar", nullptr));
        actionProject->setText(QCoreApplication::translate("MainWindow", "Project", nullptr));
        actionWatch->setText(QCoreApplication::translate("MainWindow", "Watch", nullptr));
        actionStructure->setText(QCoreApplication::translate("MainWindow", "Structure", nullptr));
        actionFiles->setText(QCoreApplication::translate("MainWindow", "Files", nullptr));
        actionProblem_Set->setText(QCoreApplication::translate("MainWindow", "Problem Set", nullptr));
        actionIssues->setText(QCoreApplication::translate("MainWindow", "Issues", nullptr));
        actionTools_Output->setText(QCoreApplication::translate("MainWindow", "Tools Output", nullptr));
        actionDebug_Window->setText(QCoreApplication::translate("MainWindow", "Debug", nullptr));
        actionSearch->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        actionTODO->setText(QCoreApplication::translate("MainWindow", "TODO", nullptr));
        actionBookmark->setText(QCoreApplication::translate("MainWindow", "Bookmark", nullptr));
        actionProblem->setText(QCoreApplication::translate("MainWindow", "Problem", nullptr));
        actionDelete_Line->setText(QCoreApplication::translate("MainWindow", "Delete Line", nullptr));
#if QT_CONFIG(shortcut)
        actionDelete_Line->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDuplicate_Line->setText(QCoreApplication::translate("MainWindow", "Duplicate Line", nullptr));
#if QT_CONFIG(shortcut)
        actionDuplicate_Line->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+D", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDelete_Word->setText(QCoreApplication::translate("MainWindow", "Delete Word", nullptr));
#if QT_CONFIG(shortcut)
        actionDelete_Word->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+D", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDelete_to_EOL->setText(QCoreApplication::translate("MainWindow", "Delete to EOL", nullptr));
#if QT_CONFIG(shortcut)
        actionDelete_to_EOL->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Del", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDelete_to_BOL->setText(QCoreApplication::translate("MainWindow", "Delete to BOL", nullptr));
#if QT_CONFIG(shortcut)
        actionDelete_to_BOL->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Backspace", nullptr));
#endif // QT_CONFIG(shortcut)
        actionInterrupt->setText(QCoreApplication::translate("MainWindow", "Interrupt", nullptr));
        actionDelete_Last_Word->setText(QCoreApplication::translate("MainWindow", "Delete To Word Begin", nullptr));
#if QT_CONFIG(tooltip)
        actionDelete_Last_Word->setToolTip(QCoreApplication::translate("MainWindow", "Delete To Word Begin", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionDelete_Last_Word->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+B", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDelete_to_Word_End->setText(QCoreApplication::translate("MainWindow", "Delete to Word End", nullptr));
#if QT_CONFIG(shortcut)
        actionDelete_to_Word_End->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNew_Class->setText(QCoreApplication::translate("MainWindow", "New Class...", nullptr));
        actionNew_Header->setText(QCoreApplication::translate("MainWindow", "New Header...", nullptr));
#if QT_CONFIG(tooltip)
        actionNew_Header->setToolTip(QCoreApplication::translate("MainWindow", "New Header...", nullptr));
#endif // QT_CONFIG(tooltip)
        actionWebsite->setText(QCoreApplication::translate("MainWindow", "Website", nullptr));
        actionFilesView_Hide_Non_Support_Files->setText(QCoreApplication::translate("MainWindow", "Hide Non Support Files", nullptr));
        actionToggle_Block_Comment->setText(QCoreApplication::translate("MainWindow", "Toggle Block Comment", nullptr));
#if QT_CONFIG(shortcut)
        actionToggle_Block_Comment->setShortcut(QCoreApplication::translate("MainWindow", "Alt+Shift+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMatch_Bracket->setText(QCoreApplication::translate("MainWindow", "Match Bracket", nullptr));
#if QT_CONFIG(shortcut)
        actionMatch_Bracket->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+]", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMove_Selection_Up->setText(QCoreApplication::translate("MainWindow", "Move Selection Up", nullptr));
#if QT_CONFIG(shortcut)
        actionMove_Selection_Up->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+Up", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMove_Selection_Down->setText(QCoreApplication::translate("MainWindow", "Move Selection Down", nullptr));
#if QT_CONFIG(shortcut)
        actionMove_Selection_Down->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+Down", nullptr));
#endif // QT_CONFIG(shortcut)
        actionConvert_to_UTF_8_BOM->setText(QCoreApplication::translate("MainWindow", "Convert to UTF-8 BOM", nullptr));
        actionEncode_in_UTF_8_BOM->setText(QCoreApplication::translate("MainWindow", "Encode in UTF-8 BOM", nullptr));
        actionCompiler_Options->setText(QCoreApplication::translate("MainWindow", "Compiler Options...", nullptr));
        actionToggle_Explorer_Panel->setText(QCoreApplication::translate("MainWindow", "Toggle Explorer Panel", nullptr));
#if QT_CONFIG(shortcut)
        actionToggle_Explorer_Panel->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+F9", nullptr));
#endif // QT_CONFIG(shortcut)
        actionToggle_Messages_Panel->setText(QCoreApplication::translate("MainWindow", "Toggle Messages Panel", nullptr));
#if QT_CONFIG(shortcut)
        actionToggle_Messages_Panel->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+F10", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRaylib_Manual->setText(QCoreApplication::translate("MainWindow", "Raylib Manual", nullptr));
        actionSelect_Word->setText(QCoreApplication::translate("MainWindow", "Select Word", nullptr));
        actionGo_to_Line->setText(QCoreApplication::translate("MainWindow", "Go to Line...", nullptr));
#if QT_CONFIG(shortcut)
        actionGo_to_Line->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+G", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNew_Template->setText(QCoreApplication::translate("MainWindow", "New Template...", nullptr));
#if QT_CONFIG(tooltip)
        actionNew_Template->setToolTip(QCoreApplication::translate("MainWindow", "New Template from Project", nullptr));
#endif // QT_CONFIG(tooltip)
        actionGoto_block_start->setText(QCoreApplication::translate("MainWindow", "Goto block start", nullptr));
#if QT_CONFIG(shortcut)
        actionGoto_block_start->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+Up", nullptr));
#endif // QT_CONFIG(shortcut)
        actionGoto_block_end->setText(QCoreApplication::translate("MainWindow", "Goto block end", nullptr));
#if QT_CONFIG(shortcut)
        actionGoto_block_end->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+Down", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSwitchHeaderSource->setText(QCoreApplication::translate("MainWindow", "Switch header/source", nullptr));
#if QT_CONFIG(tooltip)
        actionSwitchHeaderSource->setToolTip(QCoreApplication::translate("MainWindow", "Switch Header/Source", nullptr));
#endif // QT_CONFIG(tooltip)
        actionGenerate_Assembly->setText(QCoreApplication::translate("MainWindow", "Generate Assembly", nullptr));
#if QT_CONFIG(shortcut)
        actionGenerate_Assembly->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+F12", nullptr));
#endif // QT_CONFIG(shortcut)
        actionTrim_trailing_spaces->setText(QCoreApplication::translate("MainWindow", "Trim trailing spaces", nullptr));
        actionToggle_Readonly->setText(QCoreApplication::translate("MainWindow", "Toggle Readonly", nullptr));
#if QT_CONFIG(shortcut)
        actionToggle_Readonly->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSubmit_Issues->setText(QCoreApplication::translate("MainWindow", "Submit Issues", nullptr));
        actionDocument->setText(QCoreApplication::translate("MainWindow", "Document", nullptr));
#if QT_CONFIG(shortcut)
        actionDocument->setShortcut(QCoreApplication::translate("MainWindow", "F1", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNew_GAS_File->setText(QCoreApplication::translate("MainWindow", "New GAS File", nullptr));
        actionGNU_Assembler_Manual->setText(QCoreApplication::translate("MainWindow", "GNU Assembler Manual", nullptr));
        actionx86_Assembly_Language_Reference_Manual->setText(QCoreApplication::translate("MainWindow", "x86 Assembly Language Reference Manual", nullptr));
        actionIA_32_Assembly_Language_Reference_Manual->setText(QCoreApplication::translate("MainWindow", "IA-32 Assembly Language Reference Manual", nullptr));
        actionAdd_Watchpoint->setText(QCoreApplication::translate("MainWindow", "Add Watchpoint...", nullptr));
#if QT_CONFIG(tooltip)
        actionAdd_Watchpoint->setToolTip(QCoreApplication::translate("MainWindow", "Add a watchpoint that's triggered when it's modified.", nullptr));
#endif // QT_CONFIG(tooltip)
        actionNew_Text_File->setText(QCoreApplication::translate("MainWindow", "New Text File", nullptr));
        actionPage_Up->setText(QCoreApplication::translate("MainWindow", "Page Up", nullptr));
        actionPage_Down->setText(QCoreApplication::translate("MainWindow", "Page Down", nullptr));
        actionGoto_Line_Start->setText(QCoreApplication::translate("MainWindow", "Goto Line Start", nullptr));
        actionGoto_Line_End->setText(QCoreApplication::translate("MainWindow", "Goto Line End", nullptr));
        actionGoto_File_Start->setText(QCoreApplication::translate("MainWindow", "Goto File Start", nullptr));
        actionGoto_File_End->setText(QCoreApplication::translate("MainWindow", "Goto File End", nullptr));
        actionPage_Up_and_Select->setText(QCoreApplication::translate("MainWindow", "Page Up and Select", nullptr));
        actionPage_Down_and_Select->setText(QCoreApplication::translate("MainWindow", "Page Down and Select", nullptr));
        actionGoto_Page_Start->setText(QCoreApplication::translate("MainWindow", "Goto Page Start", nullptr));
        actionGoto_Page_End->setText(QCoreApplication::translate("MainWindow", "Goto Page End", nullptr));
        actionGoto_Page_Start_and_Select->setText(QCoreApplication::translate("MainWindow", "Goto Page Start and Select", nullptr));
        actionGoto_Page_End_and_Select->setText(QCoreApplication::translate("MainWindow", "Goto Page End and Select", nullptr));
        actionGoto_Line_Start_and_Select->setText(QCoreApplication::translate("MainWindow", "Goto Line Start and Select", nullptr));
        actionGoto_Line_End_and_Select->setText(QCoreApplication::translate("MainWindow", "Goto Line End and Select", nullptr));
        actionGoto_File_Start_and_Select->setText(QCoreApplication::translate("MainWindow", "Goto File Start and Select", nullptr));
        actionGoto_File_End_and_Select->setText(QCoreApplication::translate("MainWindow", "Goto File End and Select", nullptr));
        actionClose_Others->setText(QCoreApplication::translate("MainWindow", "Close Others", nullptr));
        actionOI_Wiki->setText(QCoreApplication::translate("MainWindow", "OI Wiki", nullptr));
        actionTurtle_Graphics_Manual->setText(QCoreApplication::translate("MainWindow", "Turtle Graphics Tutorial", nullptr));
        actionToggle_Bookmark->setText(QCoreApplication::translate("MainWindow", "Toggle Bookmark", nullptr));
#if QT_CONFIG(shortcut)
        actionToggle_Bookmark->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+B", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCode_Completion->setText(QCoreApplication::translate("MainWindow", "Code Completion", nullptr));
#if QT_CONFIG(shortcut)
        actionCode_Completion->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+/", nullptr));
#endif // QT_CONFIG(shortcut)
        actionC_C_Header->setText(QCoreApplication::translate("MainWindow", "C/C++ Header", nullptr));
        actionATT_ASM->setText(QCoreApplication::translate("MainWindow", "AT&&T ASM", nullptr));
        actionText_File->setText(QCoreApplication::translate("MainWindow", "Text File", nullptr));
        actionC_File->setText(QCoreApplication::translate("MainWindow", "C File", nullptr));
        actionCPP_File->setText(QCoreApplication::translate("MainWindow", "C++ File", nullptr));
        actionIntel_ASM->setText(QCoreApplication::translate("MainWindow", "Intel ASM", nullptr));
        actionGenerate_GIMPLE->setText(QCoreApplication::translate("MainWindow", "Generate GIMPLE", nullptr));
#if QT_CONFIG(shortcut)
        actionGenerate_GIMPLE->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+F12", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPreprocess->setText(QCoreApplication::translate("MainWindow", "Preprocess", nullptr));
        actionPaste_indentation->setText(QCoreApplication::translate("MainWindow", "Paste indentation", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuTools->setTitle(QCoreApplication::translate("MainWindow", "Tools", nullptr));
        menuExecute->setTitle(QCoreApplication::translate("MainWindow", "Execute", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuMove_Caret->setTitle(QCoreApplication::translate("MainWindow", "Move Caret", nullptr));
        menuFile_Type->setTitle(QCoreApplication::translate("MainWindow", "File Type", nullptr));
        menuSearch->setTitle(QCoreApplication::translate("MainWindow", "Search", nullptr));
        menuCode->setTitle(QCoreApplication::translate("MainWindow", "Code", nullptr));
        menuWindow->setTitle(QCoreApplication::translate("MainWindow", "Window", nullptr));
        menuProject->setTitle(QCoreApplication::translate("MainWindow", "Project", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
        menuRefactor->setTitle(QCoreApplication::translate("MainWindow", "Refactor", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
        menuTool_Windows->setTitle(QCoreApplication::translate("MainWindow", "Tool Panels", nullptr));
        menuSelection->setTitle(QCoreApplication::translate("MainWindow", "Selection", nullptr));
        toolbarMain->setWindowTitle(QCoreApplication::translate("MainWindow", "Main", nullptr));
        toolbarCode->setWindowTitle(QCoreApplication::translate("MainWindow", "Code", nullptr));
        toolbarCompile->setWindowTitle(QCoreApplication::translate("MainWindow", "Compile", nullptr));
        toolbarDebug->setWindowTitle(QCoreApplication::translate("MainWindow", "Debug", nullptr));
        toolbarCompilerSet->setWindowTitle(QCoreApplication::translate("MainWindow", "Compiler Set", nullptr));
        dockExplorer->setWindowTitle(QCoreApplication::translate("MainWindow", "Explorer", nullptr));
        tabExplorer->setTabText(tabExplorer->indexOf(tabFiles), QCoreApplication::translate("MainWindow", "Files", nullptr));
        tabExplorer->setTabText(tabExplorer->indexOf(tabProject), QCoreApplication::translate("MainWindow", "Project", nullptr));
        tabExplorer->setTabText(tabExplorer->indexOf(tabWatch), QCoreApplication::translate("MainWindow", "Watch", nullptr));
        tabExplorer->setTabText(tabExplorer->indexOf(tabStructure), QCoreApplication::translate("MainWindow", "Structure", nullptr));
        lblProblemSet->setText(QCoreApplication::translate("MainWindow", "Problem Set", nullptr));
#if QT_CONFIG(tooltip)
        btnNewProblemSet->setToolTip(QCoreApplication::translate("MainWindow", "New Problem Set", nullptr));
#endif // QT_CONFIG(tooltip)
        btnNewProblemSet->setText(QCoreApplication::translate("MainWindow", "New Problem Set", nullptr));
#if QT_CONFIG(tooltip)
        btnAddProblem->setToolTip(QCoreApplication::translate("MainWindow", "Add Problem", nullptr));
#endif // QT_CONFIG(tooltip)
        btnAddProblem->setText(QCoreApplication::translate("MainWindow", "Add Problem", nullptr));
#if QT_CONFIG(tooltip)
        btnRemoveProblem->setToolTip(QCoreApplication::translate("MainWindow", "Remove Problem", nullptr));
#endif // QT_CONFIG(tooltip)
        btnRemoveProblem->setText(QCoreApplication::translate("MainWindow", "Remove Problem", nullptr));
#if QT_CONFIG(tooltip)
        btnSaveProblemSet->setToolTip(QCoreApplication::translate("MainWindow", "Save Problem Set", nullptr));
#endif // QT_CONFIG(tooltip)
        btnSaveProblemSet->setText(QCoreApplication::translate("MainWindow", "Save Problem Set", nullptr));
#if QT_CONFIG(tooltip)
        btnLoadProblemSet->setToolTip(QCoreApplication::translate("MainWindow", "Load Problem Set", nullptr));
#endif // QT_CONFIG(tooltip)
        btnLoadProblemSet->setText(QCoreApplication::translate("MainWindow", "Load Problem Set", nullptr));
        btnImportFPS->setText(QCoreApplication::translate("MainWindow", "Import FPS Problem Set", nullptr));
        btnExportFPS->setText(QCoreApplication::translate("MainWindow", "Export FPS Problem Set", nullptr));
        tabExplorer->setTabText(tabExplorer->indexOf(tabProblemSet), QCoreApplication::translate("MainWindow", "Problem Set", nullptr));
        dockMessages->setWindowTitle(QCoreApplication::translate("MainWindow", "Messages", nullptr));
        tabMessages->setTabText(tabMessages->indexOf(tabIssues), QCoreApplication::translate("MainWindow", "Issues", nullptr));
        tabMessages->setTabText(tabMessages->indexOf(tabToolsOutput), QCoreApplication::translate("MainWindow", "Tools Output", nullptr));
        tabMessages->setTabText(tabMessages->indexOf(tabConsole), QCoreApplication::translate("MainWindow", "Console", nullptr));
        lblEvaluate->setText(QCoreApplication::translate("MainWindow", "Evaluate:", nullptr));
        debugViews->setTabText(debugViews->indexOf(tabDebugConsole), QCoreApplication::translate("MainWindow", "Debug Console", nullptr));
        debugViews->setTabText(debugViews->indexOf(tabStackTrace), QCoreApplication::translate("MainWindow", "Call Stack", nullptr));
        debugViews->setTabText(debugViews->indexOf(tabBreakpoints), QCoreApplication::translate("MainWindow", "Breakpoints", nullptr));
        debugViews->setTabText(debugViews->indexOf(tabLocals), QCoreApplication::translate("MainWindow", "Locals", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Address Expression:", nullptr));
        debugViews->setTabText(debugViews->indexOf(tabMemory), QCoreApplication::translate("MainWindow", "Memory", nullptr));
        tabMessages->setTabText(tabMessages->indexOf(tabDebug), QCoreApplication::translate("MainWindow", "Debug", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "History:", nullptr));
        btnSearchAgain->setText(QCoreApplication::translate("MainWindow", "Search Again", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Replace with:", nullptr));
        chkOpenFileInEditors->setText(QCoreApplication::translate("MainWindow", "Open file in editors", nullptr));
        btnReplace->setText(QCoreApplication::translate("MainWindow", "Replace", nullptr));
        btnCancelReplace->setText(QCoreApplication::translate("MainWindow", "Cancel", nullptr));
        tabMessages->setTabText(tabMessages->indexOf(tabSearch), QCoreApplication::translate("MainWindow", "Search", nullptr));
        tabMessages->setTabText(tabMessages->indexOf(tabTODO), QCoreApplication::translate("MainWindow", "TODO", nullptr));
        tabMessages->setTabText(tabMessages->indexOf(tabBookmark), QCoreApplication::translate("MainWindow", "Bookmark", nullptr));
        lblProblem->setText(QCoreApplication::translate("MainWindow", "Problem", nullptr));
#if QT_CONFIG(tooltip)
        btnAddProblemCase->setToolTip(QCoreApplication::translate("MainWindow", "Add Probem Case", nullptr));
#endif // QT_CONFIG(tooltip)
        btnAddProblemCase->setText(QCoreApplication::translate("MainWindow", "Add Probem Case", nullptr));
#if QT_CONFIG(tooltip)
        btnRemoveProblemCase->setToolTip(QCoreApplication::translate("MainWindow", "Remove Problem Case", nullptr));
#endif // QT_CONFIG(tooltip)
        btnRemoveProblemCase->setText(QCoreApplication::translate("MainWindow", "Remove Problem Case", nullptr));
#if QT_CONFIG(tooltip)
        btnOpenProblemAnswer->setToolTip(QCoreApplication::translate("MainWindow", "Open Anwser Source File", nullptr));
#endif // QT_CONFIG(tooltip)
        btnOpenProblemAnswer->setText(QCoreApplication::translate("MainWindow", "Open Anwser Source File", nullptr));
#if QT_CONFIG(tooltip)
        btnRunAllProblemCases->setToolTip(QCoreApplication::translate("MainWindow", "Run All Cases", nullptr));
#endif // QT_CONFIG(tooltip)
        btnRunAllProblemCases->setText(QCoreApplication::translate("MainWindow", "Run All Cases", nullptr));
        btnCaseValidateOptions->setText(QCoreApplication::translate("MainWindow", "Problem Cases Validation Options", nullptr));
        pbProblemCases->setFormat(QCoreApplication::translate("MainWindow", "%v/%m", nullptr));
#if QT_CONFIG(tooltip)
        btnProblemCaseInputFileName->setToolTip(QCoreApplication::translate("MainWindow", "Choose Input File", nullptr));
#endif // QT_CONFIG(tooltip)
        btnProblemCaseInputFileName->setText(QCoreApplication::translate("MainWindow", "Choose Input File", nullptr));
        btnProblemCaseClearInputFileName->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Input", nullptr));
        lblProblemCaseInput->setText(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "Expected", nullptr));
#if QT_CONFIG(tooltip)
        btnProblemCaseClearExpectedOutputFileName->setToolTip(QCoreApplication::translate("MainWindow", "Clear", nullptr));
#endif // QT_CONFIG(tooltip)
        btnProblemCaseClearExpectedOutputFileName->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        btnProblemCaseExpectedOutputFileName->setText(QCoreApplication::translate("MainWindow", "Choose Expected Output File", nullptr));
        lblProblemCaseOutputCaption->setText(QCoreApplication::translate("MainWindow", "Output", nullptr));
        lblProblemCaseExpected->setText(QString());
        lblProblemCaseOutput->setText(QString());
        tabMessages->setTabText(tabMessages->indexOf(tabProblem), QCoreApplication::translate("MainWindow", "Problem", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
