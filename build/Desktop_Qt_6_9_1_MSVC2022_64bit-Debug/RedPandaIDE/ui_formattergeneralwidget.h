/********************************************************************************
** Form generated from reading UI file 'formattergeneralwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMATTERGENERALWIDGET_H
#define UI_FORMATTERGENERALWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "editor.h"

QT_BEGIN_NAMESPACE

class Ui_FormatterGeneralWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *cbBraceStyle;
    QSpacerItem *horizontalSpacer;
    QLabel *lblBraceStyle;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QCheckBox *chkAttachNamespaces;
    QCheckBox *chkAttachClasses;
    QCheckBox *chkAttachInline;
    QCheckBox *chkAttachExternC;
    QCheckBox *chkAttachClosingWhile;
    QCheckBox *chkConvertTabs;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *rbIndentSpaces;
    QRadioButton *rbIndentTabs;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QSpinBox *spinTabSize;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpinBox *spinIndentContinuation;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *cbMinConditionalIndent;
    QSpacerItem *horizontalSpacer_4;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QSpinBox *spinMaxContinuationIndent;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_5;
    QWidget *tab_2;
    QGridLayout *gridLayout;
    QCheckBox *chkIndentCol1Comments;
    QCheckBox *chkIndentPreprocDefine;
    QCheckBox *chkIndentSwiches;
    QCheckBox *chkIndentLabels;
    QCheckBox *chkIndentPreprocCond;
    QCheckBox *chkIndentAfterParens;
    QCheckBox *chkIndentModifiers;
    QCheckBox *chkIndentCases;
    QCheckBox *chkIndentClasses;
    QCheckBox *chkIndentNamespaces;
    QCheckBox *chkIndentPreprocBlock;
    QSpacerItem *verticalSpacer_4;
    QWidget *tab_4;
    QGridLayout *gridLayout_3;
    QCheckBox *chkPadHeader;
    QSpacerItem *verticalSpacer_3;
    QCheckBox *chkPadParenIn;
    QCheckBox *chkPadParenOut;
    QCheckBox *chkPadFirstParenOut;
    QCheckBox *chkPadComma;
    QCheckBox *chkBreakBlocks;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_7;
    QCheckBox *chkSqueezeEmptyLines;
    QSpinBox *spinSqueezeEmptyLines;
    QSpacerItem *horizontalSpacer_8;
    QCheckBox *chkPadOper;
    QCheckBox *chkPadParen;
    QCheckBox *chkBreakBlocksAll;
    QCheckBox *chkSqueezeWhitespace;
    QWidget *tab_5;
    QGridLayout *gridLayout_4;
    QRadioButton *rbAlignPointNone;
    QRadioButton *rbAlignReferenceNone;
    QCheckBox *chkUnpadParen;
    QRadioButton *rbAlignPointType;
    QRadioButton *rbAlignPointerName;
    QRadioButton *rbAlignReferenceMiddle;
    QLabel *label_6;
    QRadioButton *rbAlignReferenceType;
    QRadioButton *rbAlignReferenceName;
    QCheckBox *chkDeleteEmptyLines;
    QCheckBox *chkFillEmptyLines;
    QRadioButton *rbAlignPointerMiddle;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_7;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab_6;
    QGridLayout *gridLayout_5;
    QCheckBox *chkAddBraces;
    QCheckBox *chkAddOneLineBraces;
    QCheckBox *chkBreakOneLineHeaders;
    QCheckBox *chkRemoveBraces;
    QCheckBox *chkBreakClosingBraces;
    QCheckBox *chkBreakElseIf;
    QSpacerItem *verticalSpacer_6;
    QWidget *tab_7;
    QGridLayout *gridLayout_6;
    QCheckBox *chkAttachReturnType;
    QCheckBox *chkKeepOneLineBlocks;
    QCheckBox *chkBreakReturnType;
    QCheckBox *chkKeepOneLineStatements;
    QCheckBox *chkBreakReturnTypeDecl;
    QCheckBox *chkAttachReturnTypeDecl;
    QSpacerItem *verticalSpacer_7;
    QWidget *tab_8;
    QGridLayout *gridLayout_7;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *chkBreakMaxCodeLength;
    QSpinBox *spinMaxCodeLength;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer;
    QCheckBox *chkRemoveCommentPrefix;
    QCheckBox *chkCloseTemplates;
    QCheckBox *chkBreakAfterLogical;
    Editor *editDemo;
    QButtonGroup *pointerBtnGroup;
    QButtonGroup *referenceBtnGroup;

    void setupUi(QWidget *FormatterGeneralWidget)
    {
        if (FormatterGeneralWidget->objectName().isEmpty())
            FormatterGeneralWidget->setObjectName("FormatterGeneralWidget");
        FormatterGeneralWidget->resize(881, 754);
        verticalLayout_2 = new QVBoxLayout(FormatterGeneralWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        widget = new QWidget(FormatterGeneralWidget);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        cbBraceStyle = new QComboBox(widget);
        cbBraceStyle->setObjectName("cbBraceStyle");

        horizontalLayout->addWidget(cbBraceStyle);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addWidget(widget);

        lblBraceStyle = new QLabel(FormatterGeneralWidget);
        lblBraceStyle->setObjectName("lblBraceStyle");
        lblBraceStyle->setFrameShape(QFrame::StyledPanel);
        lblBraceStyle->setWordWrap(true);

        verticalLayout_2->addWidget(lblBraceStyle);

        tabWidget = new QTabWidget(FormatterGeneralWidget);
        tabWidget->setObjectName("tabWidget");
        tab = new QWidget();
        tab->setObjectName("tab");
        verticalLayout_3 = new QVBoxLayout(tab);
        verticalLayout_3->setObjectName("verticalLayout_3");
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName("verticalLayout");
        chkAttachNamespaces = new QCheckBox(groupBox_2);
        chkAttachNamespaces->setObjectName("chkAttachNamespaces");

        verticalLayout->addWidget(chkAttachNamespaces);

        chkAttachClasses = new QCheckBox(groupBox_2);
        chkAttachClasses->setObjectName("chkAttachClasses");

        verticalLayout->addWidget(chkAttachClasses);

        chkAttachInline = new QCheckBox(groupBox_2);
        chkAttachInline->setObjectName("chkAttachInline");

        verticalLayout->addWidget(chkAttachInline);

        chkAttachExternC = new QCheckBox(groupBox_2);
        chkAttachExternC->setObjectName("chkAttachExternC");

        verticalLayout->addWidget(chkAttachExternC);

        chkAttachClosingWhile = new QCheckBox(groupBox_2);
        chkAttachClosingWhile->setObjectName("chkAttachClosingWhile");

        verticalLayout->addWidget(chkAttachClosingWhile);


        verticalLayout_3->addWidget(groupBox_2);

        chkConvertTabs = new QCheckBox(tab);
        chkConvertTabs->setObjectName("chkConvertTabs");

        verticalLayout_3->addWidget(chkConvertTabs);

        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        verticalLayout_4 = new QVBoxLayout(tab_3);
        verticalLayout_4->setObjectName("verticalLayout_4");
        groupBox = new QGroupBox(tab_3);
        groupBox->setObjectName("groupBox");
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(-1, 5, 11, 5);
        rbIndentSpaces = new QRadioButton(groupBox);
        rbIndentSpaces->setObjectName("rbIndentSpaces");

        horizontalLayout_2->addWidget(rbIndentSpaces);

        rbIndentTabs = new QRadioButton(groupBox);
        rbIndentTabs->setObjectName("rbIndentTabs");

        horizontalLayout_2->addWidget(rbIndentTabs);


        verticalLayout_4->addWidget(groupBox);

        widget_2 = new QWidget(tab_3);
        widget_2->setObjectName("widget_2");
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget_2);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        spinTabSize = new QSpinBox(widget_2);
        spinTabSize->setObjectName("spinTabSize");
        spinTabSize->setMinimum(1);
        spinTabSize->setMaximum(8);
        spinTabSize->setValue(4);

        gridLayout_2->addWidget(spinTabSize, 0, 1, 1, 1);


        verticalLayout_4->addWidget(widget_2);

        widget_3 = new QWidget(tab_3);
        widget_3->setObjectName("widget_3");
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget_3);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        spinIndentContinuation = new QSpinBox(widget_3);
        spinIndentContinuation->setObjectName("spinIndentContinuation");
        spinIndentContinuation->setMaximum(4);
        spinIndentContinuation->setValue(1);

        horizontalLayout_3->addWidget(spinIndentContinuation);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout_4->addWidget(widget_3);

        widget_4 = new QWidget(tab_3);
        widget_4->setObjectName("widget_4");
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget_4);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        cbMinConditionalIndent = new QComboBox(widget_4);
        cbMinConditionalIndent->setObjectName("cbMinConditionalIndent");

        horizontalLayout_4->addWidget(cbMinConditionalIndent);

        horizontalSpacer_4 = new QSpacerItem(187, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout_4->addWidget(widget_4);

        widget_5 = new QWidget(tab_3);
        widget_5->setObjectName("widget_5");
        horizontalLayout_5 = new QHBoxLayout(widget_5);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget_5);
        label_5->setObjectName("label_5");

        horizontalLayout_5->addWidget(label_5);

        spinMaxContinuationIndent = new QSpinBox(widget_5);
        spinMaxContinuationIndent->setObjectName("spinMaxContinuationIndent");
        spinMaxContinuationIndent->setMinimum(40);
        spinMaxContinuationIndent->setMaximum(120);

        horizontalLayout_5->addWidget(spinMaxContinuationIndent);

        horizontalSpacer_5 = new QSpacerItem(427, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        verticalLayout_4->addWidget(widget_5);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_5);

        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        gridLayout = new QGridLayout(tab_2);
        gridLayout->setObjectName("gridLayout");
        chkIndentCol1Comments = new QCheckBox(tab_2);
        chkIndentCol1Comments->setObjectName("chkIndentCol1Comments");

        gridLayout->addWidget(chkIndentCol1Comments, 10, 0, 1, 1);

        chkIndentPreprocDefine = new QCheckBox(tab_2);
        chkIndentPreprocDefine->setObjectName("chkIndentPreprocDefine");

        gridLayout->addWidget(chkIndentPreprocDefine, 8, 1, 1, 1);

        chkIndentSwiches = new QCheckBox(tab_2);
        chkIndentSwiches->setObjectName("chkIndentSwiches");

        gridLayout->addWidget(chkIndentSwiches, 2, 0, 1, 1);

        chkIndentLabels = new QCheckBox(tab_2);
        chkIndentLabels->setObjectName("chkIndentLabels");

        gridLayout->addWidget(chkIndentLabels, 5, 0, 1, 1);

        chkIndentPreprocCond = new QCheckBox(tab_2);
        chkIndentPreprocCond->setObjectName("chkIndentPreprocCond");

        gridLayout->addWidget(chkIndentPreprocCond, 8, 0, 1, 1);

        chkIndentAfterParens = new QCheckBox(tab_2);
        chkIndentAfterParens->setObjectName("chkIndentAfterParens");

        gridLayout->addWidget(chkIndentAfterParens, 4, 1, 1, 1);

        chkIndentModifiers = new QCheckBox(tab_2);
        chkIndentModifiers->setObjectName("chkIndentModifiers");

        gridLayout->addWidget(chkIndentModifiers, 0, 1, 1, 1);

        chkIndentCases = new QCheckBox(tab_2);
        chkIndentCases->setObjectName("chkIndentCases");

        gridLayout->addWidget(chkIndentCases, 2, 1, 1, 1);

        chkIndentClasses = new QCheckBox(tab_2);
        chkIndentClasses->setObjectName("chkIndentClasses");

        gridLayout->addWidget(chkIndentClasses, 0, 0, 1, 1);

        chkIndentNamespaces = new QCheckBox(tab_2);
        chkIndentNamespaces->setObjectName("chkIndentNamespaces");

        gridLayout->addWidget(chkIndentNamespaces, 4, 0, 1, 1);

        chkIndentPreprocBlock = new QCheckBox(tab_2);
        chkIndentPreprocBlock->setObjectName("chkIndentPreprocBlock");

        gridLayout->addWidget(chkIndentPreprocBlock, 5, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 11, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        gridLayout_3 = new QGridLayout(tab_4);
        gridLayout_3->setObjectName("gridLayout_3");
        chkPadHeader = new QCheckBox(tab_4);
        chkPadHeader->setObjectName("chkPadHeader");

        gridLayout_3->addWidget(chkPadHeader, 11, 0, 1, 2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_3->addItem(verticalSpacer_3, 13, 0, 1, 1);

        chkPadParenIn = new QCheckBox(tab_4);
        chkPadParenIn->setObjectName("chkPadParenIn");

        gridLayout_3->addWidget(chkPadParenIn, 4, 0, 1, 1);

        chkPadParenOut = new QCheckBox(tab_4);
        chkPadParenOut->setObjectName("chkPadParenOut");

        gridLayout_3->addWidget(chkPadParenOut, 5, 0, 1, 1);

        chkPadFirstParenOut = new QCheckBox(tab_4);
        chkPadFirstParenOut->setObjectName("chkPadFirstParenOut");

        gridLayout_3->addWidget(chkPadFirstParenOut, 10, 0, 1, 2);

        chkPadComma = new QCheckBox(tab_4);
        chkPadComma->setObjectName("chkPadComma");

        gridLayout_3->addWidget(chkPadComma, 2, 0, 1, 1);

        chkBreakBlocks = new QCheckBox(tab_4);
        chkBreakBlocks->setObjectName("chkBreakBlocks");

        gridLayout_3->addWidget(chkBreakBlocks, 0, 0, 1, 1);

        widget_7 = new QWidget(tab_4);
        widget_7->setObjectName("widget_7");
        horizontalLayout_7 = new QHBoxLayout(widget_7);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        chkSqueezeEmptyLines = new QCheckBox(widget_7);
        chkSqueezeEmptyLines->setObjectName("chkSqueezeEmptyLines");

        horizontalLayout_7->addWidget(chkSqueezeEmptyLines);

        spinSqueezeEmptyLines = new QSpinBox(widget_7);
        spinSqueezeEmptyLines->setObjectName("spinSqueezeEmptyLines");
        spinSqueezeEmptyLines->setMinimum(1);

        horizontalLayout_7->addWidget(spinSqueezeEmptyLines);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_8);


        gridLayout_3->addWidget(widget_7, 1, 0, 1, 2);

        chkPadOper = new QCheckBox(tab_4);
        chkPadOper->setObjectName("chkPadOper");

        gridLayout_3->addWidget(chkPadOper, 2, 1, 1, 1);

        chkPadParen = new QCheckBox(tab_4);
        chkPadParen->setObjectName("chkPadParen");

        gridLayout_3->addWidget(chkPadParen, 4, 1, 1, 1);

        chkBreakBlocksAll = new QCheckBox(tab_4);
        chkBreakBlocksAll->setObjectName("chkBreakBlocksAll");

        gridLayout_3->addWidget(chkBreakBlocksAll, 0, 1, 1, 1);

        chkSqueezeWhitespace = new QCheckBox(tab_4);
        chkSqueezeWhitespace->setObjectName("chkSqueezeWhitespace");

        gridLayout_3->addWidget(chkSqueezeWhitespace, 12, 0, 1, 2);

        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName("tab_5");
        gridLayout_4 = new QGridLayout(tab_5);
        gridLayout_4->setObjectName("gridLayout_4");
        rbAlignPointNone = new QRadioButton(tab_5);
        pointerBtnGroup = new QButtonGroup(FormatterGeneralWidget);
        pointerBtnGroup->setObjectName("pointerBtnGroup");
        pointerBtnGroup->addButton(rbAlignPointNone);
        rbAlignPointNone->setObjectName("rbAlignPointNone");

        gridLayout_4->addWidget(rbAlignPointNone, 3, 1, 1, 1);

        rbAlignReferenceNone = new QRadioButton(tab_5);
        referenceBtnGroup = new QButtonGroup(FormatterGeneralWidget);
        referenceBtnGroup->setObjectName("referenceBtnGroup");
        referenceBtnGroup->addButton(rbAlignReferenceNone);
        rbAlignReferenceNone->setObjectName("rbAlignReferenceNone");

        gridLayout_4->addWidget(rbAlignReferenceNone, 4, 1, 1, 1);

        chkUnpadParen = new QCheckBox(tab_5);
        chkUnpadParen->setObjectName("chkUnpadParen");

        gridLayout_4->addWidget(chkUnpadParen, 0, 0, 1, 6);

        rbAlignPointType = new QRadioButton(tab_5);
        pointerBtnGroup->addButton(rbAlignPointType);
        rbAlignPointType->setObjectName("rbAlignPointType");

        gridLayout_4->addWidget(rbAlignPointType, 3, 2, 1, 1);

        rbAlignPointerName = new QRadioButton(tab_5);
        pointerBtnGroup->addButton(rbAlignPointerName);
        rbAlignPointerName->setObjectName("rbAlignPointerName");

        gridLayout_4->addWidget(rbAlignPointerName, 3, 4, 1, 1);

        rbAlignReferenceMiddle = new QRadioButton(tab_5);
        referenceBtnGroup->addButton(rbAlignReferenceMiddle);
        rbAlignReferenceMiddle->setObjectName("rbAlignReferenceMiddle");

        gridLayout_4->addWidget(rbAlignReferenceMiddle, 4, 3, 1, 1);

        label_6 = new QLabel(tab_5);
        label_6->setObjectName("label_6");

        gridLayout_4->addWidget(label_6, 3, 0, 1, 1);

        rbAlignReferenceType = new QRadioButton(tab_5);
        referenceBtnGroup->addButton(rbAlignReferenceType);
        rbAlignReferenceType->setObjectName("rbAlignReferenceType");

        gridLayout_4->addWidget(rbAlignReferenceType, 4, 2, 1, 1);

        rbAlignReferenceName = new QRadioButton(tab_5);
        referenceBtnGroup->addButton(rbAlignReferenceName);
        rbAlignReferenceName->setObjectName("rbAlignReferenceName");

        gridLayout_4->addWidget(rbAlignReferenceName, 4, 4, 1, 1);

        chkDeleteEmptyLines = new QCheckBox(tab_5);
        chkDeleteEmptyLines->setObjectName("chkDeleteEmptyLines");

        gridLayout_4->addWidget(chkDeleteEmptyLines, 1, 0, 1, 6);

        chkFillEmptyLines = new QCheckBox(tab_5);
        chkFillEmptyLines->setObjectName("chkFillEmptyLines");

        gridLayout_4->addWidget(chkFillEmptyLines, 2, 0, 1, 6);

        rbAlignPointerMiddle = new QRadioButton(tab_5);
        pointerBtnGroup->addButton(rbAlignPointerMiddle);
        rbAlignPointerMiddle->setObjectName("rbAlignPointerMiddle");

        gridLayout_4->addWidget(rbAlignPointerMiddle, 3, 3, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_6, 3, 5, 1, 1);

        label_7 = new QLabel(tab_5);
        label_7->setObjectName("label_7");

        gridLayout_4->addWidget(label_7, 4, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_4->addItem(verticalSpacer_2, 5, 0, 1, 1);

        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName("tab_6");
        gridLayout_5 = new QGridLayout(tab_6);
        gridLayout_5->setObjectName("gridLayout_5");
        chkAddBraces = new QCheckBox(tab_6);
        chkAddBraces->setObjectName("chkAddBraces");

        gridLayout_5->addWidget(chkAddBraces, 3, 0, 1, 1);

        chkAddOneLineBraces = new QCheckBox(tab_6);
        chkAddOneLineBraces->setObjectName("chkAddOneLineBraces");

        gridLayout_5->addWidget(chkAddOneLineBraces, 4, 0, 1, 1);

        chkBreakOneLineHeaders = new QCheckBox(tab_6);
        chkBreakOneLineHeaders->setObjectName("chkBreakOneLineHeaders");

        gridLayout_5->addWidget(chkBreakOneLineHeaders, 2, 0, 1, 1);

        chkRemoveBraces = new QCheckBox(tab_6);
        chkRemoveBraces->setObjectName("chkRemoveBraces");

        gridLayout_5->addWidget(chkRemoveBraces, 5, 0, 1, 1);

        chkBreakClosingBraces = new QCheckBox(tab_6);
        chkBreakClosingBraces->setObjectName("chkBreakClosingBraces");

        gridLayout_5->addWidget(chkBreakClosingBraces, 0, 0, 1, 1);

        chkBreakElseIf = new QCheckBox(tab_6);
        chkBreakElseIf->setObjectName("chkBreakElseIf");

        gridLayout_5->addWidget(chkBreakElseIf, 1, 0, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_5->addItem(verticalSpacer_6, 6, 0, 1, 1);

        tabWidget->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName("tab_7");
        gridLayout_6 = new QGridLayout(tab_7);
        gridLayout_6->setObjectName("gridLayout_6");
        chkAttachReturnType = new QCheckBox(tab_7);
        chkAttachReturnType->setObjectName("chkAttachReturnType");

        gridLayout_6->addWidget(chkAttachReturnType, 4, 0, 1, 1);

        chkKeepOneLineBlocks = new QCheckBox(tab_7);
        chkKeepOneLineBlocks->setObjectName("chkKeepOneLineBlocks");

        gridLayout_6->addWidget(chkKeepOneLineBlocks, 6, 0, 1, 1);

        chkBreakReturnType = new QCheckBox(tab_7);
        chkBreakReturnType->setObjectName("chkBreakReturnType");

        gridLayout_6->addWidget(chkBreakReturnType, 2, 0, 1, 1);

        chkKeepOneLineStatements = new QCheckBox(tab_7);
        chkKeepOneLineStatements->setObjectName("chkKeepOneLineStatements");

        gridLayout_6->addWidget(chkKeepOneLineStatements, 7, 0, 1, 1);

        chkBreakReturnTypeDecl = new QCheckBox(tab_7);
        chkBreakReturnTypeDecl->setObjectName("chkBreakReturnTypeDecl");

        gridLayout_6->addWidget(chkBreakReturnTypeDecl, 0, 0, 1, 1);

        chkAttachReturnTypeDecl = new QCheckBox(tab_7);
        chkAttachReturnTypeDecl->setObjectName("chkAttachReturnTypeDecl");

        gridLayout_6->addWidget(chkAttachReturnTypeDecl, 1, 0, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_6->addItem(verticalSpacer_7, 8, 0, 1, 1);

        tabWidget->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName("tab_8");
        gridLayout_7 = new QGridLayout(tab_8);
        gridLayout_7->setObjectName("gridLayout_7");
        widget_6 = new QWidget(tab_8);
        widget_6->setObjectName("widget_6");
        horizontalLayout_6 = new QHBoxLayout(widget_6);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        chkBreakMaxCodeLength = new QCheckBox(widget_6);
        chkBreakMaxCodeLength->setObjectName("chkBreakMaxCodeLength");

        horizontalLayout_6->addWidget(chkBreakMaxCodeLength);

        spinMaxCodeLength = new QSpinBox(widget_6);
        spinMaxCodeLength->setObjectName("spinMaxCodeLength");
        spinMaxCodeLength->setMinimum(50);
        spinMaxCodeLength->setMaximum(200);
        spinMaxCodeLength->setValue(200);

        horizontalLayout_6->addWidget(spinMaxCodeLength);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);


        gridLayout_7->addWidget(widget_6, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_7->addItem(verticalSpacer, 5, 0, 1, 1);

        chkRemoveCommentPrefix = new QCheckBox(tab_8);
        chkRemoveCommentPrefix->setObjectName("chkRemoveCommentPrefix");

        gridLayout_7->addWidget(chkRemoveCommentPrefix, 1, 0, 1, 1);

        chkCloseTemplates = new QCheckBox(tab_8);
        chkCloseTemplates->setObjectName("chkCloseTemplates");

        gridLayout_7->addWidget(chkCloseTemplates, 0, 0, 1, 1);

        chkBreakAfterLogical = new QCheckBox(tab_8);
        chkBreakAfterLogical->setObjectName("chkBreakAfterLogical");

        gridLayout_7->addWidget(chkBreakAfterLogical, 4, 0, 1, 1);

        tabWidget->addTab(tab_8, QString());

        verticalLayout_2->addWidget(tabWidget);

        editDemo = new Editor(FormatterGeneralWidget);
        editDemo->setObjectName("editDemo");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(editDemo->sizePolicy().hasHeightForWidth());
        editDemo->setSizePolicy(sizePolicy);
        editDemo->setMinimumSize(QSize(0, 200));
        editDemo->setFrameShape(QFrame::StyledPanel);
        editDemo->setFrameShadow(QFrame::Raised);

        verticalLayout_2->addWidget(editDemo);

        QWidget::setTabOrder(cbBraceStyle, tabWidget);
        QWidget::setTabOrder(tabWidget, chkAttachNamespaces);
        QWidget::setTabOrder(chkAttachNamespaces, chkAttachClasses);
        QWidget::setTabOrder(chkAttachClasses, chkAttachInline);
        QWidget::setTabOrder(chkAttachInline, chkAttachExternC);
        QWidget::setTabOrder(chkAttachExternC, chkAttachClosingWhile);
        QWidget::setTabOrder(chkAttachClosingWhile, chkConvertTabs);
        QWidget::setTabOrder(chkConvertTabs, rbIndentSpaces);
        QWidget::setTabOrder(rbIndentSpaces, rbIndentTabs);
        QWidget::setTabOrder(rbIndentTabs, spinTabSize);
        QWidget::setTabOrder(spinTabSize, spinIndentContinuation);
        QWidget::setTabOrder(spinIndentContinuation, cbMinConditionalIndent);
        QWidget::setTabOrder(cbMinConditionalIndent, spinMaxContinuationIndent);
        QWidget::setTabOrder(spinMaxContinuationIndent, chkIndentClasses);
        QWidget::setTabOrder(chkIndentClasses, chkIndentModifiers);
        QWidget::setTabOrder(chkIndentModifiers, chkIndentSwiches);
        QWidget::setTabOrder(chkIndentSwiches, chkIndentCases);
        QWidget::setTabOrder(chkIndentCases, chkIndentNamespaces);
        QWidget::setTabOrder(chkIndentNamespaces, chkIndentAfterParens);
        QWidget::setTabOrder(chkIndentAfterParens, chkIndentLabels);
        QWidget::setTabOrder(chkIndentLabels, chkIndentPreprocBlock);
        QWidget::setTabOrder(chkIndentPreprocBlock, chkIndentPreprocCond);
        QWidget::setTabOrder(chkIndentPreprocCond, chkIndentPreprocDefine);
        QWidget::setTabOrder(chkIndentPreprocDefine, chkIndentCol1Comments);
        QWidget::setTabOrder(chkIndentCol1Comments, chkBreakBlocks);
        QWidget::setTabOrder(chkBreakBlocks, chkPadOper);
        QWidget::setTabOrder(chkPadOper, chkPadParenIn);
        QWidget::setTabOrder(chkPadParenIn, chkPadParen);
        QWidget::setTabOrder(chkPadParen, chkPadParenOut);
        QWidget::setTabOrder(chkPadParenOut, chkPadFirstParenOut);
        QWidget::setTabOrder(chkPadFirstParenOut, chkPadHeader);
        QWidget::setTabOrder(chkPadHeader, chkUnpadParen);
        QWidget::setTabOrder(chkUnpadParen, chkDeleteEmptyLines);
        QWidget::setTabOrder(chkDeleteEmptyLines, chkFillEmptyLines);
        QWidget::setTabOrder(chkFillEmptyLines, rbAlignPointNone);
        QWidget::setTabOrder(rbAlignPointNone, rbAlignPointType);
        QWidget::setTabOrder(rbAlignPointType, rbAlignPointerMiddle);
        QWidget::setTabOrder(rbAlignPointerMiddle, rbAlignPointerName);
        QWidget::setTabOrder(rbAlignPointerName, rbAlignReferenceNone);
        QWidget::setTabOrder(rbAlignReferenceNone, rbAlignReferenceType);
        QWidget::setTabOrder(rbAlignReferenceType, rbAlignReferenceMiddle);
        QWidget::setTabOrder(rbAlignReferenceMiddle, rbAlignReferenceName);
        QWidget::setTabOrder(rbAlignReferenceName, chkBreakClosingBraces);
        QWidget::setTabOrder(chkBreakClosingBraces, chkBreakElseIf);
        QWidget::setTabOrder(chkBreakElseIf, chkBreakOneLineHeaders);
        QWidget::setTabOrder(chkBreakOneLineHeaders, chkAddBraces);
        QWidget::setTabOrder(chkAddBraces, chkAddOneLineBraces);
        QWidget::setTabOrder(chkAddOneLineBraces, chkRemoveBraces);
        QWidget::setTabOrder(chkRemoveBraces, chkBreakReturnTypeDecl);
        QWidget::setTabOrder(chkBreakReturnTypeDecl, chkAttachReturnTypeDecl);
        QWidget::setTabOrder(chkAttachReturnTypeDecl, chkBreakReturnType);
        QWidget::setTabOrder(chkBreakReturnType, chkAttachReturnType);
        QWidget::setTabOrder(chkAttachReturnType, chkKeepOneLineBlocks);
        QWidget::setTabOrder(chkKeepOneLineBlocks, chkKeepOneLineStatements);
        QWidget::setTabOrder(chkKeepOneLineStatements, chkCloseTemplates);
        QWidget::setTabOrder(chkCloseTemplates, chkRemoveCommentPrefix);
        QWidget::setTabOrder(chkRemoveCommentPrefix, chkBreakMaxCodeLength);
        QWidget::setTabOrder(chkBreakMaxCodeLength, spinMaxCodeLength);
        QWidget::setTabOrder(spinMaxCodeLength, chkBreakAfterLogical);

        retranslateUi(FormatterGeneralWidget);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(FormatterGeneralWidget);
    } // setupUi

    void retranslateUi(QWidget *FormatterGeneralWidget)
    {
        FormatterGeneralWidget->setWindowTitle(QCoreApplication::translate("FormatterGeneralWidget", "Form", nullptr));
        label->setText(QCoreApplication::translate("FormatterGeneralWidget", "Predefined format style", nullptr));
        lblBraceStyle->setText(QCoreApplication::translate("FormatterGeneralWidget", "<html><head/><body><p>Note for the predefined format style</p></body></html>", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("FormatterGeneralWidget", "Brace modifications", nullptr));
        chkAttachNamespaces->setText(QCoreApplication::translate("FormatterGeneralWidget", "Attach braces to namespace statements", nullptr));
        chkAttachClasses->setText(QCoreApplication::translate("FormatterGeneralWidget", "Attach braces to classes", nullptr));
        chkAttachInline->setText(QCoreApplication::translate("FormatterGeneralWidget", "Attach braces to class inline function definitions", nullptr));
        chkAttachExternC->setText(QCoreApplication::translate("FormatterGeneralWidget", "Attach braces to extern \"C\" statements", nullptr));
        chkAttachClosingWhile->setText(QCoreApplication::translate("FormatterGeneralWidget", "Attach the closing while of do-while to the close brace", nullptr));
        chkConvertTabs->setText(QCoreApplication::translate("FormatterGeneralWidget", "Convert tabs to the appropriate number of spaces", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("FormatterGeneralWidget", "Basic", nullptr));
        groupBox->setTitle(QCoreApplication::translate("FormatterGeneralWidget", "Indent with:", nullptr));
#if QT_CONFIG(tooltip)
        rbIndentSpaces->setToolTip(QCoreApplication::translate("FormatterGeneralWidget", "Indent using spaces", nullptr));
#endif // QT_CONFIG(tooltip)
        rbIndentSpaces->setText(QCoreApplication::translate("FormatterGeneralWidget", "Spaces", nullptr));
#if QT_CONFIG(tooltip)
        rbIndentTabs->setToolTip(QCoreApplication::translate("FormatterGeneralWidget", "Indent using tabs", nullptr));
#endif // QT_CONFIG(tooltip)
        rbIndentTabs->setText(QCoreApplication::translate("FormatterGeneralWidget", "Tabs", nullptr));
        label_2->setText(QCoreApplication::translate("FormatterGeneralWidget", "Tab Size:", nullptr));
        label_3->setText(QCoreApplication::translate("FormatterGeneralWidget", "Indent for continuation lines:", nullptr));
        label_4->setText(QCoreApplication::translate("FormatterGeneralWidget", "Minimal indent for a continuous conditional beloning to a conditional header:", nullptr));
        label_5->setText(QCoreApplication::translate("FormatterGeneralWidget", "Maximal indent spaces for a continuation line", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("FormatterGeneralWidget", "Indentation 1", nullptr));
        chkIndentCol1Comments->setText(QCoreApplication::translate("FormatterGeneralWidget", "Indent line comments that start in column one", nullptr));
        chkIndentPreprocDefine->setText(QCoreApplication::translate("FormatterGeneralWidget", "Indent multi-line preprocessor #define statements", nullptr));
        chkIndentSwiches->setText(QCoreApplication::translate("FormatterGeneralWidget", "Indent switch blocks", nullptr));
        chkIndentLabels->setText(QCoreApplication::translate("FormatterGeneralWidget", "Indent labels", nullptr));
        chkIndentPreprocCond->setText(QCoreApplication::translate("FormatterGeneralWidget", "Indent preprocessor conditional statements", nullptr));
        chkIndentAfterParens->setText(QCoreApplication::translate("FormatterGeneralWidget", "Indent after parenthesis '(' or assignment '='", nullptr));
        chkIndentModifiers->setText(QCoreApplication::translate("FormatterGeneralWidget", "Indent class access modifiers", nullptr));
        chkIndentCases->setText(QCoreApplication::translate("FormatterGeneralWidget", "Indent cases", nullptr));
        chkIndentClasses->setText(QCoreApplication::translate("FormatterGeneralWidget", "Indent class blocks", nullptr));
        chkIndentNamespaces->setText(QCoreApplication::translate("FormatterGeneralWidget", "Indent namespaces", nullptr));
        chkIndentPreprocBlock->setText(QCoreApplication::translate("FormatterGeneralWidget", "Indent preprocessor blocks", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("FormatterGeneralWidget", "Indentation 2", nullptr));
        chkPadHeader->setText(QCoreApplication::translate("FormatterGeneralWidget", "Insert spaces after parenthesis headers ('if','for',...)", nullptr));
        chkPadParenIn->setText(QCoreApplication::translate("FormatterGeneralWidget", "Insert spaces around parenthesis on the inside only", nullptr));
        chkPadParenOut->setText(QCoreApplication::translate("FormatterGeneralWidget", "Insert spaces around parenthesis on the outside only", nullptr));
        chkPadFirstParenOut->setText(QCoreApplication::translate("FormatterGeneralWidget", "Insert spaces around first parenthesis in a series on the out side  only", nullptr));
        chkPadComma->setText(QCoreApplication::translate("FormatterGeneralWidget", "Insert spaces after commas", nullptr));
        chkBreakBlocks->setText(QCoreApplication::translate("FormatterGeneralWidget", "Insert empty lines arround unrelated blocks", nullptr));
        chkSqueezeEmptyLines->setText(QCoreApplication::translate("FormatterGeneralWidget", "Remove superfluous empty lines exceeding", nullptr));
        chkPadOper->setText(QCoreApplication::translate("FormatterGeneralWidget", "Insert spaces around operators", nullptr));
        chkPadParen->setText(QCoreApplication::translate("FormatterGeneralWidget", "Insert spaces around parenthesis", nullptr));
        chkBreakBlocksAll->setText(QCoreApplication::translate("FormatterGeneralWidget", "Insert empty lines around all blocks", nullptr));
        chkSqueezeWhitespace->setText(QCoreApplication::translate("FormatterGeneralWidget", "Remove superfluous whitespace", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("FormatterGeneralWidget", "Padding 1", nullptr));
        rbAlignPointNone->setText(QCoreApplication::translate("FormatterGeneralWidget", "none", nullptr));
        rbAlignReferenceNone->setText(QCoreApplication::translate("FormatterGeneralWidget", "none", nullptr));
        chkUnpadParen->setText(QCoreApplication::translate("FormatterGeneralWidget", "Remove unnecessary space adding around parenthesis", nullptr));
        rbAlignPointType->setText(QCoreApplication::translate("FormatterGeneralWidget", "type(left)", nullptr));
        rbAlignPointerName->setText(QCoreApplication::translate("FormatterGeneralWidget", "name(right)", nullptr));
        rbAlignReferenceMiddle->setText(QCoreApplication::translate("FormatterGeneralWidget", "middle", nullptr));
        label_6->setText(QCoreApplication::translate("FormatterGeneralWidget", "Attach a pointer operator to its :", nullptr));
        rbAlignReferenceType->setText(QCoreApplication::translate("FormatterGeneralWidget", "type(left)", nullptr));
        rbAlignReferenceName->setText(QCoreApplication::translate("FormatterGeneralWidget", "name(right)", nullptr));
        chkDeleteEmptyLines->setText(QCoreApplication::translate("FormatterGeneralWidget", "Remove all empty lines. It will NOT delete lines added by the padding options.", nullptr));
        chkFillEmptyLines->setText(QCoreApplication::translate("FormatterGeneralWidget", "Fill empty lines with the white space of the previous lines.", nullptr));
        rbAlignPointerMiddle->setText(QCoreApplication::translate("FormatterGeneralWidget", "middle", nullptr));
        label_7->setText(QCoreApplication::translate("FormatterGeneralWidget", "Attach a reference operator to its :", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("FormatterGeneralWidget", "Padding 2", nullptr));
        chkAddBraces->setText(QCoreApplication::translate("FormatterGeneralWidget", "Add braces to unbraced one line conditional statements", nullptr));
        chkAddOneLineBraces->setText(QCoreApplication::translate("FormatterGeneralWidget", "Add one line braces to unbraced one line conditional statements", nullptr));
        chkBreakOneLineHeaders->setText(QCoreApplication::translate("FormatterGeneralWidget", "Break one line headers ('if','while','else'...) from the statement on the same line", nullptr));
        chkRemoveBraces->setText(QCoreApplication::translate("FormatterGeneralWidget", "Remove braces from a braced one line conditional statements", nullptr));
        chkBreakClosingBraces->setText(QCoreApplication::translate("FormatterGeneralWidget", "Break braces before close headers ('else','catch\"...)", nullptr));
        chkBreakElseIf->setText(QCoreApplication::translate("FormatterGeneralWidget", "Break 'else if' statements into two lines", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QCoreApplication::translate("FormatterGeneralWidget", "Other 1", nullptr));
        chkAttachReturnType->setText(QCoreApplication::translate("FormatterGeneralWidget", "Attach return type to the function name in its definition", nullptr));
        chkKeepOneLineBlocks->setText(QCoreApplication::translate("FormatterGeneralWidget", "Don't break blocks residing completely on one line", nullptr));
        chkBreakReturnType->setText(QCoreApplication::translate("FormatterGeneralWidget", "Break return type from the function name in its definition", nullptr));
        chkKeepOneLineStatements->setText(QCoreApplication::translate("FormatterGeneralWidget", "Don't break multiple statements residing on one line", nullptr));
        chkBreakReturnTypeDecl->setText(QCoreApplication::translate("FormatterGeneralWidget", "Break return type from the function name in its declaration", nullptr));
        chkAttachReturnTypeDecl->setText(QCoreApplication::translate("FormatterGeneralWidget", "Attach return type to the function name in its declaration", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QCoreApplication::translate("FormatterGeneralWidget", "Other 2", nullptr));
        chkBreakMaxCodeLength->setText(QCoreApplication::translate("FormatterGeneralWidget", "Break lines exceeds", nullptr));
        spinMaxCodeLength->setSuffix(QCoreApplication::translate("FormatterGeneralWidget", "characters", nullptr));
        chkRemoveCommentPrefix->setText(QCoreApplication::translate("FormatterGeneralWidget", "Remove the leading '*' prefix on multi-line comments and indent the comment text one line indent.", nullptr));
        chkCloseTemplates->setText(QCoreApplication::translate("FormatterGeneralWidget", "Close ending angle brackets on template definitions", nullptr));
        chkBreakAfterLogical->setText(QCoreApplication::translate("FormatterGeneralWidget", "Place the logical conditional to the last on the previous line, when break lines", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_8), QCoreApplication::translate("FormatterGeneralWidget", "Other 3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormatterGeneralWidget: public Ui_FormatterGeneralWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMATTERGENERALWIDGET_H
