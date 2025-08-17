/********************************************************************************
** Form generated from reading UI file 'newclassdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWCLASSDIALOG_H
#define UI_NEWCLASSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
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

class Ui_NewClassDialog
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label_4;
    QLineEdit *txtClassName;
    QLineEdit *txtPath;
    QLabel *label;
    QComboBox *cbBaseClass;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnCreate;
    QPushButton *btnCancel;
    QLabel *label_3;
    QLabel *label_2;
    QToolButton *btnBrowsePath;
    QLineEdit *txtHeaderName;
    QLabel *label_5;
    QLineEdit *txtSourceName;

    void setupUi(QDialog *NewClassDialog)
    {
        if (NewClassDialog->objectName().isEmpty())
            NewClassDialog->setObjectName("NewClassDialog");
        NewClassDialog->resize(642, 300);
        gridLayout = new QGridLayout(NewClassDialog);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 7, 0, 1, 1);

        label_4 = new QLabel(NewClassDialog);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        txtClassName = new QLineEdit(NewClassDialog);
        txtClassName->setObjectName("txtClassName");

        gridLayout->addWidget(txtClassName, 0, 2, 1, 2);

        txtPath = new QLineEdit(NewClassDialog);
        txtPath->setObjectName("txtPath");

        gridLayout->addWidget(txtPath, 4, 2, 1, 1);

        label = new QLabel(NewClassDialog);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        cbBaseClass = new QComboBox(NewClassDialog);
        cbBaseClass->setObjectName("cbBaseClass");
        cbBaseClass->setEditable(false);

        gridLayout->addWidget(cbBaseClass, 1, 2, 1, 2);

        widget = new QWidget(NewClassDialog);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnCreate = new QPushButton(widget);
        btnCreate->setObjectName("btnCreate");

        horizontalLayout->addWidget(btnCreate);

        btnCancel = new QPushButton(widget);
        btnCancel->setObjectName("btnCancel");

        horizontalLayout->addWidget(btnCancel);


        gridLayout->addWidget(widget, 8, 0, 1, 4);

        label_3 = new QLabel(NewClassDialog);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        label_2 = new QLabel(NewClassDialog);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        btnBrowsePath = new QToolButton(NewClassDialog);
        btnBrowsePath->setObjectName("btnBrowsePath");

        gridLayout->addWidget(btnBrowsePath, 4, 3, 1, 1);

        txtHeaderName = new QLineEdit(NewClassDialog);
        txtHeaderName->setObjectName("txtHeaderName");

        gridLayout->addWidget(txtHeaderName, 2, 2, 1, 2);

        label_5 = new QLabel(NewClassDialog);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        txtSourceName = new QLineEdit(NewClassDialog);
        txtSourceName->setObjectName("txtSourceName");

        gridLayout->addWidget(txtSourceName, 3, 2, 1, 2);

        QWidget::setTabOrder(txtClassName, cbBaseClass);
        QWidget::setTabOrder(cbBaseClass, txtHeaderName);
        QWidget::setTabOrder(txtHeaderName, txtSourceName);
        QWidget::setTabOrder(txtSourceName, txtPath);
        QWidget::setTabOrder(txtPath, btnBrowsePath);
        QWidget::setTabOrder(btnBrowsePath, btnCreate);
        QWidget::setTabOrder(btnCreate, btnCancel);

        retranslateUi(NewClassDialog);

        QMetaObject::connectSlotsByName(NewClassDialog);
    } // setupUi

    void retranslateUi(QDialog *NewClassDialog)
    {
        NewClassDialog->setWindowTitle(QCoreApplication::translate("NewClassDialog", "New Class", nullptr));
        label_4->setText(QCoreApplication::translate("NewClassDialog", "Header Name:", nullptr));
        label->setText(QCoreApplication::translate("NewClassDialog", "Class Name:", nullptr));
        btnCreate->setText(QCoreApplication::translate("NewClassDialog", "Create", nullptr));
        btnCancel->setText(QCoreApplication::translate("NewClassDialog", "Cancel", nullptr));
        label_3->setText(QCoreApplication::translate("NewClassDialog", "Path:", nullptr));
        label_2->setText(QCoreApplication::translate("NewClassDialog", "Base Class:", nullptr));
        btnBrowsePath->setText(QCoreApplication::translate("NewClassDialog", "...", nullptr));
        label_5->setText(QCoreApplication::translate("NewClassDialog", "Source Name:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewClassDialog: public Ui_NewClassDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWCLASSDIALOG_H
