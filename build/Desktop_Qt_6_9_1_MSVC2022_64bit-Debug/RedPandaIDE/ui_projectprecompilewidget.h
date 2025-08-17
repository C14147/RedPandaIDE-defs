/********************************************************************************
** Form generated from reading UI file 'projectprecompilewidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTPRECOMPILEWIDGET_H
#define UI_PROJECTPRECOMPILEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProjectPreCompileWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *grpPrecompileHeader;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *txtPrecompileHeader;
    QToolButton *btnBrowse;
    QLabel *label;

    void setupUi(QWidget *ProjectPreCompileWidget)
    {
        if (ProjectPreCompileWidget->objectName().isEmpty())
            ProjectPreCompileWidget->setObjectName("ProjectPreCompileWidget");
        ProjectPreCompileWidget->resize(741, 300);
        horizontalLayout = new QHBoxLayout(ProjectPreCompileWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        grpPrecompileHeader = new QGroupBox(ProjectPreCompileWidget);
        grpPrecompileHeader->setObjectName("grpPrecompileHeader");
        grpPrecompileHeader->setCheckable(true);
        verticalLayout = new QVBoxLayout(grpPrecompileHeader);
        verticalLayout->setObjectName("verticalLayout");
        widget = new QWidget(grpPrecompileHeader);
        widget->setObjectName("widget");
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        txtPrecompileHeader = new QLineEdit(widget);
        txtPrecompileHeader->setObjectName("txtPrecompileHeader");

        horizontalLayout_2->addWidget(txtPrecompileHeader);

        btnBrowse = new QToolButton(widget);
        btnBrowse->setObjectName("btnBrowse");

        horizontalLayout_2->addWidget(btnBrowse);


        verticalLayout->addWidget(widget);

        label = new QLabel(grpPrecompileHeader);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setTextFormat(Qt::RichText);
        label->setAlignment(Qt::AlignCenter);
        label->setOpenExternalLinks(true);

        verticalLayout->addWidget(label);


        horizontalLayout->addWidget(grpPrecompileHeader);


        retranslateUi(ProjectPreCompileWidget);

        QMetaObject::connectSlotsByName(ProjectPreCompileWidget);
    } // setupUi

    void retranslateUi(QWidget *ProjectPreCompileWidget)
    {
        ProjectPreCompileWidget->setWindowTitle(QCoreApplication::translate("ProjectPreCompileWidget", "Form", nullptr));
        grpPrecompileHeader->setTitle(QCoreApplication::translate("ProjectPreCompileWidget", "Use precompiled header", nullptr));
        label_2->setText(QCoreApplication::translate("ProjectPreCompileWidget", "Header to be precompiled:", nullptr));
#if QT_CONFIG(tooltip)
        btnBrowse->setToolTip(QCoreApplication::translate("ProjectPreCompileWidget", "Browse", nullptr));
#endif // QT_CONFIG(tooltip)
        btnBrowse->setText(QCoreApplication::translate("ProjectPreCompileWidget", "Browse", nullptr));
        label->setText(QCoreApplication::translate("ProjectPreCompileWidget", "<html><head/><body><p>For more information about gcc precompiled header, see:</p><p><a href=\"https://gcc.gnu.org/onlinedocs/gcc/Precompiled-Headers.html\"><span style=\" text-decoration: underline; color:#007af4;\">https://gcc.gnu.org/onlinedocs/gcc/Precompiled-Headers.html</span></a></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProjectPreCompileWidget: public Ui_ProjectPreCompileWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTPRECOMPILEWIDGET_H
