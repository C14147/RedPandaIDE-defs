/********************************************************************************
** Form generated from reading UI file 'projectmakefilewidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTMAKEFILEWIDGET_H
#define UI_PROJECTMAKEFILEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProjectMakefileWidget
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *grpCustomMakefile;
    QGridLayout *gridLayout;
    QLineEdit *txtCustomMakefile;
    QToolButton *btnBrowse;
    QPushButton *btnInfo;
    QLabel *label;

    void setupUi(QWidget *ProjectMakefileWidget)
    {
        if (ProjectMakefileWidget->objectName().isEmpty())
            ProjectMakefileWidget->setObjectName("ProjectMakefileWidget");
        ProjectMakefileWidget->resize(610, 462);
        verticalLayout = new QVBoxLayout(ProjectMakefileWidget);
        verticalLayout->setObjectName("verticalLayout");
        grpCustomMakefile = new QGroupBox(ProjectMakefileWidget);
        grpCustomMakefile->setObjectName("grpCustomMakefile");
        grpCustomMakefile->setCheckable(true);
        gridLayout = new QGridLayout(grpCustomMakefile);
        gridLayout->setObjectName("gridLayout");
        txtCustomMakefile = new QLineEdit(grpCustomMakefile);
        txtCustomMakefile->setObjectName("txtCustomMakefile");

        gridLayout->addWidget(txtCustomMakefile, 0, 0, 1, 1);

        btnBrowse = new QToolButton(grpCustomMakefile);
        btnBrowse->setObjectName("btnBrowse");

        gridLayout->addWidget(btnBrowse, 0, 1, 1, 1);


        verticalLayout->addWidget(grpCustomMakefile);

        btnInfo = new QPushButton(ProjectMakefileWidget);
        btnInfo->setObjectName("btnInfo");

        verticalLayout->addWidget(btnInfo);

        label = new QLabel(ProjectMakefileWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        QWidget::setTabOrder(grpCustomMakefile, txtCustomMakefile);
        QWidget::setTabOrder(txtCustomMakefile, btnBrowse);
        QWidget::setTabOrder(btnBrowse, btnInfo);

        retranslateUi(ProjectMakefileWidget);

        QMetaObject::connectSlotsByName(ProjectMakefileWidget);
    } // setupUi

    void retranslateUi(QWidget *ProjectMakefileWidget)
    {
        ProjectMakefileWidget->setWindowTitle(QCoreApplication::translate("ProjectMakefileWidget", "Form", nullptr));
        grpCustomMakefile->setTitle(QCoreApplication::translate("ProjectMakefileWidget", "Use custom make file", nullptr));
#if QT_CONFIG(tooltip)
        btnBrowse->setToolTip(QCoreApplication::translate("ProjectMakefileWidget", "Browse", nullptr));
#endif // QT_CONFIG(tooltip)
        btnBrowse->setText(QCoreApplication::translate("ProjectMakefileWidget", "Browse", nullptr));
        btnInfo->setText(QCoreApplication::translate("ProjectMakefileWidget", "Information about using a custom make file ", nullptr));
        label->setText(QCoreApplication::translate("ProjectMakefileWidget", "Include the following files into the makefile:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProjectMakefileWidget: public Ui_ProjectMakefileWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTMAKEFILEWIDGET_H
