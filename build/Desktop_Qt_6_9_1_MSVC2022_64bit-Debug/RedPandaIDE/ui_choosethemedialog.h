/********************************************************************************
** Form generated from reading UI file 'choosethemedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSETHEMEDIALOG_H
#define UI_CHOOSETHEMEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChooseThemeDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QGroupBox *grpTheme;
    QGridLayout *gridLayout;
    QRadioButton *rbLight;
    QRadioButton *rbDark;
    QLabel *lblDark;
    QLabel *lblLight;
    QRadioButton *rbAuto;
    QLabel *label_4;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QRadioButton *rbC;
    QRadioButton *rbCpp;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnOk;
    QButtonGroup *grpDefaultLanguage;

    void setupUi(QDialog *ChooseThemeDialog)
    {
        if (ChooseThemeDialog->objectName().isEmpty())
            ChooseThemeDialog->setObjectName("ChooseThemeDialog");
        ChooseThemeDialog->resize(1041, 652);
        verticalLayout = new QVBoxLayout(ChooseThemeDialog);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(ChooseThemeDialog);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: 25px \"Microsoft YaHei UI\";\n"
"font-weight: bold;"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(ChooseThemeDialog);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        grpTheme = new QGroupBox(ChooseThemeDialog);
        grpTheme->setObjectName("grpTheme");
        gridLayout = new QGridLayout(grpTheme);
        gridLayout->setObjectName("gridLayout");
        rbLight = new QRadioButton(grpTheme);
        rbLight->setObjectName("rbLight");

        gridLayout->addWidget(rbLight, 1, 1, 1, 1);

        rbDark = new QRadioButton(grpTheme);
        rbDark->setObjectName("rbDark");

        gridLayout->addWidget(rbDark, 1, 0, 1, 1);

        lblDark = new QLabel(grpTheme);
        lblDark->setObjectName("lblDark");
        lblDark->setFrameShape(QFrame::Shape::Box);
        lblDark->setFrameShadow(QFrame::Shadow::Sunken);
        lblDark->setPixmap(QPixmap(QString::fromUtf8(":/demos/dark.png")));

        gridLayout->addWidget(lblDark, 2, 0, 1, 1);

        lblLight = new QLabel(grpTheme);
        lblLight->setObjectName("lblLight");
        lblLight->setFrameShape(QFrame::Shape::Box);
        lblLight->setFrameShadow(QFrame::Shadow::Sunken);
        lblLight->setPixmap(QPixmap(QString::fromUtf8(":/demos/light.png")));

        gridLayout->addWidget(lblLight, 2, 1, 1, 1);

        rbAuto = new QRadioButton(grpTheme);
        rbAuto->setObjectName("rbAuto");

        gridLayout->addWidget(rbAuto, 0, 0, 1, 1);

        label_4 = new QLabel(grpTheme);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 3, 0, 1, 2);


        verticalLayout->addWidget(grpTheme);

        widget_2 = new QWidget(ChooseThemeDialog);
        widget_2->setObjectName("widget_2");
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(widget_2);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        rbC = new QRadioButton(widget_2);
        grpDefaultLanguage = new QButtonGroup(ChooseThemeDialog);
        grpDefaultLanguage->setObjectName("grpDefaultLanguage");
        grpDefaultLanguage->addButton(rbC);
        rbC->setObjectName("rbC");

        horizontalLayout_2->addWidget(rbC);

        rbCpp = new QRadioButton(widget_2);
        grpDefaultLanguage->addButton(rbCpp);
        rbCpp->setObjectName("rbCpp");

        horizontalLayout_2->addWidget(rbCpp);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(widget_2);

        widget = new QWidget(ChooseThemeDialog);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(1828, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnOk = new QPushButton(widget);
        btnOk->setObjectName("btnOk");

        horizontalLayout->addWidget(btnOk);


        verticalLayout->addWidget(widget);

        QWidget::setTabOrder(rbAuto, rbDark);
        QWidget::setTabOrder(rbDark, rbLight);
        QWidget::setTabOrder(rbLight, rbC);
        QWidget::setTabOrder(rbC, rbCpp);
        QWidget::setTabOrder(rbCpp, btnOk);

        retranslateUi(ChooseThemeDialog);

        QMetaObject::connectSlotsByName(ChooseThemeDialog);
    } // setupUi

    void retranslateUi(QDialog *ChooseThemeDialog)
    {
        ChooseThemeDialog->setWindowTitle(QCoreApplication::translate("ChooseThemeDialog", "Choose Theme", nullptr));
        label->setText(QCoreApplication::translate("ChooseThemeDialog", "Getting Started", nullptr));
        label_2->setText(QCoreApplication::translate("ChooseThemeDialog", "Nice to meet you! Please set your usage preferences. You can also change them later in the settings.", nullptr));
        grpTheme->setTitle(QCoreApplication::translate("ChooseThemeDialog", "Choose Theme", nullptr));
        rbLight->setText(QCoreApplication::translate("ChooseThemeDialog", "Light Theme", nullptr));
        rbDark->setText(QCoreApplication::translate("ChooseThemeDialog", "Dark Theme", nullptr));
        lblDark->setText(QString());
        lblLight->setText(QString());
        rbAuto->setText(QCoreApplication::translate("ChooseThemeDialog", "System Theme", nullptr));
        label_4->setText(QCoreApplication::translate("ChooseThemeDialog", "> You can use other themes in the Extension Manager later .", nullptr));
        label_3->setText(QCoreApplication::translate("ChooseThemeDialog", "Default Language:", nullptr));
        rbC->setText(QCoreApplication::translate("ChooseThemeDialog", "C", nullptr));
        rbCpp->setText(QCoreApplication::translate("ChooseThemeDialog", "C++", nullptr));
        btnOk->setText(QCoreApplication::translate("ChooseThemeDialog", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChooseThemeDialog: public Ui_ChooseThemeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSETHEMEDIALOG_H
