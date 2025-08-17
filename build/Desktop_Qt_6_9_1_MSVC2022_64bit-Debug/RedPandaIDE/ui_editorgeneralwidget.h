/********************************************************************************
** Form generated from reading UI file 'editorgeneralwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITORGENERALWIDGET_H
#define UI_EDITORGENERALWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <widgets/coloredit.h>

QT_BEGIN_NAMESPACE

class Ui_editorgeneralwidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *grpIndents;
    QVBoxLayout *verticalLayout;
    QCheckBox *chkAutoIndent;
    QCheckBox *chkTabToSpaces;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *lbCaretColor_2;
    QSpinBox *spTabWidth;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *chkShowIndentLines;
    QCheckBox *chkFillIndents;
    QGroupBox *grpCarets;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *chkEnhanceHome;
    QCheckBox *chkEnhanceEndKey;
    QCheckBox *chkKeepCaretX;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QLabel *lbCaretForOverwrite;
    ColorEdit *colorCaret;
    QLabel *lbCaretColor;
    QComboBox *cbCaretForOverwrite;
    QLabel *lbCaretForInsert;
    QComboBox *cbCaretForInsert;
    QSpacerItem *horizontalSpacer;
    QCheckBox *chkCaretUseTextColor;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_6;
    QCheckBox *chkHighlightMatchingBraces;
    QCheckBox *chkHighlightCurrentWord;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *chkAutoHideScrollBars;
    QCheckBox *chkScrollPastEOL;
    QCheckBox *chkScrollPastEOF;
    QCheckBox *chkScrollHalfPage;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QSpinBox *spinMouseWheelScrollSpeed;
    QSpacerItem *horizontalSpacer_6;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QSpinBox *spinMouseSelectionScrollSpeed;
    QSpacerItem *horizontalSpacer_7;
    QGroupBox *grpRightEdge;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lbCaretColor_3;
    QSpinBox *spRightEdge;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *lbCaretColor_5;
    ColorEdit *colorRightEdgeLine;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *editorgeneralwidget)
    {
        if (editorgeneralwidget->objectName().isEmpty())
            editorgeneralwidget->setObjectName("editorgeneralwidget");
        editorgeneralwidget->resize(795, 1211);
        verticalLayout_2 = new QVBoxLayout(editorgeneralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        grpIndents = new QGroupBox(editorgeneralwidget);
        grpIndents->setObjectName("grpIndents");
        verticalLayout = new QVBoxLayout(grpIndents);
        verticalLayout->setSpacing(7);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        chkAutoIndent = new QCheckBox(grpIndents);
        chkAutoIndent->setObjectName("chkAutoIndent");

        verticalLayout->addWidget(chkAutoIndent);

        chkTabToSpaces = new QCheckBox(grpIndents);
        chkTabToSpaces->setObjectName("chkTabToSpaces");

        verticalLayout->addWidget(chkTabToSpaces);

        widget_2 = new QWidget(grpIndents);
        widget_2->setObjectName("widget_2");
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setSpacing(7);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lbCaretColor_2 = new QLabel(widget_2);
        lbCaretColor_2->setObjectName("lbCaretColor_2");

        horizontalLayout->addWidget(lbCaretColor_2);

        spTabWidth = new QSpinBox(widget_2);
        spTabWidth->setObjectName("spTabWidth");
        spTabWidth->setMinimum(1);
        spTabWidth->setMaximum(16);

        horizontalLayout->addWidget(spTabWidth);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(widget_2);

        chkShowIndentLines = new QCheckBox(grpIndents);
        chkShowIndentLines->setObjectName("chkShowIndentLines");

        verticalLayout->addWidget(chkShowIndentLines);

        chkFillIndents = new QCheckBox(grpIndents);
        chkFillIndents->setObjectName("chkFillIndents");

        verticalLayout->addWidget(chkFillIndents);


        verticalLayout_2->addWidget(grpIndents);

        grpCarets = new QGroupBox(editorgeneralwidget);
        grpCarets->setObjectName("grpCarets");
        verticalLayout_3 = new QVBoxLayout(grpCarets);
        verticalLayout_3->setSpacing(7);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        chkEnhanceHome = new QCheckBox(grpCarets);
        chkEnhanceHome->setObjectName("chkEnhanceHome");

        verticalLayout_3->addWidget(chkEnhanceHome);

        chkEnhanceEndKey = new QCheckBox(grpCarets);
        chkEnhanceEndKey->setObjectName("chkEnhanceEndKey");

        verticalLayout_3->addWidget(chkEnhanceEndKey);

        chkKeepCaretX = new QCheckBox(grpCarets);
        chkKeepCaretX->setObjectName("chkKeepCaretX");

        verticalLayout_3->addWidget(chkKeepCaretX);

        widget = new QWidget(grpCarets);
        widget->setObjectName("widget");
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setSpacing(7);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        lbCaretForOverwrite = new QLabel(widget);
        lbCaretForOverwrite->setObjectName("lbCaretForOverwrite");

        gridLayout_2->addWidget(lbCaretForOverwrite, 1, 0, 1, 1);

        colorCaret = new ColorEdit(widget);
        colorCaret->setObjectName("colorCaret");
        colorCaret->setFrameShape(QFrame::StyledPanel);
        colorCaret->setFrameShadow(QFrame::Raised);

        gridLayout_2->addWidget(colorCaret, 4, 1, 1, 1);

        lbCaretColor = new QLabel(widget);
        lbCaretColor->setObjectName("lbCaretColor");

        gridLayout_2->addWidget(lbCaretColor, 4, 0, 1, 1);

        cbCaretForOverwrite = new QComboBox(widget);
        cbCaretForOverwrite->setObjectName("cbCaretForOverwrite");

        gridLayout_2->addWidget(cbCaretForOverwrite, 1, 1, 1, 1);

        lbCaretForInsert = new QLabel(widget);
        lbCaretForInsert->setObjectName("lbCaretForInsert");

        gridLayout_2->addWidget(lbCaretForInsert, 0, 0, 1, 1);

        cbCaretForInsert = new QComboBox(widget);
        cbCaretForInsert->setObjectName("cbCaretForInsert");

        gridLayout_2->addWidget(cbCaretForInsert, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 2, 1, 1);

        chkCaretUseTextColor = new QCheckBox(widget);
        chkCaretUseTextColor->setObjectName("chkCaretUseTextColor");

        gridLayout_2->addWidget(chkCaretUseTextColor, 2, 0, 1, 3);


        verticalLayout_3->addWidget(widget);


        verticalLayout_2->addWidget(grpCarets);

        groupBox_2 = new QGroupBox(editorgeneralwidget);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_6 = new QVBoxLayout(groupBox_2);
        verticalLayout_6->setSpacing(7);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        chkHighlightMatchingBraces = new QCheckBox(groupBox_2);
        chkHighlightMatchingBraces->setObjectName("chkHighlightMatchingBraces");

        verticalLayout_6->addWidget(chkHighlightMatchingBraces);

        chkHighlightCurrentWord = new QCheckBox(groupBox_2);
        chkHighlightCurrentWord->setObjectName("chkHighlightCurrentWord");

        verticalLayout_6->addWidget(chkHighlightCurrentWord);


        verticalLayout_2->addWidget(groupBox_2);

        groupBox = new QGroupBox(editorgeneralwidget);
        groupBox->setObjectName("groupBox");
        verticalLayout_4 = new QVBoxLayout(groupBox);
        verticalLayout_4->setObjectName("verticalLayout_4");
        chkAutoHideScrollBars = new QCheckBox(groupBox);
        chkAutoHideScrollBars->setObjectName("chkAutoHideScrollBars");

        verticalLayout_4->addWidget(chkAutoHideScrollBars);

        chkScrollPastEOL = new QCheckBox(groupBox);
        chkScrollPastEOL->setObjectName("chkScrollPastEOL");

        verticalLayout_4->addWidget(chkScrollPastEOL);

        chkScrollPastEOF = new QCheckBox(groupBox);
        chkScrollPastEOF->setObjectName("chkScrollPastEOF");

        verticalLayout_4->addWidget(chkScrollPastEOF);

        chkScrollHalfPage = new QCheckBox(groupBox);
        chkScrollHalfPage->setObjectName("chkScrollHalfPage");

        verticalLayout_4->addWidget(chkScrollHalfPage);

        widget_6 = new QWidget(groupBox);
        widget_6->setObjectName("widget_6");
        horizontalLayout_3 = new QHBoxLayout(widget_6);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget_6);
        label->setObjectName("label");

        horizontalLayout_3->addWidget(label);

        spinMouseWheelScrollSpeed = new QSpinBox(widget_6);
        spinMouseWheelScrollSpeed->setObjectName("spinMouseWheelScrollSpeed");
        spinMouseWheelScrollSpeed->setMinimum(1);
        spinMouseWheelScrollSpeed->setMaximum(100);

        horizontalLayout_3->addWidget(spinMouseWheelScrollSpeed);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);


        verticalLayout_4->addWidget(widget_6);

        widget_7 = new QWidget(groupBox);
        widget_7->setObjectName("widget_7");
        horizontalLayout_4 = new QHBoxLayout(widget_7);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget_7);
        label_2->setObjectName("label_2");

        horizontalLayout_4->addWidget(label_2);

        spinMouseSelectionScrollSpeed = new QSpinBox(widget_7);
        spinMouseSelectionScrollSpeed->setObjectName("spinMouseSelectionScrollSpeed");
        spinMouseSelectionScrollSpeed->setMinimum(1);
        spinMouseSelectionScrollSpeed->setMaximum(999);

        horizontalLayout_4->addWidget(spinMouseSelectionScrollSpeed);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);


        verticalLayout_4->addWidget(widget_7);


        verticalLayout_2->addWidget(groupBox);

        grpRightEdge = new QGroupBox(editorgeneralwidget);
        grpRightEdge->setObjectName("grpRightEdge");
        grpRightEdge->setCheckable(true);
        verticalLayout_5 = new QVBoxLayout(grpRightEdge);
        verticalLayout_5->setSpacing(7);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        widget_4 = new QWidget(grpRightEdge);
        widget_4->setObjectName("widget_4");
        horizontalLayout_2 = new QHBoxLayout(widget_4);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lbCaretColor_3 = new QLabel(widget_4);
        lbCaretColor_3->setObjectName("lbCaretColor_3");

        horizontalLayout_2->addWidget(lbCaretColor_3);

        spRightEdge = new QSpinBox(widget_4);
        spRightEdge->setObjectName("spRightEdge");
        spRightEdge->setMinimum(1);
        spRightEdge->setMaximum(1000);
        spRightEdge->setValue(80);

        horizontalLayout_2->addWidget(spRightEdge);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout_5->addWidget(widget_4);

        widget_5 = new QWidget(grpRightEdge);
        widget_5->setObjectName("widget_5");
        horizontalLayout_6 = new QHBoxLayout(widget_5);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        lbCaretColor_5 = new QLabel(widget_5);
        lbCaretColor_5->setObjectName("lbCaretColor_5");

        horizontalLayout_6->addWidget(lbCaretColor_5);

        colorRightEdgeLine = new ColorEdit(widget_5);
        colorRightEdgeLine->setObjectName("colorRightEdgeLine");
        colorRightEdgeLine->setFrameShape(QFrame::StyledPanel);
        colorRightEdgeLine->setFrameShadow(QFrame::Raised);

        horizontalLayout_6->addWidget(colorRightEdgeLine);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);


        verticalLayout_5->addWidget(widget_5);


        verticalLayout_2->addWidget(grpRightEdge);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        QWidget::setTabOrder(chkAutoIndent, chkTabToSpaces);
        QWidget::setTabOrder(chkTabToSpaces, spTabWidth);
        QWidget::setTabOrder(spTabWidth, chkShowIndentLines);
        QWidget::setTabOrder(chkShowIndentLines, chkFillIndents);
        QWidget::setTabOrder(chkFillIndents, chkEnhanceHome);
        QWidget::setTabOrder(chkEnhanceHome, chkEnhanceEndKey);
        QWidget::setTabOrder(chkEnhanceEndKey, chkKeepCaretX);
        QWidget::setTabOrder(chkKeepCaretX, cbCaretForInsert);
        QWidget::setTabOrder(cbCaretForInsert, cbCaretForOverwrite);
        QWidget::setTabOrder(cbCaretForOverwrite, chkCaretUseTextColor);
        QWidget::setTabOrder(chkCaretUseTextColor, chkHighlightMatchingBraces);
        QWidget::setTabOrder(chkHighlightMatchingBraces, chkHighlightCurrentWord);
        QWidget::setTabOrder(chkHighlightCurrentWord, chkAutoHideScrollBars);
        QWidget::setTabOrder(chkAutoHideScrollBars, chkScrollPastEOL);
        QWidget::setTabOrder(chkScrollPastEOL, chkScrollPastEOF);
        QWidget::setTabOrder(chkScrollPastEOF, chkScrollHalfPage);
        QWidget::setTabOrder(chkScrollHalfPage, spinMouseWheelScrollSpeed);
        QWidget::setTabOrder(spinMouseWheelScrollSpeed, spinMouseSelectionScrollSpeed);
        QWidget::setTabOrder(spinMouseSelectionScrollSpeed, grpRightEdge);
        QWidget::setTabOrder(grpRightEdge, spRightEdge);

        retranslateUi(editorgeneralwidget);

        QMetaObject::connectSlotsByName(editorgeneralwidget);
    } // setupUi

    void retranslateUi(QWidget *editorgeneralwidget)
    {
        editorgeneralwidget->setWindowTitle(QCoreApplication::translate("editorgeneralwidget", "Form", nullptr));
        grpIndents->setTitle(QCoreApplication::translate("editorgeneralwidget", "Indents", nullptr));
        chkAutoIndent->setText(QCoreApplication::translate("editorgeneralwidget", "Auto Indent", nullptr));
        chkTabToSpaces->setText(QCoreApplication::translate("editorgeneralwidget", "Replace tab with spaces", nullptr));
        lbCaretColor_2->setText(QCoreApplication::translate("editorgeneralwidget", "Tab Width", nullptr));
        chkShowIndentLines->setText(QCoreApplication::translate("editorgeneralwidget", "Show Indent Lines", nullptr));
        chkFillIndents->setText(QCoreApplication::translate("editorgeneralwidget", "Fill Indents", nullptr));
        grpCarets->setTitle(QCoreApplication::translate("editorgeneralwidget", "Caret", nullptr));
        chkEnhanceHome->setText(QCoreApplication::translate("editorgeneralwidget", "Move caret to the first non-space char in the current line when press HOME key", nullptr));
        chkEnhanceEndKey->setText(QCoreApplication::translate("editorgeneralwidget", "Move caret to the last non-space char in the current line when press END key", nullptr));
        chkKeepCaretX->setText(QCoreApplication::translate("editorgeneralwidget", "Keep X position of the caret when moving vertically", nullptr));
        lbCaretForOverwrite->setText(QCoreApplication::translate("editorgeneralwidget", "Caret for overwriting mode", nullptr));
        lbCaretColor->setText(QCoreApplication::translate("editorgeneralwidget", "Caret Color", nullptr));
        lbCaretForInsert->setText(QCoreApplication::translate("editorgeneralwidget", "Caret for inserting mode", nullptr));
        chkCaretUseTextColor->setText(QCoreApplication::translate("editorgeneralwidget", "Use text color as caret color", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("editorgeneralwidget", "Highlight", nullptr));
        chkHighlightMatchingBraces->setText(QCoreApplication::translate("editorgeneralwidget", "Highlight matching braces", nullptr));
        chkHighlightCurrentWord->setText(QCoreApplication::translate("editorgeneralwidget", "Highlight current word", nullptr));
        groupBox->setTitle(QCoreApplication::translate("editorgeneralwidget", "Scroll", nullptr));
        chkAutoHideScrollBars->setText(QCoreApplication::translate("editorgeneralwidget", "Auto hide scroll bars", nullptr));
        chkScrollPastEOL->setText(QCoreApplication::translate("editorgeneralwidget", "Can scroll the last char to the left edge of the editor", nullptr));
        chkScrollPastEOF->setText(QCoreApplication::translate("editorgeneralwidget", "Can scroll the last line to the top edge of the editor", nullptr));
        chkScrollHalfPage->setText(QCoreApplication::translate("editorgeneralwidget", "Page Up/Down scrolls half a page", nullptr));
        label->setText(QCoreApplication::translate("editorgeneralwidget", "Mouse Wheel Scroll Speed", nullptr));
        label_2->setText(QCoreApplication::translate("editorgeneralwidget", "Mouse Selection/Dragging Scroll Speed", nullptr));
        grpRightEdge->setTitle(QCoreApplication::translate("editorgeneralwidget", "Show right edge line", nullptr));
        lbCaretColor_3->setText(QCoreApplication::translate("editorgeneralwidget", "Right egde width", nullptr));
        lbCaretColor_5->setText(QCoreApplication::translate("editorgeneralwidget", "Right edge line color", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editorgeneralwidget: public Ui_editorgeneralwidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITORGENERALWIDGET_H
