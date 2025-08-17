/********************************************************************************
** Form generated from reading UI file 'editorautosavewidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITORAUTOSAVEWIDGET_H
#define UI_EDITORAUTOSAVEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditorAutoSaveWidget
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *chkAutoBackupEditContents;
    QGroupBox *grpEnableAutoSave;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *spinInterval;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *rbCurrentFile;
    QRadioButton *rbAllOpennedFiles;
    QRadioButton *rbProjectFiles;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *rbOverwrite;
    QRadioButton *rbAppendUNIXTimestamp;
    QRadioButton *rbAppendFormattedTimestamp;
    QLabel *lblFilename;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *EditorAutoSaveWidget)
    {
        if (EditorAutoSaveWidget->objectName().isEmpty())
            EditorAutoSaveWidget->setObjectName("EditorAutoSaveWidget");
        EditorAutoSaveWidget->resize(469, 459);
        verticalLayout = new QVBoxLayout(EditorAutoSaveWidget);
        verticalLayout->setObjectName("verticalLayout");
        chkAutoBackupEditContents = new QCheckBox(EditorAutoSaveWidget);
        chkAutoBackupEditContents->setObjectName("chkAutoBackupEditContents");

        verticalLayout->addWidget(chkAutoBackupEditContents);

        grpEnableAutoSave = new QGroupBox(EditorAutoSaveWidget);
        grpEnableAutoSave->setObjectName("grpEnableAutoSave");
        grpEnableAutoSave->setCheckable(true);
        verticalLayout_2 = new QVBoxLayout(grpEnableAutoSave);
        verticalLayout_2->setObjectName("verticalLayout_2");
        widget = new QWidget(grpEnableAutoSave);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        spinInterval = new QSpinBox(widget);
        spinInterval->setObjectName("spinInterval");
        spinInterval->setMinimum(1);
        spinInterval->setMaximum(60);

        horizontalLayout->addWidget(spinInterval);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addWidget(widget);

        groupBox_2 = new QGroupBox(grpEnableAutoSave);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        rbCurrentFile = new QRadioButton(groupBox_2);
        rbCurrentFile->setObjectName("rbCurrentFile");

        verticalLayout_3->addWidget(rbCurrentFile);

        rbAllOpennedFiles = new QRadioButton(groupBox_2);
        rbAllOpennedFiles->setObjectName("rbAllOpennedFiles");

        verticalLayout_3->addWidget(rbAllOpennedFiles);

        rbProjectFiles = new QRadioButton(groupBox_2);
        rbProjectFiles->setObjectName("rbProjectFiles");

        verticalLayout_3->addWidget(rbProjectFiles);


        verticalLayout_2->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(grpEnableAutoSave);
        groupBox_3->setObjectName("groupBox_3");
        verticalLayout_4 = new QVBoxLayout(groupBox_3);
        verticalLayout_4->setObjectName("verticalLayout_4");
        rbOverwrite = new QRadioButton(groupBox_3);
        rbOverwrite->setObjectName("rbOverwrite");

        verticalLayout_4->addWidget(rbOverwrite);

        rbAppendUNIXTimestamp = new QRadioButton(groupBox_3);
        rbAppendUNIXTimestamp->setObjectName("rbAppendUNIXTimestamp");

        verticalLayout_4->addWidget(rbAppendUNIXTimestamp);

        rbAppendFormattedTimestamp = new QRadioButton(groupBox_3);
        rbAppendFormattedTimestamp->setObjectName("rbAppendFormattedTimestamp");

        verticalLayout_4->addWidget(rbAppendFormattedTimestamp);


        verticalLayout_2->addWidget(groupBox_3);

        lblFilename = new QLabel(grpEnableAutoSave);
        lblFilename->setObjectName("lblFilename");

        verticalLayout_2->addWidget(lblFilename);


        verticalLayout->addWidget(grpEnableAutoSave);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(EditorAutoSaveWidget);

        QMetaObject::connectSlotsByName(EditorAutoSaveWidget);
    } // setupUi

    void retranslateUi(QWidget *EditorAutoSaveWidget)
    {
        EditorAutoSaveWidget->setWindowTitle(QCoreApplication::translate("EditorAutoSaveWidget", "Form", nullptr));
        chkAutoBackupEditContents->setText(QCoreApplication::translate("EditorAutoSaveWidget", "Auto backup editing contents", nullptr));
        grpEnableAutoSave->setTitle(QCoreApplication::translate("EditorAutoSaveWidget", "Enable auto save", nullptr));
        label->setText(QCoreApplication::translate("EditorAutoSaveWidget", "Time interval:", nullptr));
        spinInterval->setSuffix(QCoreApplication::translate("EditorAutoSaveWidget", "minutes", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("EditorAutoSaveWidget", "Objects to save", nullptr));
        rbCurrentFile->setText(QCoreApplication::translate("EditorAutoSaveWidget", "Current File", nullptr));
        rbAllOpennedFiles->setText(QCoreApplication::translate("EditorAutoSaveWidget", "All files opened", nullptr));
        rbProjectFiles->setText(QCoreApplication::translate("EditorAutoSaveWidget", "Project files", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("EditorAutoSaveWidget", "Save strategy", nullptr));
        rbOverwrite->setText(QCoreApplication::translate("EditorAutoSaveWidget", "Overwrite", nullptr));
        rbAppendUNIXTimestamp->setText(QCoreApplication::translate("EditorAutoSaveWidget", "Append UNIX timestamp", nullptr));
        rbAppendFormattedTimestamp->setText(QCoreApplication::translate("EditorAutoSaveWidget", "Append formatted timestamp", nullptr));
        lblFilename->setText(QCoreApplication::translate("EditorAutoSaveWidget", "Demo file name:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditorAutoSaveWidget: public Ui_EditorAutoSaveWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITORAUTOSAVEWIDGET_H
