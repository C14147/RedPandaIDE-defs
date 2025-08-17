/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *lblTitle;
    QLabel *lblQt;
    QLabel *lblCompileTime;
    QLabel *label;
    QLabel *label_2;
    QLabel *lblHomepage;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName("AboutDialog");
        AboutDialog->resize(656, 537);
        verticalLayout = new QVBoxLayout(AboutDialog);
        verticalLayout->setObjectName("verticalLayout");
        lblTitle = new QLabel(AboutDialog);
        lblTitle->setObjectName("lblTitle");
        lblTitle->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(lblTitle);

        lblQt = new QLabel(AboutDialog);
        lblQt->setObjectName("lblQt");
        QFont font;
        font.setBold(false);
        lblQt->setFont(font);

        verticalLayout->addWidget(lblQt);

        lblCompileTime = new QLabel(AboutDialog);
        lblCompileTime->setObjectName("lblCompileTime");
        lblCompileTime->setFont(font);

        verticalLayout->addWidget(lblCompileTime);

        label = new QLabel(AboutDialog);
        label->setObjectName("label");
        label->setFont(font);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(AboutDialog);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        lblHomepage = new QLabel(AboutDialog);
        lblHomepage->setObjectName("lblHomepage");
        lblHomepage->setFont(font);
        lblHomepage->setOpenExternalLinks(true);

        verticalLayout->addWidget(lblHomepage);

        groupBox = new QGroupBox(AboutDialog);
        groupBox->setObjectName("groupBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName("horizontalLayout");
        plainTextEdit = new QPlainTextEdit(groupBox);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setReadOnly(true);

        horizontalLayout->addWidget(plainTextEdit);


        verticalLayout->addWidget(groupBox);


        retranslateUi(AboutDialog);

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QCoreApplication::translate("AboutDialog", "About", nullptr));
        lblTitle->setText(QCoreApplication::translate("AboutDialog", "<html><head/><body><p><span style=\" font-size:xx-large; font-weight:600;\">RedPanda IDE</span></p></body></html>", nullptr));
        lblQt->setText(QCoreApplication::translate("AboutDialog", "Based on Qt %1 (%2) running on %3", nullptr));
        lblCompileTime->setText(QCoreApplication::translate("AboutDialog", "Build time: %1 %2", nullptr));
        label->setText(QCoreApplication::translate("AboutDialog", "Copyright(C) 2021-2024 \347\236\277\345\215\216(royqh1979@gmail.com)", nullptr));
        label_2->setText(QCoreApplication::translate("AboutDialog", "Copyright(C) 2025 C14147(C14147@github.com)", nullptr));
        lblHomepage->setText(QCoreApplication::translate("AboutDialog", "<html><head/><body><p>Homepage: <a href=\"Homepage: https://sourceforge.net/projects/dev-cpp-2020/\">https://sourceforge.net/projects/dev-cpp-2020/</a></p></body></html>", nullptr));
        groupBox->setTitle(QCoreApplication::translate("AboutDialog", "GNU General Public License", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("AboutDialog", "    This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.\n"
"\n"
"    This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.\n"
"\n"
"    You should have received a copy of the GNU General Public License along with this program.  If not, see <https://www.gnu.org/licenses/>.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
