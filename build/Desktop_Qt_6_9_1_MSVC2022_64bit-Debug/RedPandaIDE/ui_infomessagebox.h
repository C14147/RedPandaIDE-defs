/********************************************************************************
** Form generated from reading UI file 'infomessagebox.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFOMESSAGEBOX_H
#define UI_INFOMESSAGEBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_InfoMessageBox
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *txtMessage;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnOk;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *InfoMessageBox)
    {
        if (InfoMessageBox->objectName().isEmpty())
            InfoMessageBox->setObjectName("InfoMessageBox");
        InfoMessageBox->resize(617, 459);
        verticalLayout = new QVBoxLayout(InfoMessageBox);
        verticalLayout->setObjectName("verticalLayout");
        txtMessage = new QTextEdit(InfoMessageBox);
        txtMessage->setObjectName("txtMessage");
        txtMessage->setReadOnly(true);

        verticalLayout->addWidget(txtMessage);

        frame = new QFrame(InfoMessageBox);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnOk = new QPushButton(frame);
        btnOk->setObjectName("btnOk");

        horizontalLayout->addWidget(btnOk);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(frame);


        retranslateUi(InfoMessageBox);

        QMetaObject::connectSlotsByName(InfoMessageBox);
    } // setupUi

    void retranslateUi(QDialog *InfoMessageBox)
    {
        InfoMessageBox->setWindowTitle(QCoreApplication::translate("InfoMessageBox", "Message", nullptr));
        btnOk->setText(QCoreApplication::translate("InfoMessageBox", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InfoMessageBox: public Ui_InfoMessageBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOMESSAGEBOX_H
