/********************************************************************************
** Form generated from reading UI file 'custommakefileinfodialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMMAKEFILEINFODIALOG_H
#define UI_CUSTOMMAKEFILEINFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_CustomMakefileInfoDialog
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;

    void setupUi(QDialog *CustomMakefileInfoDialog)
    {
        if (CustomMakefileInfoDialog->objectName().isEmpty())
            CustomMakefileInfoDialog->setObjectName("CustomMakefileInfoDialog");
        CustomMakefileInfoDialog->resize(849, 512);
        gridLayout = new QGridLayout(CustomMakefileInfoDialog);
        gridLayout->setObjectName("gridLayout");
        pushButton = new QPushButton(CustomMakefileInfoDialog);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        label = new QLabel(CustomMakefileInfoDialog);
        label->setObjectName("label");
        label->setTextFormat(Qt::RichText);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 3);


        retranslateUi(CustomMakefileInfoDialog);

        QMetaObject::connectSlotsByName(CustomMakefileInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *CustomMakefileInfoDialog)
    {
        CustomMakefileInfoDialog->setWindowTitle(QCoreApplication::translate("CustomMakefileInfoDialog", "Information for custom makefile", nullptr));
        pushButton->setText(QCoreApplication::translate("CustomMakefileInfoDialog", "Ok", nullptr));
        label->setText(QCoreApplication::translate("CustomMakefileInfoDialog", "<html><head/><body><p>RedPandaIDE's Makefile has two important targets:</p><p>- all (which builds the executable)</p><p>- clean (which cleans up object files)</p><p><br/>&quot;all&quot; depends on 2 targets: all-before and all-after. All-before</p><p>gets called before the compilation process, and all-after gets</p><p>called after the compilation process.</p><p><br/>&quot;clean&quot; depends on the target clean-custom, which gets called</p><p>before the cleaning process.<br/></p><p>You can change the Makefile's behavior by defining the targets</p><p>that &quot;all&quot; and &quot;clean&quot; depend on.</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CustomMakefileInfoDialog: public Ui_CustomMakefileInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMMAKEFILEINFODIALOG_H
