/********************************************************************************
** Form generated from reading UI file 'editorcolorschemewidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITORCOLORSCHEMEWIDGET_H
#define UI_EDITORCOLORSCHEMEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <widgets/coloredit.h>
#include <widgets/qpatchedcombobox.h>
#include "editor.h"

QT_BEGIN_NAMESPACE

class Ui_EditorColorSchemeWidget
{
public:
    QAction *actionCopy_Scheme;
    QAction *actionRename_Scheme;
    QAction *actionReset_Scheme;
    QAction *actionImport_Scheme;
    QAction *actionExport_Scheme;
    QAction *actionDelete_Scheme;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPatchedComboBox *cbScheme;
    QToolButton *btnSchemeMenu;
    QPushButton *reloadButton;
    QSpacerItem *horizontalSpacer;
    QFrame *line;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_3;
    QSplitter *splitter;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_2;
    QTreeView *treeItems;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout_4;
    QWidget *widgetSchemeItem;
    QGridLayout *gridLayout;
    QCheckBox *cbBackground;
    QCheckBox *cbForeground;
    ColorEdit *colorForeground;
    QSpacerItem *horizontalSpacer_2;
    ColorEdit *colorBackground;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *grpFontStyles;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *cbBold;
    QCheckBox *cbItalic;
    QCheckBox *cbStrikeout;
    QCheckBox *cbUnderlined;
    QSpacerItem *horizontalSpacer_3;
    Editor *editDemo;
    QFrame *line_2;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *chkRainborParenthesis;
    QCheckBox *chkRainbowIndentGuides;
    QCheckBox *chkRainbowIndents;

    void setupUi(QWidget *EditorColorSchemeWidget)
    {
        if (EditorColorSchemeWidget->objectName().isEmpty())
            EditorColorSchemeWidget->setObjectName("EditorColorSchemeWidget");
        EditorColorSchemeWidget->resize(781, 556);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(EditorColorSchemeWidget->sizePolicy().hasHeightForWidth());
        EditorColorSchemeWidget->setSizePolicy(sizePolicy);
        actionCopy_Scheme = new QAction(EditorColorSchemeWidget);
        actionCopy_Scheme->setObjectName("actionCopy_Scheme");
        actionRename_Scheme = new QAction(EditorColorSchemeWidget);
        actionRename_Scheme->setObjectName("actionRename_Scheme");
        actionReset_Scheme = new QAction(EditorColorSchemeWidget);
        actionReset_Scheme->setObjectName("actionReset_Scheme");
        actionImport_Scheme = new QAction(EditorColorSchemeWidget);
        actionImport_Scheme->setObjectName("actionImport_Scheme");
        actionExport_Scheme = new QAction(EditorColorSchemeWidget);
        actionExport_Scheme->setObjectName("actionExport_Scheme");
        actionDelete_Scheme = new QAction(EditorColorSchemeWidget);
        actionDelete_Scheme->setObjectName("actionDelete_Scheme");
        verticalLayout = new QVBoxLayout(EditorColorSchemeWidget);
        verticalLayout->setObjectName("verticalLayout");
        widget = new QWidget(EditorColorSchemeWidget);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(7);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        cbScheme = new QPatchedComboBox(widget);
        cbScheme->setObjectName("cbScheme");

        horizontalLayout->addWidget(cbScheme);

        btnSchemeMenu = new QToolButton(widget);
        btnSchemeMenu->setObjectName("btnSchemeMenu");

        horizontalLayout->addWidget(btnSchemeMenu);

        reloadButton = new QPushButton(widget);
        reloadButton->setObjectName("reloadButton");

        horizontalLayout->addWidget(reloadButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(widget);

        line = new QFrame(EditorColorSchemeWidget);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout->addWidget(line);

        widget_2 = new QWidget(EditorColorSchemeWidget);
        widget_2->setObjectName("widget_2");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy1);
        horizontalLayout_3 = new QHBoxLayout(widget_2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(widget_2);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Orientation::Horizontal);
        widget_3 = new QWidget(splitter);
        widget_3->setObjectName("widget_3");
        widget_3->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy2);
        verticalLayout_2 = new QVBoxLayout(widget_3);
        verticalLayout_2->setSpacing(7);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        treeItems = new QTreeView(widget_3);
        treeItems->setObjectName("treeItems");
        sizePolicy1.setHeightForWidth(treeItems->sizePolicy().hasHeightForWidth());
        treeItems->setSizePolicy(sizePolicy1);
        treeItems->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        treeItems->header()->setVisible(false);

        verticalLayout_2->addWidget(treeItems);

        widget_5 = new QWidget(widget_3);
        widget_5->setObjectName("widget_5");
        verticalLayout_4 = new QVBoxLayout(widget_5);
        verticalLayout_4->setSpacing(7);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        widgetSchemeItem = new QWidget(widget_5);
        widgetSchemeItem->setObjectName("widgetSchemeItem");
        widgetSchemeItem->setEnabled(true);
        gridLayout = new QGridLayout(widgetSchemeItem);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        cbBackground = new QCheckBox(widgetSchemeItem);
        cbBackground->setObjectName("cbBackground");

        gridLayout->addWidget(cbBackground, 0, 1, 1, 1);

        cbForeground = new QCheckBox(widgetSchemeItem);
        cbForeground->setObjectName("cbForeground");

        gridLayout->addWidget(cbForeground, 1, 1, 1, 1);

        colorForeground = new ColorEdit(widgetSchemeItem);
        colorForeground->setObjectName("colorForeground");
        sizePolicy.setHeightForWidth(colorForeground->sizePolicy().hasHeightForWidth());
        colorForeground->setSizePolicy(sizePolicy);
        colorForeground->setFrameShape(QFrame::Shape::StyledPanel);
        colorForeground->setFrameShadow(QFrame::Shadow::Raised);

        gridLayout->addWidget(colorForeground, 1, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        colorBackground = new ColorEdit(widgetSchemeItem);
        colorBackground->setObjectName("colorBackground");
        sizePolicy.setHeightForWidth(colorBackground->sizePolicy().hasHeightForWidth());
        colorBackground->setSizePolicy(sizePolicy);
        colorBackground->setFrameShape(QFrame::Shape::StyledPanel);
        colorBackground->setFrameShadow(QFrame::Shadow::Raised);

        gridLayout->addWidget(colorBackground, 0, 2, 1, 1);


        verticalLayout_4->addWidget(widgetSchemeItem);

        widget_4 = new QWidget(widget_5);
        widget_4->setObjectName("widget_4");
        horizontalLayout_2 = new QHBoxLayout(widget_4);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        grpFontStyles = new QGroupBox(widget_4);
        grpFontStyles->setObjectName("grpFontStyles");
        verticalLayout_3 = new QVBoxLayout(grpFontStyles);
        verticalLayout_3->setObjectName("verticalLayout_3");
        cbBold = new QCheckBox(grpFontStyles);
        cbBold->setObjectName("cbBold");

        verticalLayout_3->addWidget(cbBold);

        cbItalic = new QCheckBox(grpFontStyles);
        cbItalic->setObjectName("cbItalic");

        verticalLayout_3->addWidget(cbItalic);

        cbStrikeout = new QCheckBox(grpFontStyles);
        cbStrikeout->setObjectName("cbStrikeout");

        verticalLayout_3->addWidget(cbStrikeout);

        cbUnderlined = new QCheckBox(grpFontStyles);
        cbUnderlined->setObjectName("cbUnderlined");

        verticalLayout_3->addWidget(cbUnderlined);


        horizontalLayout_2->addWidget(grpFontStyles);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout_4->addWidget(widget_4);


        verticalLayout_2->addWidget(widget_5);

        splitter->addWidget(widget_3);
        editDemo = new Editor(splitter);
        editDemo->setObjectName("editDemo");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy3.setHorizontalStretch(2);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(editDemo->sizePolicy().hasHeightForWidth());
        editDemo->setSizePolicy(sizePolicy3);
        editDemo->setFrameShape(QFrame::Shape::StyledPanel);
        editDemo->setFrameShadow(QFrame::Shadow::Raised);
        splitter->addWidget(editDemo);

        horizontalLayout_3->addWidget(splitter);


        verticalLayout->addWidget(widget_2);

        line_2 = new QFrame(EditorColorSchemeWidget);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout->addWidget(line_2);

        widget_6 = new QWidget(EditorColorSchemeWidget);
        widget_6->setObjectName("widget_6");
        horizontalLayout_4 = new QHBoxLayout(widget_6);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        chkRainborParenthesis = new QCheckBox(widget_6);
        chkRainborParenthesis->setObjectName("chkRainborParenthesis");

        horizontalLayout_4->addWidget(chkRainborParenthesis);

        chkRainbowIndentGuides = new QCheckBox(widget_6);
        chkRainbowIndentGuides->setObjectName("chkRainbowIndentGuides");

        horizontalLayout_4->addWidget(chkRainbowIndentGuides);

        chkRainbowIndents = new QCheckBox(widget_6);
        chkRainbowIndents->setObjectName("chkRainbowIndents");

        horizontalLayout_4->addWidget(chkRainbowIndents);


        verticalLayout->addWidget(widget_6);

        QWidget::setTabOrder(cbScheme, btnSchemeMenu);
        QWidget::setTabOrder(btnSchemeMenu, treeItems);
        QWidget::setTabOrder(treeItems, cbBackground);
        QWidget::setTabOrder(cbBackground, cbForeground);
        QWidget::setTabOrder(cbForeground, cbBold);
        QWidget::setTabOrder(cbBold, cbItalic);
        QWidget::setTabOrder(cbItalic, cbStrikeout);
        QWidget::setTabOrder(cbStrikeout, cbUnderlined);

        retranslateUi(EditorColorSchemeWidget);

        QMetaObject::connectSlotsByName(EditorColorSchemeWidget);
    } // setupUi

    void retranslateUi(QWidget *EditorColorSchemeWidget)
    {
        EditorColorSchemeWidget->setWindowTitle(QCoreApplication::translate("EditorColorSchemeWidget", "Form", nullptr));
        actionCopy_Scheme->setText(QCoreApplication::translate("EditorColorSchemeWidget", "Duplicate...", nullptr));
        actionRename_Scheme->setText(QCoreApplication::translate("EditorColorSchemeWidget", "Rename...", nullptr));
        actionReset_Scheme->setText(QCoreApplication::translate("EditorColorSchemeWidget", "Restore to Default", nullptr));
        actionImport_Scheme->setText(QCoreApplication::translate("EditorColorSchemeWidget", "Import Scheme...", nullptr));
        actionExport_Scheme->setText(QCoreApplication::translate("EditorColorSchemeWidget", "Export...", nullptr));
        actionDelete_Scheme->setText(QCoreApplication::translate("EditorColorSchemeWidget", "Delete...", nullptr));
        label->setText(QCoreApplication::translate("EditorColorSchemeWidget", "Scheme", nullptr));
        btnSchemeMenu->setText(QCoreApplication::translate("EditorColorSchemeWidget", "...", nullptr));
        reloadButton->setText(QCoreApplication::translate("EditorColorSchemeWidget", "Reload", nullptr));
        cbBackground->setText(QCoreApplication::translate("EditorColorSchemeWidget", "Background:", nullptr));
        cbForeground->setText(QCoreApplication::translate("EditorColorSchemeWidget", "Foreground:", nullptr));
        grpFontStyles->setTitle(QCoreApplication::translate("EditorColorSchemeWidget", "Font Styles", nullptr));
        cbBold->setText(QCoreApplication::translate("EditorColorSchemeWidget", "Bold", nullptr));
        cbItalic->setText(QCoreApplication::translate("EditorColorSchemeWidget", "Italic", nullptr));
        cbStrikeout->setText(QCoreApplication::translate("EditorColorSchemeWidget", "Strikeout", nullptr));
        cbUnderlined->setText(QCoreApplication::translate("EditorColorSchemeWidget", "Underlined", nullptr));
        chkRainborParenthesis->setText(QCoreApplication::translate("EditorColorSchemeWidget", "Rainbow parenthesis", nullptr));
        chkRainbowIndentGuides->setText(QCoreApplication::translate("EditorColorSchemeWidget", "Rainbow Indent Guides", nullptr));
        chkRainbowIndents->setText(QCoreApplication::translate("EditorColorSchemeWidget", "Rainbow Indents", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditorColorSchemeWidget: public Ui_EditorColorSchemeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITORCOLORSCHEMEWIDGET_H
