/********************************************************************************
** Form generated from reading UI file 'extensionswidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXTENSIONSWIDGET_H
#define UI_EXTENSIONSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExtensionsWidget
{
public:
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *extLineEdit;
    QPushButton *searchButton;
    QListWidget *extList;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *infoBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *extName;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLabel *extType;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QLabel *extAuthor;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout;
    QLabel *label_8;
    QPlainTextEdit *introductionEdit;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *cbProxy;
    QPushButton *downloadButton;
    QPushButton *cancelButton;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QLabel *statusLabel;
    QSpacerItem *horizontalSpacer;
    QProgressBar *progressBar;

    void setupUi(QWidget *ExtensionsWidget)
    {
        if (ExtensionsWidget->objectName().isEmpty())
            ExtensionsWidget->setObjectName("ExtensionsWidget");
        ExtensionsWidget->resize(810, 519);
        horizontalLayout_8 = new QHBoxLayout(ExtensionsWidget);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        extLineEdit = new QLineEdit(ExtensionsWidget);
        extLineEdit->setObjectName("extLineEdit");

        horizontalLayout_7->addWidget(extLineEdit);

        searchButton = new QPushButton(ExtensionsWidget);
        searchButton->setObjectName("searchButton");

        horizontalLayout_7->addWidget(searchButton);


        verticalLayout_6->addLayout(horizontalLayout_7);

        extList = new QListWidget(ExtensionsWidget);
        new QListWidgetItem(extList);
        extList->setObjectName("extList");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(3);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(extList->sizePolicy().hasHeightForWidth());
        extList->setSizePolicy(sizePolicy);

        verticalLayout_6->addWidget(extList);


        horizontalLayout_8->addLayout(verticalLayout_6);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        infoBox = new QGroupBox(ExtensionsWidget);
        infoBox->setObjectName("infoBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(7);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(infoBox->sizePolicy().hasHeightForWidth());
        infoBox->setSizePolicy(sizePolicy1);
        verticalLayout_2 = new QVBoxLayout(infoBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(infoBox);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        extName = new QLabel(infoBox);
        extName->setObjectName("extName");

        horizontalLayout_2->addWidget(extName);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_4 = new QLabel(infoBox);
        label_4->setObjectName("label_4");

        horizontalLayout_3->addWidget(label_4);

        extType = new QLabel(infoBox);
        extType->setObjectName("extType");

        horizontalLayout_3->addWidget(extType);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_6 = new QLabel(infoBox);
        label_6->setObjectName("label_6");

        horizontalLayout_4->addWidget(label_6);

        extAuthor = new QLabel(infoBox);
        extAuthor->setObjectName("extAuthor");

        horizontalLayout_4->addWidget(extAuthor);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_8 = new QLabel(infoBox);
        label_8->setObjectName("label_8");

        verticalLayout->addWidget(label_8);

        introductionEdit = new QPlainTextEdit(infoBox);
        introductionEdit->setObjectName("introductionEdit");
        introductionEdit->setReadOnly(true);

        verticalLayout->addWidget(introductionEdit);


        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_5->addWidget(infoBox);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(ExtensionsWidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        cbProxy = new QComboBox(ExtensionsWidget);
        cbProxy->addItem(QString());
        cbProxy->addItem(QString());
        cbProxy->addItem(QString());
        cbProxy->addItem(QString());
        cbProxy->setObjectName("cbProxy");

        horizontalLayout->addWidget(cbProxy);


        horizontalLayout_6->addLayout(horizontalLayout);

        downloadButton = new QPushButton(ExtensionsWidget);
        downloadButton->setObjectName("downloadButton");

        horizontalLayout_6->addWidget(downloadButton);

        cancelButton = new QPushButton(ExtensionsWidget);
        cancelButton->setObjectName("cancelButton");

        horizontalLayout_6->addWidget(cancelButton);


        verticalLayout_4->addLayout(horizontalLayout_6);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_9 = new QLabel(ExtensionsWidget);
        label_9->setObjectName("label_9");

        horizontalLayout_5->addWidget(label_9);

        statusLabel = new QLabel(ExtensionsWidget);
        statusLabel->setObjectName("statusLabel");

        horizontalLayout_5->addWidget(statusLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout_5);

        progressBar = new QProgressBar(ExtensionsWidget);
        progressBar->setObjectName("progressBar");
        progressBar->setMaximum(100);
        progressBar->setValue(24);
        progressBar->setTextVisible(false);
        progressBar->setTextDirection(QProgressBar::Direction::TopToBottom);

        verticalLayout_3->addWidget(progressBar);


        verticalLayout_4->addLayout(verticalLayout_3);


        verticalLayout_5->addLayout(verticalLayout_4);


        horizontalLayout_8->addLayout(verticalLayout_5);


        retranslateUi(ExtensionsWidget);

        QMetaObject::connectSlotsByName(ExtensionsWidget);
    } // setupUi

    void retranslateUi(QWidget *ExtensionsWidget)
    {
        ExtensionsWidget->setWindowTitle(QCoreApplication::translate("ExtensionsWidget", "Form", nullptr));
        searchButton->setText(QCoreApplication::translate("ExtensionsWidget", "Search", nullptr));

        const bool __sortingEnabled = extList->isSortingEnabled();
        extList->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = extList->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("ExtensionsWidget", "RedPandaIDE CE Software", nullptr));
        extList->setSortingEnabled(__sortingEnabled);

        infoBox->setTitle(QCoreApplication::translate("ExtensionsWidget", "Information", nullptr));
        label_2->setText(QCoreApplication::translate("ExtensionsWidget", "Extension Name:", nullptr));
        extName->setText(QCoreApplication::translate("ExtensionsWidget", "ExtN", nullptr));
        label_4->setText(QCoreApplication::translate("ExtensionsWidget", "Extension Type:", nullptr));
        extType->setText(QCoreApplication::translate("ExtensionsWidget", "Theme", nullptr));
        label_6->setText(QCoreApplication::translate("ExtensionsWidget", "Author:", nullptr));
        extAuthor->setText(QCoreApplication::translate("ExtensionsWidget", "C14147", nullptr));
        label_8->setText(QCoreApplication::translate("ExtensionsWidget", "Introduction\357\274\232", nullptr));
        label->setText(QCoreApplication::translate("ExtensionsWidget", "Download Proxy\357\274\232", nullptr));
        cbProxy->setItemText(0, QString());
        cbProxy->setItemText(1, QCoreApplication::translate("ExtensionsWidget", "https://wget.la/", nullptr));
        cbProxy->setItemText(2, QCoreApplication::translate("ExtensionsWidget", "https://ghfast.top/", nullptr));
        cbProxy->setItemText(3, QCoreApplication::translate("ExtensionsWidget", "https://ghproxy.net/", nullptr));

        downloadButton->setText(QCoreApplication::translate("ExtensionsWidget", "Download", nullptr));
        cancelButton->setText(QCoreApplication::translate("ExtensionsWidget", "Cancel", nullptr));
        label_9->setText(QCoreApplication::translate("ExtensionsWidget", "Status:", nullptr));
        statusLabel->setText(QCoreApplication::translate("ExtensionsWidget", "Ready", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExtensionsWidget: public Ui_ExtensionsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXTENSIONSWIDGET_H
