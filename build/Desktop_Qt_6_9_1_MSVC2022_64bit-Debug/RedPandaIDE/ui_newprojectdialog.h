/********************************************************************************
** Form generated from reading UI file 'newprojectdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWPROJECTDIALOG_H
#define UI_NEWPROJECTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewProjectDialog
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *lstTemplates;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *lblDescription;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QCheckBox *chkMakeDefaultLanguage;
    QRadioButton *rdCProject;
    QRadioButton *rdCppProject;
    QWidget *panelIconInfo;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *lblIconInfo;
    QWidget *widget_3;
    QGridLayout *gridLayout_2;
    QLineEdit *txtLocation;
    QLineEdit *txtProjectName;
    QLabel *label_2;
    QToolButton *btnBrowse;
    QLabel *label_3;
    QCheckBox *chkAsDefaultLocation;
    QDialogButtonBox *buttonBox;
    QButtonGroup *btnGroupLanguage;

    void setupUi(QDialog *NewProjectDialog)
    {
        if (NewProjectDialog->objectName().isEmpty())
            NewProjectDialog->setObjectName("NewProjectDialog");
        NewProjectDialog->resize(670, 546);
        verticalLayout = new QVBoxLayout(NewProjectDialog);
        verticalLayout->setObjectName("verticalLayout");
        lstTemplates = new QListWidget(NewProjectDialog);
        lstTemplates->setObjectName("lstTemplates");
        lstTemplates->setFlow(QListView::LeftToRight);
        lstTemplates->setResizeMode(QListView::Adjust);
        lstTemplates->setSpacing(10);
        lstTemplates->setViewMode(QListView::IconMode);
        lstTemplates->setUniformItemSizes(true);
        lstTemplates->setWordWrap(false);
        lstTemplates->setSortingEnabled(true);

        verticalLayout->addWidget(lstTemplates);

        widget = new QWidget(NewProjectDialog);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lblDescription = new QLabel(widget);
        lblDescription->setObjectName("lblDescription");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblDescription->sizePolicy().hasHeightForWidth());
        lblDescription->setSizePolicy(sizePolicy);
        lblDescription->setTextFormat(Qt::RichText);
        lblDescription->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lblDescription->setWordWrap(true);
        lblDescription->setMargin(5);
        lblDescription->setOpenExternalLinks(true);
        lblDescription->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(lblDescription);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName("widget_2");
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setVerticalSpacing(10);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        chkMakeDefaultLanguage = new QCheckBox(widget_2);
        chkMakeDefaultLanguage->setObjectName("chkMakeDefaultLanguage");

        gridLayout->addWidget(chkMakeDefaultLanguage, 2, 0, 1, 1);

        rdCProject = new QRadioButton(widget_2);
        btnGroupLanguage = new QButtonGroup(NewProjectDialog);
        btnGroupLanguage->setObjectName("btnGroupLanguage");
        btnGroupLanguage->addButton(rdCProject);
        rdCProject->setObjectName("rdCProject");

        gridLayout->addWidget(rdCProject, 0, 0, 1, 1);

        rdCppProject = new QRadioButton(widget_2);
        btnGroupLanguage->addButton(rdCppProject);
        rdCppProject->setObjectName("rdCppProject");

        gridLayout->addWidget(rdCppProject, 1, 0, 1, 1);


        horizontalLayout->addWidget(widget_2);


        verticalLayout->addWidget(widget);

        panelIconInfo = new QWidget(NewProjectDialog);
        panelIconInfo->setObjectName("panelIconInfo");
        horizontalLayout_2 = new QHBoxLayout(panelIconInfo);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(panelIconInfo);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        lblIconInfo = new QLabel(panelIconInfo);
        lblIconInfo->setObjectName("lblIconInfo");
        sizePolicy.setHeightForWidth(lblIconInfo->sizePolicy().hasHeightForWidth());
        lblIconInfo->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(lblIconInfo);


        verticalLayout->addWidget(panelIconInfo);

        widget_3 = new QWidget(NewProjectDialog);
        widget_3->setObjectName("widget_3");
        gridLayout_2 = new QGridLayout(widget_3);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        txtLocation = new QLineEdit(widget_3);
        txtLocation->setObjectName("txtLocation");

        gridLayout_2->addWidget(txtLocation, 1, 2, 1, 1);

        txtProjectName = new QLineEdit(widget_3);
        txtProjectName->setObjectName("txtProjectName");

        gridLayout_2->addWidget(txtProjectName, 0, 2, 1, 2);

        label_2 = new QLabel(widget_3);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        btnBrowse = new QToolButton(widget_3);
        btnBrowse->setObjectName("btnBrowse");

        gridLayout_2->addWidget(btnBrowse, 1, 3, 1, 1);

        label_3 = new QLabel(widget_3);
        label_3->setObjectName("label_3");

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        chkAsDefaultLocation = new QCheckBox(widget_3);
        chkAsDefaultLocation->setObjectName("chkAsDefaultLocation");

        gridLayout_2->addWidget(chkAsDefaultLocation, 2, 0, 1, 4);


        verticalLayout->addWidget(widget_3);

        buttonBox = new QDialogButtonBox(NewProjectDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(lstTemplates, rdCProject);
        QWidget::setTabOrder(rdCProject, rdCppProject);
        QWidget::setTabOrder(rdCppProject, chkMakeDefaultLanguage);
        QWidget::setTabOrder(chkMakeDefaultLanguage, txtProjectName);
        QWidget::setTabOrder(txtProjectName, txtLocation);
        QWidget::setTabOrder(txtLocation, btnBrowse);
        QWidget::setTabOrder(btnBrowse, chkAsDefaultLocation);

        retranslateUi(NewProjectDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, NewProjectDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, NewProjectDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(NewProjectDialog);
    } // setupUi

    void retranslateUi(QDialog *NewProjectDialog)
    {
        NewProjectDialog->setWindowTitle(QCoreApplication::translate("NewProjectDialog", "New Project", nullptr));
        lblDescription->setText(QString());
        chkMakeDefaultLanguage->setText(QCoreApplication::translate("NewProjectDialog", "Make default language", nullptr));
        rdCProject->setText(QCoreApplication::translate("NewProjectDialog", "C Project", nullptr));
        rdCppProject->setText(QCoreApplication::translate("NewProjectDialog", "C++ Project", nullptr));
        label->setText(QCoreApplication::translate("NewProjectDialog", "Icon Info:", nullptr));
        lblIconInfo->setText(QString());
        label_2->setText(QCoreApplication::translate("NewProjectDialog", "Name:", nullptr));
        btnBrowse->setText(QCoreApplication::translate("NewProjectDialog", "...", nullptr));
        label_3->setText(QCoreApplication::translate("NewProjectDialog", "Create in", nullptr));
        chkAsDefaultLocation->setText(QCoreApplication::translate("NewProjectDialog", "Use as the default project location", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewProjectDialog: public Ui_NewProjectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWPROJECTDIALOG_H
