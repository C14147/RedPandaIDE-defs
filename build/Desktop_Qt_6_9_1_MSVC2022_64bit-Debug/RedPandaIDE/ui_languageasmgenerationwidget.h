/********************************************************************************
** Form generated from reading UI file 'languageasmgenerationwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LANGUAGEASMGENERATIONWIDGET_H
#define UI_LANGUAGEASMGENERATIONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LanguageAsmGenerationWidget
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *chkNoDebugDirectives;
    QCheckBox *chkNoSEHDirectives;
    QGroupBox *grpX86Syntax;
    QHBoxLayout *horizontalLayout;
    QRadioButton *rbATT;
    QRadioButton *rbIntel;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *LanguageAsmGenerationWidget)
    {
        if (LanguageAsmGenerationWidget->objectName().isEmpty())
            LanguageAsmGenerationWidget->setObjectName("LanguageAsmGenerationWidget");
        LanguageAsmGenerationWidget->resize(400, 300);
        verticalLayout = new QVBoxLayout(LanguageAsmGenerationWidget);
        verticalLayout->setObjectName("verticalLayout");
        chkNoDebugDirectives = new QCheckBox(LanguageAsmGenerationWidget);
        chkNoDebugDirectives->setObjectName("chkNoDebugDirectives");

        verticalLayout->addWidget(chkNoDebugDirectives);

        chkNoSEHDirectives = new QCheckBox(LanguageAsmGenerationWidget);
        chkNoSEHDirectives->setObjectName("chkNoSEHDirectives");

        verticalLayout->addWidget(chkNoSEHDirectives);

        grpX86Syntax = new QGroupBox(LanguageAsmGenerationWidget);
        grpX86Syntax->setObjectName("grpX86Syntax");
        horizontalLayout = new QHBoxLayout(grpX86Syntax);
        horizontalLayout->setObjectName("horizontalLayout");
        rbATT = new QRadioButton(grpX86Syntax);
        rbATT->setObjectName("rbATT");

        horizontalLayout->addWidget(rbATT);

        rbIntel = new QRadioButton(grpX86Syntax);
        rbIntel->setObjectName("rbIntel");

        horizontalLayout->addWidget(rbIntel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(grpX86Syntax);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(LanguageAsmGenerationWidget);

        QMetaObject::connectSlotsByName(LanguageAsmGenerationWidget);
    } // setupUi

    void retranslateUi(QWidget *LanguageAsmGenerationWidget)
    {
        LanguageAsmGenerationWidget->setWindowTitle(QCoreApplication::translate("LanguageAsmGenerationWidget", "Form", nullptr));
        chkNoDebugDirectives->setText(QCoreApplication::translate("LanguageAsmGenerationWidget", "Don't generate debug directives", nullptr));
        chkNoSEHDirectives->setText(QCoreApplication::translate("LanguageAsmGenerationWidget", "Don't generate SEH directives ", nullptr));
        grpX86Syntax->setTitle(QCoreApplication::translate("LanguageAsmGenerationWidget", "Instruction syntax:", nullptr));
        rbATT->setText(QCoreApplication::translate("LanguageAsmGenerationWidget", "AT&&T", nullptr));
        rbIntel->setText(QCoreApplication::translate("LanguageAsmGenerationWidget", "Intel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LanguageAsmGenerationWidget: public Ui_LanguageAsmGenerationWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LANGUAGEASMGENERATIONWIDGET_H
