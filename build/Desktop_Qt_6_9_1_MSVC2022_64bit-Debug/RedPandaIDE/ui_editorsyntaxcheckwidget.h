/********************************************************************************
** Form generated from reading UI file 'editorsyntaxcheckwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITORSYNTAXCHECKWIDGET_H
#define UI_EDITORSYNTAXCHECKWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditorSyntaxCheckWidget
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QGroupBox *grpEnableAutoSyntaxCheck;
    QVBoxLayout *verticalLayout;
    QCheckBox *chkSyntaxCheckWhenSave;
    QCheckBox *chkSyntaxCheckWhenLineChanged;

    void setupUi(QWidget *EditorSyntaxCheckWidget)
    {
        if (EditorSyntaxCheckWidget->objectName().isEmpty())
            EditorSyntaxCheckWidget->setObjectName("EditorSyntaxCheckWidget");
        EditorSyntaxCheckWidget->resize(400, 300);
        gridLayout = new QGridLayout(EditorSyntaxCheckWidget);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        grpEnableAutoSyntaxCheck = new QGroupBox(EditorSyntaxCheckWidget);
        grpEnableAutoSyntaxCheck->setObjectName("grpEnableAutoSyntaxCheck");
        grpEnableAutoSyntaxCheck->setCheckable(true);
        verticalLayout = new QVBoxLayout(grpEnableAutoSyntaxCheck);
        verticalLayout->setObjectName("verticalLayout");
        chkSyntaxCheckWhenSave = new QCheckBox(grpEnableAutoSyntaxCheck);
        chkSyntaxCheckWhenSave->setObjectName("chkSyntaxCheckWhenSave");

        verticalLayout->addWidget(chkSyntaxCheckWhenSave);

        chkSyntaxCheckWhenLineChanged = new QCheckBox(grpEnableAutoSyntaxCheck);
        chkSyntaxCheckWhenLineChanged->setObjectName("chkSyntaxCheckWhenLineChanged");

        verticalLayout->addWidget(chkSyntaxCheckWhenLineChanged);


        gridLayout->addWidget(grpEnableAutoSyntaxCheck, 0, 0, 1, 1);


        retranslateUi(EditorSyntaxCheckWidget);

        QMetaObject::connectSlotsByName(EditorSyntaxCheckWidget);
    } // setupUi

    void retranslateUi(QWidget *EditorSyntaxCheckWidget)
    {
        EditorSyntaxCheckWidget->setWindowTitle(QCoreApplication::translate("EditorSyntaxCheckWidget", "Form", nullptr));
        grpEnableAutoSyntaxCheck->setTitle(QCoreApplication::translate("EditorSyntaxCheckWidget", "Enable Auto Syntax Check", nullptr));
        chkSyntaxCheckWhenSave->setText(QCoreApplication::translate("EditorSyntaxCheckWidget", "Check when save/load file", nullptr));
        chkSyntaxCheckWhenLineChanged->setText(QCoreApplication::translate("EditorSyntaxCheckWidget", "Check when count of lines changed", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditorSyntaxCheckWidget: public Ui_EditorSyntaxCheckWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITORSYNTAXCHECKWIDGET_H
