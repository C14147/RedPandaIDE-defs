/********************************************************************************
** Form generated from reading UI file 'projectdirectorieswidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTDIRECTORIESWIDGET_H
#define UI_PROJECTDIRECTORIESWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProjectDirectoriesWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabDirs;

    void setupUi(QWidget *ProjectDirectoriesWidget)
    {
        if (ProjectDirectoriesWidget->objectName().isEmpty())
            ProjectDirectoriesWidget->setObjectName("ProjectDirectoriesWidget");
        ProjectDirectoriesWidget->resize(400, 300);
        horizontalLayout = new QHBoxLayout(ProjectDirectoriesWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        tabDirs = new QTabWidget(ProjectDirectoriesWidget);
        tabDirs->setObjectName("tabDirs");
        tabDirs->setDocumentMode(true);

        horizontalLayout->addWidget(tabDirs);


        retranslateUi(ProjectDirectoriesWidget);

        QMetaObject::connectSlotsByName(ProjectDirectoriesWidget);
    } // setupUi

    void retranslateUi(QWidget *ProjectDirectoriesWidget)
    {
        ProjectDirectoriesWidget->setWindowTitle(QCoreApplication::translate("ProjectDirectoriesWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProjectDirectoriesWidget: public Ui_ProjectDirectoriesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTDIRECTORIESWIDGET_H
