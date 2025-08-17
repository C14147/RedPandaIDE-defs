/********************************************************************************
** Form generated from reading UI file 'environmentshortcutwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENVIRONMENTSHORTCUTWIDGET_H
#define UI_ENVIRONMENTSHORTCUTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EnvironmentShortcutWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *txtKeyword;
    QTableView *tblShortcut;

    void setupUi(QWidget *EnvironmentShortcutWidget)
    {
        if (EnvironmentShortcutWidget->objectName().isEmpty())
            EnvironmentShortcutWidget->setObjectName("EnvironmentShortcutWidget");
        EnvironmentShortcutWidget->resize(400, 300);
        verticalLayout = new QVBoxLayout(EnvironmentShortcutWidget);
        verticalLayout->setObjectName("verticalLayout");
        widget = new QWidget(EnvironmentShortcutWidget);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        txtKeyword = new QLineEdit(widget);
        txtKeyword->setObjectName("txtKeyword");

        horizontalLayout->addWidget(txtKeyword);


        verticalLayout->addWidget(widget);

        tblShortcut = new QTableView(EnvironmentShortcutWidget);
        tblShortcut->setObjectName("tblShortcut");
        tblShortcut->setAlternatingRowColors(true);
        tblShortcut->horizontalHeader()->setDefaultSectionSize(250);
        tblShortcut->horizontalHeader()->setStretchLastSection(true);

        verticalLayout->addWidget(tblShortcut);


        retranslateUi(EnvironmentShortcutWidget);

        QMetaObject::connectSlotsByName(EnvironmentShortcutWidget);
    } // setupUi

    void retranslateUi(QWidget *EnvironmentShortcutWidget)
    {
        EnvironmentShortcutWidget->setWindowTitle(QCoreApplication::translate("EnvironmentShortcutWidget", "Form", nullptr));
        label->setText(QCoreApplication::translate("EnvironmentShortcutWidget", "Filter Actions", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EnvironmentShortcutWidget: public Ui_EnvironmentShortcutWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENVIRONMENTSHORTCUTWIDGET_H
