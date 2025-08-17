/********************************************************************************
** Form generated from reading UI file 'signalmessagedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNALMESSAGEDIALOG_H
#define UI_SIGNALMESSAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SignalMessageDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *lblMessage;
    QCheckBox *chkOpenCPUInfo;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SignalMessageDialog)
    {
        if (SignalMessageDialog->objectName().isEmpty())
            SignalMessageDialog->setObjectName("SignalMessageDialog");
        SignalMessageDialog->resize(400, 240);
        verticalLayout = new QVBoxLayout(SignalMessageDialog);
        verticalLayout->setObjectName("verticalLayout");
        lblMessage = new QLabel(SignalMessageDialog);
        lblMessage->setObjectName("lblMessage");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblMessage->sizePolicy().hasHeightForWidth());
        lblMessage->setSizePolicy(sizePolicy);
        lblMessage->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout->addWidget(lblMessage);

        chkOpenCPUInfo = new QCheckBox(SignalMessageDialog);
        chkOpenCPUInfo->setObjectName("chkOpenCPUInfo");
        chkOpenCPUInfo->setChecked(true);

        verticalLayout->addWidget(chkOpenCPUInfo);

        buttonBox = new QDialogButtonBox(SignalMessageDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SignalMessageDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SignalMessageDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SignalMessageDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SignalMessageDialog);
    } // setupUi

    void retranslateUi(QDialog *SignalMessageDialog)
    {
        SignalMessageDialog->setWindowTitle(QCoreApplication::translate("SignalMessageDialog", "Signal Received", nullptr));
        lblMessage->setText(QCoreApplication::translate("SignalMessageDialog", "TextLabel", nullptr));
        chkOpenCPUInfo->setText(QCoreApplication::translate("SignalMessageDialog", "Open CPU Info Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignalMessageDialog: public Ui_SignalMessageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNALMESSAGEDIALOG_H
