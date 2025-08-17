/********************************************************************************
** Form generated from reading UI file 'projectgeneralwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTGENERALWIDGET_H
#define UI_PROJECTGENERALWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProjectGeneralWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *lblEncoding;
    QLineEdit *txtFileName;
    QLineEdit *txtOutputFile;
    QWidget *panelEncoding;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *cbEncoding;
    QComboBox *cbEncodingDetail;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QCheckBox *cbDefaultCpp;
    QLabel *label_5;
    QLineEdit *txtName;
    QLabel *label_4;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QLabel *lblFiles;
    QLabel *label;
    QCheckBox *cbSupportXPTheme;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QGroupBox *grpIcon;
    QGridLayout *gridLayout_2;
    QPushButton *btnBrowse;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QLabel *lbIcon;
    QSpacerItem *verticalSpacer_3;
    QPushButton *btnRemove;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *cbType;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *ProjectGeneralWidget)
    {
        if (ProjectGeneralWidget->objectName().isEmpty())
            ProjectGeneralWidget->setObjectName("ProjectGeneralWidget");
        ProjectGeneralWidget->resize(687, 639);
        gridLayout = new QGridLayout(ProjectGeneralWidget);
        gridLayout->setObjectName("gridLayout");
        lblEncoding = new QLabel(ProjectGeneralWidget);
        lblEncoding->setObjectName("lblEncoding");

        gridLayout->addWidget(lblEncoding, 5, 0, 1, 1);

        txtFileName = new QLineEdit(ProjectGeneralWidget);
        txtFileName->setObjectName("txtFileName");
        txtFileName->setReadOnly(true);

        gridLayout->addWidget(txtFileName, 2, 1, 1, 1);

        txtOutputFile = new QLineEdit(ProjectGeneralWidget);
        txtOutputFile->setObjectName("txtOutputFile");
        txtOutputFile->setReadOnly(true);

        gridLayout->addWidget(txtOutputFile, 3, 1, 1, 1);

        panelEncoding = new QWidget(ProjectGeneralWidget);
        panelEncoding->setObjectName("panelEncoding");
        horizontalLayout_2 = new QHBoxLayout(panelEncoding);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        cbEncoding = new QComboBox(panelEncoding);
        cbEncoding->setObjectName("cbEncoding");

        horizontalLayout_2->addWidget(cbEncoding);

        cbEncodingDetail = new QComboBox(panelEncoding);
        cbEncodingDetail->setObjectName("cbEncodingDetail");

        horizontalLayout_2->addWidget(cbEncodingDetail);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        gridLayout->addWidget(panelEncoding, 5, 1, 1, 1);

        label_3 = new QLabel(ProjectGeneralWidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        cbDefaultCpp = new QCheckBox(ProjectGeneralWidget);
        cbDefaultCpp->setObjectName("cbDefaultCpp");

        gridLayout->addWidget(cbDefaultCpp, 6, 0, 1, 2);

        label_5 = new QLabel(ProjectGeneralWidget);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        txtName = new QLineEdit(ProjectGeneralWidget);
        txtName->setObjectName("txtName");

        gridLayout->addWidget(txtName, 0, 1, 1, 1);

        label_4 = new QLabel(ProjectGeneralWidget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        label_2 = new QLabel(ProjectGeneralWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 9, 0, 1, 1);

        lblFiles = new QLabel(ProjectGeneralWidget);
        lblFiles->setObjectName("lblFiles");

        gridLayout->addWidget(lblFiles, 4, 1, 1, 1);

        label = new QLabel(ProjectGeneralWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        cbSupportXPTheme = new QCheckBox(ProjectGeneralWidget);
        cbSupportXPTheme->setObjectName("cbSupportXPTheme");

        gridLayout->addWidget(cbSupportXPTheme, 7, 0, 1, 2);

        widget_2 = new QWidget(ProjectGeneralWidget);
        widget_2->setObjectName("widget_2");
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName("horizontalLayout");
        grpIcon = new QGroupBox(widget_2);
        grpIcon->setObjectName("grpIcon");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(grpIcon->sizePolicy().hasHeightForWidth());
        grpIcon->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(grpIcon);
        gridLayout_2->setObjectName("gridLayout_2");
        btnBrowse = new QPushButton(grpIcon);
        btnBrowse->setObjectName("btnBrowse");

        gridLayout_2->addWidget(btnBrowse, 0, 1, 1, 1);

        widget_3 = new QWidget(grpIcon);
        widget_3->setObjectName("widget_3");
        verticalLayout_2 = new QVBoxLayout(widget_3);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        lbIcon = new QLabel(widget_3);
        lbIcon->setObjectName("lbIcon");
        lbIcon->setMinimumSize(QSize(128, 128));
        lbIcon->setFrameShape(QFrame::Box);
        lbIcon->setScaledContents(false);

        verticalLayout_2->addWidget(lbIcon);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);


        gridLayout_2->addWidget(widget_3, 0, 0, 2, 1);

        btnRemove = new QPushButton(grpIcon);
        btnRemove->setObjectName("btnRemove");

        gridLayout_2->addWidget(btnRemove, 1, 1, 1, 1);


        horizontalLayout->addWidget(grpIcon);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addWidget(widget_2, 8, 0, 1, 3);

        widget = new QWidget(ProjectGeneralWidget);
        widget->setObjectName("widget");
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setSpacing(7);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        cbType = new QComboBox(widget);
        cbType->setObjectName("cbType");

        horizontalLayout_3->addWidget(cbType);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        gridLayout->addWidget(widget, 1, 1, 1, 1);

        QWidget::setTabOrder(txtName, txtFileName);
        QWidget::setTabOrder(txtFileName, txtOutputFile);
        QWidget::setTabOrder(txtOutputFile, cbEncoding);
        QWidget::setTabOrder(cbEncoding, cbEncodingDetail);
        QWidget::setTabOrder(cbEncodingDetail, btnBrowse);
        QWidget::setTabOrder(btnBrowse, btnRemove);

        retranslateUi(ProjectGeneralWidget);

        QMetaObject::connectSlotsByName(ProjectGeneralWidget);
    } // setupUi

    void retranslateUi(QWidget *ProjectGeneralWidget)
    {
        ProjectGeneralWidget->setWindowTitle(QCoreApplication::translate("ProjectGeneralWidget", "Form", nullptr));
        lblEncoding->setText(QCoreApplication::translate("ProjectGeneralWidget", "Default encoding:", nullptr));
        label_3->setText(QCoreApplication::translate("ProjectGeneralWidget", "Output File:", nullptr));
        cbDefaultCpp->setText(QCoreApplication::translate("ProjectGeneralWidget", "Default to C++ when creating new files", nullptr));
        label_5->setText(QCoreApplication::translate("ProjectGeneralWidget", "Type:", nullptr));
        label_4->setText(QCoreApplication::translate("ProjectGeneralWidget", "Files:", nullptr));
        label_2->setText(QCoreApplication::translate("ProjectGeneralWidget", "File Name:", nullptr));
        lblFiles->setText(QCoreApplication::translate("ProjectGeneralWidget", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("ProjectGeneralWidget", "Name:", nullptr));
        cbSupportXPTheme->setText(QCoreApplication::translate("ProjectGeneralWidget", "Support Windows XP Themes", nullptr));
        grpIcon->setTitle(QCoreApplication::translate("ProjectGeneralWidget", "Icon", nullptr));
        btnBrowse->setText(QCoreApplication::translate("ProjectGeneralWidget", "Browse", nullptr));
        lbIcon->setText(QString());
        btnRemove->setText(QCoreApplication::translate("ProjectGeneralWidget", "Remove", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProjectGeneralWidget: public Ui_ProjectGeneralWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTGENERALWIDGET_H
