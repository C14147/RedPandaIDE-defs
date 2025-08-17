/********************************************************************************
** Form generated from reading UI file 'compilersetoptionwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPILERSETOPTIONWIDGET_H
#define UI_COMPILERSETOPTIONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <widgets/compileargumentswidget.h>

QT_BEGIN_NAMESPACE

class Ui_CompilerSetOptionWidget
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QComboBox *cbCompilerSet;
    QToolButton *btnFindCompilers;
    QToolButton *btnAddCompilerSetByFolder;
    QToolButton *btnAddCompilerSetByFile;
    QToolButton *btnCopyCompilerSet;
    QToolButton *btnAddBlankCompilerSet;
    QToolButton *btnRenameCompilerSet;
    QToolButton *btnRemoveCompilerSet;
    QTabWidget *settingTabs;
    QWidget *tabGeneral;
    QVBoxLayout *verticalLayout_2;
    QWidget *panelCharset;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *chkAutoAddCharset;
    QComboBox *cbEncoding;
    QComboBox *cbEncodingDetails;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *chkStaticLink;
    QCheckBox *chkForceEnglishOutput;
    QCheckBox *chkPersistInAutoFind;
    QCheckBox *chkUseCustomCompilerParams;
    QPlainTextEdit *txtCustomCompileParams;
    QCheckBox *chkUseCustomLinkParams;
    QPlainTextEdit *txtCustomLinkParams;
    QWidget *tabSettings;
    QHBoxLayout *horizontalLayout_3;
    CompileArgumentsWidget *optionTabs;
    QWidget *tabDirectories;
    QHBoxLayout *horizontalLayout_2;
    QTabWidget *dirTabs;
    QWidget *tabPrograms;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame;
    QGridLayout *gridLayout;
    QToolButton *btnChooseGDB;
    QToolButton *btnChooseGDBServer;
    QLabel *label_6;
    QLineEdit *txtGDBServer;
    QLineEdit *txtCppCompiler;
    QToolButton *btnChooseMake;
    QLabel *label_2;
    QLabel *label_4;
    QLineEdit *txtResourceCompiler;
    QToolButton *btnChooseCppCompiler;
    QToolButton *btnChooseCCompiler;
    QLineEdit *txtCCompiler;
    QLabel *label_8;
    QLineEdit *txtMake;
    QLineEdit *txtDebugger;
    QToolButton *btnChooseResourceCompiler;
    QLabel *label_3;
    QLabel *label_5;
    QSpacerItem *verticalSpacer;
    QWidget *tabOutput;
    QGridLayout *gridLayout_2;
    QComboBox *cbBinarySuffix;
    QLabel *lbBinarySuffix;
    QLineEdit *txtPreprocessingSuffix;
    QLabel *lbExecSuffix;
    QLineEdit *txtExecutableSuffix;
    QLineEdit *txtCompilationSuffix;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QLabel *lbPreprocessingSuffix;
    QLabel *lbCompilingSuffix;

    void setupUi(QWidget *CompilerSetOptionWidget)
    {
        if (CompilerSetOptionWidget->objectName().isEmpty())
            CompilerSetOptionWidget->setObjectName("CompilerSetOptionWidget");
        CompilerSetOptionWidget->resize(1005, 607);
        verticalLayout = new QVBoxLayout(CompilerSetOptionWidget);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(CompilerSetOptionWidget);
        groupBox->setObjectName("groupBox");
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName("horizontalLayout");
        cbCompilerSet = new QComboBox(groupBox);
        cbCompilerSet->setObjectName("cbCompilerSet");

        horizontalLayout->addWidget(cbCompilerSet);

        btnFindCompilers = new QToolButton(groupBox);
        btnFindCompilers->setObjectName("btnFindCompilers");

        horizontalLayout->addWidget(btnFindCompilers);

        btnAddCompilerSetByFolder = new QToolButton(groupBox);
        btnAddCompilerSetByFolder->setObjectName("btnAddCompilerSetByFolder");

        horizontalLayout->addWidget(btnAddCompilerSetByFolder);

        btnAddCompilerSetByFile = new QToolButton(groupBox);
        btnAddCompilerSetByFile->setObjectName("btnAddCompilerSetByFile");

        horizontalLayout->addWidget(btnAddCompilerSetByFile);

        btnCopyCompilerSet = new QToolButton(groupBox);
        btnCopyCompilerSet->setObjectName("btnCopyCompilerSet");

        horizontalLayout->addWidget(btnCopyCompilerSet);

        btnAddBlankCompilerSet = new QToolButton(groupBox);
        btnAddBlankCompilerSet->setObjectName("btnAddBlankCompilerSet");

        horizontalLayout->addWidget(btnAddBlankCompilerSet);

        btnRenameCompilerSet = new QToolButton(groupBox);
        btnRenameCompilerSet->setObjectName("btnRenameCompilerSet");

        horizontalLayout->addWidget(btnRenameCompilerSet);

        btnRemoveCompilerSet = new QToolButton(groupBox);
        btnRemoveCompilerSet->setObjectName("btnRemoveCompilerSet");

        horizontalLayout->addWidget(btnRemoveCompilerSet);


        verticalLayout->addWidget(groupBox);

        settingTabs = new QTabWidget(CompilerSetOptionWidget);
        settingTabs->setObjectName("settingTabs");
        settingTabs->setMovable(false);
        tabGeneral = new QWidget();
        tabGeneral->setObjectName("tabGeneral");
        verticalLayout_2 = new QVBoxLayout(tabGeneral);
        verticalLayout_2->setObjectName("verticalLayout_2");
        panelCharset = new QWidget(tabGeneral);
        panelCharset->setObjectName("panelCharset");
        horizontalLayout_4 = new QHBoxLayout(panelCharset);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        chkAutoAddCharset = new QCheckBox(panelCharset);
        chkAutoAddCharset->setObjectName("chkAutoAddCharset");

        horizontalLayout_4->addWidget(chkAutoAddCharset);

        cbEncoding = new QComboBox(panelCharset);
        cbEncoding->setObjectName("cbEncoding");

        horizontalLayout_4->addWidget(cbEncoding);

        cbEncodingDetails = new QComboBox(panelCharset);
        cbEncodingDetails->setObjectName("cbEncodingDetails");

        horizontalLayout_4->addWidget(cbEncodingDetails);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_2->addWidget(panelCharset);

        chkStaticLink = new QCheckBox(tabGeneral);
        chkStaticLink->setObjectName("chkStaticLink");

        verticalLayout_2->addWidget(chkStaticLink);

        chkForceEnglishOutput = new QCheckBox(tabGeneral);
        chkForceEnglishOutput->setObjectName("chkForceEnglishOutput");

        verticalLayout_2->addWidget(chkForceEnglishOutput);

        chkPersistInAutoFind = new QCheckBox(tabGeneral);
        chkPersistInAutoFind->setObjectName("chkPersistInAutoFind");

        verticalLayout_2->addWidget(chkPersistInAutoFind);

        chkUseCustomCompilerParams = new QCheckBox(tabGeneral);
        chkUseCustomCompilerParams->setObjectName("chkUseCustomCompilerParams");

        verticalLayout_2->addWidget(chkUseCustomCompilerParams);

        txtCustomCompileParams = new QPlainTextEdit(tabGeneral);
        txtCustomCompileParams->setObjectName("txtCustomCompileParams");

        verticalLayout_2->addWidget(txtCustomCompileParams);

        chkUseCustomLinkParams = new QCheckBox(tabGeneral);
        chkUseCustomLinkParams->setObjectName("chkUseCustomLinkParams");

        verticalLayout_2->addWidget(chkUseCustomLinkParams);

        txtCustomLinkParams = new QPlainTextEdit(tabGeneral);
        txtCustomLinkParams->setObjectName("txtCustomLinkParams");

        verticalLayout_2->addWidget(txtCustomLinkParams);

        settingTabs->addTab(tabGeneral, QString());
        tabSettings = new QWidget();
        tabSettings->setObjectName("tabSettings");
        horizontalLayout_3 = new QHBoxLayout(tabSettings);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(2, 2, 2, 2);
        optionTabs = new CompileArgumentsWidget(tabSettings);
        optionTabs->setObjectName("optionTabs");
        optionTabs->setDocumentMode(true);

        horizontalLayout_3->addWidget(optionTabs);

        settingTabs->addTab(tabSettings, QString());
        tabDirectories = new QWidget();
        tabDirectories->setObjectName("tabDirectories");
        horizontalLayout_2 = new QHBoxLayout(tabDirectories);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(2, 2, 2, 2);
        dirTabs = new QTabWidget(tabDirectories);
        dirTabs->setObjectName("dirTabs");
        dirTabs->setDocumentMode(true);

        horizontalLayout_2->addWidget(dirTabs);

        settingTabs->addTab(tabDirectories, QString());
        tabPrograms = new QWidget();
        tabPrograms->setObjectName("tabPrograms");
        verticalLayout_3 = new QVBoxLayout(tabPrograms);
        verticalLayout_3->setObjectName("verticalLayout_3");
        frame = new QFrame(tabPrograms);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName("gridLayout");
        btnChooseGDB = new QToolButton(frame);
        btnChooseGDB->setObjectName("btnChooseGDB");

        gridLayout->addWidget(btnChooseGDB, 3, 2, 1, 1);

        btnChooseGDBServer = new QToolButton(frame);
        btnChooseGDBServer->setObjectName("btnChooseGDBServer");

        gridLayout->addWidget(btnChooseGDBServer, 4, 2, 1, 1);

        label_6 = new QLabel(frame);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        txtGDBServer = new QLineEdit(frame);
        txtGDBServer->setObjectName("txtGDBServer");

        gridLayout->addWidget(txtGDBServer, 4, 1, 1, 1);

        txtCppCompiler = new QLineEdit(frame);
        txtCppCompiler->setObjectName("txtCppCompiler");

        gridLayout->addWidget(txtCppCompiler, 1, 1, 1, 1);

        btnChooseMake = new QToolButton(frame);
        btnChooseMake->setObjectName("btnChooseMake");

        gridLayout->addWidget(btnChooseMake, 2, 2, 1, 1);

        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        txtResourceCompiler = new QLineEdit(frame);
        txtResourceCompiler->setObjectName("txtResourceCompiler");

        gridLayout->addWidget(txtResourceCompiler, 5, 1, 1, 1);

        btnChooseCppCompiler = new QToolButton(frame);
        btnChooseCppCompiler->setObjectName("btnChooseCppCompiler");

        gridLayout->addWidget(btnChooseCppCompiler, 1, 2, 1, 1);

        btnChooseCCompiler = new QToolButton(frame);
        btnChooseCCompiler->setObjectName("btnChooseCCompiler");

        gridLayout->addWidget(btnChooseCCompiler, 0, 2, 1, 1);

        txtCCompiler = new QLineEdit(frame);
        txtCCompiler->setObjectName("txtCCompiler");

        gridLayout->addWidget(txtCCompiler, 0, 1, 1, 1);

        label_8 = new QLabel(frame);
        label_8->setObjectName("label_8");

        gridLayout->addWidget(label_8, 4, 0, 1, 1);

        txtMake = new QLineEdit(frame);
        txtMake->setObjectName("txtMake");

        gridLayout->addWidget(txtMake, 2, 1, 1, 1);

        txtDebugger = new QLineEdit(frame);
        txtDebugger->setObjectName("txtDebugger");

        gridLayout->addWidget(txtDebugger, 3, 1, 1, 1);

        btnChooseResourceCompiler = new QToolButton(frame);
        btnChooseResourceCompiler->setObjectName("btnChooseResourceCompiler");

        gridLayout->addWidget(btnChooseResourceCompiler, 5, 2, 1, 1);

        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 3, 0, 1, 1);


        verticalLayout_3->addWidget(frame);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        settingTabs->addTab(tabPrograms, QString());
        tabOutput = new QWidget();
        tabOutput->setObjectName("tabOutput");
        gridLayout_2 = new QGridLayout(tabOutput);
        gridLayout_2->setObjectName("gridLayout_2");
        cbBinarySuffix = new QComboBox(tabOutput);
        cbBinarySuffix->setObjectName("cbBinarySuffix");

        gridLayout_2->addWidget(cbBinarySuffix, 4, 1, 1, 1);

        lbBinarySuffix = new QLabel(tabOutput);
        lbBinarySuffix->setObjectName("lbBinarySuffix");

        gridLayout_2->addWidget(lbBinarySuffix, 4, 0, 1, 1);

        txtPreprocessingSuffix = new QLineEdit(tabOutput);
        txtPreprocessingSuffix->setObjectName("txtPreprocessingSuffix");

        gridLayout_2->addWidget(txtPreprocessingSuffix, 0, 1, 1, 1);

        lbExecSuffix = new QLabel(tabOutput);
        lbExecSuffix->setObjectName("lbExecSuffix");

        gridLayout_2->addWidget(lbExecSuffix, 3, 0, 1, 1);

        txtExecutableSuffix = new QLineEdit(tabOutput);
        txtExecutableSuffix->setObjectName("txtExecutableSuffix");

        gridLayout_2->addWidget(txtExecutableSuffix, 3, 1, 1, 1);

        txtCompilationSuffix = new QLineEdit(tabOutput);
        txtCompilationSuffix->setObjectName("txtCompilationSuffix");

        gridLayout_2->addWidget(txtCompilationSuffix, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 5, 0, 1, 1);

        lbPreprocessingSuffix = new QLabel(tabOutput);
        lbPreprocessingSuffix->setObjectName("lbPreprocessingSuffix");

        gridLayout_2->addWidget(lbPreprocessingSuffix, 0, 0, 1, 1);

        lbCompilingSuffix = new QLabel(tabOutput);
        lbCompilingSuffix->setObjectName("lbCompilingSuffix");

        gridLayout_2->addWidget(lbCompilingSuffix, 1, 0, 1, 1);

        settingTabs->addTab(tabOutput, QString());

        verticalLayout->addWidget(settingTabs);

        QWidget::setTabOrder(cbCompilerSet, btnFindCompilers);
        QWidget::setTabOrder(btnFindCompilers, btnAddCompilerSetByFolder);
        QWidget::setTabOrder(btnAddCompilerSetByFolder, btnAddCompilerSetByFile);
        QWidget::setTabOrder(btnAddCompilerSetByFile, btnAddBlankCompilerSet);
        QWidget::setTabOrder(btnAddBlankCompilerSet, btnRenameCompilerSet);
        QWidget::setTabOrder(btnRenameCompilerSet, btnRemoveCompilerSet);
        QWidget::setTabOrder(btnRemoveCompilerSet, settingTabs);
        QWidget::setTabOrder(settingTabs, chkAutoAddCharset);
        QWidget::setTabOrder(chkAutoAddCharset, cbEncoding);
        QWidget::setTabOrder(cbEncoding, cbEncodingDetails);
        QWidget::setTabOrder(cbEncodingDetails, chkStaticLink);
        QWidget::setTabOrder(chkStaticLink, chkForceEnglishOutput);
        QWidget::setTabOrder(chkForceEnglishOutput, chkPersistInAutoFind);
        QWidget::setTabOrder(chkPersistInAutoFind, chkUseCustomCompilerParams);
        QWidget::setTabOrder(chkUseCustomCompilerParams, txtCustomCompileParams);
        QWidget::setTabOrder(txtCustomCompileParams, chkUseCustomLinkParams);
        QWidget::setTabOrder(chkUseCustomLinkParams, txtCustomLinkParams);
        QWidget::setTabOrder(txtCustomLinkParams, optionTabs);
        QWidget::setTabOrder(optionTabs, dirTabs);
        QWidget::setTabOrder(dirTabs, txtCCompiler);
        QWidget::setTabOrder(txtCCompiler, btnChooseCCompiler);
        QWidget::setTabOrder(btnChooseCCompiler, txtCppCompiler);
        QWidget::setTabOrder(txtCppCompiler, btnChooseCppCompiler);
        QWidget::setTabOrder(btnChooseCppCompiler, txtMake);
        QWidget::setTabOrder(txtMake, btnChooseMake);
        QWidget::setTabOrder(btnChooseMake, txtDebugger);
        QWidget::setTabOrder(txtDebugger, btnChooseGDB);
        QWidget::setTabOrder(btnChooseGDB, txtGDBServer);
        QWidget::setTabOrder(txtGDBServer, btnChooseGDBServer);
        QWidget::setTabOrder(btnChooseGDBServer, txtResourceCompiler);
        QWidget::setTabOrder(txtResourceCompiler, btnChooseResourceCompiler);
        QWidget::setTabOrder(btnChooseResourceCompiler, txtPreprocessingSuffix);
        QWidget::setTabOrder(txtPreprocessingSuffix, txtCompilationSuffix);
        QWidget::setTabOrder(txtCompilationSuffix, txtExecutableSuffix);
        QWidget::setTabOrder(txtExecutableSuffix, cbBinarySuffix);

        retranslateUi(CompilerSetOptionWidget);

        settingTabs->setCurrentIndex(0);
        dirTabs->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(CompilerSetOptionWidget);
    } // setupUi

    void retranslateUi(QWidget *CompilerSetOptionWidget)
    {
        CompilerSetOptionWidget->setWindowTitle(QCoreApplication::translate("CompilerSetOptionWidget", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("CompilerSetOptionWidget", "Compiler set to config", nullptr));
#if QT_CONFIG(tooltip)
        btnFindCompilers->setToolTip(QCoreApplication::translate("CompilerSetOptionWidget", "Auto Find Compilers", nullptr));
#endif // QT_CONFIG(tooltip)
        btnFindCompilers->setText(QCoreApplication::translate("CompilerSetOptionWidget", "Auto Find Compilers", nullptr));
#if QT_CONFIG(tooltip)
        btnAddCompilerSetByFolder->setToolTip(QCoreApplication::translate("CompilerSetOptionWidget", "Find Compiler in the Folder", nullptr));
#endif // QT_CONFIG(tooltip)
        btnAddCompilerSetByFolder->setText(QCoreApplication::translate("CompilerSetOptionWidget", "Find Compiler in the Folder", nullptr));
#if QT_CONFIG(tooltip)
        btnAddCompilerSetByFile->setToolTip(QCoreApplication::translate("CompilerSetOptionWidget", "Specify the compiler executable file", nullptr));
#endif // QT_CONFIG(tooltip)
        btnAddCompilerSetByFile->setText(QCoreApplication::translate("CompilerSetOptionWidget", "Add Compiler", nullptr));
#if QT_CONFIG(tooltip)
        btnCopyCompilerSet->setToolTip(QCoreApplication::translate("CompilerSetOptionWidget", "Copy current compiler set", nullptr));
#endif // QT_CONFIG(tooltip)
        btnCopyCompilerSet->setText(QCoreApplication::translate("CompilerSetOptionWidget", "Copy compiler set", nullptr));
#if QT_CONFIG(tooltip)
        btnAddBlankCompilerSet->setToolTip(QCoreApplication::translate("CompilerSetOptionWidget", "Add Blank Compiler Set", nullptr));
#endif // QT_CONFIG(tooltip)
        btnAddBlankCompilerSet->setText(QCoreApplication::translate("CompilerSetOptionWidget", "Add Blank Compiler Set", nullptr));
#if QT_CONFIG(tooltip)
        btnRenameCompilerSet->setToolTip(QCoreApplication::translate("CompilerSetOptionWidget", "Rename", nullptr));
#endif // QT_CONFIG(tooltip)
        btnRenameCompilerSet->setText(QCoreApplication::translate("CompilerSetOptionWidget", "Rename", nullptr));
#if QT_CONFIG(tooltip)
        btnRemoveCompilerSet->setToolTip(QCoreApplication::translate("CompilerSetOptionWidget", "Remove", nullptr));
#endif // QT_CONFIG(tooltip)
        btnRemoveCompilerSet->setText(QCoreApplication::translate("CompilerSetOptionWidget", "Remove", nullptr));
        chkAutoAddCharset->setText(QCoreApplication::translate("CompilerSetOptionWidget", "Convert Executable's Charset as", nullptr));
        chkStaticLink->setText(QCoreApplication::translate("CompilerSetOptionWidget", "Statically link libraries", nullptr));
        chkForceEnglishOutput->setText(QCoreApplication::translate("CompilerSetOptionWidget", "Don't localize compiler output messages", nullptr));
        chkPersistInAutoFind->setText(QCoreApplication::translate("CompilerSetOptionWidget", "Survive auto-finds", nullptr));
        chkUseCustomCompilerParams->setText(QCoreApplication::translate("CompilerSetOptionWidget", "Add the following arguments when calling the compiler", nullptr));
        chkUseCustomLinkParams->setText(QCoreApplication::translate("CompilerSetOptionWidget", "Add the following arguments when calling the linker", nullptr));
        settingTabs->setTabText(settingTabs->indexOf(tabGeneral), QCoreApplication::translate("CompilerSetOptionWidget", "General", nullptr));
        settingTabs->setTabText(settingTabs->indexOf(tabSettings), QCoreApplication::translate("CompilerSetOptionWidget", "Settings", nullptr));
        settingTabs->setTabText(settingTabs->indexOf(tabDirectories), QCoreApplication::translate("CompilerSetOptionWidget", "Directories", nullptr));
#if QT_CONFIG(tooltip)
        btnChooseGDB->setToolTip(QCoreApplication::translate("CompilerSetOptionWidget", "Choose Debugger", nullptr));
#endif // QT_CONFIG(tooltip)
        btnChooseGDB->setText(QCoreApplication::translate("CompilerSetOptionWidget", "...", nullptr));
        btnChooseGDBServer->setText(QCoreApplication::translate("CompilerSetOptionWidget", "...", nullptr));
        label_6->setText(QCoreApplication::translate("CompilerSetOptionWidget", "Resource Compiler\357\274\210windres)", nullptr));
#if QT_CONFIG(tooltip)
        btnChooseMake->setToolTip(QCoreApplication::translate("CompilerSetOptionWidget", "Choose make", nullptr));
#endif // QT_CONFIG(tooltip)
        btnChooseMake->setText(QCoreApplication::translate("CompilerSetOptionWidget", "...", nullptr));
        label_2->setText(QCoreApplication::translate("CompilerSetOptionWidget", "C Compiler(gcc)", nullptr));
        label_4->setText(QCoreApplication::translate("CompilerSetOptionWidget", "make", nullptr));
#if QT_CONFIG(tooltip)
        btnChooseCppCompiler->setToolTip(QCoreApplication::translate("CompilerSetOptionWidget", "Choose C++ Compiler", nullptr));
#endif // QT_CONFIG(tooltip)
        btnChooseCppCompiler->setText(QCoreApplication::translate("CompilerSetOptionWidget", "...", nullptr));
#if QT_CONFIG(tooltip)
        btnChooseCCompiler->setToolTip(QCoreApplication::translate("CompilerSetOptionWidget", "Choose C Compiler", nullptr));
#endif // QT_CONFIG(tooltip)
        btnChooseCCompiler->setText(QCoreApplication::translate("CompilerSetOptionWidget", "...", nullptr));
        label_8->setText(QCoreApplication::translate("CompilerSetOptionWidget", "gdb server", nullptr));
#if QT_CONFIG(tooltip)
        btnChooseResourceCompiler->setToolTip(QCoreApplication::translate("CompilerSetOptionWidget", "Choose Resource Compiler", nullptr));
#endif // QT_CONFIG(tooltip)
        btnChooseResourceCompiler->setText(QCoreApplication::translate("CompilerSetOptionWidget", "...", nullptr));
        label_3->setText(QCoreApplication::translate("CompilerSetOptionWidget", "C++ Compiler(g++)", nullptr));
        label_5->setText(QCoreApplication::translate("CompilerSetOptionWidget", "gdb", nullptr));
        settingTabs->setTabText(settingTabs->indexOf(tabPrograms), QCoreApplication::translate("CompilerSetOptionWidget", "Programs", nullptr));
        lbBinarySuffix->setText(QCoreApplication::translate("CompilerSetOptionWidget", "Binary suffix", nullptr));
        lbExecSuffix->setText(QCoreApplication::translate("CompilerSetOptionWidget", "Executable suffix", nullptr));
        lbPreprocessingSuffix->setText(QCoreApplication::translate("CompilerSetOptionWidget", "Preprocessing output suffix", nullptr));
        lbCompilingSuffix->setText(QCoreApplication::translate("CompilerSetOptionWidget", "Compiling output suffix", nullptr));
        settingTabs->setTabText(settingTabs->indexOf(tabOutput), QCoreApplication::translate("CompilerSetOptionWidget", "Output", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CompilerSetOptionWidget: public Ui_CompilerSetOptionWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPILERSETOPTIONWIDGET_H
