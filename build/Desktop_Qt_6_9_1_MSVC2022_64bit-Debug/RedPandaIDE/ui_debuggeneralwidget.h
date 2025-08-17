/********************************************************************************
** Form generated from reading UI file 'debuggeneralwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEBUGGENERALWIDGET_H
#define UI_DEBUGGENERALWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DebugGeneralWidget
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *chkAutosave;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QSpinBox *spinArrayElements;
    QSpacerItem *horizontalSpacer_5;
    QWidget *panelCharacters;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QSpinBox *spinCharacters;
    QSpacerItem *horizontalSpacer_8;
    QGroupBox *grpUseGDBServer;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QSpinBox *spinGDBServerPort;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *chkSkipSystemLib;
    QCheckBox *chkSkipProjectLib;
    QCheckBox *chkSkipCustomLib;
    QSpacerItem *horizontalSpacer_6;
    QGroupBox *grpEnableDebugConsole;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QFontComboBox *cbFont;
    QCheckBox *chkOnlyMono;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *sbFontSize;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *chkShowDetailLog;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QSpinBox *spinMemoryViewRows;
    QLabel *label_6;
    QSpinBox *spinMemoryViewColumns;
    QSpacerItem *horizontalSpacer_4;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *chkShowCPUWhenSignaled;
    QCheckBox *chkBlendMode;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_7;
    QRadioButton *rbATT;
    QRadioButton *rbIntel;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer;
    QButtonGroup *grpCPUDisassembly;

    void setupUi(QWidget *DebugGeneralWidget)
    {
        if (DebugGeneralWidget->objectName().isEmpty())
            DebugGeneralWidget->setObjectName("DebugGeneralWidget");
        DebugGeneralWidget->resize(704, 774);
        verticalLayout = new QVBoxLayout(DebugGeneralWidget);
        verticalLayout->setObjectName("verticalLayout");
        chkAutosave = new QCheckBox(DebugGeneralWidget);
        chkAutosave->setObjectName("chkAutosave");

        verticalLayout->addWidget(chkAutosave);

        widget_5 = new QWidget(DebugGeneralWidget);
        widget_5->setObjectName("widget_5");
        horizontalLayout_5 = new QHBoxLayout(widget_5);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(widget_5);
        label_7->setObjectName("label_7");

        horizontalLayout_5->addWidget(label_7);

        spinArrayElements = new QSpinBox(widget_5);
        spinArrayElements->setObjectName("spinArrayElements");
        spinArrayElements->setMaximum(99999999);

        horizontalLayout_5->addWidget(spinArrayElements);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        verticalLayout->addWidget(widget_5);

        panelCharacters = new QWidget(DebugGeneralWidget);
        panelCharacters->setObjectName("panelCharacters");
        horizontalLayout_8 = new QHBoxLayout(panelCharacters);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(panelCharacters);
        label_8->setObjectName("label_8");

        horizontalLayout_8->addWidget(label_8);

        spinCharacters = new QSpinBox(panelCharacters);
        spinCharacters->setObjectName("spinCharacters");
        spinCharacters->setMaximum(99999999);

        horizontalLayout_8->addWidget(spinCharacters);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_8);


        verticalLayout->addWidget(panelCharacters);

        grpUseGDBServer = new QGroupBox(DebugGeneralWidget);
        grpUseGDBServer->setObjectName("grpUseGDBServer");
        grpUseGDBServer->setCheckable(true);
        gridLayout = new QGridLayout(grpUseGDBServer);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(7, 7, 7, 7);
        label_4 = new QLabel(grpUseGDBServer);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        spinGDBServerPort = new QSpinBox(grpUseGDBServer);
        spinGDBServerPort->setObjectName("spinGDBServerPort");
        spinGDBServerPort->setMinimum(1025);
        spinGDBServerPort->setMaximum(65535);

        gridLayout->addWidget(spinGDBServerPort, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 2, 1, 1);


        verticalLayout->addWidget(grpUseGDBServer);

        groupBox_4 = new QGroupBox(DebugGeneralWidget);
        groupBox_4->setObjectName("groupBox_4");
        horizontalLayout_6 = new QHBoxLayout(groupBox_4);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(7, 7, 7, 7);
        chkSkipSystemLib = new QCheckBox(groupBox_4);
        chkSkipSystemLib->setObjectName("chkSkipSystemLib");

        horizontalLayout_6->addWidget(chkSkipSystemLib);

        chkSkipProjectLib = new QCheckBox(groupBox_4);
        chkSkipProjectLib->setObjectName("chkSkipProjectLib");

        horizontalLayout_6->addWidget(chkSkipProjectLib);

        chkSkipCustomLib = new QCheckBox(groupBox_4);
        chkSkipCustomLib->setObjectName("chkSkipCustomLib");

        horizontalLayout_6->addWidget(chkSkipCustomLib);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);


        verticalLayout->addWidget(groupBox_4);

        grpEnableDebugConsole = new QGroupBox(DebugGeneralWidget);
        grpEnableDebugConsole->setObjectName("grpEnableDebugConsole");
        grpEnableDebugConsole->setCheckable(true);
        verticalLayout_2 = new QVBoxLayout(grpEnableDebugConsole);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(7, 7, 7, 7);
        widget = new QWidget(grpEnableDebugConsole);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        cbFont = new QFontComboBox(widget);
        cbFont->setObjectName("cbFont");

        horizontalLayout->addWidget(cbFont);

        chkOnlyMono = new QCheckBox(widget);
        chkOnlyMono->setObjectName("chkOnlyMono");

        horizontalLayout->addWidget(chkOnlyMono);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addWidget(widget);

        widget_2 = new QWidget(grpEnableDebugConsole);
        widget_2->setObjectName("widget_2");
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget_2);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        sbFontSize = new QSpinBox(widget_2);
        sbFontSize->setObjectName("sbFontSize");
        sbFontSize->setMaximum(999);

        horizontalLayout_2->addWidget(sbFontSize);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addWidget(widget_2);

        chkShowDetailLog = new QCheckBox(grpEnableDebugConsole);
        chkShowDetailLog->setObjectName("chkShowDetailLog");

        verticalLayout_2->addWidget(chkShowDetailLog);


        verticalLayout->addWidget(grpEnableDebugConsole);

        groupBox = new QGroupBox(DebugGeneralWidget);
        groupBox->setObjectName("groupBox");
        horizontalLayout_4 = new QHBoxLayout(groupBox);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(7, 7, 7, 7);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");

        horizontalLayout_4->addWidget(label_5);

        spinMemoryViewRows = new QSpinBox(groupBox);
        spinMemoryViewRows->setObjectName("spinMemoryViewRows");
        spinMemoryViewRows->setMinimum(1);
        spinMemoryViewRows->setMaximum(999);
        spinMemoryViewRows->setValue(8);

        horizontalLayout_4->addWidget(spinMemoryViewRows);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");

        horizontalLayout_4->addWidget(label_6);

        spinMemoryViewColumns = new QSpinBox(groupBox);
        spinMemoryViewColumns->setObjectName("spinMemoryViewColumns");
        spinMemoryViewColumns->setMinimum(1);
        spinMemoryViewColumns->setValue(8);

        horizontalLayout_4->addWidget(spinMemoryViewColumns);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout->addWidget(groupBox);

        groupBox_3 = new QGroupBox(DebugGeneralWidget);
        groupBox_3->setObjectName("groupBox_3");
        verticalLayout_4 = new QVBoxLayout(groupBox_3);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(7, 7, 7, 7);
        chkShowCPUWhenSignaled = new QCheckBox(groupBox_3);
        chkShowCPUWhenSignaled->setObjectName("chkShowCPUWhenSignaled");

        verticalLayout_4->addWidget(chkShowCPUWhenSignaled);

        chkBlendMode = new QCheckBox(groupBox_3);
        chkBlendMode->setObjectName("chkBlendMode");

        verticalLayout_4->addWidget(chkBlendMode);

        widget_3 = new QWidget(groupBox_3);
        widget_3->setObjectName("widget_3");
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget_3);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_3->addWidget(label_3);

        widget_4 = new QWidget(widget_3);
        widget_4->setObjectName("widget_4");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy);
        horizontalLayout_7 = new QHBoxLayout(widget_4);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        rbATT = new QRadioButton(widget_4);
        grpCPUDisassembly = new QButtonGroup(DebugGeneralWidget);
        grpCPUDisassembly->setObjectName("grpCPUDisassembly");
        grpCPUDisassembly->addButton(rbATT);
        rbATT->setObjectName("rbATT");

        horizontalLayout_7->addWidget(rbATT);

        rbIntel = new QRadioButton(widget_4);
        grpCPUDisassembly->addButton(rbIntel);
        rbIntel->setObjectName("rbIntel");

        horizontalLayout_7->addWidget(rbIntel);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);


        horizontalLayout_3->addWidget(widget_4);


        verticalLayout_4->addWidget(widget_3);


        verticalLayout->addWidget(groupBox_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QWidget::setTabOrder(chkAutosave, spinArrayElements);
        QWidget::setTabOrder(spinArrayElements, spinCharacters);
        QWidget::setTabOrder(spinCharacters, grpUseGDBServer);
        QWidget::setTabOrder(grpUseGDBServer, spinGDBServerPort);
        QWidget::setTabOrder(spinGDBServerPort, chkSkipSystemLib);
        QWidget::setTabOrder(chkSkipSystemLib, chkSkipProjectLib);
        QWidget::setTabOrder(chkSkipProjectLib, chkSkipCustomLib);
        QWidget::setTabOrder(chkSkipCustomLib, grpEnableDebugConsole);
        QWidget::setTabOrder(grpEnableDebugConsole, cbFont);
        QWidget::setTabOrder(cbFont, chkOnlyMono);
        QWidget::setTabOrder(chkOnlyMono, sbFontSize);
        QWidget::setTabOrder(sbFontSize, chkShowDetailLog);
        QWidget::setTabOrder(chkShowDetailLog, spinMemoryViewRows);
        QWidget::setTabOrder(spinMemoryViewRows, spinMemoryViewColumns);
        QWidget::setTabOrder(spinMemoryViewColumns, chkShowCPUWhenSignaled);
        QWidget::setTabOrder(chkShowCPUWhenSignaled, chkBlendMode);
        QWidget::setTabOrder(chkBlendMode, rbATT);
        QWidget::setTabOrder(rbATT, rbIntel);

        retranslateUi(DebugGeneralWidget);

        QMetaObject::connectSlotsByName(DebugGeneralWidget);
    } // setupUi

    void retranslateUi(QWidget *DebugGeneralWidget)
    {
        DebugGeneralWidget->setWindowTitle(QCoreApplication::translate("DebugGeneralWidget", "Form", nullptr));
        chkAutosave->setText(QCoreApplication::translate("DebugGeneralWidget", "Autosave watches", nullptr));
        label_7->setText(QCoreApplication::translate("DebugGeneralWidget", "Max number of array elements displayed", nullptr));
        label_8->setText(QCoreApplication::translate("DebugGeneralWidget", "Max  characters of a string displayed", nullptr));
        grpUseGDBServer->setTitle(QCoreApplication::translate("DebugGeneralWidget", "Use GDB Server to debug", nullptr));
        label_4->setText(QCoreApplication::translate("DebugGeneralWidget", "GDB Server Port", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("DebugGeneralWidget", "Skip header files when step into", nullptr));
        chkSkipSystemLib->setText(QCoreApplication::translate("DebugGeneralWidget", "System library", nullptr));
        chkSkipProjectLib->setText(QCoreApplication::translate("DebugGeneralWidget", "Project library", nullptr));
        chkSkipCustomLib->setText(QCoreApplication::translate("DebugGeneralWidget", "Custom library", nullptr));
        grpEnableDebugConsole->setTitle(QCoreApplication::translate("DebugGeneralWidget", "Debug Console", nullptr));
        label->setText(QCoreApplication::translate("DebugGeneralWidget", "Font:", nullptr));
        chkOnlyMono->setText(QCoreApplication::translate("DebugGeneralWidget", "Show only monospaced fonts", nullptr));
        label_2->setText(QCoreApplication::translate("DebugGeneralWidget", "Size:", nullptr));
        chkShowDetailLog->setText(QCoreApplication::translate("DebugGeneralWidget", "Show detail debug logs", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DebugGeneralWidget", "Memory View", nullptr));
        label_5->setText(QCoreApplication::translate("DebugGeneralWidget", "Rows", nullptr));
        label_6->setText(QCoreApplication::translate("DebugGeneralWidget", "Columns", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("DebugGeneralWidget", "CPU Window", nullptr));
        chkShowCPUWhenSignaled->setText(QCoreApplication::translate("DebugGeneralWidget", "Show CPU Window when signal received", nullptr));
        chkBlendMode->setText(QCoreApplication::translate("DebugGeneralWidget", "Show disassembly code in blend mode", nullptr));
        label_3->setText(QCoreApplication::translate("DebugGeneralWidget", "Disassembly Coding Style:", nullptr));
        rbATT->setText(QCoreApplication::translate("DebugGeneralWidget", "AT&&T", nullptr));
        rbIntel->setText(QCoreApplication::translate("DebugGeneralWidget", "Intel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DebugGeneralWidget: public Ui_DebugGeneralWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEBUGGENERALWIDGET_H
