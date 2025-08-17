/********************************************************************************
** Form generated from reading UI file 'ojproblempropertywidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OJPROBLEMPROPERTYWIDGET_H
#define UI_OJPROBLEMPROPERTYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OJProblemPropertyWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *txtURL;
    QLabel *lbName;
    QLabel *label_2;
    QTextEdit *txtDescription;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QComboBox *cbMemoryLimitUnit;
    QLabel *label_3;
    QLabel *label_4;
    QSpinBox *spinTimeLimit;
    QSpinBox *spinMemoryLimit;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *cbTimeLimitUnit;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnOk;
    QPushButton *btnCancel;

    void setupUi(QWidget *OJProblemPropertyWidget)
    {
        if (OJProblemPropertyWidget->objectName().isEmpty())
            OJProblemPropertyWidget->setObjectName("OJProblemPropertyWidget");
        OJProblemPropertyWidget->resize(460, 364);
        gridLayout = new QGridLayout(OJProblemPropertyWidget);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(OJProblemPropertyWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 4, 0, 1, 1);

        txtURL = new QLineEdit(OJProblemPropertyWidget);
        txtURL->setObjectName("txtURL");

        gridLayout->addWidget(txtURL, 4, 1, 1, 1);

        lbName = new QLabel(OJProblemPropertyWidget);
        lbName->setObjectName("lbName");

        gridLayout->addWidget(lbName, 0, 0, 1, 2);

        label_2 = new QLabel(OJProblemPropertyWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 2);

        txtDescription = new QTextEdit(OJProblemPropertyWidget);
        txtDescription->setObjectName("txtDescription");

        gridLayout->addWidget(txtDescription, 2, 0, 1, 2);

        widget_2 = new QWidget(OJProblemPropertyWidget);
        widget_2->setObjectName("widget_2");
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        cbMemoryLimitUnit = new QComboBox(widget_2);
        cbMemoryLimitUnit->setObjectName("cbMemoryLimitUnit");

        gridLayout_2->addWidget(cbMemoryLimitUnit, 2, 2, 1, 1);

        label_3 = new QLabel(widget_2);
        label_3->setObjectName("label_3");

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        label_4 = new QLabel(widget_2);
        label_4->setObjectName("label_4");

        gridLayout_2->addWidget(label_4, 2, 0, 1, 1);

        spinTimeLimit = new QSpinBox(widget_2);
        spinTimeLimit->setObjectName("spinTimeLimit");
        spinTimeLimit->setMaximum(9999999);

        gridLayout_2->addWidget(spinTimeLimit, 1, 1, 1, 1);

        spinMemoryLimit = new QSpinBox(widget_2);
        spinMemoryLimit->setObjectName("spinMemoryLimit");
        spinMemoryLimit->setMaximum(9999999);

        gridLayout_2->addWidget(spinMemoryLimit, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 3, 1, 1);

        cbTimeLimitUnit = new QComboBox(widget_2);
        cbTimeLimitUnit->setObjectName("cbTimeLimitUnit");

        gridLayout_2->addWidget(cbTimeLimitUnit, 1, 2, 1, 1);


        gridLayout->addWidget(widget_2, 3, 0, 1, 2);

        widget = new QWidget(OJProblemPropertyWidget);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnOk = new QPushButton(widget);
        btnOk->setObjectName("btnOk");

        horizontalLayout->addWidget(btnOk);

        btnCancel = new QPushButton(widget);
        btnCancel->setObjectName("btnCancel");

        horizontalLayout->addWidget(btnCancel);


        gridLayout->addWidget(widget, 5, 0, 1, 2);

        QWidget::setTabOrder(txtDescription, spinTimeLimit);
        QWidget::setTabOrder(spinTimeLimit, cbTimeLimitUnit);
        QWidget::setTabOrder(cbTimeLimitUnit, spinMemoryLimit);
        QWidget::setTabOrder(spinMemoryLimit, cbMemoryLimitUnit);
        QWidget::setTabOrder(cbMemoryLimitUnit, txtURL);
        QWidget::setTabOrder(txtURL, btnOk);
        QWidget::setTabOrder(btnOk, btnCancel);

        retranslateUi(OJProblemPropertyWidget);

        QMetaObject::connectSlotsByName(OJProblemPropertyWidget);
    } // setupUi

    void retranslateUi(QWidget *OJProblemPropertyWidget)
    {
        OJProblemPropertyWidget->setWindowTitle(QCoreApplication::translate("OJProblemPropertyWidget", "Form", nullptr));
        label->setText(QCoreApplication::translate("OJProblemPropertyWidget", "URL", nullptr));
        lbName->setText(QCoreApplication::translate("OJProblemPropertyWidget", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("OJProblemPropertyWidget", "Description", nullptr));
        label_3->setText(QCoreApplication::translate("OJProblemPropertyWidget", "Time Limit", nullptr));
        label_4->setText(QCoreApplication::translate("OJProblemPropertyWidget", "Memory Limit", nullptr));
        btnOk->setText(QCoreApplication::translate("OJProblemPropertyWidget", "OK", nullptr));
        btnCancel->setText(QCoreApplication::translate("OJProblemPropertyWidget", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OJProblemPropertyWidget: public Ui_OJProblemPropertyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OJPROBLEMPROPERTYWIDGET_H
