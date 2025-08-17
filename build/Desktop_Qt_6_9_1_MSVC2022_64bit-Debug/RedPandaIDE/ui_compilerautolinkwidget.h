/********************************************************************************
** Form generated from reading UI file 'compilerautolinkwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPILERAUTOLINKWIDGET_H
#define UI_COMPILERAUTOLINKWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CompilerAutolinkWidget
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *grpAutolink;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QToolButton *btnAdd;
    QToolButton *btnRemove;
    QSpacerItem *horizontalSpacer;
    QTableView *tblAutolinks;

    void setupUi(QWidget *CompilerAutolinkWidget)
    {
        if (CompilerAutolinkWidget->objectName().isEmpty())
            CompilerAutolinkWidget->setObjectName("CompilerAutolinkWidget");
        CompilerAutolinkWidget->resize(400, 300);
        verticalLayout = new QVBoxLayout(CompilerAutolinkWidget);
        verticalLayout->setObjectName("verticalLayout");
        grpAutolink = new QGroupBox(CompilerAutolinkWidget);
        grpAutolink->setObjectName("grpAutolink");
        grpAutolink->setCheckable(true);
        verticalLayout_2 = new QVBoxLayout(grpAutolink);
        verticalLayout_2->setObjectName("verticalLayout_2");
        widget = new QWidget(grpAutolink);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnAdd = new QToolButton(widget);
        btnAdd->setObjectName("btnAdd");

        horizontalLayout->addWidget(btnAdd);

        btnRemove = new QToolButton(widget);
        btnRemove->setObjectName("btnRemove");

        horizontalLayout->addWidget(btnRemove);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addWidget(widget);

        tblAutolinks = new QTableView(grpAutolink);
        tblAutolinks->setObjectName("tblAutolinks");
        tblAutolinks->setAlternatingRowColors(true);
        tblAutolinks->setTextElideMode(Qt::ElideNone);
        tblAutolinks->horizontalHeader()->setStretchLastSection(true);
        tblAutolinks->verticalHeader()->setVisible(false);

        verticalLayout_2->addWidget(tblAutolinks);


        verticalLayout->addWidget(grpAutolink);

        QWidget::setTabOrder(grpAutolink, btnAdd);
        QWidget::setTabOrder(btnAdd, btnRemove);
        QWidget::setTabOrder(btnRemove, tblAutolinks);

        retranslateUi(CompilerAutolinkWidget);

        QMetaObject::connectSlotsByName(CompilerAutolinkWidget);
    } // setupUi

    void retranslateUi(QWidget *CompilerAutolinkWidget)
    {
        CompilerAutolinkWidget->setWindowTitle(QCoreApplication::translate("CompilerAutolinkWidget", "Form", nullptr));
        grpAutolink->setTitle(QCoreApplication::translate("CompilerAutolinkWidget", "Enable auto link", nullptr));
#if QT_CONFIG(tooltip)
        btnAdd->setToolTip(QCoreApplication::translate("CompilerAutolinkWidget", "Add", nullptr));
#endif // QT_CONFIG(tooltip)
        btnAdd->setText(QCoreApplication::translate("CompilerAutolinkWidget", "Add", nullptr));
#if QT_CONFIG(tooltip)
        btnRemove->setToolTip(QCoreApplication::translate("CompilerAutolinkWidget", "Remove", nullptr));
#endif // QT_CONFIG(tooltip)
        btnRemove->setText(QCoreApplication::translate("CompilerAutolinkWidget", "Remove", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CompilerAutolinkWidget: public Ui_CompilerAutolinkWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPILERAUTOLINKWIDGET_H
