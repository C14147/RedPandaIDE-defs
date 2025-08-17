/********************************************************************************
** Form generated from reading UI file 'editorfontwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITORFONTWIDGET_H
#define UI_EDITORFONTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditorFontWidget
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupFontFamilies;
    QGridLayout *gridLayout_2;
    QListView *lstFontList;
    QGridLayout *layoutFontListActions;
    QToolButton *btnRemoveFont;
    QToolButton *btnModifyFont;
    QToolButton *btnResetFonts;
    QToolButton *btnAddFont;
    QSpacerItem *verticalSpacer_2;
    QToolButton *btnMoveFontDown;
    QToolButton *btnMoveFontUp;
    QToolButton *btnMoveFontToTop;
    QToolButton *btnMoveFontToBottom;
    QWidget *widget;
    QGridLayout *gridLayout;
    QWidget *widget_11;
    QHBoxLayout *horizontalLayout_12;
    QCheckBox *chkLigature;
    QCheckBox *chkForceFixedFontWidth;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_9;
    QLabel *label_2;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QSpinBox *spinFontSize;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_10;
    QHBoxLayout *horizontalLayout_8;
    QDoubleSpinBox *spinLineSpacing;
    QSpacerItem *horizontalSpacer_8;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_10;
    QCheckBox *chkLeadingSpaces;
    QCheckBox *chkInnerSpaces;
    QCheckBox *chkTrailingSpaces;
    QCheckBox *chkLineBreaks;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *chkGutterVisible;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QSpinBox *spinGutterLeftOffset;
    QLabel *label_7;
    QSpinBox *spinGutterRightOffset;
    QSpacerItem *horizontalSpacer_6;
    QGroupBox *grpGutterShowLineNumbers;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *chkAddLeadingZeros;
    QCheckBox *chkLineNumbersStartsZero;
    QCheckBox *chkAutoSizeGutter;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QSpinBox *spinGutterDigitsCount;
    QSpacerItem *horizontalSpacer_5;
    QGroupBox *grpUseCustomFont;
    QGridLayout *gridLayout_4;
    QLabel *label_5;
    QLabel *label_4;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_4;
    QSpinBox *spinGutterFontSize;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget_5;
    QGridLayout *gridLayout_3;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_2;
    QFontComboBox *cbGutterFont;
    QCheckBox *chkGutterOnlyMonospacedFonts;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *EditorFontWidget)
    {
        if (EditorFontWidget->objectName().isEmpty())
            EditorFontWidget->setObjectName("EditorFontWidget");
        EditorFontWidget->resize(876, 870);
        verticalLayout = new QVBoxLayout(EditorFontWidget);
        verticalLayout->setObjectName("verticalLayout");
        groupFontFamilies = new QGroupBox(EditorFontWidget);
        groupFontFamilies->setObjectName("groupFontFamilies");
        gridLayout_2 = new QGridLayout(groupFontFamilies);
        gridLayout_2->setObjectName("gridLayout_2");
        lstFontList = new QListView(groupFontFamilies);
        lstFontList->setObjectName("lstFontList");

        gridLayout_2->addWidget(lstFontList, 1, 0, 1, 1);

        layoutFontListActions = new QGridLayout();
        layoutFontListActions->setObjectName("layoutFontListActions");
        btnRemoveFont = new QToolButton(groupFontFamilies);
        btnRemoveFont->setObjectName("btnRemoveFont");

        layoutFontListActions->addWidget(btnRemoveFont, 1, 0, 1, 1);

        btnModifyFont = new QToolButton(groupFontFamilies);
        btnModifyFont->setObjectName("btnModifyFont");

        layoutFontListActions->addWidget(btnModifyFont, 2, 0, 1, 1);

        btnResetFonts = new QToolButton(groupFontFamilies);
        btnResetFonts->setObjectName("btnResetFonts");

        layoutFontListActions->addWidget(btnResetFonts, 3, 0, 1, 1);

        btnAddFont = new QToolButton(groupFontFamilies);
        btnAddFont->setObjectName("btnAddFont");

        layoutFontListActions->addWidget(btnAddFont, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        layoutFontListActions->addItem(verticalSpacer_2, 4, 0, 1, 1);

        btnMoveFontDown = new QToolButton(groupFontFamilies);
        btnMoveFontDown->setObjectName("btnMoveFontDown");

        layoutFontListActions->addWidget(btnMoveFontDown, 2, 1, 1, 1);

        btnMoveFontUp = new QToolButton(groupFontFamilies);
        btnMoveFontUp->setObjectName("btnMoveFontUp");

        layoutFontListActions->addWidget(btnMoveFontUp, 1, 1, 1, 1);

        btnMoveFontToTop = new QToolButton(groupFontFamilies);
        btnMoveFontToTop->setObjectName("btnMoveFontToTop");

        layoutFontListActions->addWidget(btnMoveFontToTop, 0, 1, 1, 1);

        btnMoveFontToBottom = new QToolButton(groupFontFamilies);
        btnMoveFontToBottom->setObjectName("btnMoveFontToBottom");

        layoutFontListActions->addWidget(btnMoveFontToBottom, 3, 1, 1, 1);


        gridLayout_2->addLayout(layoutFontListActions, 1, 1, 1, 1);


        verticalLayout->addWidget(groupFontFamilies);

        widget = new QWidget(EditorFontWidget);
        widget->setObjectName("widget");
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(11, -1, 11, -1);
        widget_11 = new QWidget(widget);
        widget_11->setObjectName("widget_11");
        horizontalLayout_12 = new QHBoxLayout(widget_11);
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        chkLigature = new QCheckBox(widget_11);
        chkLigature->setObjectName("chkLigature");

        horizontalLayout_12->addWidget(chkLigature);

        chkForceFixedFontWidth = new QCheckBox(widget_11);
        chkForceFixedFontWidth->setObjectName("chkForceFixedFontWidth");

        horizontalLayout_12->addWidget(chkForceFixedFontWidth);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_11);


        gridLayout->addWidget(widget_11, 5, 0, 1, 2);

        label_9 = new QLabel(widget);
        label_9->setObjectName("label_9");

        gridLayout->addWidget(label_9, 2, 0, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        widget_3 = new QWidget(widget);
        widget_3->setObjectName("widget_3");
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        spinFontSize = new QSpinBox(widget_3);
        spinFontSize->setObjectName("spinFontSize");
        spinFontSize->setMinimum(2);

        horizontalLayout_3->addWidget(spinFontSize);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        gridLayout->addWidget(widget_3, 1, 1, 1, 1);

        widget_10 = new QWidget(widget);
        widget_10->setObjectName("widget_10");
        horizontalLayout_8 = new QHBoxLayout(widget_10);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        spinLineSpacing = new QDoubleSpinBox(widget_10);
        spinLineSpacing->setObjectName("spinLineSpacing");
        spinLineSpacing->setDecimals(1);
        spinLineSpacing->setMinimum(1.000000000000000);
        spinLineSpacing->setMaximum(3.000000000000000);
        spinLineSpacing->setSingleStep(0.100000000000000);

        horizontalLayout_8->addWidget(spinLineSpacing);

        horizontalSpacer_8 = new QSpacerItem(563, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_8);


        gridLayout->addWidget(widget_10, 2, 1, 1, 1);


        verticalLayout->addWidget(widget);

        groupBox_2 = new QGroupBox(EditorFontWidget);
        groupBox_2->setObjectName("groupBox_2");
        horizontalLayout_10 = new QHBoxLayout(groupBox_2);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        chkLeadingSpaces = new QCheckBox(groupBox_2);
        chkLeadingSpaces->setObjectName("chkLeadingSpaces");

        horizontalLayout_10->addWidget(chkLeadingSpaces);

        chkInnerSpaces = new QCheckBox(groupBox_2);
        chkInnerSpaces->setObjectName("chkInnerSpaces");

        horizontalLayout_10->addWidget(chkInnerSpaces);

        chkTrailingSpaces = new QCheckBox(groupBox_2);
        chkTrailingSpaces->setObjectName("chkTrailingSpaces");

        horizontalLayout_10->addWidget(chkTrailingSpaces);

        chkLineBreaks = new QCheckBox(groupBox_2);
        chkLineBreaks->setObjectName("chkLineBreaks");

        horizontalLayout_10->addWidget(chkLineBreaks);


        verticalLayout->addWidget(groupBox_2);

        groupBox = new QGroupBox(EditorFontWidget);
        groupBox->setObjectName("groupBox");
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(7);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        chkGutterVisible = new QCheckBox(groupBox);
        chkGutterVisible->setObjectName("chkGutterVisible");

        verticalLayout_2->addWidget(chkGutterVisible);

        widget_8 = new QWidget(groupBox);
        widget_8->setObjectName("widget_8");
        horizontalLayout_6 = new QHBoxLayout(widget_8);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widget_8);
        label_6->setObjectName("label_6");

        horizontalLayout_6->addWidget(label_6);

        spinGutterLeftOffset = new QSpinBox(widget_8);
        spinGutterLeftOffset->setObjectName("spinGutterLeftOffset");
        spinGutterLeftOffset->setMinimum(0);
        spinGutterLeftOffset->setMaximum(999);

        horizontalLayout_6->addWidget(spinGutterLeftOffset);

        label_7 = new QLabel(widget_8);
        label_7->setObjectName("label_7");

        horizontalLayout_6->addWidget(label_7);

        spinGutterRightOffset = new QSpinBox(widget_8);
        spinGutterRightOffset->setObjectName("spinGutterRightOffset");
        spinGutterRightOffset->setMinimum(0);
        spinGutterRightOffset->setMaximum(999);

        horizontalLayout_6->addWidget(spinGutterRightOffset);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);


        verticalLayout_2->addWidget(widget_8);

        grpGutterShowLineNumbers = new QGroupBox(groupBox);
        grpGutterShowLineNumbers->setObjectName("grpGutterShowLineNumbers");
        grpGutterShowLineNumbers->setCheckable(true);
        verticalLayout_3 = new QVBoxLayout(grpGutterShowLineNumbers);
        verticalLayout_3->setSpacing(7);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        chkAddLeadingZeros = new QCheckBox(grpGutterShowLineNumbers);
        chkAddLeadingZeros->setObjectName("chkAddLeadingZeros");

        verticalLayout_3->addWidget(chkAddLeadingZeros);

        chkLineNumbersStartsZero = new QCheckBox(grpGutterShowLineNumbers);
        chkLineNumbersStartsZero->setObjectName("chkLineNumbersStartsZero");

        verticalLayout_3->addWidget(chkLineNumbersStartsZero);

        chkAutoSizeGutter = new QCheckBox(grpGutterShowLineNumbers);
        chkAutoSizeGutter->setObjectName("chkAutoSizeGutter");

        verticalLayout_3->addWidget(chkAutoSizeGutter);

        widget_4 = new QWidget(grpGutterShowLineNumbers);
        widget_4->setObjectName("widget_4");
        horizontalLayout_5 = new QHBoxLayout(widget_4);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget_4);
        label_3->setObjectName("label_3");

        horizontalLayout_5->addWidget(label_3);

        spinGutterDigitsCount = new QSpinBox(widget_4);
        spinGutterDigitsCount->setObjectName("spinGutterDigitsCount");
        spinGutterDigitsCount->setMinimum(1);
        spinGutterDigitsCount->setMaximum(999);

        horizontalLayout_5->addWidget(spinGutterDigitsCount);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        verticalLayout_3->addWidget(widget_4);


        verticalLayout_2->addWidget(grpGutterShowLineNumbers);

        grpUseCustomFont = new QGroupBox(groupBox);
        grpUseCustomFont->setObjectName("grpUseCustomFont");
        grpUseCustomFont->setCheckable(true);
        gridLayout_4 = new QGridLayout(grpUseCustomFont);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setHorizontalSpacing(7);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        label_5 = new QLabel(grpUseCustomFont);
        label_5->setObjectName("label_5");

        gridLayout_4->addWidget(label_5, 0, 0, 1, 1);

        label_4 = new QLabel(grpUseCustomFont);
        label_4->setObjectName("label_4");

        gridLayout_4->addWidget(label_4, 1, 0, 1, 1);

        widget_6 = new QWidget(grpUseCustomFont);
        widget_6->setObjectName("widget_6");
        horizontalLayout_4 = new QHBoxLayout(widget_6);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        spinGutterFontSize = new QSpinBox(widget_6);
        spinGutterFontSize->setObjectName("spinGutterFontSize");
        spinGutterFontSize->setMinimum(2);

        horizontalLayout_4->addWidget(spinGutterFontSize);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        gridLayout_4->addWidget(widget_6, 1, 1, 1, 1);

        widget_5 = new QWidget(grpUseCustomFont);
        widget_5->setObjectName("widget_5");
        gridLayout_3 = new QGridLayout(widget_5);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        widget_7 = new QWidget(widget_5);
        widget_7->setObjectName("widget_7");
        horizontalLayout_2 = new QHBoxLayout(widget_7);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        cbGutterFont = new QFontComboBox(widget_7);
        cbGutterFont->setObjectName("cbGutterFont");
        cbGutterFont->setEditable(false);
        cbGutterFont->setSizeAdjustPolicy(QComboBox::AdjustToContents);
        cbGutterFont->setFontFilters(QFontComboBox::AllFonts);

        horizontalLayout_2->addWidget(cbGutterFont);

        chkGutterOnlyMonospacedFonts = new QCheckBox(widget_7);
        chkGutterOnlyMonospacedFonts->setObjectName("chkGutterOnlyMonospacedFonts");

        horizontalLayout_2->addWidget(chkGutterOnlyMonospacedFonts);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        gridLayout_3->addWidget(widget_7, 0, 3, 1, 1);


        gridLayout_4->addWidget(widget_5, 0, 1, 1, 1);


        verticalLayout_2->addWidget(grpUseCustomFont);


        verticalLayout->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QWidget::setTabOrder(lstFontList, btnAddFont);
        QWidget::setTabOrder(btnAddFont, btnMoveFontToTop);
        QWidget::setTabOrder(btnMoveFontToTop, btnRemoveFont);
        QWidget::setTabOrder(btnRemoveFont, btnMoveFontUp);
        QWidget::setTabOrder(btnMoveFontUp, btnModifyFont);
        QWidget::setTabOrder(btnModifyFont, btnMoveFontDown);
        QWidget::setTabOrder(btnMoveFontDown, btnResetFonts);
        QWidget::setTabOrder(btnResetFonts, btnMoveFontToBottom);
        QWidget::setTabOrder(btnMoveFontToBottom, spinFontSize);
        QWidget::setTabOrder(spinFontSize, spinLineSpacing);
        QWidget::setTabOrder(spinLineSpacing, chkLigature);
        QWidget::setTabOrder(chkLigature, chkForceFixedFontWidth);
        QWidget::setTabOrder(chkForceFixedFontWidth, chkLeadingSpaces);
        QWidget::setTabOrder(chkLeadingSpaces, chkInnerSpaces);
        QWidget::setTabOrder(chkInnerSpaces, chkTrailingSpaces);
        QWidget::setTabOrder(chkTrailingSpaces, chkLineBreaks);
        QWidget::setTabOrder(chkLineBreaks, chkGutterVisible);
        QWidget::setTabOrder(chkGutterVisible, spinGutterLeftOffset);
        QWidget::setTabOrder(spinGutterLeftOffset, spinGutterRightOffset);
        QWidget::setTabOrder(spinGutterRightOffset, grpGutterShowLineNumbers);
        QWidget::setTabOrder(grpGutterShowLineNumbers, chkAddLeadingZeros);
        QWidget::setTabOrder(chkAddLeadingZeros, chkLineNumbersStartsZero);
        QWidget::setTabOrder(chkLineNumbersStartsZero, chkAutoSizeGutter);
        QWidget::setTabOrder(chkAutoSizeGutter, spinGutterDigitsCount);
        QWidget::setTabOrder(spinGutterDigitsCount, grpUseCustomFont);
        QWidget::setTabOrder(grpUseCustomFont, cbGutterFont);
        QWidget::setTabOrder(cbGutterFont, chkGutterOnlyMonospacedFonts);
        QWidget::setTabOrder(chkGutterOnlyMonospacedFonts, spinGutterFontSize);

        retranslateUi(EditorFontWidget);

        QMetaObject::connectSlotsByName(EditorFontWidget);
    } // setupUi

    void retranslateUi(QWidget *EditorFontWidget)
    {
        EditorFontWidget->setWindowTitle(QCoreApplication::translate("EditorFontWidget", "Form", nullptr));
        groupFontFamilies->setTitle(QCoreApplication::translate("EditorFontWidget", "Font", nullptr));
#if QT_CONFIG(tooltip)
        btnRemoveFont->setToolTip(QCoreApplication::translate("EditorFontWidget", "Remove", nullptr));
#endif // QT_CONFIG(tooltip)
        btnRemoveFont->setText(QCoreApplication::translate("EditorFontWidget", "Remove", nullptr));
#if QT_CONFIG(tooltip)
        btnModifyFont->setToolTip(QCoreApplication::translate("EditorFontWidget", "Modify", nullptr));
#endif // QT_CONFIG(tooltip)
        btnModifyFont->setText(QCoreApplication::translate("EditorFontWidget", "Modify", nullptr));
#if QT_CONFIG(tooltip)
        btnResetFonts->setToolTip(QCoreApplication::translate("EditorFontWidget", "Reset", nullptr));
#endif // QT_CONFIG(tooltip)
        btnResetFonts->setText(QCoreApplication::translate("EditorFontWidget", "Reset", nullptr));
#if QT_CONFIG(tooltip)
        btnAddFont->setToolTip(QCoreApplication::translate("EditorFontWidget", "Add", nullptr));
#endif // QT_CONFIG(tooltip)
        btnAddFont->setText(QCoreApplication::translate("EditorFontWidget", "Add", nullptr));
#if QT_CONFIG(tooltip)
        btnMoveFontDown->setToolTip(QCoreApplication::translate("EditorFontWidget", "Move down", nullptr));
#endif // QT_CONFIG(tooltip)
        btnMoveFontDown->setText(QCoreApplication::translate("EditorFontWidget", "Move down", nullptr));
#if QT_CONFIG(tooltip)
        btnMoveFontUp->setToolTip(QCoreApplication::translate("EditorFontWidget", "Move up", nullptr));
#endif // QT_CONFIG(tooltip)
        btnMoveFontUp->setText(QCoreApplication::translate("EditorFontWidget", "Move up", nullptr));
#if QT_CONFIG(tooltip)
        btnMoveFontToTop->setToolTip(QCoreApplication::translate("EditorFontWidget", "Move to top", nullptr));
#endif // QT_CONFIG(tooltip)
        btnMoveFontToTop->setText(QCoreApplication::translate("EditorFontWidget", "Move to top", nullptr));
#if QT_CONFIG(tooltip)
        btnMoveFontToBottom->setToolTip(QCoreApplication::translate("EditorFontWidget", "Move to bottom", nullptr));
#endif // QT_CONFIG(tooltip)
        btnMoveFontToBottom->setText(QCoreApplication::translate("EditorFontWidget", "Move to bottom", nullptr));
        chkLigature->setText(QCoreApplication::translate("EditorFontWidget", "Enable ligatures support", nullptr));
        chkForceFixedFontWidth->setText(QCoreApplication::translate("EditorFontWidget", "Force fixed width", nullptr));
        label_9->setText(QCoreApplication::translate("EditorFontWidget", "Line Spacing:", nullptr));
        label_2->setText(QCoreApplication::translate("EditorFontWidget", "Size:", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("EditorFontWidget", "Show whitespaces", nullptr));
        chkLeadingSpaces->setText(QCoreApplication::translate("EditorFontWidget", "Leading", nullptr));
        chkInnerSpaces->setText(QCoreApplication::translate("EditorFontWidget", "Inner", nullptr));
        chkTrailingSpaces->setText(QCoreApplication::translate("EditorFontWidget", "Trailing", nullptr));
        chkLineBreaks->setText(QCoreApplication::translate("EditorFontWidget", "Line break", nullptr));
        groupBox->setTitle(QCoreApplication::translate("EditorFontWidget", "Gutter", nullptr));
        chkGutterVisible->setText(QCoreApplication::translate("EditorFontWidget", "Gutter is visible", nullptr));
        label_6->setText(QCoreApplication::translate("EditorFontWidget", "Left Offset", nullptr));
        label_7->setText(QCoreApplication::translate("EditorFontWidget", "Right Offset", nullptr));
        grpGutterShowLineNumbers->setTitle(QCoreApplication::translate("EditorFontWidget", "Show Line Numbers", nullptr));
        chkAddLeadingZeros->setText(QCoreApplication::translate("EditorFontWidget", "Add leading zeros to line numbers", nullptr));
        chkLineNumbersStartsZero->setText(QCoreApplication::translate("EditorFontWidget", "Line numbers starts at zero", nullptr));
        chkAutoSizeGutter->setText(QCoreApplication::translate("EditorFontWidget", "Auto calculate the digit count of line number", nullptr));
        label_3->setText(QCoreApplication::translate("EditorFontWidget", "Digit count", nullptr));
        grpUseCustomFont->setTitle(QCoreApplication::translate("EditorFontWidget", "Use Custom Font", nullptr));
        label_5->setText(QCoreApplication::translate("EditorFontWidget", "Font:", nullptr));
        label_4->setText(QCoreApplication::translate("EditorFontWidget", "Size:", nullptr));
        chkGutterOnlyMonospacedFonts->setText(QCoreApplication::translate("EditorFontWidget", "Show only monospaced fonts", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditorFontWidget: public Ui_EditorFontWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITORFONTWIDGET_H
