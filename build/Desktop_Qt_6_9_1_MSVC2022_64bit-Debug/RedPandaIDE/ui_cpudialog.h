/********************************************************************************
** Form generated from reading UI file 'cpudialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CPUDIALOG_H
#define UI_CPUDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "editor.h"

QT_BEGIN_NAMESPACE

class Ui_CPUDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QSplitter *splitter;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *btnStepOverInstruction;
    QToolButton *btnStepIntoInstruction;
    QLabel *label;
    QComboBox *cbCallStack;
    Editor *txtCode;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *rdATT;
    QRadioButton *rdIntel;
    QCheckBox *chkBlendMode;
    QSpacerItem *horizontalSpacer;
    QTableView *lstRegister;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *CPUDialog)
    {
        if (CPUDialog->objectName().isEmpty())
            CPUDialog->setObjectName("CPUDialog");
        CPUDialog->resize(879, 498);
        horizontalLayout = new QHBoxLayout(CPUDialog);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(5, 5, 5, 5);
        splitter = new QSplitter(CPUDialog);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        widget = new QWidget(splitter);
        widget->setObjectName("widget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(widget);
        widget_2->setObjectName("widget_2");
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        btnStepOverInstruction = new QToolButton(widget_2);
        btnStepOverInstruction->setObjectName("btnStepOverInstruction");
        btnStepOverInstruction->setToolButtonStyle(Qt::ToolButtonIconOnly);

        horizontalLayout_2->addWidget(btnStepOverInstruction);

        btnStepIntoInstruction = new QToolButton(widget_2);
        btnStepIntoInstruction->setObjectName("btnStepIntoInstruction");

        horizontalLayout_2->addWidget(btnStepIntoInstruction);

        label = new QLabel(widget_2);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        cbCallStack = new QComboBox(widget_2);
        cbCallStack->setObjectName("cbCallStack");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cbCallStack->sizePolicy().hasHeightForWidth());
        cbCallStack->setSizePolicy(sizePolicy1);
        cbCallStack->setInsertPolicy(QComboBox::NoInsert);

        horizontalLayout_2->addWidget(cbCallStack);


        verticalLayout->addWidget(widget_2);

        txtCode = new Editor(widget);
        txtCode->setObjectName("txtCode");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy2.setHorizontalStretch(3);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(txtCode->sizePolicy().hasHeightForWidth());
        txtCode->setSizePolicy(sizePolicy2);
        txtCode->setFrameShape(QFrame::StyledPanel);
        txtCode->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(txtCode);

        widget_3 = new QWidget(widget);
        widget_3->setObjectName("widget_3");
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        rdATT = new QRadioButton(widget_3);
        buttonGroup = new QButtonGroup(CPUDialog);
        buttonGroup->setObjectName("buttonGroup");
        buttonGroup->addButton(rdATT);
        rdATT->setObjectName("rdATT");

        horizontalLayout_3->addWidget(rdATT);

        rdIntel = new QRadioButton(widget_3);
        buttonGroup->addButton(rdIntel);
        rdIntel->setObjectName("rdIntel");

        horizontalLayout_3->addWidget(rdIntel);

        chkBlendMode = new QCheckBox(widget_3);
        chkBlendMode->setObjectName("chkBlendMode");

        horizontalLayout_3->addWidget(chkBlendMode);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout->addWidget(widget_3);

        splitter->addWidget(widget);
        lstRegister = new QTableView(splitter);
        lstRegister->setObjectName("lstRegister");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lstRegister->sizePolicy().hasHeightForWidth());
        lstRegister->setSizePolicy(sizePolicy3);
        lstRegister->setEditTriggers(QAbstractItemView::NoEditTriggers);
        lstRegister->setDragEnabled(false);
        lstRegister->setDragDropOverwriteMode(false);
        lstRegister->setDragDropMode(QAbstractItemView::NoDragDrop);
        lstRegister->setDefaultDropAction(Qt::IgnoreAction);
        lstRegister->setAlternatingRowColors(true);
        lstRegister->setSelectionMode(QAbstractItemView::SingleSelection);
        lstRegister->setSelectionBehavior(QAbstractItemView::SelectRows);
        lstRegister->setTextElideMode(Qt::ElideNone);
        splitter->addWidget(lstRegister);
        lstRegister->horizontalHeader()->setStretchLastSection(true);

        horizontalLayout->addWidget(splitter);


        retranslateUi(CPUDialog);

        QMetaObject::connectSlotsByName(CPUDialog);
    } // setupUi

    void retranslateUi(QDialog *CPUDialog)
    {
        CPUDialog->setWindowTitle(QCoreApplication::translate("CPUDialog", "CPU Info", nullptr));
#if QT_CONFIG(tooltip)
        btnStepOverInstruction->setToolTip(QCoreApplication::translate("CPUDialog", "Step over one machine instruction", nullptr));
#endif // QT_CONFIG(tooltip)
        btnStepOverInstruction->setText(QCoreApplication::translate("CPUDialog", "Step over one machine instruction", nullptr));
#if QT_CONFIG(tooltip)
        btnStepIntoInstruction->setToolTip(QCoreApplication::translate("CPUDialog", "Step into one machine instruction", nullptr));
#endif // QT_CONFIG(tooltip)
        btnStepIntoInstruction->setText(QCoreApplication::translate("CPUDialog", "Step into one machine instruction", nullptr));
        label->setText(QCoreApplication::translate("CPUDialog", "Callstack", nullptr));
        rdATT->setText(QCoreApplication::translate("CPUDialog", "AT&&T", nullptr));
        rdIntel->setText(QCoreApplication::translate("CPUDialog", "Intel", nullptr));
        chkBlendMode->setText(QCoreApplication::translate("CPUDialog", "Blend Mode", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CPUDialog: public Ui_CPUDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CPUDIALOG_H
