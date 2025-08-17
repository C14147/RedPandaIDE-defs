/********************************************************************************
** Form generated from reading UI file 'editormiscwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITORMISCWIDGET_H
#define UI_EDITORMISCWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditorMiscWidget
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *chkReadonlySystemHeaders;
    QCheckBox *chkLoadLastFiles;
    QCheckBox *chkParseTodos;
    QCheckBox *chkCreateFileAfterStartup;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QRadioButton *rbAutoReformat;
    QRadioButton *rbRemoveTrailingSpaces;
    QRadioButton *rbNone;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *chkAutoDetectFileEncoding;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout;
    QComboBox *cbEncoding;
    QComboBox *cbEncodingDetail;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *rbCFile;
    QRadioButton *rbCppFile;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *EditorMiscWidget)
    {
        if (EditorMiscWidget->objectName().isEmpty())
            EditorMiscWidget->setObjectName("EditorMiscWidget");
        EditorMiscWidget->resize(583, 528);
        verticalLayout = new QVBoxLayout(EditorMiscWidget);
        verticalLayout->setObjectName("verticalLayout");
        chkReadonlySystemHeaders = new QCheckBox(EditorMiscWidget);
        chkReadonlySystemHeaders->setObjectName("chkReadonlySystemHeaders");

        verticalLayout->addWidget(chkReadonlySystemHeaders);

        chkLoadLastFiles = new QCheckBox(EditorMiscWidget);
        chkLoadLastFiles->setObjectName("chkLoadLastFiles");

        verticalLayout->addWidget(chkLoadLastFiles);

        chkParseTodos = new QCheckBox(EditorMiscWidget);
        chkParseTodos->setObjectName("chkParseTodos");

        verticalLayout->addWidget(chkParseTodos);

        chkCreateFileAfterStartup = new QCheckBox(EditorMiscWidget);
        chkCreateFileAfterStartup->setObjectName("chkCreateFileAfterStartup");

        verticalLayout->addWidget(chkCreateFileAfterStartup);

        widget = new QWidget(EditorMiscWidget);
        widget->setObjectName("widget");
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);

        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(EditorMiscWidget);
        widget_2->setObjectName("widget_2");
        horizontalLayout_3 = new QHBoxLayout(widget_2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);

        verticalLayout->addWidget(widget_2);

        groupBox_3 = new QGroupBox(EditorMiscWidget);
        groupBox_3->setObjectName("groupBox_3");
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setObjectName("gridLayout_2");
        rbAutoReformat = new QRadioButton(groupBox_3);
        rbAutoReformat->setObjectName("rbAutoReformat");

        gridLayout_2->addWidget(rbAutoReformat, 0, 1, 1, 1);

        rbRemoveTrailingSpaces = new QRadioButton(groupBox_3);
        rbRemoveTrailingSpaces->setObjectName("rbRemoveTrailingSpaces");

        gridLayout_2->addWidget(rbRemoveTrailingSpaces, 0, 2, 1, 1);

        rbNone = new QRadioButton(groupBox_3);
        rbNone->setObjectName("rbNone");

        gridLayout_2->addWidget(rbNone, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 3, 1, 1);


        verticalLayout->addWidget(groupBox_3);

        chkAutoDetectFileEncoding = new QCheckBox(EditorMiscWidget);
        chkAutoDetectFileEncoding->setObjectName("chkAutoDetectFileEncoding");

        verticalLayout->addWidget(chkAutoDetectFileEncoding);

        groupBox_2 = new QGroupBox(EditorMiscWidget);
        groupBox_2->setObjectName("groupBox_2");
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setObjectName("horizontalLayout");
        cbEncoding = new QComboBox(groupBox_2);
        cbEncoding->setObjectName("cbEncoding");

        horizontalLayout->addWidget(cbEncoding);

        cbEncodingDetail = new QComboBox(groupBox_2);
        cbEncodingDetail->setObjectName("cbEncodingDetail");

        horizontalLayout->addWidget(cbEncodingDetail);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(groupBox_2);

        groupBox = new QGroupBox(EditorMiscWidget);
        groupBox->setObjectName("groupBox");
        horizontalLayout_4 = new QHBoxLayout(groupBox);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        rbCFile = new QRadioButton(groupBox);
        rbCFile->setObjectName("rbCFile");

        horizontalLayout_4->addWidget(rbCFile);

        rbCppFile = new QRadioButton(groupBox);
        rbCppFile->setObjectName("rbCppFile");

        horizontalLayout_4->addWidget(rbCppFile);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 117, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QWidget::setTabOrder(chkReadonlySystemHeaders, chkLoadLastFiles);
        QWidget::setTabOrder(chkLoadLastFiles, chkParseTodos);
        QWidget::setTabOrder(chkParseTodos, rbNone);
        QWidget::setTabOrder(rbNone, rbAutoReformat);
        QWidget::setTabOrder(rbAutoReformat, rbRemoveTrailingSpaces);
        QWidget::setTabOrder(rbRemoveTrailingSpaces, chkAutoDetectFileEncoding);
        QWidget::setTabOrder(chkAutoDetectFileEncoding, cbEncoding);
        QWidget::setTabOrder(cbEncoding, cbEncodingDetail);
        QWidget::setTabOrder(cbEncodingDetail, rbCFile);
        QWidget::setTabOrder(rbCFile, rbCppFile);

        retranslateUi(EditorMiscWidget);

        QMetaObject::connectSlotsByName(EditorMiscWidget);
    } // setupUi

    void retranslateUi(QWidget *EditorMiscWidget)
    {
        EditorMiscWidget->setWindowTitle(QCoreApplication::translate("EditorMiscWidget", "Form", nullptr));
        chkReadonlySystemHeaders->setText(QCoreApplication::translate("EditorMiscWidget", "Open system header files in read only mode", nullptr));
        chkLoadLastFiles->setText(QCoreApplication::translate("EditorMiscWidget", "Auto load files being open when RedPandaIDE last exited.", nullptr));
        chkParseTodos->setText(QCoreApplication::translate("EditorMiscWidget", "Parse TODOs", nullptr));
        chkCreateFileAfterStartup->setText(QCoreApplication::translate("EditorMiscWidget", "Create a new file after startup", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("EditorMiscWidget", "Action before saving files", nullptr));
        rbAutoReformat->setText(QCoreApplication::translate("EditorMiscWidget", "Reformat", nullptr));
        rbRemoveTrailingSpaces->setText(QCoreApplication::translate("EditorMiscWidget", "Trim trailing spaces", nullptr));
        rbNone->setText(QCoreApplication::translate("EditorMiscWidget", "None", nullptr));
        chkAutoDetectFileEncoding->setText(QCoreApplication::translate("EditorMiscWidget", "Auto detect encoding when openning files", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("EditorMiscWidget", "Default file encoding", nullptr));
        groupBox->setTitle(QCoreApplication::translate("EditorMiscWidget", "Default file type", nullptr));
        rbCFile->setText(QCoreApplication::translate("EditorMiscWidget", "C files", nullptr));
        rbCppFile->setText(QCoreApplication::translate("EditorMiscWidget", "C++ files", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditorMiscWidget: public Ui_EditorMiscWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITORMISCWIDGET_H
