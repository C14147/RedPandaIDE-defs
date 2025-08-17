/********************************************************************************
** Form generated from reading UI file 'environmentprogramswidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENVIRONMENTPROGRAMSWIDGET_H
#define UI_ENVIRONMENTPROGRAMSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EnvironmentProgramsWidget
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *grpUseCustomTerminal;
    QGridLayout *gridLayout_2;
    QLineEdit *txtTerminal;
    QLineEdit *txtArgsPattern;
    QLabel *labelArgsPattern;
    QToolButton *btnChooseTerminal;
    QToolButton *btnAutoDetectArgsPattern;
    QLabel *labelTerminal;
    QLabel *labelCmdPreview;
    QToolButton *btnTest;
    QPlainTextEdit *labelCmdPreviewResult;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *EnvironmentProgramsWidget)
    {
        if (EnvironmentProgramsWidget->objectName().isEmpty())
            EnvironmentProgramsWidget->setObjectName("EnvironmentProgramsWidget");
        EnvironmentProgramsWidget->resize(400, 300);
        verticalLayout = new QVBoxLayout(EnvironmentProgramsWidget);
        verticalLayout->setObjectName("verticalLayout");
        grpUseCustomTerminal = new QGroupBox(EnvironmentProgramsWidget);
        grpUseCustomTerminal->setObjectName("grpUseCustomTerminal");
        grpUseCustomTerminal->setCheckable(true);
        grpUseCustomTerminal->setChecked(true);
        gridLayout_2 = new QGridLayout(grpUseCustomTerminal);
        gridLayout_2->setObjectName("gridLayout_2");
        txtTerminal = new QLineEdit(grpUseCustomTerminal);
        txtTerminal->setObjectName("txtTerminal");
        txtTerminal->setText(QString::fromUtf8(""));

        gridLayout_2->addWidget(txtTerminal, 0, 1, 1, 1);

        txtArgsPattern = new QLineEdit(grpUseCustomTerminal);
        txtArgsPattern->setObjectName("txtArgsPattern");
        txtArgsPattern->setText(QString::fromUtf8("$term -e $argv"));

        gridLayout_2->addWidget(txtArgsPattern, 1, 1, 1, 1);

        labelArgsPattern = new QLabel(grpUseCustomTerminal);
        labelArgsPattern->setObjectName("labelArgsPattern");

        gridLayout_2->addWidget(labelArgsPattern, 1, 0, 1, 1);

        btnChooseTerminal = new QToolButton(grpUseCustomTerminal);
        btnChooseTerminal->setObjectName("btnChooseTerminal");

        gridLayout_2->addWidget(btnChooseTerminal, 0, 2, 1, 1);

        btnAutoDetectArgsPattern = new QToolButton(grpUseCustomTerminal);
        btnAutoDetectArgsPattern->setObjectName("btnAutoDetectArgsPattern");

        gridLayout_2->addWidget(btnAutoDetectArgsPattern, 1, 2, 1, 1);

        labelTerminal = new QLabel(grpUseCustomTerminal);
        labelTerminal->setObjectName("labelTerminal");

        gridLayout_2->addWidget(labelTerminal, 0, 0, 1, 1);

        labelCmdPreview = new QLabel(grpUseCustomTerminal);
        labelCmdPreview->setObjectName("labelCmdPreview");

        gridLayout_2->addWidget(labelCmdPreview, 2, 0, 1, 1);

        btnTest = new QToolButton(grpUseCustomTerminal);
        btnTest->setObjectName("btnTest");

        gridLayout_2->addWidget(btnTest, 2, 2, 1, 1);

        labelCmdPreviewResult = new QPlainTextEdit(grpUseCustomTerminal);
        labelCmdPreviewResult->setObjectName("labelCmdPreviewResult");
        labelCmdPreviewResult->setReadOnly(true);

        gridLayout_2->addWidget(labelCmdPreviewResult, 2, 1, 1, 1);


        verticalLayout->addWidget(grpUseCustomTerminal);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QWidget::setTabOrder(grpUseCustomTerminal, txtTerminal);
        QWidget::setTabOrder(txtTerminal, btnChooseTerminal);
        QWidget::setTabOrder(btnChooseTerminal, txtArgsPattern);
        QWidget::setTabOrder(txtArgsPattern, btnAutoDetectArgsPattern);
        QWidget::setTabOrder(btnAutoDetectArgsPattern, labelCmdPreviewResult);
        QWidget::setTabOrder(labelCmdPreviewResult, btnTest);

        retranslateUi(EnvironmentProgramsWidget);

        QMetaObject::connectSlotsByName(EnvironmentProgramsWidget);
    } // setupUi

    void retranslateUi(QWidget *EnvironmentProgramsWidget)
    {
        EnvironmentProgramsWidget->setWindowTitle(QCoreApplication::translate("EnvironmentProgramsWidget", "Form", nullptr));
        grpUseCustomTerminal->setTitle(QCoreApplication::translate("EnvironmentProgramsWidget", "Use custom terminal", nullptr));
        labelArgsPattern->setText(QCoreApplication::translate("EnvironmentProgramsWidget", "Args. pattern", nullptr));
        btnChooseTerminal->setText(QCoreApplication::translate("EnvironmentProgramsWidget", "...", nullptr));
#if QT_CONFIG(tooltip)
        btnAutoDetectArgsPattern->setToolTip(QCoreApplication::translate("EnvironmentProgramsWidget", "Auto Detect Terminal Arguments Pattern", nullptr));
#endif // QT_CONFIG(tooltip)
        btnAutoDetectArgsPattern->setText(QCoreApplication::translate("EnvironmentProgramsWidget", "...", nullptr));
        labelTerminal->setText(QCoreApplication::translate("EnvironmentProgramsWidget", "Terminal", nullptr));
        labelCmdPreview->setText(QCoreApplication::translate("EnvironmentProgramsWidget", "Cmd. preview", nullptr));
#if QT_CONFIG(tooltip)
        btnTest->setToolTip(QCoreApplication::translate("EnvironmentProgramsWidget", "Test Command", nullptr));
#endif // QT_CONFIG(tooltip)
        btnTest->setText(QCoreApplication::translate("EnvironmentProgramsWidget", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EnvironmentProgramsWidget: public Ui_EnvironmentProgramsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENVIRONMENTPROGRAMSWIDGET_H
