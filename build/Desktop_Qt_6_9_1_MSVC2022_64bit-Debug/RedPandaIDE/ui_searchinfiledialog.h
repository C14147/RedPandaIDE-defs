/********************************************************************************
** Form generated from reading UI file 'searchinfiledialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHINFILEDIALOG_H
#define UI_SEARCHINFILEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchInFileDialog
{
public:
    QVBoxLayout *dialogLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QLineEdit *txtFilters;
    QLabel *lblFind;
    QLabel *lblFilters;
    QToolButton *btnChangeFolder;
    QComboBox *cbFind;
    QLineEdit *txtFolder;
    QLabel *lblFolder;
    QCheckBox *cbSearchSubFolders;
    QWidget *widget_3;
    QGridLayout *gridLayout_2;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *grpWhere;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *rbCurrentFile;
    QRadioButton *rbProject;
    QRadioButton *rbOpenFiles;
    QRadioButton *rbFolder;
    QGroupBox *grpOptions;
    QGridLayout *gridLayout_3;
    QCheckBox *chkWholeWord;
    QCheckBox *chkCaseSensetive;
    QWidget *widget_31;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *chkRegExp;
    QLabel *txtRegExpHelp;
    QSpacerItem *verticalSpacer;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnExecute;
    QPushButton *btnReplace;
    QPushButton *btnCancel;

    void setupUi(QDialog *SearchInFileDialog)
    {
        if (SearchInFileDialog->objectName().isEmpty())
            SearchInFileDialog->setObjectName("SearchInFileDialog");
        SearchInFileDialog->resize(684, 548);
        dialogLayout = new QVBoxLayout(SearchInFileDialog);
        dialogLayout->setSpacing(0);
        dialogLayout->setObjectName("dialogLayout");
        dialogLayout->setContentsMargins(2, 2, 2, 2);
        frame = new QFrame(SearchInFileDialog);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName("verticalLayout_2");
        widget_2 = new QWidget(frame);
        widget_2->setObjectName("widget_2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        txtFilters = new QLineEdit(widget_2);
        txtFilters->setObjectName("txtFilters");

        gridLayout->addWidget(txtFilters, 1, 1, 1, 2);

        lblFind = new QLabel(widget_2);
        lblFind->setObjectName("lblFind");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblFind->sizePolicy().hasHeightForWidth());
        lblFind->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(lblFind, 0, 0, 1, 1);

        lblFilters = new QLabel(widget_2);
        lblFilters->setObjectName("lblFilters");

        gridLayout->addWidget(lblFilters, 1, 0, 1, 1);

        btnChangeFolder = new QToolButton(widget_2);
        btnChangeFolder->setObjectName("btnChangeFolder");

        gridLayout->addWidget(btnChangeFolder, 2, 2, 1, 1);

        cbFind = new QComboBox(widget_2);
        cbFind->setObjectName("cbFind");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(cbFind->sizePolicy().hasHeightForWidth());
        cbFind->setSizePolicy(sizePolicy2);
        cbFind->setEditable(true);
        cbFind->setInsertPolicy(QComboBox::InsertAtTop);

        gridLayout->addWidget(cbFind, 0, 1, 1, 2);

        txtFolder = new QLineEdit(widget_2);
        txtFolder->setObjectName("txtFolder");

        gridLayout->addWidget(txtFolder, 2, 1, 1, 1);

        lblFolder = new QLabel(widget_2);
        lblFolder->setObjectName("lblFolder");

        gridLayout->addWidget(lblFolder, 2, 0, 1, 1);

        cbSearchSubFolders = new QCheckBox(widget_2);
        cbSearchSubFolders->setObjectName("cbSearchSubFolders");
        cbSearchSubFolders->setChecked(true);

        gridLayout->addWidget(cbSearchSubFolders, 3, 0, 1, 3);


        verticalLayout_2->addWidget(widget_2);

        widget_3 = new QWidget(frame);
        widget_3->setObjectName("widget_3");
        gridLayout_2 = new QGridLayout(widget_3);
        gridLayout_2->setObjectName("gridLayout_2");
        widget_4 = new QWidget(widget_3);
        widget_4->setObjectName("widget_4");
        horizontalLayout_2 = new QHBoxLayout(widget_4);
        horizontalLayout_2->setSpacing(7);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        grpWhere = new QGroupBox(widget_4);
        grpWhere->setObjectName("grpWhere");
        verticalLayout_4 = new QVBoxLayout(grpWhere);
        verticalLayout_4->setObjectName("verticalLayout_4");
        rbCurrentFile = new QRadioButton(grpWhere);
        rbCurrentFile->setObjectName("rbCurrentFile");
        rbCurrentFile->setChecked(true);

        verticalLayout_4->addWidget(rbCurrentFile);

        rbProject = new QRadioButton(grpWhere);
        rbProject->setObjectName("rbProject");

        verticalLayout_4->addWidget(rbProject);

        rbOpenFiles = new QRadioButton(grpWhere);
        rbOpenFiles->setObjectName("rbOpenFiles");

        verticalLayout_4->addWidget(rbOpenFiles);

        rbFolder = new QRadioButton(grpWhere);
        rbFolder->setObjectName("rbFolder");

        verticalLayout_4->addWidget(rbFolder);


        horizontalLayout_2->addWidget(grpWhere);


        gridLayout_2->addWidget(widget_4, 0, 1, 1, 1);

        grpOptions = new QGroupBox(widget_3);
        grpOptions->setObjectName("grpOptions");
        gridLayout_3 = new QGridLayout(grpOptions);
        gridLayout_3->setObjectName("gridLayout_3");
        chkWholeWord = new QCheckBox(grpOptions);
        chkWholeWord->setObjectName("chkWholeWord");

        gridLayout_3->addWidget(chkWholeWord, 1, 0, 1, 1);

        chkCaseSensetive = new QCheckBox(grpOptions);
        chkCaseSensetive->setObjectName("chkCaseSensetive");

        gridLayout_3->addWidget(chkCaseSensetive, 0, 0, 1, 1);

        widget_31 = new QWidget(grpOptions);
        widget_31->setObjectName("widget_31");
        horizontalLayout_3 = new QHBoxLayout(widget_31);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);

        gridLayout_3->addWidget(widget_31, 3, 0, 1, 1);

        chkRegExp = new QCheckBox(grpOptions);
        chkRegExp->setObjectName("chkRegExp");
        sizePolicy2.setHeightForWidth(chkRegExp->sizePolicy().hasHeightForWidth());
        chkRegExp->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(chkRegExp, 2, 0, 1, 1);

        txtRegExpHelp = new QLabel(grpOptions);
        txtRegExpHelp->setObjectName("txtRegExpHelp");
        sizePolicy1.setHeightForWidth(txtRegExpHelp->sizePolicy().hasHeightForWidth());
        txtRegExpHelp->setSizePolicy(sizePolicy1);
        txtRegExpHelp->setText(QString::fromUtf8("<html><head/><body><p><a href=\"https://docs.microsoft.com/en-us/dotnet/standard/base-types/regular-expression-language-quick-reference\"><span style=\" text-decoration: underline; color:#0000ff;\">(?)</span></a></p></body></html>"));
        txtRegExpHelp->setOpenExternalLinks(true);

        gridLayout_3->addWidget(txtRegExpHelp, 2, 1, 1, 1);


        gridLayout_2->addWidget(grpOptions, 0, 0, 1, 1);


        verticalLayout_2->addWidget(widget_3);

        verticalSpacer = new QSpacerItem(20, 134, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        dialogLayout->addWidget(frame);

        widget = new QWidget(SearchInFileDialog);
        widget->setObjectName("widget");
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(455, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnExecute = new QPushButton(widget);
        btnExecute->setObjectName("btnExecute");
        btnExecute->setAutoDefault(false);

        horizontalLayout->addWidget(btnExecute);

        btnReplace = new QPushButton(widget);
        btnReplace->setObjectName("btnReplace");
        btnReplace->setAutoDefault(false);

        horizontalLayout->addWidget(btnReplace);

        btnCancel = new QPushButton(widget);
        btnCancel->setObjectName("btnCancel");
        btnCancel->setAutoDefault(false);

        horizontalLayout->addWidget(btnCancel);


        dialogLayout->addWidget(widget);

        QWidget::setTabOrder(btnExecute, btnReplace);
        QWidget::setTabOrder(btnReplace, btnCancel);
        QWidget::setTabOrder(btnCancel, cbFind);
        QWidget::setTabOrder(cbFind, txtFilters);
        QWidget::setTabOrder(txtFilters, txtFolder);
        QWidget::setTabOrder(txtFolder, btnChangeFolder);
        QWidget::setTabOrder(btnChangeFolder, cbSearchSubFolders);
        QWidget::setTabOrder(cbSearchSubFolders, chkCaseSensetive);
        QWidget::setTabOrder(chkCaseSensetive, chkWholeWord);
        QWidget::setTabOrder(chkWholeWord, chkRegExp);
        QWidget::setTabOrder(chkRegExp, rbCurrentFile);
        QWidget::setTabOrder(rbCurrentFile, rbProject);
        QWidget::setTabOrder(rbProject, rbOpenFiles);
        QWidget::setTabOrder(rbOpenFiles, rbFolder);

        retranslateUi(SearchInFileDialog);

        btnExecute->setDefault(true);


        QMetaObject::connectSlotsByName(SearchInFileDialog);
    } // setupUi

    void retranslateUi(QDialog *SearchInFileDialog)
    {
        SearchInFileDialog->setWindowTitle(QCoreApplication::translate("SearchInFileDialog", "Search in Files", nullptr));
        txtFilters->setText(QCoreApplication::translate("SearchInFileDialog", "*.*", nullptr));
        lblFind->setText(QCoreApplication::translate("SearchInFileDialog", "Text to Find:", nullptr));
        lblFilters->setText(QCoreApplication::translate("SearchInFileDialog", "Filters:", nullptr));
        btnChangeFolder->setText(QCoreApplication::translate("SearchInFileDialog", "...", nullptr));
        lblFolder->setText(QCoreApplication::translate("SearchInFileDialog", "Folder:", nullptr));
        cbSearchSubFolders->setText(QCoreApplication::translate("SearchInFileDialog", "Search in subfolders", nullptr));
        grpWhere->setTitle(QCoreApplication::translate("SearchInFileDialog", "Where:", nullptr));
        rbCurrentFile->setText(QCoreApplication::translate("SearchInFileDialog", "Current File", nullptr));
        rbProject->setText(QCoreApplication::translate("SearchInFileDialog", "Files In Project", nullptr));
        rbOpenFiles->setText(QCoreApplication::translate("SearchInFileDialog", "Open Files", nullptr));
        rbFolder->setText(QCoreApplication::translate("SearchInFileDialog", "Folder", nullptr));
        grpOptions->setTitle(QCoreApplication::translate("SearchInFileDialog", "Options:", nullptr));
        chkWholeWord->setText(QCoreApplication::translate("SearchInFileDialog", "Whole words only", nullptr));
        chkCaseSensetive->setText(QCoreApplication::translate("SearchInFileDialog", "Case Sensitive", nullptr));
        chkRegExp->setText(QCoreApplication::translate("SearchInFileDialog", "Regular Expression", nullptr));
        btnExecute->setText(QCoreApplication::translate("SearchInFileDialog", "&Find", nullptr));
        btnReplace->setText(QCoreApplication::translate("SearchInFileDialog", "&Replace", nullptr));
        btnCancel->setText(QCoreApplication::translate("SearchInFileDialog", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchInFileDialog: public Ui_SearchInFileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHINFILEDIALOG_H
