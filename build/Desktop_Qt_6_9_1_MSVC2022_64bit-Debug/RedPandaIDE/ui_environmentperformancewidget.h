/********************************************************************************
** Form generated from reading UI file 'environmentperformancewidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENVIRONMENTPERFORMANCEWIDGET_H
#define UI_ENVIRONMENTPERFORMANCEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EnvironmentPerformanceWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *chkEditorsShareParser;
    QCheckBox *chkClearWhenEditorHidden;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *EnvironmentPerformanceWidget)
    {
        if (EnvironmentPerformanceWidget->objectName().isEmpty())
            EnvironmentPerformanceWidget->setObjectName("EnvironmentPerformanceWidget");
        EnvironmentPerformanceWidget->resize(431, 300);
        verticalLayout_2 = new QVBoxLayout(EnvironmentPerformanceWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        groupBox = new QGroupBox(EnvironmentPerformanceWidget);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        chkEditorsShareParser = new QCheckBox(groupBox);
        chkEditorsShareParser->setObjectName("chkEditorsShareParser");

        verticalLayout->addWidget(chkEditorsShareParser);

        chkClearWhenEditorHidden = new QCheckBox(groupBox);
        chkClearWhenEditorHidden->setObjectName("chkClearWhenEditorHidden");

        verticalLayout->addWidget(chkClearWhenEditorHidden);


        verticalLayout_2->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        retranslateUi(EnvironmentPerformanceWidget);

        QMetaObject::connectSlotsByName(EnvironmentPerformanceWidget);
    } // setupUi

    void retranslateUi(QWidget *EnvironmentPerformanceWidget)
    {
        EnvironmentPerformanceWidget->setWindowTitle(QCoreApplication::translate("EnvironmentPerformanceWidget", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("EnvironmentPerformanceWidget", "Reduce Memory Usage", nullptr));
        chkEditorsShareParser->setText(QCoreApplication::translate("EnvironmentPerformanceWidget", "Editors share one code parser", nullptr));
        chkClearWhenEditorHidden->setText(QCoreApplication::translate("EnvironmentPerformanceWidget", "Auto clear parsed symbols when editor hidden", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EnvironmentPerformanceWidget: public Ui_EnvironmentPerformanceWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENVIRONMENTPERFORMANCEWIDGET_H
