/********************************************************************************
** Form generated from reading UI file 'filepropertiesdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEPROPERTIESDIALOG_H
#define UI_FILEPROPERTIESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FilePropertiesDialog
{
public:
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *cbFiles;
    QLineEdit *txtProject;
    QLabel *label_3;
    QLabel *label_2;
    QLineEdit *txtPath;
    QLabel *label_4;
    QLineEdit *txtRelativeToProject;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QLineEdit *txtCommentLines;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_8;
    QLineEdit *txtCodeLines;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QLineEdit *txtLines;
    QFrame *frame_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_10;
    QLineEdit *txtIncludes;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QLineEdit *txtEmptyLines;
    QSpacerItem *verticalSpacer;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnOK;
    QSpacerItem *horizontalSpacer_2;
    QFrame *frame_8;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_11;
    QLineEdit *txtFileDate;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QLineEdit *txtFileSize;
    QFrame *frame_9;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_12;
    QLineEdit *txtCharacters;

    void setupUi(QDialog *FilePropertiesDialog)
    {
        if (FilePropertiesDialog->objectName().isEmpty())
            FilePropertiesDialog->setObjectName("FilePropertiesDialog");
        FilePropertiesDialog->resize(726, 471);
        gridLayout_2 = new QGridLayout(FilePropertiesDialog);
        gridLayout_2->setObjectName("gridLayout_2");
        frame = new QFrame(FilePropertiesDialog);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(frame);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        cbFiles = new QComboBox(frame);
        cbFiles->setObjectName("cbFiles");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cbFiles->sizePolicy().hasHeightForWidth());
        cbFiles->setSizePolicy(sizePolicy);

        gridLayout->addWidget(cbFiles, 0, 1, 1, 1);

        txtProject = new QLineEdit(frame);
        txtProject->setObjectName("txtProject");
        txtProject->setReadOnly(true);

        gridLayout->addWidget(txtProject, 1, 1, 1, 1);

        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        txtPath = new QLineEdit(frame);
        txtPath->setObjectName("txtPath");
        txtPath->setReadOnly(true);

        gridLayout->addWidget(txtPath, 2, 1, 1, 1);

        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        txtRelativeToProject = new QLineEdit(frame);
        txtRelativeToProject->setObjectName("txtRelativeToProject");
        txtRelativeToProject->setReadOnly(true);

        gridLayout->addWidget(txtRelativeToProject, 3, 1, 1, 1);


        gridLayout_2->addWidget(frame, 0, 0, 1, 2);

        frame_4 = new QFrame(FilePropertiesDialog);
        frame_4->setObjectName("frame_4");
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_4);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_7 = new QLabel(frame_4);
        label_7->setObjectName("label_7");

        horizontalLayout_3->addWidget(label_7);

        txtCommentLines = new QLineEdit(frame_4);
        txtCommentLines->setObjectName("txtCommentLines");
        txtCommentLines->setReadOnly(true);

        horizontalLayout_3->addWidget(txtCommentLines);


        gridLayout_2->addWidget(frame_4, 2, 0, 1, 1);

        frame_5 = new QFrame(FilePropertiesDialog);
        frame_5->setObjectName("frame_5");
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_5);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_8 = new QLabel(frame_5);
        label_8->setObjectName("label_8");

        horizontalLayout_4->addWidget(label_8);

        txtCodeLines = new QLineEdit(frame_5);
        txtCodeLines->setObjectName("txtCodeLines");
        txtCodeLines->setReadOnly(true);

        horizontalLayout_4->addWidget(txtCodeLines);


        gridLayout_2->addWidget(frame_5, 2, 1, 1, 1);

        frame_2 = new QFrame(FilePropertiesDialog);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setObjectName("horizontalLayout");
        label_5 = new QLabel(frame_2);
        label_5->setObjectName("label_5");

        horizontalLayout->addWidget(label_5);

        txtLines = new QLineEdit(frame_2);
        txtLines->setObjectName("txtLines");
        txtLines->setReadOnly(true);

        horizontalLayout->addWidget(txtLines);


        gridLayout_2->addWidget(frame_2, 1, 0, 1, 1);

        frame_7 = new QFrame(FilePropertiesDialog);
        frame_7->setObjectName("frame_7");
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        horizontalLayout_6 = new QHBoxLayout(frame_7);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_10 = new QLabel(frame_7);
        label_10->setObjectName("label_10");

        horizontalLayout_6->addWidget(label_10);

        txtIncludes = new QLineEdit(frame_7);
        txtIncludes->setObjectName("txtIncludes");
        txtIncludes->setReadOnly(true);

        horizontalLayout_6->addWidget(txtIncludes);


        gridLayout_2->addWidget(frame_7, 3, 1, 1, 1);

        frame_3 = new QFrame(FilePropertiesDialog);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_6 = new QLabel(frame_3);
        label_6->setObjectName("label_6");

        horizontalLayout_2->addWidget(label_6);

        txtEmptyLines = new QLineEdit(frame_3);
        txtEmptyLines->setObjectName("txtEmptyLines");
        txtEmptyLines->setReadOnly(true);

        horizontalLayout_2->addWidget(txtEmptyLines);


        gridLayout_2->addWidget(frame_3, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 5, 0, 1, 1);

        widget = new QWidget(FilePropertiesDialog);
        widget->setObjectName("widget");
        horizontalLayout_8 = new QHBoxLayout(widget);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        btnOK = new QPushButton(widget);
        btnOK->setObjectName("btnOK");

        horizontalLayout_8->addWidget(btnOK);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);


        gridLayout_2->addWidget(widget, 6, 0, 1, 2);

        frame_8 = new QFrame(FilePropertiesDialog);
        frame_8->setObjectName("frame_8");
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        horizontalLayout_7 = new QHBoxLayout(frame_8);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_11 = new QLabel(frame_8);
        label_11->setObjectName("label_11");

        horizontalLayout_7->addWidget(label_11);

        txtFileDate = new QLineEdit(frame_8);
        txtFileDate->setObjectName("txtFileDate");
        txtFileDate->setReadOnly(true);

        horizontalLayout_7->addWidget(txtFileDate);


        gridLayout_2->addWidget(frame_8, 4, 1, 1, 1);

        frame_6 = new QFrame(FilePropertiesDialog);
        frame_6->setObjectName("frame_6");
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_6);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_9 = new QLabel(frame_6);
        label_9->setObjectName("label_9");

        horizontalLayout_5->addWidget(label_9);

        txtFileSize = new QLineEdit(frame_6);
        txtFileSize->setObjectName("txtFileSize");
        txtFileSize->setReadOnly(true);

        horizontalLayout_5->addWidget(txtFileSize);


        gridLayout_2->addWidget(frame_6, 4, 0, 1, 1);

        frame_9 = new QFrame(FilePropertiesDialog);
        frame_9->setObjectName("frame_9");
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        horizontalLayout_9 = new QHBoxLayout(frame_9);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_12 = new QLabel(frame_9);
        label_12->setObjectName("label_12");

        horizontalLayout_9->addWidget(label_12);

        txtCharacters = new QLineEdit(frame_9);
        txtCharacters->setObjectName("txtCharacters");
        txtCharacters->setReadOnly(true);

        horizontalLayout_9->addWidget(txtCharacters);


        gridLayout_2->addWidget(frame_9, 3, 0, 1, 1);

        QWidget::setTabOrder(cbFiles, txtProject);
        QWidget::setTabOrder(txtProject, txtPath);
        QWidget::setTabOrder(txtPath, txtRelativeToProject);
        QWidget::setTabOrder(txtRelativeToProject, txtLines);
        QWidget::setTabOrder(txtLines, txtEmptyLines);
        QWidget::setTabOrder(txtEmptyLines, txtCommentLines);
        QWidget::setTabOrder(txtCommentLines, txtCodeLines);
        QWidget::setTabOrder(txtCodeLines, txtCharacters);
        QWidget::setTabOrder(txtCharacters, txtIncludes);
        QWidget::setTabOrder(txtIncludes, txtFileSize);
        QWidget::setTabOrder(txtFileSize, txtFileDate);
        QWidget::setTabOrder(txtFileDate, btnOK);

        retranslateUi(FilePropertiesDialog);

        QMetaObject::connectSlotsByName(FilePropertiesDialog);
    } // setupUi

    void retranslateUi(QDialog *FilePropertiesDialog)
    {
        FilePropertiesDialog->setWindowTitle(QCoreApplication::translate("FilePropertiesDialog", "File Properties", nullptr));
        label->setText(QCoreApplication::translate("FilePropertiesDialog", "File name:", nullptr));
        label_3->setText(QCoreApplication::translate("FilePropertiesDialog", "Path:", nullptr));
        label_2->setText(QCoreApplication::translate("FilePropertiesDialog", "Project:", nullptr));
        label_4->setText(QCoreApplication::translate("FilePropertiesDialog", "Relative to Project:", nullptr));
        label_7->setText(QCoreApplication::translate("FilePropertiesDialog", "Comment lines:", nullptr));
        label_8->setText(QCoreApplication::translate("FilePropertiesDialog", "Code lines:", nullptr));
        label_5->setText(QCoreApplication::translate("FilePropertiesDialog", "Total lines:", nullptr));
        label_10->setText(QCoreApplication::translate("FilePropertiesDialog", "Including files:", nullptr));
        label_6->setText(QCoreApplication::translate("FilePropertiesDialog", "Empty lines:", nullptr));
        btnOK->setText(QCoreApplication::translate("FilePropertiesDialog", "OK", nullptr));
        label_11->setText(QCoreApplication::translate("FilePropertiesDialog", "File date:", nullptr));
        label_9->setText(QCoreApplication::translate("FilePropertiesDialog", "File size:", nullptr));
        label_12->setText(QCoreApplication::translate("FilePropertiesDialog", "Characters:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FilePropertiesDialog: public Ui_FilePropertiesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEPROPERTIESDIALOG_H
