/********************************************************************************
** Form generated from reading UI file 'environmentfolderswidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENVIRONMENTFOLDERSWIDGET_H
#define UI_ENVIRONMENTFOLDERSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EnvironmentFoldersWidget
{
public:
    QGridLayout *gridLayout;
    QToolButton *btnOpenIconSetFolderInFileBrowser;
    QSpacerItem *verticalSpacer;
    QLineEdit *txtConfigFolder;
    QLabel *label_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnResetDefault;
    QToolButton *btnOpenConfigFolderInBrowser;
    QLabel *label;
    QLineEdit *txtIconSetFolder;
    QLabel *label_3;
    QLineEdit *txtThemeFolder;
    QToolButton *btnOpenThemeFolderInFileBrowser;

    void setupUi(QWidget *EnvironmentFoldersWidget)
    {
        if (EnvironmentFoldersWidget->objectName().isEmpty())
            EnvironmentFoldersWidget->setObjectName("EnvironmentFoldersWidget");
        EnvironmentFoldersWidget->resize(400, 300);
        gridLayout = new QGridLayout(EnvironmentFoldersWidget);
        gridLayout->setObjectName("gridLayout");
        btnOpenIconSetFolderInFileBrowser = new QToolButton(EnvironmentFoldersWidget);
        btnOpenIconSetFolderInFileBrowser->setObjectName("btnOpenIconSetFolderInFileBrowser");

        gridLayout->addWidget(btnOpenIconSetFolderInFileBrowser, 2, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 0, 1, 1);

        txtConfigFolder = new QLineEdit(EnvironmentFoldersWidget);
        txtConfigFolder->setObjectName("txtConfigFolder");
        txtConfigFolder->setReadOnly(true);

        gridLayout->addWidget(txtConfigFolder, 0, 1, 1, 1);

        label_2 = new QLabel(EnvironmentFoldersWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        widget = new QWidget(EnvironmentFoldersWidget);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnResetDefault = new QPushButton(widget);
        btnResetDefault->setObjectName("btnResetDefault");

        horizontalLayout->addWidget(btnResetDefault);


        gridLayout->addWidget(widget, 4, 0, 1, 3);

        btnOpenConfigFolderInBrowser = new QToolButton(EnvironmentFoldersWidget);
        btnOpenConfigFolderInBrowser->setObjectName("btnOpenConfigFolderInBrowser");

        gridLayout->addWidget(btnOpenConfigFolderInBrowser, 0, 2, 1, 1);

        label = new QLabel(EnvironmentFoldersWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        txtIconSetFolder = new QLineEdit(EnvironmentFoldersWidget);
        txtIconSetFolder->setObjectName("txtIconSetFolder");
        txtIconSetFolder->setReadOnly(true);

        gridLayout->addWidget(txtIconSetFolder, 2, 1, 1, 1);

        label_3 = new QLabel(EnvironmentFoldersWidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        txtThemeFolder = new QLineEdit(EnvironmentFoldersWidget);
        txtThemeFolder->setObjectName("txtThemeFolder");

        gridLayout->addWidget(txtThemeFolder, 1, 1, 1, 1);

        btnOpenThemeFolderInFileBrowser = new QToolButton(EnvironmentFoldersWidget);
        btnOpenThemeFolderInFileBrowser->setObjectName("btnOpenThemeFolderInFileBrowser");

        gridLayout->addWidget(btnOpenThemeFolderInFileBrowser, 1, 2, 1, 1);

        QWidget::setTabOrder(txtConfigFolder, btnOpenConfigFolderInBrowser);
        QWidget::setTabOrder(btnOpenConfigFolderInBrowser, txtThemeFolder);
        QWidget::setTabOrder(txtThemeFolder, btnOpenThemeFolderInFileBrowser);
        QWidget::setTabOrder(btnOpenThemeFolderInFileBrowser, txtIconSetFolder);
        QWidget::setTabOrder(txtIconSetFolder, btnOpenIconSetFolderInFileBrowser);
        QWidget::setTabOrder(btnOpenIconSetFolderInFileBrowser, btnResetDefault);

        retranslateUi(EnvironmentFoldersWidget);

        QMetaObject::connectSlotsByName(EnvironmentFoldersWidget);
    } // setupUi

    void retranslateUi(QWidget *EnvironmentFoldersWidget)
    {
        EnvironmentFoldersWidget->setWindowTitle(QCoreApplication::translate("EnvironmentFoldersWidget", "Form", nullptr));
#if QT_CONFIG(tooltip)
        btnOpenIconSetFolderInFileBrowser->setToolTip(QCoreApplication::translate("EnvironmentFoldersWidget", "Open in browser", nullptr));
#endif // QT_CONFIG(tooltip)
        btnOpenIconSetFolderInFileBrowser->setText(QCoreApplication::translate("EnvironmentFoldersWidget", "Open in browser", nullptr));
        label_2->setText(QCoreApplication::translate("EnvironmentFoldersWidget", "Custom icon sets folder:", nullptr));
        btnResetDefault->setText(QCoreApplication::translate("EnvironmentFoldersWidget", "Remove all custom settings and exit", nullptr));
#if QT_CONFIG(tooltip)
        btnOpenConfigFolderInBrowser->setToolTip(QCoreApplication::translate("EnvironmentFoldersWidget", "Open in browser", nullptr));
#endif // QT_CONFIG(tooltip)
        btnOpenConfigFolderInBrowser->setText(QCoreApplication::translate("EnvironmentFoldersWidget", "Open in browser", nullptr));
        label->setText(QCoreApplication::translate("EnvironmentFoldersWidget", "Configuration folder:", nullptr));
        label_3->setText(QCoreApplication::translate("EnvironmentFoldersWidget", "Custom theme folder:", nullptr));
#if QT_CONFIG(tooltip)
        btnOpenThemeFolderInFileBrowser->setToolTip(QCoreApplication::translate("EnvironmentFoldersWidget", "Open custom theme folder in file browser", nullptr));
#endif // QT_CONFIG(tooltip)
        btnOpenThemeFolderInFileBrowser->setText(QCoreApplication::translate("EnvironmentFoldersWidget", "Open in browser", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EnvironmentFoldersWidget: public Ui_EnvironmentFoldersWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENVIRONMENTFOLDERSWIDGET_H
