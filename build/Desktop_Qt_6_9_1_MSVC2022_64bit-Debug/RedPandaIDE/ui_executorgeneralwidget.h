/********************************************************************************
** Form generated from reading UI file 'executorgeneralwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXECUTORGENERALWIDGET_H
#define UI_EXECUTORGENERALWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExecutorGeneralWidget
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QCheckBox *chkPauseConsole;
    QCheckBox *chkVTSeq;
    QCheckBox *chkMinimizeOnRun;
    QSpacerItem *horizontalSpacer;
    QGroupBox *grpExecuteParameters;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *txtExecuteParamaters;
    QLabel *labelParseArgsInJson;
    QTextBrowser *txtParsedArgsInJson;
    QGroupBox *grpRedirectInput;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_4;
    QToolButton *btnBrowse;
    QLineEdit *txtRedirectInputFile;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ExecutorGeneralWidget)
    {
        if (ExecutorGeneralWidget->objectName().isEmpty())
            ExecutorGeneralWidget->setObjectName("ExecutorGeneralWidget");
        ExecutorGeneralWidget->resize(635, 504);
        gridLayout = new QGridLayout(ExecutorGeneralWidget);
        gridLayout->setObjectName("gridLayout");
        widget = new QWidget(ExecutorGeneralWidget);
        widget->setObjectName("widget");
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        chkPauseConsole = new QCheckBox(widget);
        chkPauseConsole->setObjectName("chkPauseConsole");

        verticalLayout->addWidget(chkPauseConsole);

        chkVTSeq = new QCheckBox(widget);
        chkVTSeq->setObjectName("chkVTSeq");

        verticalLayout->addWidget(chkVTSeq);

        chkMinimizeOnRun = new QCheckBox(widget);
        chkMinimizeOnRun->setObjectName("chkMinimizeOnRun");

        verticalLayout->addWidget(chkMinimizeOnRun);


        gridLayout->addWidget(widget, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        grpExecuteParameters = new QGroupBox(ExecutorGeneralWidget);
        grpExecuteParameters->setObjectName("grpExecuteParameters");
        grpExecuteParameters->setCheckable(true);
        verticalLayout_2 = new QVBoxLayout(grpExecuteParameters);
        verticalLayout_2->setObjectName("verticalLayout_2");
        txtExecuteParamaters = new QLineEdit(grpExecuteParameters);
        txtExecuteParamaters->setObjectName("txtExecuteParamaters");

        verticalLayout_2->addWidget(txtExecuteParamaters);

        labelParseArgsInJson = new QLabel(grpExecuteParameters);
        labelParseArgsInJson->setObjectName("labelParseArgsInJson");

        verticalLayout_2->addWidget(labelParseArgsInJson);

        txtParsedArgsInJson = new QTextBrowser(grpExecuteParameters);
        txtParsedArgsInJson->setObjectName("txtParsedArgsInJson");

        verticalLayout_2->addWidget(txtParsedArgsInJson);


        gridLayout->addWidget(grpExecuteParameters, 1, 0, 1, 2);

        grpRedirectInput = new QGroupBox(ExecutorGeneralWidget);
        grpRedirectInput->setObjectName("grpRedirectInput");
        grpRedirectInput->setCheckable(true);
        gridLayout_2 = new QGridLayout(grpRedirectInput);
        gridLayout_2->setObjectName("gridLayout_2");
        label_3 = new QLabel(grpRedirectInput);
        label_3->setObjectName("label_3");
        QFont font;
        font.setBold(true);
        label_3->setFont(font);

        gridLayout_2->addWidget(label_3, 2, 1, 1, 1);

        label_2 = new QLabel(grpRedirectInput);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        gridLayout_2->addWidget(label_2, 1, 1, 1, 1);

        label_4 = new QLabel(grpRedirectInput);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        gridLayout_2->addWidget(label_4, 3, 1, 1, 1);

        btnBrowse = new QToolButton(grpRedirectInput);
        btnBrowse->setObjectName("btnBrowse");

        gridLayout_2->addWidget(btnBrowse, 0, 2, 1, 1);

        txtRedirectInputFile = new QLineEdit(grpRedirectInput);
        txtRedirectInputFile->setObjectName("txtRedirectInputFile");

        gridLayout_2->addWidget(txtRedirectInputFile, 0, 1, 1, 1);


        gridLayout->addWidget(grpRedirectInput, 2, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 2);

        QWidget::setTabOrder(chkPauseConsole, chkVTSeq);
        QWidget::setTabOrder(chkVTSeq, chkMinimizeOnRun);
        QWidget::setTabOrder(chkMinimizeOnRun, grpExecuteParameters);
        QWidget::setTabOrder(grpExecuteParameters, txtExecuteParamaters);
        QWidget::setTabOrder(txtExecuteParamaters, txtParsedArgsInJson);
        QWidget::setTabOrder(txtParsedArgsInJson, grpRedirectInput);
        QWidget::setTabOrder(grpRedirectInput, txtRedirectInputFile);
        QWidget::setTabOrder(txtRedirectInputFile, btnBrowse);

        retranslateUi(ExecutorGeneralWidget);

        QMetaObject::connectSlotsByName(ExecutorGeneralWidget);
    } // setupUi

    void retranslateUi(QWidget *ExecutorGeneralWidget)
    {
        ExecutorGeneralWidget->setWindowTitle(QCoreApplication::translate("ExecutorGeneralWidget", "Form", nullptr));
        chkPauseConsole->setText(QCoreApplication::translate("ExecutorGeneralWidget", "Pause console programs after return", nullptr));
        chkVTSeq->setText(QCoreApplication::translate("ExecutorGeneralWidget", "Enable ANSI Escape Sequences Support", nullptr));
        chkMinimizeOnRun->setText(QCoreApplication::translate("ExecutorGeneralWidget", "Minimize IDE when running programs", nullptr));
        grpExecuteParameters->setTitle(QCoreApplication::translate("ExecutorGeneralWidget", "Parameters to pass to your program", nullptr));
        labelParseArgsInJson->setText(QCoreApplication::translate("ExecutorGeneralWidget", "Parsed argv array (represented in JSON):", nullptr));
        grpRedirectInput->setTitle(QCoreApplication::translate("ExecutorGeneralWidget", "Redirect input to the following file:", nullptr));
        label_3->setText(QCoreApplication::translate("ExecutorGeneralWidget", "Debugger doesn't support this feature in Linux.", nullptr));
        label_2->setText(QCoreApplication::translate("ExecutorGeneralWidget", "Note: ", nullptr));
        label_4->setText(QCoreApplication::translate("ExecutorGeneralWidget", "Debugger only support this feature in gdb server mode in windows.", nullptr));
#if QT_CONFIG(tooltip)
        btnBrowse->setToolTip(QCoreApplication::translate("ExecutorGeneralWidget", "Browse", nullptr));
#endif // QT_CONFIG(tooltip)
        btnBrowse->setText(QCoreApplication::translate("ExecutorGeneralWidget", "Browse", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExecutorGeneralWidget: public Ui_ExecutorGeneralWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXECUTORGENERALWIDGET_H
