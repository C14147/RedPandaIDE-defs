/********************************************************************************
** Form generated from reading UI file 'editorsnippetwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITORSNIPPETWIDGET_H
#define UI_EDITORSNIPPETWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "editor.h"

QT_BEGIN_NAMESPACE

class Ui_EditorSnippetWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *tabSnippet;
    QHBoxLayout *horizontalLayout_3;
    QSplitter *splitter;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QTableView *tblSnippets;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QToolButton *btnAdd;
    QToolButton *btnRemove;
    QSpacerItem *verticalSpacer;
    Editor *editCode;
    QWidget *tab;
    QHBoxLayout *horizontalLayout_4;
    Editor *editCFileTemplate;
    QWidget *tabFileTemplate;
    QHBoxLayout *horizontalLayout_5;
    Editor *editCppFileTemplate;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout_6;
    Editor *editGASFileTemplate;

    void setupUi(QWidget *EditorSnippetWidget)
    {
        if (EditorSnippetWidget->objectName().isEmpty())
            EditorSnippetWidget->setObjectName("EditorSnippetWidget");
        EditorSnippetWidget->resize(932, 574);
        horizontalLayout = new QHBoxLayout(EditorSnippetWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        tabWidget = new QTabWidget(EditorSnippetWidget);
        tabWidget->setObjectName("tabWidget");
        tabSnippet = new QWidget();
        tabSnippet->setObjectName("tabSnippet");
        horizontalLayout_3 = new QHBoxLayout(tabSnippet);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        splitter = new QSplitter(tabSnippet);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Vertical);
        widget = new QWidget(splitter);
        widget->setObjectName("widget");
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        tblSnippets = new QTableView(widget);
        tblSnippets->setObjectName("tblSnippets");
        tblSnippets->setAlternatingRowColors(true);
        tblSnippets->setSelectionMode(QAbstractItemView::SingleSelection);
        tblSnippets->setSelectionBehavior(QAbstractItemView::SelectRows);
        tblSnippets->setTextElideMode(Qt::ElideNone);
        tblSnippets->horizontalHeader()->setStretchLastSection(true);

        horizontalLayout_2->addWidget(tblSnippets);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName("widget_2");
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btnAdd = new QToolButton(widget_2);
        btnAdd->setObjectName("btnAdd");

        verticalLayout->addWidget(btnAdd);

        btnRemove = new QToolButton(widget_2);
        btnRemove->setObjectName("btnRemove");

        verticalLayout->addWidget(btnRemove);

        verticalSpacer = new QSpacerItem(20, 159, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addWidget(widget_2);

        splitter->addWidget(widget);
        editCode = new Editor(splitter);
        editCode->setObjectName("editCode");
        editCode->setFrameShape(QFrame::StyledPanel);
        editCode->setFrameShadow(QFrame::Raised);
        splitter->addWidget(editCode);

        horizontalLayout_3->addWidget(splitter);

        tabWidget->addTab(tabSnippet, QString());
        tab = new QWidget();
        tab->setObjectName("tab");
        horizontalLayout_4 = new QHBoxLayout(tab);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        editCFileTemplate = new Editor(tab);
        editCFileTemplate->setObjectName("editCFileTemplate");
        editCFileTemplate->setFrameShape(QFrame::StyledPanel);
        editCFileTemplate->setFrameShadow(QFrame::Raised);

        horizontalLayout_4->addWidget(editCFileTemplate);

        tabWidget->addTab(tab, QString());
        tabFileTemplate = new QWidget();
        tabFileTemplate->setObjectName("tabFileTemplate");
        horizontalLayout_5 = new QHBoxLayout(tabFileTemplate);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        editCppFileTemplate = new Editor(tabFileTemplate);
        editCppFileTemplate->setObjectName("editCppFileTemplate");
        editCppFileTemplate->setFrameShape(QFrame::StyledPanel);
        editCppFileTemplate->setFrameShadow(QFrame::Raised);

        horizontalLayout_5->addWidget(editCppFileTemplate);

        tabWidget->addTab(tabFileTemplate, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        horizontalLayout_6 = new QHBoxLayout(tab_2);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        editGASFileTemplate = new Editor(tab_2);
        editGASFileTemplate->setObjectName("editGASFileTemplate");
        editGASFileTemplate->setFrameShape(QFrame::StyledPanel);
        editGASFileTemplate->setFrameShadow(QFrame::Raised);

        horizontalLayout_6->addWidget(editGASFileTemplate);

        tabWidget->addTab(tab_2, QString());

        horizontalLayout->addWidget(tabWidget);

        QWidget::setTabOrder(tabWidget, tblSnippets);
        QWidget::setTabOrder(tblSnippets, btnAdd);
        QWidget::setTabOrder(btnAdd, btnRemove);

        retranslateUi(EditorSnippetWidget);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(EditorSnippetWidget);
    } // setupUi

    void retranslateUi(QWidget *EditorSnippetWidget)
    {
        EditorSnippetWidget->setWindowTitle(QCoreApplication::translate("EditorSnippetWidget", "Form", nullptr));
        btnAdd->setText(QCoreApplication::translate("EditorSnippetWidget", "Add", nullptr));
        btnRemove->setText(QCoreApplication::translate("EditorSnippetWidget", "Remove", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabSnippet), QCoreApplication::translate("EditorSnippetWidget", "Code Snippets", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("EditorSnippetWidget", "New C File Template", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabFileTemplate), QCoreApplication::translate("EditorSnippetWidget", "New C++ File Template", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("EditorSnippetWidget", "New GAS File Template", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditorSnippetWidget: public Ui_EditorSnippetWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITORSNIPPETWIDGET_H
