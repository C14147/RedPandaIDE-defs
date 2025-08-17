/********************************************************************************
** Form generated from reading UI file 'newtemplatedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWTEMPLATEDIALOG_H
#define UI_NEWTEMPLATEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewTemplateDialog
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *txtName;
    QComboBox *cbCategory;
    QPlainTextEdit *txtDescription;
    QSpacerItem *verticalSpacer;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnCreate;
    QPushButton *btnCancel;

    void setupUi(QDialog *NewTemplateDialog)
    {
        if (NewTemplateDialog->objectName().isEmpty())
            NewTemplateDialog->setObjectName("NewTemplateDialog");
        NewTemplateDialog->resize(553, 519);
        verticalLayout = new QVBoxLayout(NewTemplateDialog);
        verticalLayout->setObjectName("verticalLayout");
        widget_2 = new QWidget(NewTemplateDialog);
        widget_2->setObjectName("widget_2");
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget_2);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(widget_2);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        txtName = new QLineEdit(widget_2);
        txtName->setObjectName("txtName");

        gridLayout->addWidget(txtName, 0, 1, 1, 1);

        cbCategory = new QComboBox(widget_2);
        cbCategory->setObjectName("cbCategory");
        cbCategory->setEditable(true);

        gridLayout->addWidget(cbCategory, 1, 1, 1, 1);

        txtDescription = new QPlainTextEdit(widget_2);
        txtDescription->setObjectName("txtDescription");

        gridLayout->addWidget(txtDescription, 2, 1, 1, 1);


        verticalLayout->addWidget(widget_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        widget = new QWidget(NewTemplateDialog);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(332, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnCreate = new QPushButton(widget);
        btnCreate->setObjectName("btnCreate");

        horizontalLayout->addWidget(btnCreate);

        btnCancel = new QPushButton(widget);
        btnCancel->setObjectName("btnCancel");

        horizontalLayout->addWidget(btnCancel);


        verticalLayout->addWidget(widget);


        retranslateUi(NewTemplateDialog);

        QMetaObject::connectSlotsByName(NewTemplateDialog);
    } // setupUi

    void retranslateUi(QDialog *NewTemplateDialog)
    {
        NewTemplateDialog->setWindowTitle(QCoreApplication::translate("NewTemplateDialog", "Create Template From Project", nullptr));
        label_3->setText(QCoreApplication::translate("NewTemplateDialog", "Description", nullptr));
        label_2->setText(QCoreApplication::translate("NewTemplateDialog", "Category", nullptr));
        label->setText(QCoreApplication::translate("NewTemplateDialog", "Name", nullptr));
        btnCreate->setText(QCoreApplication::translate("NewTemplateDialog", "Create", nullptr));
        btnCancel->setText(QCoreApplication::translate("NewTemplateDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewTemplateDialog: public Ui_NewTemplateDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWTEMPLATEDIALOG_H
