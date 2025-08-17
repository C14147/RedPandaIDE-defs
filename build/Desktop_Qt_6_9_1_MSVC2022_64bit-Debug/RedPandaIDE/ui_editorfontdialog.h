/********************************************************************************
** Form generated from reading UI file 'editorfontdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITORFONTDIALOG_H
#define UI_EDITORFONTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_EditorFontDialog
{
public:
    QGridLayout *gridLayout;
    QFontComboBox *fontComboBox;
    QCheckBox *chkMonoOnly;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EditorFontDialog)
    {
        if (EditorFontDialog->objectName().isEmpty())
            EditorFontDialog->setObjectName("EditorFontDialog");
        EditorFontDialog->resize(369, 152);
        gridLayout = new QGridLayout(EditorFontDialog);
        gridLayout->setObjectName("gridLayout");
        fontComboBox = new QFontComboBox(EditorFontDialog);
        fontComboBox->setObjectName("fontComboBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fontComboBox->sizePolicy().hasHeightForWidth());
        fontComboBox->setSizePolicy(sizePolicy);
        fontComboBox->setEditable(false);
        fontComboBox->setMaxVisibleItems(15);
        fontComboBox->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);

        gridLayout->addWidget(fontComboBox, 0, 0, 1, 1);

        chkMonoOnly = new QCheckBox(EditorFontDialog);
        chkMonoOnly->setObjectName("chkMonoOnly");

        gridLayout->addWidget(chkMonoOnly, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);

        buttonBox = new QDialogButtonBox(EditorFontDialog);
        buttonBox->setObjectName("buttonBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy1);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 1);


        retranslateUi(EditorFontDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, EditorFontDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, EditorFontDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(EditorFontDialog);
    } // setupUi

    void retranslateUi(QDialog *EditorFontDialog)
    {
        EditorFontDialog->setWindowTitle(QCoreApplication::translate("EditorFontDialog", "Choose Font", nullptr));
        chkMonoOnly->setText(QCoreApplication::translate("EditorFontDialog", "Show only monospaced fonts", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditorFontDialog: public Ui_EditorFontDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITORFONTDIALOG_H
