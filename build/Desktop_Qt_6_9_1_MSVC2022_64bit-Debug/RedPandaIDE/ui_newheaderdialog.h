/********************************************************************************
** Form generated from reading UI file 'newheaderdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWHEADERDIALOG_H
#define UI_NEWHEADERDIALOG_H

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

class Ui_NewHeaderDialog
{
public:
    QGridLayout *gridLayout;
    QLineEdit *txtPath;
    QLabel *label;
    QToolButton *btnBrowse;
    QLabel *label_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnCreate;
    QPushButton *btnCancel;
    QLineEdit *txtHeader;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *NewHeaderDialog)
    {
        if (NewHeaderDialog->objectName().isEmpty())
            NewHeaderDialog->setObjectName("NewHeaderDialog");
        NewHeaderDialog->resize(400, 300);
        gridLayout = new QGridLayout(NewHeaderDialog);
        gridLayout->setObjectName("gridLayout");
        txtPath = new QLineEdit(NewHeaderDialog);
        txtPath->setObjectName("txtPath");

        gridLayout->addWidget(txtPath, 1, 1, 1, 1);

        label = new QLabel(NewHeaderDialog);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        btnBrowse = new QToolButton(NewHeaderDialog);
        btnBrowse->setObjectName("btnBrowse");

        gridLayout->addWidget(btnBrowse, 1, 2, 1, 1);

        label_2 = new QLabel(NewHeaderDialog);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        widget = new QWidget(NewHeaderDialog);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(179, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnCreate = new QPushButton(widget);
        btnCreate->setObjectName("btnCreate");

        horizontalLayout->addWidget(btnCreate);

        btnCancel = new QPushButton(widget);
        btnCancel->setObjectName("btnCancel");

        horizontalLayout->addWidget(btnCancel);


        gridLayout->addWidget(widget, 3, 0, 1, 3);

        txtHeader = new QLineEdit(NewHeaderDialog);
        txtHeader->setObjectName("txtHeader");

        gridLayout->addWidget(txtHeader, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);

        QWidget::setTabOrder(txtHeader, txtPath);
        QWidget::setTabOrder(txtPath, btnBrowse);
        QWidget::setTabOrder(btnBrowse, btnCreate);
        QWidget::setTabOrder(btnCreate, btnCancel);

        retranslateUi(NewHeaderDialog);

        QMetaObject::connectSlotsByName(NewHeaderDialog);
    } // setupUi

    void retranslateUi(QDialog *NewHeaderDialog)
    {
        NewHeaderDialog->setWindowTitle(QCoreApplication::translate("NewHeaderDialog", "New Header", nullptr));
        label->setText(QCoreApplication::translate("NewHeaderDialog", "Header:", nullptr));
#if QT_CONFIG(tooltip)
        btnBrowse->setToolTip(QCoreApplication::translate("NewHeaderDialog", "Browse", nullptr));
#endif // QT_CONFIG(tooltip)
        btnBrowse->setText(QCoreApplication::translate("NewHeaderDialog", "Browse", nullptr));
        label_2->setText(QCoreApplication::translate("NewHeaderDialog", "Path:", nullptr));
        btnCreate->setText(QCoreApplication::translate("NewHeaderDialog", "Create", nullptr));
        btnCancel->setText(QCoreApplication::translate("NewHeaderDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewHeaderDialog: public Ui_NewHeaderDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWHEADERDIALOG_H
