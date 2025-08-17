/********************************************************************************
** Form generated from reading UI file 'projectversioninfowidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTVERSIONINFOWIDGET_H
#define UI_PROJECTVERSIONINFOWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProjectVersionInfoWidget
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *grpVersionInfo;
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QSpinBox *spinMinor;
    QSpinBox *spinBuild;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QSpinBox *spinRelease;
    QSpinBox *spinMajor;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QComboBox *cbLanguage;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_10;
    QLineEdit *txtCompanyName;
    QCheckBox *chkSyncProductWithFile;
    QLabel *label_11;
    QLineEdit *txtProductName;
    QLineEdit *txtFileDescription;
    QLabel *label_7;
    QLabel *label_14;
    QLabel *label_8;
    QLineEdit *txtLegalCopyright;
    QLabel *label_12;
    QLineEdit *txtInternalFilename;
    QCheckBox *chkAutoIncreaseBuildNumber;
    QLineEdit *txtOriginalFilename;
    QLabel *label_6;
    QLabel *label_9;
    QLineEdit *txtProductVersion;
    QLabel *label_13;
    QLineEdit *txtFileVersion;
    QLineEdit *txtLegalTrademarks;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ProjectVersionInfoWidget)
    {
        if (ProjectVersionInfoWidget->objectName().isEmpty())
            ProjectVersionInfoWidget->setObjectName("ProjectVersionInfoWidget");
        ProjectVersionInfoWidget->resize(906, 582);
        verticalLayout = new QVBoxLayout(ProjectVersionInfoWidget);
        verticalLayout->setObjectName("verticalLayout");
        grpVersionInfo = new QGroupBox(ProjectVersionInfoWidget);
        grpVersionInfo->setObjectName("grpVersionInfo");
        grpVersionInfo->setCheckable(true);
        gridLayout = new QGridLayout(grpVersionInfo);
        gridLayout->setObjectName("gridLayout");
        widget = new QWidget(grpVersionInfo);
        widget->setObjectName("widget");
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName("gridLayout_2");
        spinMinor = new QSpinBox(widget);
        spinMinor->setObjectName("spinMinor");
        spinMinor->setMaximum(999999999);

        gridLayout_2->addWidget(spinMinor, 2, 1, 1, 1);

        spinBuild = new QSpinBox(widget);
        spinBuild->setObjectName("spinBuild");
        spinBuild->setMaximum(999999999);

        gridLayout_2->addWidget(spinBuild, 2, 3, 1, 1);

        label = new QLabel(widget);
        label->setObjectName("label");

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 1, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        gridLayout_2->addWidget(label_3, 1, 2, 1, 1);

        spinRelease = new QSpinBox(widget);
        spinRelease->setObjectName("spinRelease");
        spinRelease->setMaximum(999999999);

        gridLayout_2->addWidget(spinRelease, 2, 2, 1, 1);

        spinMajor = new QSpinBox(widget);
        spinMajor->setObjectName("spinMajor");
        spinMajor->setMaximum(999999999);

        gridLayout_2->addWidget(spinMajor, 2, 0, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        gridLayout_2->addWidget(label_4, 1, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 4, 1, 1);


        gridLayout->addWidget(widget, 0, 0, 1, 3);

        widget_2 = new QWidget(grpVersionInfo);
        widget_2->setObjectName("widget_2");
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_5 = new QLabel(widget_2);
        label_5->setObjectName("label_5");

        horizontalLayout_2->addWidget(label_5);

        cbLanguage = new QComboBox(widget_2);
        cbLanguage->setObjectName("cbLanguage");

        horizontalLayout_2->addWidget(cbLanguage);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout->addWidget(widget_2, 3, 0, 1, 3);

        label_10 = new QLabel(grpVersionInfo);
        label_10->setObjectName("label_10");

        gridLayout->addWidget(label_10, 8, 0, 1, 1);

        txtCompanyName = new QLineEdit(grpVersionInfo);
        txtCompanyName->setObjectName("txtCompanyName");

        gridLayout->addWidget(txtCompanyName, 10, 1, 1, 1);

        chkSyncProductWithFile = new QCheckBox(grpVersionInfo);
        chkSyncProductWithFile->setObjectName("chkSyncProductWithFile");

        gridLayout->addWidget(chkSyncProductWithFile, 2, 0, 1, 3);

        label_11 = new QLabel(grpVersionInfo);
        label_11->setObjectName("label_11");

        gridLayout->addWidget(label_11, 9, 0, 1, 1);

        txtProductName = new QLineEdit(grpVersionInfo);
        txtProductName->setObjectName("txtProductName");

        gridLayout->addWidget(txtProductName, 6, 1, 1, 1);

        txtFileDescription = new QLineEdit(grpVersionInfo);
        txtFileDescription->setObjectName("txtFileDescription");

        gridLayout->addWidget(txtFileDescription, 4, 1, 1, 1);

        label_7 = new QLabel(grpVersionInfo);
        label_7->setObjectName("label_7");

        gridLayout->addWidget(label_7, 5, 0, 1, 1);

        label_14 = new QLabel(grpVersionInfo);
        label_14->setObjectName("label_14");

        gridLayout->addWidget(label_14, 12, 0, 1, 1);

        label_8 = new QLabel(grpVersionInfo);
        label_8->setObjectName("label_8");

        gridLayout->addWidget(label_8, 6, 0, 1, 1);

        txtLegalCopyright = new QLineEdit(grpVersionInfo);
        txtLegalCopyright->setObjectName("txtLegalCopyright");

        gridLayout->addWidget(txtLegalCopyright, 11, 1, 1, 1);

        label_12 = new QLabel(grpVersionInfo);
        label_12->setObjectName("label_12");

        gridLayout->addWidget(label_12, 10, 0, 1, 1);

        txtInternalFilename = new QLineEdit(grpVersionInfo);
        txtInternalFilename->setObjectName("txtInternalFilename");

        gridLayout->addWidget(txtInternalFilename, 9, 1, 1, 1);

        chkAutoIncreaseBuildNumber = new QCheckBox(grpVersionInfo);
        chkAutoIncreaseBuildNumber->setObjectName("chkAutoIncreaseBuildNumber");

        gridLayout->addWidget(chkAutoIncreaseBuildNumber, 1, 0, 1, 3);

        txtOriginalFilename = new QLineEdit(grpVersionInfo);
        txtOriginalFilename->setObjectName("txtOriginalFilename");

        gridLayout->addWidget(txtOriginalFilename, 8, 1, 1, 1);

        label_6 = new QLabel(grpVersionInfo);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        label_9 = new QLabel(grpVersionInfo);
        label_9->setObjectName("label_9");

        gridLayout->addWidget(label_9, 7, 0, 1, 1);

        txtProductVersion = new QLineEdit(grpVersionInfo);
        txtProductVersion->setObjectName("txtProductVersion");

        gridLayout->addWidget(txtProductVersion, 7, 1, 1, 1);

        label_13 = new QLabel(grpVersionInfo);
        label_13->setObjectName("label_13");

        gridLayout->addWidget(label_13, 11, 0, 1, 1);

        txtFileVersion = new QLineEdit(grpVersionInfo);
        txtFileVersion->setObjectName("txtFileVersion");

        gridLayout->addWidget(txtFileVersion, 5, 1, 1, 1);

        txtLegalTrademarks = new QLineEdit(grpVersionInfo);
        txtLegalTrademarks->setObjectName("txtLegalTrademarks");

        gridLayout->addWidget(txtLegalTrademarks, 12, 1, 1, 1);


        verticalLayout->addWidget(grpVersionInfo);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QWidget::setTabOrder(grpVersionInfo, spinMajor);
        QWidget::setTabOrder(spinMajor, spinMinor);
        QWidget::setTabOrder(spinMinor, spinRelease);
        QWidget::setTabOrder(spinRelease, spinBuild);
        QWidget::setTabOrder(spinBuild, chkAutoIncreaseBuildNumber);
        QWidget::setTabOrder(chkAutoIncreaseBuildNumber, chkSyncProductWithFile);
        QWidget::setTabOrder(chkSyncProductWithFile, cbLanguage);
        QWidget::setTabOrder(cbLanguage, txtFileDescription);
        QWidget::setTabOrder(txtFileDescription, txtFileVersion);
        QWidget::setTabOrder(txtFileVersion, txtProductName);
        QWidget::setTabOrder(txtProductName, txtProductVersion);
        QWidget::setTabOrder(txtProductVersion, txtOriginalFilename);
        QWidget::setTabOrder(txtOriginalFilename, txtInternalFilename);
        QWidget::setTabOrder(txtInternalFilename, txtCompanyName);
        QWidget::setTabOrder(txtCompanyName, txtLegalCopyright);
        QWidget::setTabOrder(txtLegalCopyright, txtLegalTrademarks);

        retranslateUi(ProjectVersionInfoWidget);

        QMetaObject::connectSlotsByName(ProjectVersionInfoWidget);
    } // setupUi

    void retranslateUi(QWidget *ProjectVersionInfoWidget)
    {
        ProjectVersionInfoWidget->setWindowTitle(QCoreApplication::translate("ProjectVersionInfoWidget", "Form", nullptr));
        grpVersionInfo->setTitle(QCoreApplication::translate("ProjectVersionInfoWidget", "Include version info in project", nullptr));
        label->setText(QCoreApplication::translate("ProjectVersionInfoWidget", "Major", nullptr));
        label_2->setText(QCoreApplication::translate("ProjectVersionInfoWidget", "Minor", nullptr));
        label_3->setText(QCoreApplication::translate("ProjectVersionInfoWidget", "Rlease", nullptr));
        label_4->setText(QCoreApplication::translate("ProjectVersionInfoWidget", "Build", nullptr));
        label_5->setText(QCoreApplication::translate("ProjectVersionInfoWidget", "Language:", nullptr));
        label_10->setText(QCoreApplication::translate("ProjectVersionInfoWidget", "Original filename", nullptr));
        chkSyncProductWithFile->setText(QCoreApplication::translate("ProjectVersionInfoWidget", "Sync product with file version", nullptr));
        label_11->setText(QCoreApplication::translate("ProjectVersionInfoWidget", "Internal name", nullptr));
        label_7->setText(QCoreApplication::translate("ProjectVersionInfoWidget", "File version", nullptr));
        label_14->setText(QCoreApplication::translate("ProjectVersionInfoWidget", "Legal trademarks", nullptr));
        label_8->setText(QCoreApplication::translate("ProjectVersionInfoWidget", "Product name", nullptr));
        label_12->setText(QCoreApplication::translate("ProjectVersionInfoWidget", "Company name", nullptr));
        chkAutoIncreaseBuildNumber->setText(QCoreApplication::translate("ProjectVersionInfoWidget", "Auto-increase build number on compile", nullptr));
        label_6->setText(QCoreApplication::translate("ProjectVersionInfoWidget", "File description", nullptr));
        label_9->setText(QCoreApplication::translate("ProjectVersionInfoWidget", "Product version", nullptr));
        label_13->setText(QCoreApplication::translate("ProjectVersionInfoWidget", "Legal copyright", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProjectVersionInfoWidget: public Ui_ProjectVersionInfoWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTVERSIONINFOWIDGET_H
