/********************************************************************************
** Form generated from reading UI file 'editorcustomctypekeywords.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITORCUSTOMCTYPEKEYWORDS_H
#define UI_EDITORCUSTOMCTYPEKEYWORDS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_editorcustomctypekeywords
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *grpEnableCustomKeywords;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *btnAdd;
    QToolButton *btnRemove;
    QToolButton *btnRemoveAll;
    QSpacerItem *horizontalSpacer;
    QListWidget *lstKeywords;
    QLabel *label;

    void setupUi(QWidget *editorcustomctypekeywords)
    {
        if (editorcustomctypekeywords->objectName().isEmpty())
            editorcustomctypekeywords->setObjectName("editorcustomctypekeywords");
        editorcustomctypekeywords->resize(400, 370);
        horizontalLayout = new QHBoxLayout(editorcustomctypekeywords);
        horizontalLayout->setObjectName("horizontalLayout");
        grpEnableCustomKeywords = new QGroupBox(editorcustomctypekeywords);
        grpEnableCustomKeywords->setObjectName("grpEnableCustomKeywords");
        grpEnableCustomKeywords->setCheckable(true);
        verticalLayout = new QVBoxLayout(grpEnableCustomKeywords);
        verticalLayout->setObjectName("verticalLayout");
        widget = new QWidget(grpEnableCustomKeywords);
        widget->setObjectName("widget");
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        btnAdd = new QToolButton(widget);
        btnAdd->setObjectName("btnAdd");

        horizontalLayout_2->addWidget(btnAdd);

        btnRemove = new QToolButton(widget);
        btnRemove->setObjectName("btnRemove");

        horizontalLayout_2->addWidget(btnRemove);

        btnRemoveAll = new QToolButton(widget);
        btnRemoveAll->setObjectName("btnRemoveAll");

        horizontalLayout_2->addWidget(btnRemoveAll);

        horizontalSpacer = new QSpacerItem(102, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addWidget(widget);

        lstKeywords = new QListWidget(grpEnableCustomKeywords);
        lstKeywords->setObjectName("lstKeywords");
        lstKeywords->setUniformItemSizes(false);

        verticalLayout->addWidget(lstKeywords);

        label = new QLabel(grpEnableCustomKeywords);
        label->setObjectName("label");
        label->setWordWrap(true);

        verticalLayout->addWidget(label);


        horizontalLayout->addWidget(grpEnableCustomKeywords);

        QWidget::setTabOrder(grpEnableCustomKeywords, btnAdd);
        QWidget::setTabOrder(btnAdd, btnRemove);
        QWidget::setTabOrder(btnRemove, btnRemoveAll);
        QWidget::setTabOrder(btnRemoveAll, lstKeywords);

        retranslateUi(editorcustomctypekeywords);

        QMetaObject::connectSlotsByName(editorcustomctypekeywords);
    } // setupUi

    void retranslateUi(QWidget *editorcustomctypekeywords)
    {
        editorcustomctypekeywords->setWindowTitle(QCoreApplication::translate("editorcustomctypekeywords", "Custom C/C++ Type Keywords", nullptr));
        grpEnableCustomKeywords->setTitle(QCoreApplication::translate("editorcustomctypekeywords", "Enable Custom C/C++ Type Keywords", nullptr));
        btnAdd->setText(QCoreApplication::translate("editorcustomctypekeywords", "Add", nullptr));
        btnRemove->setText(QCoreApplication::translate("editorcustomctypekeywords", "Remove", nullptr));
        btnRemoveAll->setText(QCoreApplication::translate("editorcustomctypekeywords", "Remove All", nullptr));
        label->setText(QCoreApplication::translate("editorcustomctypekeywords", "Note: Custom keywords is not recognized by syntax checker.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editorcustomctypekeywords: public Ui_editorcustomctypekeywords {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITORCUSTOMCTYPEKEYWORDS_H
