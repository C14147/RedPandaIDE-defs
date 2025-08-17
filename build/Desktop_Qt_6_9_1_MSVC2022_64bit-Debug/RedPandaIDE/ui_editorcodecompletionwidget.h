/********************************************************************************
** Form generated from reading UI file 'editorcodecompletionwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITORCODECOMPLETIONWIDGET_H
#define UI_EDITORCODECOMPLETIONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditorCodeCompletionWidget
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *grpEnabled;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSpinBox *spinMinCharRequired;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *chkEditorShareCodeParser;
    QCheckBox *chkClearWhenEditorHidden;
    QCheckBox *chkShowSuggestionWhileTyping;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *chkParseLocalFiles;
    QCheckBox *chkParseSystemFiles;
    QCheckBox *chkShowKeywords;
    QCheckBox *chkShowCodeIns;
    QCheckBox *chkAppendFunc;
    QCheckBox *chkIgnoreCases;
    QCheckBox *chkSortByScope;
    QCheckBox *chkHideSymbolsStartWithUnderline;
    QCheckBox *chkHideSymbolsStartWithTwoUnderline;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QCheckBox *chkRecordUsage;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnClearUsageData;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QSpinBox *spinWidth;
    QLabel *label_2;
    QSpinBox *spinHeight;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *EditorCodeCompletionWidget)
    {
        if (EditorCodeCompletionWidget->objectName().isEmpty())
            EditorCodeCompletionWidget->setObjectName("EditorCodeCompletionWidget");
        EditorCodeCompletionWidget->resize(599, 646);
        verticalLayout = new QVBoxLayout(EditorCodeCompletionWidget);
        verticalLayout->setObjectName("verticalLayout");
        grpEnabled = new QGroupBox(EditorCodeCompletionWidget);
        grpEnabled->setObjectName("grpEnabled");
        grpEnabled->setFlat(false);
        grpEnabled->setCheckable(true);
        verticalLayout_3 = new QVBoxLayout(grpEnabled);
        verticalLayout_3->setObjectName("verticalLayout_3");
        widget_3 = new QWidget(grpEnabled);
        widget_3->setObjectName("widget_3");
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget_3);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        spinMinCharRequired = new QSpinBox(widget_3);
        spinMinCharRequired->setObjectName("spinMinCharRequired");
        spinMinCharRequired->setMinimum(1);
        spinMinCharRequired->setMaximum(20);

        horizontalLayout_2->addWidget(spinMinCharRequired);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout_3->addWidget(widget_3);

        chkEditorShareCodeParser = new QCheckBox(grpEnabled);
        chkEditorShareCodeParser->setObjectName("chkEditorShareCodeParser");

        verticalLayout_3->addWidget(chkEditorShareCodeParser);

        chkClearWhenEditorHidden = new QCheckBox(grpEnabled);
        chkClearWhenEditorHidden->setObjectName("chkClearWhenEditorHidden");

        verticalLayout_3->addWidget(chkClearWhenEditorHidden);

        chkShowSuggestionWhileTyping = new QCheckBox(grpEnabled);
        chkShowSuggestionWhileTyping->setObjectName("chkShowSuggestionWhileTyping");

        verticalLayout_3->addWidget(chkShowSuggestionWhileTyping);

        groupBox = new QGroupBox(grpEnabled);
        groupBox->setObjectName("groupBox");
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        chkParseLocalFiles = new QCheckBox(groupBox);
        chkParseLocalFiles->setObjectName("chkParseLocalFiles");

        verticalLayout_2->addWidget(chkParseLocalFiles);

        chkParseSystemFiles = new QCheckBox(groupBox);
        chkParseSystemFiles->setObjectName("chkParseSystemFiles");

        verticalLayout_2->addWidget(chkParseSystemFiles);


        verticalLayout_3->addWidget(groupBox);

        chkShowKeywords = new QCheckBox(grpEnabled);
        chkShowKeywords->setObjectName("chkShowKeywords");

        verticalLayout_3->addWidget(chkShowKeywords);

        chkShowCodeIns = new QCheckBox(grpEnabled);
        chkShowCodeIns->setObjectName("chkShowCodeIns");

        verticalLayout_3->addWidget(chkShowCodeIns);

        chkAppendFunc = new QCheckBox(grpEnabled);
        chkAppendFunc->setObjectName("chkAppendFunc");

        verticalLayout_3->addWidget(chkAppendFunc);

        chkIgnoreCases = new QCheckBox(grpEnabled);
        chkIgnoreCases->setObjectName("chkIgnoreCases");

        verticalLayout_3->addWidget(chkIgnoreCases);

        chkSortByScope = new QCheckBox(grpEnabled);
        chkSortByScope->setObjectName("chkSortByScope");

        verticalLayout_3->addWidget(chkSortByScope);

        chkHideSymbolsStartWithUnderline = new QCheckBox(grpEnabled);
        chkHideSymbolsStartWithUnderline->setObjectName("chkHideSymbolsStartWithUnderline");

        verticalLayout_3->addWidget(chkHideSymbolsStartWithUnderline);

        chkHideSymbolsStartWithTwoUnderline = new QCheckBox(grpEnabled);
        chkHideSymbolsStartWithTwoUnderline->setObjectName("chkHideSymbolsStartWithTwoUnderline");

        verticalLayout_3->addWidget(chkHideSymbolsStartWithTwoUnderline);

        widget = new QWidget(grpEnabled);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        chkRecordUsage = new QCheckBox(widget);
        chkRecordUsage->setObjectName("chkRecordUsage");

        horizontalLayout->addWidget(chkRecordUsage);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnClearUsageData = new QPushButton(widget);
        btnClearUsageData->setObjectName("btnClearUsageData");

        horizontalLayout->addWidget(btnClearUsageData);


        verticalLayout_3->addWidget(widget);

        widget_2 = new QWidget(grpEnabled);
        widget_2->setObjectName("widget_2");
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget_2);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        spinWidth = new QSpinBox(widget_2);
        spinWidth->setObjectName("spinWidth");
        spinWidth->setMinimum(5);
        spinWidth->setMaximum(999);

        gridLayout->addWidget(spinWidth, 0, 1, 1, 1);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        spinHeight = new QSpinBox(widget_2);
        spinHeight->setObjectName("spinHeight");
        spinHeight->setMinimum(1);
        spinHeight->setMaximum(999);

        gridLayout->addWidget(spinHeight, 1, 1, 1, 1);


        verticalLayout_3->addWidget(widget_2);


        verticalLayout->addWidget(grpEnabled);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        QWidget::setTabOrder(grpEnabled, spinMinCharRequired);
        QWidget::setTabOrder(spinMinCharRequired, chkEditorShareCodeParser);
        QWidget::setTabOrder(chkEditorShareCodeParser, chkClearWhenEditorHidden);
        QWidget::setTabOrder(chkClearWhenEditorHidden, chkShowSuggestionWhileTyping);
        QWidget::setTabOrder(chkShowSuggestionWhileTyping, chkParseLocalFiles);
        QWidget::setTabOrder(chkParseLocalFiles, chkParseSystemFiles);
        QWidget::setTabOrder(chkParseSystemFiles, chkShowKeywords);
        QWidget::setTabOrder(chkShowKeywords, chkShowCodeIns);
        QWidget::setTabOrder(chkShowCodeIns, chkAppendFunc);
        QWidget::setTabOrder(chkAppendFunc, chkIgnoreCases);
        QWidget::setTabOrder(chkIgnoreCases, chkSortByScope);
        QWidget::setTabOrder(chkSortByScope, chkHideSymbolsStartWithUnderline);
        QWidget::setTabOrder(chkHideSymbolsStartWithUnderline, chkHideSymbolsStartWithTwoUnderline);
        QWidget::setTabOrder(chkHideSymbolsStartWithTwoUnderline, chkRecordUsage);
        QWidget::setTabOrder(chkRecordUsage, btnClearUsageData);
        QWidget::setTabOrder(btnClearUsageData, spinWidth);
        QWidget::setTabOrder(spinWidth, spinHeight);

        retranslateUi(EditorCodeCompletionWidget);

        QMetaObject::connectSlotsByName(EditorCodeCompletionWidget);
    } // setupUi

    void retranslateUi(QWidget *EditorCodeCompletionWidget)
    {
        EditorCodeCompletionWidget->setWindowTitle(QCoreApplication::translate("EditorCodeCompletionWidget", "Form", nullptr));
        grpEnabled->setTitle(QCoreApplication::translate("EditorCodeCompletionWidget", "Enable code competion", nullptr));
        label_3->setText(QCoreApplication::translate("EditorCodeCompletionWidget", "Minimum id length to show completion ", nullptr));
        chkEditorShareCodeParser->setText(QCoreApplication::translate("EditorCodeCompletionWidget", "Editors share one code parser", nullptr));
        chkClearWhenEditorHidden->setText(QCoreApplication::translate("EditorCodeCompletionWidget", "Clear all parsed symbols when editor is hidden", nullptr));
        chkShowSuggestionWhileTyping->setText(QCoreApplication::translate("EditorCodeCompletionWidget", "Show completion suggestions while typing", nullptr));
        groupBox->setTitle(QCoreApplication::translate("EditorCodeCompletionWidget", "Engine options", nullptr));
        chkParseLocalFiles->setText(QCoreApplication::translate("EditorCodeCompletionWidget", "Scan local header files", nullptr));
        chkParseSystemFiles->setText(QCoreApplication::translate("EditorCodeCompletionWidget", "Scan system header files", nullptr));
        chkShowKeywords->setText(QCoreApplication::translate("EditorCodeCompletionWidget", "Show keywords in suggestions", nullptr));
        chkShowCodeIns->setText(QCoreApplication::translate("EditorCodeCompletionWidget", "Show code snippets in suggestions", nullptr));
        chkAppendFunc->setText(QCoreApplication::translate("EditorCodeCompletionWidget", "Append () when complete functions", nullptr));
        chkIgnoreCases->setText(QCoreApplication::translate("EditorCodeCompletionWidget", "Ignore case when search suggestions", nullptr));
        chkSortByScope->setText(QCoreApplication::translate("EditorCodeCompletionWidget", "Prefer local symbols", nullptr));
        chkHideSymbolsStartWithUnderline->setText(QCoreApplication::translate("EditorCodeCompletionWidget", "Hide symbols start with underscore", nullptr));
        chkHideSymbolsStartWithTwoUnderline->setText(QCoreApplication::translate("EditorCodeCompletionWidget", "Hide symbols start with two underscores", nullptr));
        chkRecordUsage->setText(QCoreApplication::translate("EditorCodeCompletionWidget", "Prefer symbols mostly used", nullptr));
        btnClearUsageData->setText(QCoreApplication::translate("EditorCodeCompletionWidget", "Clear usage data", nullptr));
        label->setText(QCoreApplication::translate("EditorCodeCompletionWidget", "Completion suggestion window width:", nullptr));
        label_2->setText(QCoreApplication::translate("EditorCodeCompletionWidget", "Completion suggestion window height:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditorCodeCompletionWidget: public Ui_EditorCodeCompletionWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITORCODECOMPLETIONWIDGET_H
