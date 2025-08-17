/********************************************************************************
** Form generated from reading UI file 'editortooltipswidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITORTOOLTIPSWIDGET_H
#define UI_EDITORTOOLTIPSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditorTooltipsWidget
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *chkShowFunctionTips;
    QGroupBox *grpEnableTooltips;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *chkIssueTooltips;
    QCheckBox *chkHeaderTooltips;
    QCheckBox *chkIdentifierTooltips;
    QCheckBox *chkDebugTooltips;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *spinTipsDelay;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *EditorTooltipsWidget)
    {
        if (EditorTooltipsWidget->objectName().isEmpty())
            EditorTooltipsWidget->setObjectName("EditorTooltipsWidget");
        EditorTooltipsWidget->resize(637, 300);
        verticalLayout = new QVBoxLayout(EditorTooltipsWidget);
        verticalLayout->setObjectName("verticalLayout");
        chkShowFunctionTips = new QCheckBox(EditorTooltipsWidget);
        chkShowFunctionTips->setObjectName("chkShowFunctionTips");

        verticalLayout->addWidget(chkShowFunctionTips);

        grpEnableTooltips = new QGroupBox(EditorTooltipsWidget);
        grpEnableTooltips->setObjectName("grpEnableTooltips");
        grpEnableTooltips->setCheckable(true);
        verticalLayout_2 = new QVBoxLayout(grpEnableTooltips);
        verticalLayout_2->setObjectName("verticalLayout_2");
        chkIssueTooltips = new QCheckBox(grpEnableTooltips);
        chkIssueTooltips->setObjectName("chkIssueTooltips");

        verticalLayout_2->addWidget(chkIssueTooltips);

        chkHeaderTooltips = new QCheckBox(grpEnableTooltips);
        chkHeaderTooltips->setObjectName("chkHeaderTooltips");

        verticalLayout_2->addWidget(chkHeaderTooltips);

        chkIdentifierTooltips = new QCheckBox(grpEnableTooltips);
        chkIdentifierTooltips->setObjectName("chkIdentifierTooltips");

        verticalLayout_2->addWidget(chkIdentifierTooltips);

        chkDebugTooltips = new QCheckBox(grpEnableTooltips);
        chkDebugTooltips->setObjectName("chkDebugTooltips");

        verticalLayout_2->addWidget(chkDebugTooltips);


        verticalLayout->addWidget(grpEnableTooltips);

        widget = new QWidget(EditorTooltipsWidget);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        spinTipsDelay = new QSpinBox(widget);
        spinTipsDelay->setObjectName("spinTipsDelay");
        spinTipsDelay->setMaximum(5000);
        spinTipsDelay->setSingleStep(100);

        horizontalLayout->addWidget(spinTipsDelay);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(widget);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(EditorTooltipsWidget);

        QMetaObject::connectSlotsByName(EditorTooltipsWidget);
    } // setupUi

    void retranslateUi(QWidget *EditorTooltipsWidget)
    {
        EditorTooltipsWidget->setWindowTitle(QCoreApplication::translate("EditorTooltipsWidget", "Form", nullptr));
        chkShowFunctionTips->setText(QCoreApplication::translate("EditorTooltipsWidget", "Show function tips", nullptr));
        grpEnableTooltips->setTitle(QCoreApplication::translate("EditorTooltipsWidget", "Enable mouse hover tooltips", nullptr));
        chkIssueTooltips->setText(QCoreApplication::translate("EditorTooltipsWidget", "Show syntax issue tooltips", nullptr));
        chkHeaderTooltips->setText(QCoreApplication::translate("EditorTooltipsWidget", "Show full header filename tooltips", nullptr));
        chkIdentifierTooltips->setText(QCoreApplication::translate("EditorTooltipsWidget", "Show identifier definition tooltips", nullptr));
        chkDebugTooltips->setText(QCoreApplication::translate("EditorTooltipsWidget", "Show expression value tooltips when debugging", nullptr));
        label->setText(QCoreApplication::translate("EditorTooltipsWidget", "Tool tips delay", nullptr));
        spinTipsDelay->setSuffix(QCoreApplication::translate("EditorTooltipsWidget", "ms", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditorTooltipsWidget: public Ui_EditorTooltipsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITORTOOLTIPSWIDGET_H
