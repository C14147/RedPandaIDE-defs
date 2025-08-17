/********************************************************************************
** Form generated from reading UI file 'editorsymbolcompletionwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITORSYMBOLCOMPLETIONWIDGET_H
#define UI_EDITORSYMBOLCOMPLETIONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditorSymbolCompletionWidget
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QGroupBox *grpCompleSymbols;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *chkCompleteBrace;
    QCheckBox *chkCompleteBracket;
    QCheckBox *chkCompleteParenthesis;
    QCheckBox *chkCompleteComments;
    QCheckBox *chkCompleteSingleQuotation;
    QCheckBox *chkCompleteDoubleQuotation;
    QCheckBox *chkCompleteGlobalInclude;
    QCheckBox *chkSkipMathingSymbols;
    QCheckBox *chkRemoveSymbolPairs;

    void setupUi(QWidget *EditorSymbolCompletionWidget)
    {
        if (EditorSymbolCompletionWidget->objectName().isEmpty())
            EditorSymbolCompletionWidget->setObjectName("EditorSymbolCompletionWidget");
        EditorSymbolCompletionWidget->resize(606, 413);
        gridLayout = new QGridLayout(EditorSymbolCompletionWidget);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);

        grpCompleSymbols = new QGroupBox(EditorSymbolCompletionWidget);
        grpCompleSymbols->setObjectName("grpCompleSymbols");
        grpCompleSymbols->setFlat(true);
        grpCompleSymbols->setCheckable(true);
        horizontalLayout = new QHBoxLayout(grpCompleSymbols);
        horizontalLayout->setObjectName("horizontalLayout");
        widget = new QWidget(grpCompleSymbols);
        widget->setObjectName("widget");
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        chkCompleteBrace = new QCheckBox(groupBox);
        chkCompleteBrace->setObjectName("chkCompleteBrace");

        verticalLayout->addWidget(chkCompleteBrace);

        chkCompleteBracket = new QCheckBox(groupBox);
        chkCompleteBracket->setObjectName("chkCompleteBracket");

        verticalLayout->addWidget(chkCompleteBracket);

        chkCompleteParenthesis = new QCheckBox(groupBox);
        chkCompleteParenthesis->setObjectName("chkCompleteParenthesis");

        verticalLayout->addWidget(chkCompleteParenthesis);

        chkCompleteComments = new QCheckBox(groupBox);
        chkCompleteComments->setObjectName("chkCompleteComments");

        verticalLayout->addWidget(chkCompleteComments);

        chkCompleteSingleQuotation = new QCheckBox(groupBox);
        chkCompleteSingleQuotation->setObjectName("chkCompleteSingleQuotation");

        verticalLayout->addWidget(chkCompleteSingleQuotation);

        chkCompleteDoubleQuotation = new QCheckBox(groupBox);
        chkCompleteDoubleQuotation->setObjectName("chkCompleteDoubleQuotation");

        verticalLayout->addWidget(chkCompleteDoubleQuotation);

        chkCompleteGlobalInclude = new QCheckBox(groupBox);
        chkCompleteGlobalInclude->setObjectName("chkCompleteGlobalInclude");

        verticalLayout->addWidget(chkCompleteGlobalInclude);


        verticalLayout_3->addWidget(groupBox);

        chkSkipMathingSymbols = new QCheckBox(widget);
        chkSkipMathingSymbols->setObjectName("chkSkipMathingSymbols");

        verticalLayout_3->addWidget(chkSkipMathingSymbols);


        horizontalLayout->addWidget(widget);


        gridLayout->addWidget(grpCompleSymbols, 0, 0, 1, 1);

        chkRemoveSymbolPairs = new QCheckBox(EditorSymbolCompletionWidget);
        chkRemoveSymbolPairs->setObjectName("chkRemoveSymbolPairs");

        gridLayout->addWidget(chkRemoveSymbolPairs, 2, 0, 1, 1);

        QWidget::setTabOrder(grpCompleSymbols, chkCompleteBrace);
        QWidget::setTabOrder(chkCompleteBrace, chkCompleteBracket);
        QWidget::setTabOrder(chkCompleteBracket, chkCompleteParenthesis);
        QWidget::setTabOrder(chkCompleteParenthesis, chkCompleteComments);
        QWidget::setTabOrder(chkCompleteComments, chkCompleteSingleQuotation);
        QWidget::setTabOrder(chkCompleteSingleQuotation, chkCompleteDoubleQuotation);
        QWidget::setTabOrder(chkCompleteDoubleQuotation, chkCompleteGlobalInclude);
        QWidget::setTabOrder(chkCompleteGlobalInclude, chkSkipMathingSymbols);
        QWidget::setTabOrder(chkSkipMathingSymbols, chkRemoveSymbolPairs);

        retranslateUi(EditorSymbolCompletionWidget);

        QMetaObject::connectSlotsByName(EditorSymbolCompletionWidget);
    } // setupUi

    void retranslateUi(QWidget *EditorSymbolCompletionWidget)
    {
        EditorSymbolCompletionWidget->setWindowTitle(QCoreApplication::translate("EditorSymbolCompletionWidget", "Form", nullptr));
        grpCompleSymbols->setTitle(QCoreApplication::translate("EditorSymbolCompletionWidget", "Complete Symbols", nullptr));
        groupBox->setTitle(QCoreApplication::translate("EditorSymbolCompletionWidget", "Details", nullptr));
        chkCompleteBrace->setText(QCoreApplication::translate("EditorSymbolCompletionWidget", "Complete Braces{}", nullptr));
        chkCompleteBracket->setText(QCoreApplication::translate("EditorSymbolCompletionWidget", "Complete Brackets []", nullptr));
        chkCompleteParenthesis->setText(QCoreApplication::translate("EditorSymbolCompletionWidget", "Complete Parenthesis ()", nullptr));
        chkCompleteComments->setText(QCoreApplication::translate("EditorSymbolCompletionWidget", "Complete Multiline Comments /**/", nullptr));
        chkCompleteSingleQuotation->setText(QCoreApplication::translate("EditorSymbolCompletionWidget", "Complete Single Quotations ''", nullptr));
        chkCompleteDoubleQuotation->setText(QCoreApplication::translate("EditorSymbolCompletionWidget", "Complete Double Quotations \"\"", nullptr));
        chkCompleteGlobalInclude->setText(QCoreApplication::translate("EditorSymbolCompletionWidget", "Complete #include <>", nullptr));
        chkSkipMathingSymbols->setText(QCoreApplication::translate("EditorSymbolCompletionWidget", "Skip matching symbols while typing", nullptr));
        chkRemoveSymbolPairs->setText(QCoreApplication::translate("EditorSymbolCompletionWidget", "Remove symbol pairs when delete chars", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditorSymbolCompletionWidget: public Ui_EditorSymbolCompletionWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITORSYMBOLCOMPLETIONWIDGET_H
