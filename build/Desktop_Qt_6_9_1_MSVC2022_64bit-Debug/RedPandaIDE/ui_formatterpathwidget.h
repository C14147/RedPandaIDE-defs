/********************************************************************************
** Form generated from reading UI file 'formatterpathwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMATTERPATHWIDGET_H
#define UI_FORMATTERPATHWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormatterPathWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QToolButton *btnChooseAstyle;
    QLineEdit *txtAstyle;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *FormatterPathWidget)
    {
        if (FormatterPathWidget->objectName().isEmpty())
            FormatterPathWidget->setObjectName("FormatterPathWidget");
        FormatterPathWidget->resize(834, 520);
        gridLayout = new QGridLayout(FormatterPathWidget);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(FormatterPathWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        btnChooseAstyle = new QToolButton(FormatterPathWidget);
        btnChooseAstyle->setObjectName("btnChooseAstyle");

        gridLayout->addWidget(btnChooseAstyle, 0, 2, 1, 1);

        txtAstyle = new QLineEdit(FormatterPathWidget);
        txtAstyle->setObjectName("txtAstyle");

        gridLayout->addWidget(txtAstyle, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);


        retranslateUi(FormatterPathWidget);

        QMetaObject::connectSlotsByName(FormatterPathWidget);
    } // setupUi

    void retranslateUi(QWidget *FormatterPathWidget)
    {
        FormatterPathWidget->setWindowTitle(QCoreApplication::translate("FormatterPathWidget", "Form", nullptr));
        label->setText(QCoreApplication::translate("FormatterPathWidget", "Path to astyle", nullptr));
        btnChooseAstyle->setText(QCoreApplication::translate("FormatterPathWidget", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormatterPathWidget: public Ui_FormatterPathWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMATTERPATHWIDGET_H
