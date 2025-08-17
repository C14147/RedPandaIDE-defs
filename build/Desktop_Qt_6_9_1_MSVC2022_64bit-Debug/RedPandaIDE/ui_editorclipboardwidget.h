/********************************************************************************
** Form generated from reading UI file 'editorclipboardwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITORCLIPBOARDWIDGET_H
#define UI_EDITORCLIPBOARDWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditorClipboardWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QComboBox *cbCopyWithFormatAs;
    QSpacerItem *horizontalSpacer_4;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *chkCopyHTMLUseBackground;
    QCheckBox *chkCopyHTMLUseEditorColor;
    QCheckBox *chkCopyHTMLWithLineNumber;
    QCheckBox *chkCopyHTMLRecalcLineNumber;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QComboBox *cbHTMLColorScheme;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *chkCopyRTFUseBackground;
    QCheckBox *chkCopyRTFUseEditorColor;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QComboBox *cbRTFColorScheme;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *EditorClipboardWidget)
    {
        if (EditorClipboardWidget->objectName().isEmpty())
            EditorClipboardWidget->setObjectName("EditorClipboardWidget");
        EditorClipboardWidget->resize(400, 520);
        verticalLayout = new QVBoxLayout(EditorClipboardWidget);
        verticalLayout->setObjectName("verticalLayout");
        widget_4 = new QWidget(EditorClipboardWidget);
        widget_4->setObjectName("widget_4");
        horizontalLayout_3 = new QHBoxLayout(widget_4);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widget_4);
        label_6->setObjectName("label_6");

        horizontalLayout_3->addWidget(label_6);

        cbCopyWithFormatAs = new QComboBox(widget_4);
        cbCopyWithFormatAs->setObjectName("cbCopyWithFormatAs");

        horizontalLayout_3->addWidget(cbCopyWithFormatAs);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout->addWidget(widget_4);

        groupBox_3 = new QGroupBox(EditorClipboardWidget);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setCheckable(false);
        verticalLayout_4 = new QVBoxLayout(groupBox_3);
        verticalLayout_4->setObjectName("verticalLayout_4");
        chkCopyHTMLUseBackground = new QCheckBox(groupBox_3);
        chkCopyHTMLUseBackground->setObjectName("chkCopyHTMLUseBackground");

        verticalLayout_4->addWidget(chkCopyHTMLUseBackground);

        chkCopyHTMLUseEditorColor = new QCheckBox(groupBox_3);
        chkCopyHTMLUseEditorColor->setObjectName("chkCopyHTMLUseEditorColor");

        verticalLayout_4->addWidget(chkCopyHTMLUseEditorColor);

        chkCopyHTMLWithLineNumber = new QCheckBox(groupBox_3);
        chkCopyHTMLWithLineNumber->setObjectName("chkCopyHTMLWithLineNumber");

        verticalLayout_4->addWidget(chkCopyHTMLWithLineNumber);

        chkCopyHTMLRecalcLineNumber = new QCheckBox(groupBox_3);
        chkCopyHTMLRecalcLineNumber->setObjectName("chkCopyHTMLRecalcLineNumber");

        verticalLayout_4->addWidget(chkCopyHTMLRecalcLineNumber);

        widget_3 = new QWidget(groupBox_3);
        widget_3->setObjectName("widget_3");
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget_3);
        label_5->setObjectName("label_5");

        horizontalLayout_2->addWidget(label_5);

        cbHTMLColorScheme = new QComboBox(widget_3);
        cbHTMLColorScheme->setObjectName("cbHTMLColorScheme");

        horizontalLayout_2->addWidget(cbHTMLColorScheme);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout_4->addWidget(widget_3);


        verticalLayout->addWidget(groupBox_3);

        groupBox_2 = new QGroupBox(EditorClipboardWidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setCheckable(false);
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        chkCopyRTFUseBackground = new QCheckBox(groupBox_2);
        chkCopyRTFUseBackground->setObjectName("chkCopyRTFUseBackground");

        verticalLayout_2->addWidget(chkCopyRTFUseBackground);

        chkCopyRTFUseEditorColor = new QCheckBox(groupBox_2);
        chkCopyRTFUseEditorColor->setObjectName("chkCopyRTFUseEditorColor");

        verticalLayout_2->addWidget(chkCopyRTFUseEditorColor);

        widget_2 = new QWidget(groupBox_2);
        widget_2->setObjectName("widget_2");
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget_2);
        label_4->setObjectName("label_4");

        horizontalLayout->addWidget(label_4);

        cbRTFColorScheme = new QComboBox(widget_2);
        cbRTFColorScheme->setObjectName("cbRTFColorScheme");

        horizontalLayout->addWidget(cbRTFColorScheme);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addWidget(widget_2);


        verticalLayout->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QWidget::setTabOrder(cbCopyWithFormatAs, chkCopyHTMLUseBackground);
        QWidget::setTabOrder(chkCopyHTMLUseBackground, chkCopyHTMLUseEditorColor);
        QWidget::setTabOrder(chkCopyHTMLUseEditorColor, cbHTMLColorScheme);
        QWidget::setTabOrder(cbHTMLColorScheme, chkCopyRTFUseBackground);
        QWidget::setTabOrder(chkCopyRTFUseBackground, chkCopyRTFUseEditorColor);
        QWidget::setTabOrder(chkCopyRTFUseEditorColor, cbRTFColorScheme);

        retranslateUi(EditorClipboardWidget);

        QMetaObject::connectSlotsByName(EditorClipboardWidget);
    } // setupUi

    void retranslateUi(QWidget *EditorClipboardWidget)
    {
        EditorClipboardWidget->setWindowTitle(QCoreApplication::translate("EditorClipboardWidget", "Form", nullptr));
        label_6->setText(QCoreApplication::translate("EditorClipboardWidget", "Copy with format as", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("EditorClipboardWidget", "Copy && Export As HTML", nullptr));
        chkCopyHTMLUseBackground->setText(QCoreApplication::translate("EditorClipboardWidget", "Use background color", nullptr));
        chkCopyHTMLUseEditorColor->setText(QCoreApplication::translate("EditorClipboardWidget", "Use editor's color scheme", nullptr));
        chkCopyHTMLWithLineNumber->setText(QCoreApplication::translate("EditorClipboardWidget", "Copy with line number", nullptr));
        chkCopyHTMLRecalcLineNumber->setText(QCoreApplication::translate("EditorClipboardWidget", "Recalc line number", nullptr));
        label_5->setText(QCoreApplication::translate("EditorClipboardWidget", "Color scheme", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("EditorClipboardWidget", "Export As RTF", nullptr));
        chkCopyRTFUseBackground->setText(QCoreApplication::translate("EditorClipboardWidget", "Use background color", nullptr));
        chkCopyRTFUseEditorColor->setText(QCoreApplication::translate("EditorClipboardWidget", "Use editor's color scheme", nullptr));
        label_4->setText(QCoreApplication::translate("EditorClipboardWidget", "Color scheme", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditorClipboardWidget: public Ui_EditorClipboardWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITORCLIPBOARDWIDGET_H
