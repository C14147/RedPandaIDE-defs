/********************************************************************************
** Form generated from reading UI file 'environmentappearancewidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENVIRONMENTAPPEARANCEWIDGET_H
#define UI_ENVIRONMENTAPPEARANCEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EnvironmentAppearanceWidget
{
public:
    QGridLayout *gridLayout;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *cbLanguage;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label;
    QLabel *label_6;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QSpinBox *spinFontSize;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QComboBox *cbTheme;
    QToolButton *btnCustomize;
    QToolButton *btnRemoveCustomTheme;
    QToolButton *btnOpenCustomThemeFolder;
    QSpacerItem *horizontalSpacer;
    QLabel *label_7;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_6;
    QDoubleSpinBox *spinZoomFactor;
    QSpacerItem *horizontalSpacer_6;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QFontComboBox *cbFont;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QLabel *label_4;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_5;
    QComboBox *cbIconSet;
    QCheckBox *chkUseCustomIconSet;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer;
    QCheckBox *chkComboboxWheel;

    void setupUi(QWidget *EnvironmentAppearanceWidget)
    {
        if (EnvironmentAppearanceWidget->objectName().isEmpty())
            EnvironmentAppearanceWidget->setObjectName("EnvironmentAppearanceWidget");
        EnvironmentAppearanceWidget->resize(733, 432);
        gridLayout = new QGridLayout(EnvironmentAppearanceWidget);
        gridLayout->setObjectName("gridLayout");
        widget_4 = new QWidget(EnvironmentAppearanceWidget);
        widget_4->setObjectName("widget_4");
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        cbLanguage = new QComboBox(widget_4);
        cbLanguage->setObjectName("cbLanguage");

        horizontalLayout_4->addWidget(cbLanguage);

        label_5 = new QLabel(widget_4);
        label_5->setObjectName("label_5");

        horizontalLayout_4->addWidget(label_5);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        gridLayout->addWidget(widget_4, 6, 1, 1, 1);

        label = new QLabel(EnvironmentAppearanceWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_6 = new QLabel(EnvironmentAppearanceWidget);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 3, 0, 1, 1);

        widget_3 = new QWidget(EnvironmentAppearanceWidget);
        widget_3->setObjectName("widget_3");
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        spinFontSize = new QSpinBox(widget_3);
        spinFontSize->setObjectName("spinFontSize");
        spinFontSize->setMinimum(5);

        horizontalLayout_3->addWidget(spinFontSize);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        gridLayout->addWidget(widget_3, 2, 1, 1, 1);

        label_3 = new QLabel(EnvironmentAppearanceWidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        widget = new QWidget(EnvironmentAppearanceWidget);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        cbTheme = new QComboBox(widget);
        cbTheme->setObjectName("cbTheme");

        horizontalLayout->addWidget(cbTheme);

        btnCustomize = new QToolButton(widget);
        btnCustomize->setObjectName("btnCustomize");

        horizontalLayout->addWidget(btnCustomize);

        btnRemoveCustomTheme = new QToolButton(widget);
        btnRemoveCustomTheme->setObjectName("btnRemoveCustomTheme");

        horizontalLayout->addWidget(btnRemoveCustomTheme);

        btnOpenCustomThemeFolder = new QToolButton(widget);
        btnOpenCustomThemeFolder->setObjectName("btnOpenCustomThemeFolder");

        horizontalLayout->addWidget(btnOpenCustomThemeFolder);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addWidget(widget, 0, 1, 1, 1);

        label_7 = new QLabel(EnvironmentAppearanceWidget);
        label_7->setObjectName("label_7");

        gridLayout->addWidget(label_7, 4, 0, 1, 1);

        widget_6 = new QWidget(EnvironmentAppearanceWidget);
        widget_6->setObjectName("widget_6");
        horizontalLayout_6 = new QHBoxLayout(widget_6);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        spinZoomFactor = new QDoubleSpinBox(widget_6);
        spinZoomFactor->setObjectName("spinZoomFactor");
        spinZoomFactor->setDecimals(1);
        spinZoomFactor->setMinimum(0.100000000000000);
        spinZoomFactor->setMaximum(5.000000000000000);
        spinZoomFactor->setSingleStep(0.100000000000000);
        spinZoomFactor->setValue(1.000000000000000);

        horizontalLayout_6->addWidget(spinZoomFactor);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);


        gridLayout->addWidget(widget_6, 4, 1, 1, 1);

        widget_2 = new QWidget(EnvironmentAppearanceWidget);
        widget_2->setObjectName("widget_2");
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        cbFont = new QFontComboBox(widget_2);
        cbFont->setObjectName("cbFont");
        cbFont->setEditable(false);

        horizontalLayout_2->addWidget(cbFont);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout->addWidget(widget_2, 1, 1, 1, 1);

        label_2 = new QLabel(EnvironmentAppearanceWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_4 = new QLabel(EnvironmentAppearanceWidget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 6, 0, 1, 1);

        widget_5 = new QWidget(EnvironmentAppearanceWidget);
        widget_5->setObjectName("widget_5");
        horizontalLayout_5 = new QHBoxLayout(widget_5);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        cbIconSet = new QComboBox(widget_5);
        cbIconSet->setObjectName("cbIconSet");

        horizontalLayout_5->addWidget(cbIconSet);

        chkUseCustomIconSet = new QCheckBox(widget_5);
        chkUseCustomIconSet->setObjectName("chkUseCustomIconSet");

        horizontalLayout_5->addWidget(chkUseCustomIconSet);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        gridLayout->addWidget(widget_5, 3, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 8, 0, 1, 1);

        chkComboboxWheel = new QCheckBox(EnvironmentAppearanceWidget);
        chkComboboxWheel->setObjectName("chkComboboxWheel");

        gridLayout->addWidget(chkComboboxWheel, 7, 0, 1, 2);

        QWidget::setTabOrder(cbTheme, btnCustomize);
        QWidget::setTabOrder(btnCustomize, cbFont);
        QWidget::setTabOrder(cbFont, spinFontSize);
        QWidget::setTabOrder(spinFontSize, cbIconSet);
        QWidget::setTabOrder(cbIconSet, chkUseCustomIconSet);
        QWidget::setTabOrder(chkUseCustomIconSet, spinZoomFactor);
        QWidget::setTabOrder(spinZoomFactor, cbLanguage);

        retranslateUi(EnvironmentAppearanceWidget);

        QMetaObject::connectSlotsByName(EnvironmentAppearanceWidget);
    } // setupUi

    void retranslateUi(QWidget *EnvironmentAppearanceWidget)
    {
        EnvironmentAppearanceWidget->setWindowTitle(QCoreApplication::translate("EnvironmentAppearanceWidget", "Form", nullptr));
        label_5->setText(QCoreApplication::translate("EnvironmentAppearanceWidget", "*Needs restart", nullptr));
        label->setText(QCoreApplication::translate("EnvironmentAppearanceWidget", "Theme:", nullptr));
        label_6->setText(QCoreApplication::translate("EnvironmentAppearanceWidget", "Icon Set:", nullptr));
        label_3->setText(QCoreApplication::translate("EnvironmentAppearanceWidget", "Font Size:", nullptr));
#if QT_CONFIG(tooltip)
        btnCustomize->setToolTip(QCoreApplication::translate("EnvironmentAppearanceWidget", "Create a customized copy", nullptr));
#endif // QT_CONFIG(tooltip)
        btnCustomize->setText(QCoreApplication::translate("EnvironmentAppearanceWidget", "Customize", nullptr));
#if QT_CONFIG(tooltip)
        btnRemoveCustomTheme->setToolTip(QCoreApplication::translate("EnvironmentAppearanceWidget", "Remove custom theme", nullptr));
#endif // QT_CONFIG(tooltip)
        btnRemoveCustomTheme->setText(QCoreApplication::translate("EnvironmentAppearanceWidget", "Remove custom theme", nullptr));
#if QT_CONFIG(tooltip)
        btnOpenCustomThemeFolder->setToolTip(QCoreApplication::translate("EnvironmentAppearanceWidget", "Open custom themes folder", nullptr));
#endif // QT_CONFIG(tooltip)
        btnOpenCustomThemeFolder->setText(QCoreApplication::translate("EnvironmentAppearanceWidget", "Open Folder", nullptr));
        label_7->setText(QCoreApplication::translate("EnvironmentAppearanceWidget", "Icon Zoom:", nullptr));
        label_2->setText(QCoreApplication::translate("EnvironmentAppearanceWidget", "Font:", nullptr));
        label_4->setText(QCoreApplication::translate("EnvironmentAppearanceWidget", "Language:", nullptr));
        chkUseCustomIconSet->setText(QCoreApplication::translate("EnvironmentAppearanceWidget", "Use custom icon set", nullptr));
        chkComboboxWheel->setText(QCoreApplication::translate("EnvironmentAppearanceWidget", "Change combobox's current selection by turning mouse wheel on it", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EnvironmentAppearanceWidget: public Ui_EnvironmentAppearanceWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENVIRONMENTAPPEARANCEWIDGET_H
