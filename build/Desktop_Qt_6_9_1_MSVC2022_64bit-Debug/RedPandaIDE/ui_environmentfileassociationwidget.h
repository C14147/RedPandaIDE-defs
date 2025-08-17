/********************************************************************************
** Form generated from reading UI file 'environmentfileassociationwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENVIRONMENTFILEASSOCIATIONWIDGET_H
#define UI_ENVIRONMENTFILEASSOCIATIONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EnvironmentFileAssociationWidget
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *rbOpenInMultiApplication;
    QRadioButton *rbOpenInSingleApplication;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QListView *lstFileTypes;
    QLabel *label;

    void setupUi(QWidget *EnvironmentFileAssociationWidget)
    {
        if (EnvironmentFileAssociationWidget->objectName().isEmpty())
            EnvironmentFileAssociationWidget->setObjectName("EnvironmentFileAssociationWidget");
        EnvironmentFileAssociationWidget->resize(708, 459);
        verticalLayout = new QVBoxLayout(EnvironmentFileAssociationWidget);
        verticalLayout->setObjectName("verticalLayout");
        groupBox_2 = new QGroupBox(EnvironmentFileAssociationWidget);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        rbOpenInMultiApplication = new QRadioButton(groupBox_2);
        rbOpenInMultiApplication->setObjectName("rbOpenInMultiApplication");

        verticalLayout_2->addWidget(rbOpenInMultiApplication);

        rbOpenInSingleApplication = new QRadioButton(groupBox_2);
        rbOpenInSingleApplication->setObjectName("rbOpenInSingleApplication");

        verticalLayout_2->addWidget(rbOpenInSingleApplication);


        verticalLayout->addWidget(groupBox_2);

        groupBox = new QGroupBox(EnvironmentFileAssociationWidget);
        groupBox->setObjectName("groupBox");
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName("horizontalLayout");
        lstFileTypes = new QListView(groupBox);
        lstFileTypes->setObjectName("lstFileTypes");
        lstFileTypes->setAlternatingRowColors(true);

        horizontalLayout->addWidget(lstFileTypes);


        verticalLayout->addWidget(groupBox);

        label = new QLabel(EnvironmentFileAssociationWidget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);

        verticalLayout->addWidget(label);


        retranslateUi(EnvironmentFileAssociationWidget);

        QMetaObject::connectSlotsByName(EnvironmentFileAssociationWidget);
    } // setupUi

    void retranslateUi(QWidget *EnvironmentFileAssociationWidget)
    {
        EnvironmentFileAssociationWidget->setWindowTitle(QCoreApplication::translate("EnvironmentFileAssociationWidget", "Form", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("EnvironmentFileAssociationWidget", "Open Each File In", nullptr));
        rbOpenInMultiApplication->setText(QCoreApplication::translate("EnvironmentFileAssociationWidget", "Independent RedPandaIDE applications", nullptr));
        rbOpenInSingleApplication->setText(QCoreApplication::translate("EnvironmentFileAssociationWidget", "The same RedPandaIDE application", nullptr));
        groupBox->setTitle(QCoreApplication::translate("EnvironmentFileAssociationWidget", "File Types:", nullptr));
        label->setText(QCoreApplication::translate("EnvironmentFileAssociationWidget", "Just check or uncheck for which file types RedPandaIDE wil be registered as the default application to open them ... ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EnvironmentFileAssociationWidget: public Ui_EnvironmentFileAssociationWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENVIRONMENTFILEASSOCIATIONWIDGET_H
