/********************************************************************************
** Form generated from reading UI file 'projectalreadyopendialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTALREADYOPENDIALOG_H
#define UI_PROJECTALREADYOPENDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProjectAlreadyOpenDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnThisWindow;
    QPushButton *btnNewWindow;
    QPushButton *btnCancel;

    void setupUi(QDialog *ProjectAlreadyOpenDialog)
    {
        if (ProjectAlreadyOpenDialog->objectName().isEmpty())
            ProjectAlreadyOpenDialog->setObjectName("ProjectAlreadyOpenDialog");
        ProjectAlreadyOpenDialog->resize(652, 254);
        verticalLayout = new QVBoxLayout(ProjectAlreadyOpenDialog);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(ProjectAlreadyOpenDialog);
        label->setObjectName("label");
        label->setWordWrap(true);
        label->setMargin(30);

        verticalLayout->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        widget = new QWidget(ProjectAlreadyOpenDialog);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnThisWindow = new QPushButton(widget);
        btnThisWindow->setObjectName("btnThisWindow");
        btnThisWindow->setAutoDefault(false);

        horizontalLayout->addWidget(btnThisWindow);

        btnNewWindow = new QPushButton(widget);
        btnNewWindow->setObjectName("btnNewWindow");

        horizontalLayout->addWidget(btnNewWindow);

        btnCancel = new QPushButton(widget);
        btnCancel->setObjectName("btnCancel");
        btnCancel->setAutoDefault(false);

        horizontalLayout->addWidget(btnCancel);


        verticalLayout->addWidget(widget);


        retranslateUi(ProjectAlreadyOpenDialog);

        btnNewWindow->setDefault(true);


        QMetaObject::connectSlotsByName(ProjectAlreadyOpenDialog);
    } // setupUi

    void retranslateUi(QDialog *ProjectAlreadyOpenDialog)
    {
        ProjectAlreadyOpenDialog->setWindowTitle(QCoreApplication::translate("ProjectAlreadyOpenDialog", "Open Project", nullptr));
        label->setText(QCoreApplication::translate("ProjectAlreadyOpenDialog", "<html><head/><body><p>Projects can either be opened in a new window or replace the project in the existing window or be attached to the already opened projects. How would you like to open the project?</p></body></html>", nullptr));
        btnThisWindow->setText(QCoreApplication::translate("ProjectAlreadyOpenDialog", "&This Window", nullptr));
        btnNewWindow->setText(QCoreApplication::translate("ProjectAlreadyOpenDialog", "New &Window", nullptr));
        btnCancel->setText(QCoreApplication::translate("ProjectAlreadyOpenDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProjectAlreadyOpenDialog: public Ui_ProjectAlreadyOpenDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTALREADYOPENDIALOG_H
