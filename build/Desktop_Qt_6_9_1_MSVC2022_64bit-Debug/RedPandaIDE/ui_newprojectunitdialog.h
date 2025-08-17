/********************************************************************************
** Form generated from reading UI file 'newprojectunitdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWPROJECTUNITDIALOG_H
#define UI_NEWPROJECTUNITDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewProjectUnitDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *txtFolder;
    QLabel *label;
    QToolButton *btnBrowse;
    QLineEdit *txtFilename;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnOk;
    QPushButton *btnCancel;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *NewProjectUnitDialog)
    {
        if (NewProjectUnitDialog->objectName().isEmpty())
            NewProjectUnitDialog->setObjectName("NewProjectUnitDialog");
        NewProjectUnitDialog->resize(547, 250);
        gridLayout = new QGridLayout(NewProjectUnitDialog);
        gridLayout->setObjectName("gridLayout");
        label_2 = new QLabel(NewProjectUnitDialog);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        txtFolder = new QLineEdit(NewProjectUnitDialog);
        txtFolder->setObjectName("txtFolder");
        txtFolder->setReadOnly(true);

        gridLayout->addWidget(txtFolder, 1, 1, 1, 1);

        label = new QLabel(NewProjectUnitDialog);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        btnBrowse = new QToolButton(NewProjectUnitDialog);
        btnBrowse->setObjectName("btnBrowse");

        gridLayout->addWidget(btnBrowse, 1, 2, 1, 1);

        txtFilename = new QLineEdit(NewProjectUnitDialog);
        txtFilename->setObjectName("txtFilename");

        gridLayout->addWidget(txtFilename, 0, 1, 1, 2);

        widget = new QWidget(NewProjectUnitDialog);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnOk = new QPushButton(widget);
        btnOk->setObjectName("btnOk");

        horizontalLayout->addWidget(btnOk);

        btnCancel = new QPushButton(widget);
        btnCancel->setObjectName("btnCancel");

        horizontalLayout->addWidget(btnCancel);


        gridLayout->addWidget(widget, 3, 0, 1, 3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);

        QWidget::setTabOrder(txtFilename, txtFolder);
        QWidget::setTabOrder(txtFolder, btnBrowse);
        QWidget::setTabOrder(btnBrowse, btnOk);
        QWidget::setTabOrder(btnOk, btnCancel);

        retranslateUi(NewProjectUnitDialog);

        QMetaObject::connectSlotsByName(NewProjectUnitDialog);
    } // setupUi

    void retranslateUi(QDialog *NewProjectUnitDialog)
    {
        NewProjectUnitDialog->setWindowTitle(QCoreApplication::translate("NewProjectUnitDialog", "New Project Unit", nullptr));
        label_2->setText(QCoreApplication::translate("NewProjectUnitDialog", "Folder", nullptr));
        label->setText(QCoreApplication::translate("NewProjectUnitDialog", "Filename", nullptr));
#if QT_CONFIG(tooltip)
        btnBrowse->setToolTip(QCoreApplication::translate("NewProjectUnitDialog", "Browse", nullptr));
#endif // QT_CONFIG(tooltip)
        btnBrowse->setText(QCoreApplication::translate("NewProjectUnitDialog", "Browse", nullptr));
        btnOk->setText(QCoreApplication::translate("NewProjectUnitDialog", "Ok", nullptr));
        btnCancel->setText(QCoreApplication::translate("NewProjectUnitDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewProjectUnitDialog: public Ui_NewProjectUnitDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWPROJECTUNITDIALOG_H
