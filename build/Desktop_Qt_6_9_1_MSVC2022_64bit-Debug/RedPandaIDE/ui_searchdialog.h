/********************************************************************************
** Form generated from reading UI file 'searchdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHDIALOG_H
#define UI_SEARCHDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchDialog
{
public:
    QVBoxLayout *dialogLayout;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_4;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QLabel *lblFind;
    QComboBox *cbFind;
    QComboBox *cbReplace;
    QLabel *lbReplace;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QGroupBox *grpScope;
    QVBoxLayout *verticalLayout_5;
    QRadioButton *rbGlobal;
    QRadioButton *rbSelection;
    QGroupBox *grpOrigin;
    QVBoxLayout *verticalLayout_6;
    QRadioButton *rbFromCaret;
    QRadioButton *rbEntireScope;
    QGroupBox *grpOptions;
    QGridLayout *gridLayout_2;
    QLabel *txtRegExpHelp;
    QCheckBox *chkRegExp;
    QCheckBox *chkCloseAfterSearch;
    QCheckBox *chkWholeWord;
    QCheckBox *chkCaseSensetive;
    QCheckBox *chkWrapAround;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_3;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout;
    QPushButton *btnPrevious;
    QPushButton *btnNext;
    QPushButton *btnReplace;
    QPushButton *btnReplaceAll;
    QSpacerItem *verticalSpacer_2;
    QPushButton *btnClose;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *SearchDialog)
    {
        if (SearchDialog->objectName().isEmpty())
            SearchDialog->setObjectName("SearchDialog");
        SearchDialog->resize(609, 297);
        dialogLayout = new QVBoxLayout(SearchDialog);
        dialogLayout->setObjectName("dialogLayout");
        dialogLayout->setContentsMargins(0, 0, 0, 0);
        widget_5 = new QWidget(SearchDialog);
        widget_5->setObjectName("widget_5");
        horizontalLayout_4 = new QHBoxLayout(widget_5);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(5, 5, 5, 5);
        widget_4 = new QWidget(widget_5);
        widget_4->setObjectName("widget_4");
        verticalLayout_2 = new QVBoxLayout(widget_4);
        verticalLayout_2->setSpacing(7);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(widget_4);
        widget->setObjectName("widget");
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        lblFind = new QLabel(widget);
        lblFind->setObjectName("lblFind");

        gridLayout_3->addWidget(lblFind, 0, 0, 1, 1);

        cbFind = new QComboBox(widget);
        cbFind->setObjectName("cbFind");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cbFind->sizePolicy().hasHeightForWidth());
        cbFind->setSizePolicy(sizePolicy);
        cbFind->setEditable(true);
        cbFind->setInsertPolicy(QComboBox::InsertAtTop);

        gridLayout_3->addWidget(cbFind, 0, 1, 1, 1);

        cbReplace = new QComboBox(widget);
        cbReplace->setObjectName("cbReplace");
        sizePolicy.setHeightForWidth(cbReplace->sizePolicy().hasHeightForWidth());
        cbReplace->setSizePolicy(sizePolicy);
        cbReplace->setEditable(true);
        cbReplace->setInsertPolicy(QComboBox::InsertAtTop);
        cbReplace->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);

        gridLayout_3->addWidget(cbReplace, 1, 1, 1, 1);

        lbReplace = new QLabel(widget);
        lbReplace->setObjectName("lbReplace");

        gridLayout_3->addWidget(lbReplace, 1, 0, 1, 1);


        verticalLayout_2->addWidget(widget);

        widget_2 = new QWidget(widget_4);
        widget_2->setObjectName("widget_2");
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        grpScope = new QGroupBox(widget_2);
        grpScope->setObjectName("grpScope");
        verticalLayout_5 = new QVBoxLayout(grpScope);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(7, 7, 7, 7);
        rbGlobal = new QRadioButton(grpScope);
        rbGlobal->setObjectName("rbGlobal");
        rbGlobal->setChecked(true);

        verticalLayout_5->addWidget(rbGlobal);

        rbSelection = new QRadioButton(grpScope);
        rbSelection->setObjectName("rbSelection");

        verticalLayout_5->addWidget(rbSelection);


        gridLayout->addWidget(grpScope, 1, 1, 1, 1);

        grpOrigin = new QGroupBox(widget_2);
        grpOrigin->setObjectName("grpOrigin");
        verticalLayout_6 = new QVBoxLayout(grpOrigin);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(7, 7, 7, 7);
        rbFromCaret = new QRadioButton(grpOrigin);
        rbFromCaret->setObjectName("rbFromCaret");
        rbFromCaret->setChecked(true);

        verticalLayout_6->addWidget(rbFromCaret);

        rbEntireScope = new QRadioButton(grpOrigin);
        rbEntireScope->setObjectName("rbEntireScope");

        verticalLayout_6->addWidget(rbEntireScope);


        gridLayout->addWidget(grpOrigin, 0, 1, 1, 1);

        grpOptions = new QGroupBox(widget_2);
        grpOptions->setObjectName("grpOptions");
        gridLayout_2 = new QGridLayout(grpOptions);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(7, 7, 7, 7);
        txtRegExpHelp = new QLabel(grpOptions);
        txtRegExpHelp->setObjectName("txtRegExpHelp");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(txtRegExpHelp->sizePolicy().hasHeightForWidth());
        txtRegExpHelp->setSizePolicy(sizePolicy1);
        txtRegExpHelp->setText(QString::fromUtf8("<html><head/><body><p><a href=\"https://docs.microsoft.com/en-us/dotnet/standard/base-types/regular-expression-language-quick-reference\"><span style=\" text-decoration: underline; color:#0000ff;\">(?)</span></a></p></body></html>"));
        txtRegExpHelp->setOpenExternalLinks(true);

        gridLayout_2->addWidget(txtRegExpHelp, 2, 1, 1, 1);

        chkRegExp = new QCheckBox(grpOptions);
        chkRegExp->setObjectName("chkRegExp");
        sizePolicy.setHeightForWidth(chkRegExp->sizePolicy().hasHeightForWidth());
        chkRegExp->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(chkRegExp, 2, 0, 1, 1);

        chkCloseAfterSearch = new QCheckBox(grpOptions);
        chkCloseAfterSearch->setObjectName("chkCloseAfterSearch");

        gridLayout_2->addWidget(chkCloseAfterSearch, 4, 0, 1, 1);

        chkWholeWord = new QCheckBox(grpOptions);
        chkWholeWord->setObjectName("chkWholeWord");

        gridLayout_2->addWidget(chkWholeWord, 1, 0, 1, 1);

        chkCaseSensetive = new QCheckBox(grpOptions);
        chkCaseSensetive->setObjectName("chkCaseSensetive");

        gridLayout_2->addWidget(chkCaseSensetive, 0, 0, 1, 1);

        chkWrapAround = new QCheckBox(grpOptions);
        chkWrapAround->setObjectName("chkWrapAround");
        chkWrapAround->setChecked(true);

        gridLayout_2->addWidget(chkWrapAround, 3, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(verticalSpacer_4, 5, 0, 1, 1);


        gridLayout->addWidget(grpOptions, 0, 0, 2, 1);


        verticalLayout_2->addWidget(widget_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);


        horizontalLayout_4->addWidget(widget_4);

        widget_3 = new QWidget(widget_5);
        widget_3->setObjectName("widget_3");
        verticalLayout = new QVBoxLayout(widget_3);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btnPrevious = new QPushButton(widget_3);
        btnPrevious->setObjectName("btnPrevious");
        btnPrevious->setAutoDefault(false);

        verticalLayout->addWidget(btnPrevious);

        btnNext = new QPushButton(widget_3);
        btnNext->setObjectName("btnNext");
        btnNext->setAutoDefault(false);

        verticalLayout->addWidget(btnNext);

        btnReplace = new QPushButton(widget_3);
        btnReplace->setObjectName("btnReplace");
        btnReplace->setAutoDefault(false);

        verticalLayout->addWidget(btnReplace);

        btnReplaceAll = new QPushButton(widget_3);
        btnReplaceAll->setObjectName("btnReplaceAll");
        btnReplaceAll->setAutoDefault(false);

        verticalLayout->addWidget(btnReplaceAll);

        verticalSpacer_2 = new QSpacerItem(20, 15, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        btnClose = new QPushButton(widget_3);
        btnClose->setObjectName("btnClose");
        btnClose->setAutoDefault(false);

        verticalLayout->addWidget(btnClose);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_4->addWidget(widget_3);


        dialogLayout->addWidget(widget_5);

        QWidget::setTabOrder(btnPrevious, btnNext);
        QWidget::setTabOrder(btnNext, btnReplace);
        QWidget::setTabOrder(btnReplace, btnReplaceAll);
        QWidget::setTabOrder(btnReplaceAll, btnClose);
        QWidget::setTabOrder(btnClose, cbFind);
        QWidget::setTabOrder(cbFind, cbReplace);
        QWidget::setTabOrder(cbReplace, chkCaseSensetive);
        QWidget::setTabOrder(chkCaseSensetive, chkWholeWord);
        QWidget::setTabOrder(chkWholeWord, chkRegExp);
        QWidget::setTabOrder(chkRegExp, chkWrapAround);
        QWidget::setTabOrder(chkWrapAround, chkCloseAfterSearch);
        QWidget::setTabOrder(chkCloseAfterSearch, rbFromCaret);
        QWidget::setTabOrder(rbFromCaret, rbEntireScope);
        QWidget::setTabOrder(rbEntireScope, rbGlobal);
        QWidget::setTabOrder(rbGlobal, rbSelection);

        retranslateUi(SearchDialog);

        btnNext->setDefault(true);


        QMetaObject::connectSlotsByName(SearchDialog);
    } // setupUi

    void retranslateUi(QDialog *SearchDialog)
    {
        SearchDialog->setWindowTitle(QCoreApplication::translate("SearchDialog", "Find", nullptr));
        lblFind->setText(QCoreApplication::translate("SearchDialog", "Text to Find:", nullptr));
        lbReplace->setText(QCoreApplication::translate("SearchDialog", "Replace with:", nullptr));
        grpScope->setTitle(QCoreApplication::translate("SearchDialog", "Scope:", nullptr));
        rbGlobal->setText(QCoreApplication::translate("SearchDialog", "Global", nullptr));
        rbSelection->setText(QCoreApplication::translate("SearchDialog", "Selection", nullptr));
        grpOrigin->setTitle(QCoreApplication::translate("SearchDialog", "Origin:", nullptr));
        rbFromCaret->setText(QCoreApplication::translate("SearchDialog", "From caret", nullptr));
        rbEntireScope->setText(QCoreApplication::translate("SearchDialog", "Entire scope", nullptr));
        grpOptions->setTitle(QCoreApplication::translate("SearchDialog", "Options:", nullptr));
        chkRegExp->setText(QCoreApplication::translate("SearchDialog", "Regular Expression", nullptr));
        chkCloseAfterSearch->setText(QCoreApplication::translate("SearchDialog", "Close after search", nullptr));
        chkWholeWord->setText(QCoreApplication::translate("SearchDialog", "Whole words only", nullptr));
        chkCaseSensetive->setText(QCoreApplication::translate("SearchDialog", "Case Sensitive", nullptr));
        chkWrapAround->setText(QCoreApplication::translate("SearchDialog", "Wrap Around", nullptr));
        btnPrevious->setText(QCoreApplication::translate("SearchDialog", "Find &Previous", nullptr));
        btnNext->setText(QCoreApplication::translate("SearchDialog", "Find &Next", nullptr));
        btnReplace->setText(QCoreApplication::translate("SearchDialog", "&Replace", nullptr));
        btnReplaceAll->setText(QCoreApplication::translate("SearchDialog", "Replace &All", nullptr));
        btnClose->setText(QCoreApplication::translate("SearchDialog", "&Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchDialog: public Ui_SearchDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHDIALOG_H
