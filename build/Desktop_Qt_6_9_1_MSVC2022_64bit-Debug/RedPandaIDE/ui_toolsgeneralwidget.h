/********************************************************************************
** Form generated from reading UI file 'toolsgeneralwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOOLSGENERALWIDGET_H
#define UI_TOOLSGENERALWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ToolsGeneralWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *panelEditButtons;
    QHBoxLayout *horizontalLayout_5;
    QToolButton *btnAdd;
    QToolButton *btnEdit;
    QToolButton *btnRemove;
    QSpacerItem *horizontalSpacer;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_2;
    QListView *lstTools;
    QWidget *panelEdit;
    QVBoxLayout *verticalLayout_2;
    QFrame *frmEdit;
    QGridLayout *gridLayout;
    QToolButton *btnBrowseProgram;
    QToolButton *btnBrowseWorkingDirectory;
    QComboBox *cbOutput;
    QLabel *label_2;
    QLabel *label_6;
    QLineEdit *txtProgram;
    QLabel *label_4;
    QSpacerItem *verticalSpacer;
    QLabel *label_5;
    QLineEdit *txtTitle;
    QLabel *label_3;
    QLineEdit *txtParameters;
    QLabel *label;
    QFrame *line;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btnInsertMacro;
    QComboBox *cbMacros;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnEditOk;
    QPushButton *btnEditCancel;
    QLineEdit *txtDirectory;
    QLineEdit *txtDemo;
    QComboBox *cbInput;
    QCheckBox *chkUTF8;

    void setupUi(QWidget *ToolsGeneralWidget)
    {
        if (ToolsGeneralWidget->objectName().isEmpty())
            ToolsGeneralWidget->setObjectName("ToolsGeneralWidget");
        ToolsGeneralWidget->resize(833, 437);
        verticalLayout = new QVBoxLayout(ToolsGeneralWidget);
        verticalLayout->setObjectName("verticalLayout");
        panelEditButtons = new QWidget(ToolsGeneralWidget);
        panelEditButtons->setObjectName("panelEditButtons");
        horizontalLayout_5 = new QHBoxLayout(panelEditButtons);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        btnAdd = new QToolButton(panelEditButtons);
        btnAdd->setObjectName("btnAdd");

        horizontalLayout_5->addWidget(btnAdd);

        btnEdit = new QToolButton(panelEditButtons);
        btnEdit->setObjectName("btnEdit");

        horizontalLayout_5->addWidget(btnEdit);

        btnRemove = new QToolButton(panelEditButtons);
        btnRemove->setObjectName("btnRemove");

        horizontalLayout_5->addWidget(btnRemove);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);


        verticalLayout->addWidget(panelEditButtons);

        widget = new QWidget(ToolsGeneralWidget);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);

        verticalLayout->addWidget(widget);

        widget_5 = new QWidget(ToolsGeneralWidget);
        widget_5->setObjectName("widget_5");
        horizontalLayout_2 = new QHBoxLayout(widget_5);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lstTools = new QListView(widget_5);
        lstTools->setObjectName("lstTools");
        lstTools->setEditTriggers(QAbstractItemView::NoEditTriggers);
        lstTools->setDragEnabled(true);
        lstTools->setDragDropMode(QAbstractItemView::InternalMove);
        lstTools->setDefaultDropAction(Qt::MoveAction);
        lstTools->setAlternatingRowColors(false);

        horizontalLayout_2->addWidget(lstTools);

        panelEdit = new QWidget(widget_5);
        panelEdit->setObjectName("panelEdit");
        verticalLayout_2 = new QVBoxLayout(panelEdit);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        frmEdit = new QFrame(panelEdit);
        frmEdit->setObjectName("frmEdit");
        frmEdit->setFrameShape(QFrame::StyledPanel);
        frmEdit->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frmEdit);
        gridLayout->setObjectName("gridLayout");
        btnBrowseProgram = new QToolButton(frmEdit);
        btnBrowseProgram->setObjectName("btnBrowseProgram");

        gridLayout->addWidget(btnBrowseProgram, 1, 2, 1, 1);

        btnBrowseWorkingDirectory = new QToolButton(frmEdit);
        btnBrowseWorkingDirectory->setObjectName("btnBrowseWorkingDirectory");

        gridLayout->addWidget(btnBrowseWorkingDirectory, 2, 2, 1, 1);

        cbOutput = new QComboBox(frmEdit);
        cbOutput->setObjectName("cbOutput");

        gridLayout->addWidget(cbOutput, 6, 1, 1, 2);

        label_2 = new QLabel(frmEdit);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_6 = new QLabel(frmEdit);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 6, 0, 1, 1);

        txtProgram = new QLineEdit(frmEdit);
        txtProgram->setObjectName("txtProgram");

        gridLayout->addWidget(txtProgram, 1, 1, 1, 1);

        label_4 = new QLabel(frmEdit);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 11, 0, 1, 1);

        label_5 = new QLabel(frmEdit);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        txtTitle = new QLineEdit(frmEdit);
        txtTitle->setObjectName("txtTitle");

        gridLayout->addWidget(txtTitle, 0, 1, 1, 2);

        label_3 = new QLabel(frmEdit);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        txtParameters = new QLineEdit(frmEdit);
        txtParameters->setObjectName("txtParameters");

        gridLayout->addWidget(txtParameters, 3, 1, 1, 2);

        label = new QLabel(frmEdit);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        line = new QFrame(frmEdit);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line, 8, 0, 1, 3);

        widget_2 = new QWidget(frmEdit);
        widget_2->setObjectName("widget_2");
        horizontalLayout_4 = new QHBoxLayout(widget_2);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        btnInsertMacro = new QPushButton(widget_2);
        btnInsertMacro->setObjectName("btnInsertMacro");

        horizontalLayout_4->addWidget(btnInsertMacro);

        cbMacros = new QComboBox(widget_2);
        cbMacros->setObjectName("cbMacros");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cbMacros->sizePolicy().hasHeightForWidth());
        cbMacros->setSizePolicy(sizePolicy);
        cbMacros->setEditable(false);
        cbMacros->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_4->addWidget(cbMacros);


        gridLayout->addWidget(widget_2, 10, 0, 1, 3);

        widget_3 = new QWidget(frmEdit);
        widget_3->setObjectName("widget_3");
        widget_3->setMinimumSize(QSize(0, 0));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        btnEditOk = new QPushButton(widget_3);
        btnEditOk->setObjectName("btnEditOk");

        horizontalLayout_3->addWidget(btnEditOk);

        btnEditCancel = new QPushButton(widget_3);
        btnEditCancel->setObjectName("btnEditCancel");

        horizontalLayout_3->addWidget(btnEditCancel);


        gridLayout->addWidget(widget_3, 12, 0, 1, 3);

        txtDirectory = new QLineEdit(frmEdit);
        txtDirectory->setObjectName("txtDirectory");

        gridLayout->addWidget(txtDirectory, 2, 1, 1, 1);

        txtDemo = new QLineEdit(frmEdit);
        txtDemo->setObjectName("txtDemo");
        txtDemo->setReadOnly(true);
        txtDemo->setClearButtonEnabled(false);

        gridLayout->addWidget(txtDemo, 4, 0, 1, 3);

        cbInput = new QComboBox(frmEdit);
        cbInput->setObjectName("cbInput");

        gridLayout->addWidget(cbInput, 5, 1, 1, 2);

        chkUTF8 = new QCheckBox(frmEdit);
        chkUTF8->setObjectName("chkUTF8");

        gridLayout->addWidget(chkUTF8, 7, 0, 1, 3);


        verticalLayout_2->addWidget(frmEdit);


        horizontalLayout_2->addWidget(panelEdit);


        verticalLayout->addWidget(widget_5);

        QWidget::setTabOrder(btnAdd, btnEdit);
        QWidget::setTabOrder(btnEdit, btnRemove);
        QWidget::setTabOrder(btnRemove, lstTools);
        QWidget::setTabOrder(lstTools, txtTitle);
        QWidget::setTabOrder(txtTitle, txtProgram);
        QWidget::setTabOrder(txtProgram, btnBrowseProgram);
        QWidget::setTabOrder(btnBrowseProgram, txtDirectory);
        QWidget::setTabOrder(txtDirectory, btnBrowseWorkingDirectory);
        QWidget::setTabOrder(btnBrowseWorkingDirectory, txtParameters);
        QWidget::setTabOrder(txtParameters, txtDemo);
        QWidget::setTabOrder(txtDemo, cbInput);
        QWidget::setTabOrder(cbInput, cbOutput);
        QWidget::setTabOrder(cbOutput, chkUTF8);
        QWidget::setTabOrder(chkUTF8, btnInsertMacro);
        QWidget::setTabOrder(btnInsertMacro, cbMacros);
        QWidget::setTabOrder(cbMacros, btnEditOk);
        QWidget::setTabOrder(btnEditOk, btnEditCancel);

        retranslateUi(ToolsGeneralWidget);

        QMetaObject::connectSlotsByName(ToolsGeneralWidget);
    } // setupUi

    void retranslateUi(QWidget *ToolsGeneralWidget)
    {
        ToolsGeneralWidget->setWindowTitle(QCoreApplication::translate("ToolsGeneralWidget", "Form", nullptr));
        btnAdd->setText(QCoreApplication::translate("ToolsGeneralWidget", "Add", nullptr));
        btnEdit->setText(QCoreApplication::translate("ToolsGeneralWidget", "Edit", nullptr));
        btnRemove->setText(QCoreApplication::translate("ToolsGeneralWidget", "Remove", nullptr));
        btnBrowseProgram->setText(QCoreApplication::translate("ToolsGeneralWidget", "Browse", nullptr));
        btnBrowseWorkingDirectory->setText(QCoreApplication::translate("ToolsGeneralWidget", "Browse", nullptr));
        label_2->setText(QCoreApplication::translate("ToolsGeneralWidget", "Program", nullptr));
        label_6->setText(QCoreApplication::translate("ToolsGeneralWidget", "Output To", nullptr));
        label_4->setText(QCoreApplication::translate("ToolsGeneralWidget", "Parameters", nullptr));
        label_5->setText(QCoreApplication::translate("ToolsGeneralWidget", "Redirect Input", nullptr));
        label_3->setText(QCoreApplication::translate("ToolsGeneralWidget", "Working Directory", nullptr));
        label->setText(QCoreApplication::translate("ToolsGeneralWidget", "Title", nullptr));
        btnInsertMacro->setText(QCoreApplication::translate("ToolsGeneralWidget", "Insert Macro", nullptr));
        btnEditOk->setText(QCoreApplication::translate("ToolsGeneralWidget", "Ok", nullptr));
        btnEditCancel->setText(QCoreApplication::translate("ToolsGeneralWidget", "Cancel", nullptr));
        chkUTF8->setText(QCoreApplication::translate("ToolsGeneralWidget", "Use UTF8 as the encoding", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ToolsGeneralWidget: public Ui_ToolsGeneralWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOOLSGENERALWIDGET_H
