/********************************************************************************
** Form generated from reading UI file 'executorproblemsetwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXECUTORPROBLEMSETWIDGET_H
#define UI_EXECUTORPROBLEMSETWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExecutorProblemSetWidget
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *grpProblemSet;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *grpCompetitiveCompanion;
    QGridLayout *gridLayout;
    QSpinBox *spinPortNumber;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QCheckBox *chkConvertInputHTML;
    QCheckBox *chkConvertExpectedHTML;
    QSpacerItem *horizontalSpacer_5;
    QCheckBox *chkRedirectStderr;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QComboBox *cbProblemCaseValidateType;
    QSpacerItem *horizontalSpacer_6;
    QGroupBox *grpEnableTimeout;
    QGridLayout *gridLayout_3;
    QLabel *label_4;
    QSpinBox *spinCaseTimeout;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_5;
    QSpinBox *spinMemoryLimit;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_8;
    QSpinBox *spinMaxCaseInputFileSize;
    QSpacerItem *horizontalSpacer_7;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *spinFontSize;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_2;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QFontComboBox *cbFont;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *chkOnlyMonospaced;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ExecutorProblemSetWidget)
    {
        if (ExecutorProblemSetWidget->objectName().isEmpty())
            ExecutorProblemSetWidget->setObjectName("ExecutorProblemSetWidget");
        ExecutorProblemSetWidget->resize(545, 518);
        verticalLayout = new QVBoxLayout(ExecutorProblemSetWidget);
        verticalLayout->setObjectName("verticalLayout");
        grpProblemSet = new QGroupBox(ExecutorProblemSetWidget);
        grpProblemSet->setObjectName("grpProblemSet");
        grpProblemSet->setCheckable(true);
        verticalLayout_2 = new QVBoxLayout(grpProblemSet);
        verticalLayout_2->setObjectName("verticalLayout_2");
        grpCompetitiveCompanion = new QGroupBox(grpProblemSet);
        grpCompetitiveCompanion->setObjectName("grpCompetitiveCompanion");
        grpCompetitiveCompanion->setCheckable(true);
        gridLayout = new QGridLayout(grpCompetitiveCompanion);
        gridLayout->setObjectName("gridLayout");
        spinPortNumber = new QSpinBox(grpCompetitiveCompanion);
        spinPortNumber->setObjectName("spinPortNumber");
        spinPortNumber->setMinimum(1025);
        spinPortNumber->setMaximum(65535);

        gridLayout->addWidget(spinPortNumber, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        label = new QLabel(grpCompetitiveCompanion);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        widget = new QWidget(grpCompetitiveCompanion);
        widget->setObjectName("widget");
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");

        horizontalLayout_3->addWidget(label_6);

        chkConvertInputHTML = new QCheckBox(widget);
        chkConvertInputHTML->setObjectName("chkConvertInputHTML");

        horizontalLayout_3->addWidget(chkConvertInputHTML);

        chkConvertExpectedHTML = new QCheckBox(widget);
        chkConvertExpectedHTML->setObjectName("chkConvertExpectedHTML");

        horizontalLayout_3->addWidget(chkConvertExpectedHTML);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        gridLayout->addWidget(widget, 1, 0, 1, 3);


        verticalLayout_2->addWidget(grpCompetitiveCompanion);

        chkRedirectStderr = new QCheckBox(grpProblemSet);
        chkRedirectStderr->setObjectName("chkRedirectStderr");

        verticalLayout_2->addWidget(chkRedirectStderr);

        widget_4 = new QWidget(grpProblemSet);
        widget_4->setObjectName("widget_4");
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(widget_4);
        label_7->setObjectName("label_7");

        horizontalLayout_4->addWidget(label_7);

        cbProblemCaseValidateType = new QComboBox(widget_4);
        cbProblemCaseValidateType->setObjectName("cbProblemCaseValidateType");

        horizontalLayout_4->addWidget(cbProblemCaseValidateType);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);


        verticalLayout_2->addWidget(widget_4);

        grpEnableTimeout = new QGroupBox(grpProblemSet);
        grpEnableTimeout->setObjectName("grpEnableTimeout");
        grpEnableTimeout->setCheckable(true);
        gridLayout_3 = new QGridLayout(grpEnableTimeout);
        gridLayout_3->setObjectName("gridLayout_3");
        label_4 = new QLabel(grpEnableTimeout);
        label_4->setObjectName("label_4");

        gridLayout_3->addWidget(label_4, 0, 0, 1, 1);

        spinCaseTimeout = new QSpinBox(grpEnableTimeout);
        spinCaseTimeout->setObjectName("spinCaseTimeout");
        spinCaseTimeout->setMinimum(0);
        spinCaseTimeout->setMaximum(1000000);
        spinCaseTimeout->setSingleStep(50);

        gridLayout_3->addWidget(spinCaseTimeout, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 0, 2, 1, 1);

        label_5 = new QLabel(grpEnableTimeout);
        label_5->setObjectName("label_5");

        gridLayout_3->addWidget(label_5, 1, 0, 1, 1);

        spinMemoryLimit = new QSpinBox(grpEnableTimeout);
        spinMemoryLimit->setObjectName("spinMemoryLimit");
        spinMemoryLimit->setMaximum(999999);

        gridLayout_3->addWidget(spinMemoryLimit, 1, 1, 1, 1);


        verticalLayout_2->addWidget(grpEnableTimeout);

        widget_5 = new QWidget(grpProblemSet);
        widget_5->setObjectName("widget_5");
        horizontalLayout_5 = new QHBoxLayout(widget_5);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_8 = new QLabel(widget_5);
        label_8->setObjectName("label_8");

        horizontalLayout_5->addWidget(label_8);

        spinMaxCaseInputFileSize = new QSpinBox(widget_5);
        spinMaxCaseInputFileSize->setObjectName("spinMaxCaseInputFileSize");
        spinMaxCaseInputFileSize->setMinimum(1);
        spinMaxCaseInputFileSize->setMaximum(999);

        horizontalLayout_5->addWidget(spinMaxCaseInputFileSize);

        horizontalSpacer_7 = new QSpacerItem(235, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);


        verticalLayout_2->addWidget(widget_5);

        groupBox = new QGroupBox(grpProblemSet);
        groupBox->setObjectName("groupBox");
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(7, 7, 7, 7);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        gridLayout_2->addWidget(label_3, 3, 0, 1, 1);

        widget_3 = new QWidget(groupBox);
        widget_3->setObjectName("widget_3");
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        spinFontSize = new QSpinBox(widget_3);
        spinFontSize->setObjectName("spinFontSize");

        horizontalLayout_2->addWidget(spinFontSize);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        gridLayout_2->addWidget(widget_3, 3, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        widget_2 = new QWidget(groupBox);
        widget_2->setObjectName("widget_2");
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        cbFont = new QFontComboBox(widget_2);
        cbFont->setObjectName("cbFont");
        cbFont->setEditable(false);

        horizontalLayout->addWidget(cbFont);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout_2->addWidget(widget_2, 0, 1, 1, 1);

        chkOnlyMonospaced = new QCheckBox(groupBox);
        chkOnlyMonospaced->setObjectName("chkOnlyMonospaced");

        gridLayout_2->addWidget(chkOnlyMonospaced, 4, 0, 1, 2);


        verticalLayout_2->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        verticalLayout->addWidget(grpProblemSet);

        QWidget::setTabOrder(grpProblemSet, grpCompetitiveCompanion);
        QWidget::setTabOrder(grpCompetitiveCompanion, spinPortNumber);
        QWidget::setTabOrder(spinPortNumber, chkConvertInputHTML);
        QWidget::setTabOrder(chkConvertInputHTML, chkConvertExpectedHTML);
        QWidget::setTabOrder(chkConvertExpectedHTML, chkRedirectStderr);
        QWidget::setTabOrder(chkRedirectStderr, cbProblemCaseValidateType);
        QWidget::setTabOrder(cbProblemCaseValidateType, grpEnableTimeout);
        QWidget::setTabOrder(grpEnableTimeout, spinCaseTimeout);
        QWidget::setTabOrder(spinCaseTimeout, spinMemoryLimit);
        QWidget::setTabOrder(spinMemoryLimit, cbFont);
        QWidget::setTabOrder(cbFont, spinFontSize);
        QWidget::setTabOrder(spinFontSize, chkOnlyMonospaced);

        retranslateUi(ExecutorProblemSetWidget);

        QMetaObject::connectSlotsByName(ExecutorProblemSetWidget);
    } // setupUi

    void retranslateUi(QWidget *ExecutorProblemSetWidget)
    {
        ExecutorProblemSetWidget->setWindowTitle(QCoreApplication::translate("ExecutorProblemSetWidget", "Form", nullptr));
        grpProblemSet->setTitle(QCoreApplication::translate("ExecutorProblemSetWidget", "Enable Problem Set", nullptr));
        grpCompetitiveCompanion->setTitle(QCoreApplication::translate("ExecutorProblemSetWidget", "Listen for Competitive Companion", nullptr));
        label->setText(QCoreApplication::translate("ExecutorProblemSetWidget", "Port Number", nullptr));
        label_6->setText(QCoreApplication::translate("ExecutorProblemSetWidget", "Convert HTML for\357\274\232", nullptr));
        chkConvertInputHTML->setText(QCoreApplication::translate("ExecutorProblemSetWidget", "Input", nullptr));
        chkConvertExpectedHTML->setText(QCoreApplication::translate("ExecutorProblemSetWidget", "Expected Output", nullptr));
        chkRedirectStderr->setText(QCoreApplication::translate("ExecutorProblemSetWidget", "Redirect STDERR to Tools output panel", nullptr));
        label_7->setText(QCoreApplication::translate("ExecutorProblemSetWidget", "Problem Case Validate type", nullptr));
        grpEnableTimeout->setTitle(QCoreApplication::translate("ExecutorProblemSetWidget", "Case Validation Limit", nullptr));
        label_4->setText(QCoreApplication::translate("ExecutorProblemSetWidget", "Time Limit", nullptr));
        spinCaseTimeout->setSpecialValueText(QString());
        spinCaseTimeout->setSuffix(QCoreApplication::translate("ExecutorProblemSetWidget", "ms", nullptr));
        label_5->setText(QCoreApplication::translate("ExecutorProblemSetWidget", "Memory Limit", nullptr));
        spinMemoryLimit->setSuffix(QCoreApplication::translate("ExecutorProblemSetWidget", "kb", nullptr));
        label_8->setText(QCoreApplication::translate("ExecutorProblemSetWidget", "Display problem case input file less than", nullptr));
        spinMaxCaseInputFileSize->setSuffix(QCoreApplication::translate("ExecutorProblemSetWidget", "MB", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ExecutorProblemSetWidget", "Case Editor Font", nullptr));
        label_3->setText(QCoreApplication::translate("ExecutorProblemSetWidget", "Font Size:", nullptr));
        label_2->setText(QCoreApplication::translate("ExecutorProblemSetWidget", "Font:", nullptr));
        chkOnlyMonospaced->setText(QCoreApplication::translate("ExecutorProblemSetWidget", "Only Monospaced", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExecutorProblemSetWidget: public Ui_ExecutorProblemSetWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXECUTORPROBLEMSETWIDGET_H
