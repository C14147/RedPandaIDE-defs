/********************************************************************************
** Form generated from reading UI file 'projectoutputwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTOUTPUTWIDGET_H
#define UI_PROJECTOUTPUTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProjectOutputWidget
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLineEdit *txtOutputDir;
    QToolButton *btnOutputDir;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *txtObjOutputDir;
    QToolButton *btnObjOutputDir;
    QGroupBox *grpAutosaveCompileLog;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *txtCompileLog;
    QToolButton *btnCompileLog;
    QGroupBox *grpOverrideOutput;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *txtOutputFilename;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ProjectOutputWidget)
    {
        if (ProjectOutputWidget->objectName().isEmpty())
            ProjectOutputWidget->setObjectName("ProjectOutputWidget");
        ProjectOutputWidget->resize(561, 457);
        verticalLayout = new QVBoxLayout(ProjectOutputWidget);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(ProjectOutputWidget);
        groupBox->setObjectName("groupBox");
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName("horizontalLayout");
        txtOutputDir = new QLineEdit(groupBox);
        txtOutputDir->setObjectName("txtOutputDir");

        horizontalLayout->addWidget(txtOutputDir);

        btnOutputDir = new QToolButton(groupBox);
        btnOutputDir->setObjectName("btnOutputDir");

        horizontalLayout->addWidget(btnOutputDir);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(ProjectOutputWidget);
        groupBox_2->setObjectName("groupBox_2");
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        txtObjOutputDir = new QLineEdit(groupBox_2);
        txtObjOutputDir->setObjectName("txtObjOutputDir");

        horizontalLayout_2->addWidget(txtObjOutputDir);

        btnObjOutputDir = new QToolButton(groupBox_2);
        btnObjOutputDir->setObjectName("btnObjOutputDir");

        horizontalLayout_2->addWidget(btnObjOutputDir);


        verticalLayout->addWidget(groupBox_2);

        grpAutosaveCompileLog = new QGroupBox(ProjectOutputWidget);
        grpAutosaveCompileLog->setObjectName("grpAutosaveCompileLog");
        grpAutosaveCompileLog->setCheckable(true);
        grpAutosaveCompileLog->setChecked(false);
        horizontalLayout_3 = new QHBoxLayout(grpAutosaveCompileLog);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        txtCompileLog = new QLineEdit(grpAutosaveCompileLog);
        txtCompileLog->setObjectName("txtCompileLog");

        horizontalLayout_3->addWidget(txtCompileLog);

        btnCompileLog = new QToolButton(grpAutosaveCompileLog);
        btnCompileLog->setObjectName("btnCompileLog");

        horizontalLayout_3->addWidget(btnCompileLog);


        verticalLayout->addWidget(grpAutosaveCompileLog);

        grpOverrideOutput = new QGroupBox(ProjectOutputWidget);
        grpOverrideOutput->setObjectName("grpOverrideOutput");
        grpOverrideOutput->setCheckable(true);
        grpOverrideOutput->setChecked(false);
        horizontalLayout_4 = new QHBoxLayout(grpOverrideOutput);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        txtOutputFilename = new QLineEdit(grpOverrideOutput);
        txtOutputFilename->setObjectName("txtOutputFilename");

        horizontalLayout_4->addWidget(txtOutputFilename);


        verticalLayout->addWidget(grpOverrideOutput);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QWidget::setTabOrder(txtOutputDir, btnOutputDir);
        QWidget::setTabOrder(btnOutputDir, txtObjOutputDir);
        QWidget::setTabOrder(txtObjOutputDir, btnObjOutputDir);
        QWidget::setTabOrder(btnObjOutputDir, grpAutosaveCompileLog);
        QWidget::setTabOrder(grpAutosaveCompileLog, txtCompileLog);
        QWidget::setTabOrder(txtCompileLog, btnCompileLog);
        QWidget::setTabOrder(btnCompileLog, grpOverrideOutput);
        QWidget::setTabOrder(grpOverrideOutput, txtOutputFilename);

        retranslateUi(ProjectOutputWidget);

        QMetaObject::connectSlotsByName(ProjectOutputWidget);
    } // setupUi

    void retranslateUi(QWidget *ProjectOutputWidget)
    {
        ProjectOutputWidget->setWindowTitle(QCoreApplication::translate("ProjectOutputWidget", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ProjectOutputWidget", "Directory for output", nullptr));
        btnOutputDir->setText(QCoreApplication::translate("ProjectOutputWidget", "browse", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ProjectOutputWidget", "Directory for obj files", nullptr));
        btnObjOutputDir->setText(QCoreApplication::translate("ProjectOutputWidget", "browse", nullptr));
        grpAutosaveCompileLog->setTitle(QCoreApplication::translate("ProjectOutputWidget", "Auto save compile log", nullptr));
        btnCompileLog->setText(QCoreApplication::translate("ProjectOutputWidget", "browse", nullptr));
        grpOverrideOutput->setTitle(QCoreApplication::translate("ProjectOutputWidget", "Override output filename", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProjectOutputWidget: public Ui_ProjectOutputWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTOUTPUTWIDGET_H
