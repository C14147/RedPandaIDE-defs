/********************************************************************************
** Form generated from reading UI file 'projectcompilerwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTCOMPILERWIDGET_H
#define UI_PROJECTCOMPILERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include <widgets/compileargumentswidget.h>

QT_BEGIN_NAMESPACE

class Ui_ProjectCompilerWidget
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QCheckBox *chkStaticLink;
    QSpacerItem *horizontalSpacer;
    QComboBox *cbCompilerSet;
    QLabel *label;
    QLabel *label_2;
    CompileArgumentsWidget *tabOptions;
    QWidget *panelAddCharset;
    QHBoxLayout *horizontalLayout;
    QCheckBox *chkAddCharset;
    QComboBox *cbEncoding;
    QComboBox *cbEncodingDetails;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *ProjectCompilerWidget)
    {
        if (ProjectCompilerWidget->objectName().isEmpty())
            ProjectCompilerWidget->setObjectName("ProjectCompilerWidget");
        ProjectCompilerWidget->resize(784, 599);
        gridLayout = new QGridLayout(ProjectCompilerWidget);
        gridLayout->setObjectName("gridLayout");
        widget = new QWidget(ProjectCompilerWidget);
        widget->setObjectName("widget");

        gridLayout->addWidget(widget, 6, 0, 1, 3);

        chkStaticLink = new QCheckBox(ProjectCompilerWidget);
        chkStaticLink->setObjectName("chkStaticLink");

        gridLayout->addWidget(chkStaticLink, 2, 0, 1, 3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        cbCompilerSet = new QComboBox(ProjectCompilerWidget);
        cbCompilerSet->setObjectName("cbCompilerSet");

        gridLayout->addWidget(cbCompilerSet, 0, 1, 1, 1);

        label = new QLabel(ProjectCompilerWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(ProjectCompilerWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        tabOptions = new CompileArgumentsWidget(ProjectCompilerWidget);
        tabOptions->setObjectName("tabOptions");
        tabOptions->setDocumentMode(true);

        gridLayout->addWidget(tabOptions, 4, 0, 1, 3);

        panelAddCharset = new QWidget(ProjectCompilerWidget);
        panelAddCharset->setObjectName("panelAddCharset");
        horizontalLayout = new QHBoxLayout(panelAddCharset);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        chkAddCharset = new QCheckBox(panelAddCharset);
        chkAddCharset->setObjectName("chkAddCharset");

        horizontalLayout->addWidget(chkAddCharset);

        cbEncoding = new QComboBox(panelAddCharset);
        cbEncoding->setObjectName("cbEncoding");

        horizontalLayout->addWidget(cbEncoding);

        cbEncodingDetails = new QComboBox(panelAddCharset);
        cbEncodingDetails->setObjectName("cbEncodingDetails");

        horizontalLayout->addWidget(cbEncodingDetails);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addWidget(panelAddCharset, 3, 0, 1, 3);

        QWidget::setTabOrder(cbCompilerSet, chkStaticLink);
        QWidget::setTabOrder(chkStaticLink, chkAddCharset);
        QWidget::setTabOrder(chkAddCharset, cbEncoding);
        QWidget::setTabOrder(cbEncoding, cbEncodingDetails);
        QWidget::setTabOrder(cbEncodingDetails, tabOptions);

        retranslateUi(ProjectCompilerWidget);

        QMetaObject::connectSlotsByName(ProjectCompilerWidget);
    } // setupUi

    void retranslateUi(QWidget *ProjectCompilerWidget)
    {
        ProjectCompilerWidget->setWindowTitle(QCoreApplication::translate("ProjectCompilerWidget", "Form", nullptr));
        chkStaticLink->setText(QCoreApplication::translate("ProjectCompilerWidget", "Statically link libraries", nullptr));
        label->setText(QCoreApplication::translate("ProjectCompilerWidget", "Base compiler set:", nullptr));
        label_2->setText(QCoreApplication::translate("ProjectCompilerWidget", "Customize (apply to this project only):", nullptr));
        chkAddCharset->setText(QCoreApplication::translate("ProjectCompilerWidget", "Set Encoding for the executable:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProjectCompilerWidget: public Ui_ProjectCompilerWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTCOMPILERWIDGET_H
