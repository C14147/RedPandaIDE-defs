/********************************************************************************
** Form generated from reading UI file 'projectdllhostwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTDLLHOSTWIDGET_H
#define UI_PROJECTDLLHOSTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProjectDLLHostWidget
{
public:
    QGridLayout *gridLayout;
    QToolButton *btnBrowse;
    QLineEdit *txtHost;
    QLabel *label;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ProjectDLLHostWidget)
    {
        if (ProjectDLLHostWidget->objectName().isEmpty())
            ProjectDLLHostWidget->setObjectName("ProjectDLLHostWidget");
        ProjectDLLHostWidget->resize(400, 300);
        gridLayout = new QGridLayout(ProjectDLLHostWidget);
        gridLayout->setObjectName("gridLayout");
        btnBrowse = new QToolButton(ProjectDLLHostWidget);
        btnBrowse->setObjectName("btnBrowse");

        gridLayout->addWidget(btnBrowse, 0, 2, 1, 1);

        txtHost = new QLineEdit(ProjectDLLHostWidget);
        txtHost->setObjectName("txtHost");

        gridLayout->addWidget(txtHost, 0, 1, 1, 1);

        label = new QLabel(ProjectDLLHostWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        QWidget::setTabOrder(txtHost, btnBrowse);

        retranslateUi(ProjectDLLHostWidget);

        QMetaObject::connectSlotsByName(ProjectDLLHostWidget);
    } // setupUi

    void retranslateUi(QWidget *ProjectDLLHostWidget)
    {
        ProjectDLLHostWidget->setWindowTitle(QCoreApplication::translate("ProjectDLLHostWidget", "Form", nullptr));
#if QT_CONFIG(tooltip)
        btnBrowse->setToolTip(QCoreApplication::translate("ProjectDLLHostWidget", "Browse", nullptr));
#endif // QT_CONFIG(tooltip)
        btnBrowse->setText(QCoreApplication::translate("ProjectDLLHostWidget", "Browse", nullptr));
        label->setText(QCoreApplication::translate("ProjectDLLHostWidget", "Host application for DLL:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProjectDLLHostWidget: public Ui_ProjectDLLHostWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTDLLHOSTWIDGET_H
