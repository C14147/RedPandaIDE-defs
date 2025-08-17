/********************************************************************************
** Form generated from reading UI file 'projectfileswidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTFILESWIDGET_H
#define UI_PROJECTFILESWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProjectFilesWidget
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QTreeView *treeProject;
    QGroupBox *grpFileOptions;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpinBox *spinPriority;
    QSpacerItem *horizontalSpacer;
    QCheckBox *chkCompile;
    QCheckBox *chkLink;
    QCheckBox *chkCompileAsCPP;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QComboBox *cbEncoding;
    QComboBox *cbEncodingDetail;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *chkOverrideBuildCommand;
    QPlainTextEdit *txtBuildCommand;

    void setupUi(QWidget *ProjectFilesWidget)
    {
        if (ProjectFilesWidget->objectName().isEmpty())
            ProjectFilesWidget->setObjectName("ProjectFilesWidget");
        ProjectFilesWidget->resize(753, 503);
        verticalLayout = new QVBoxLayout(ProjectFilesWidget);
        verticalLayout->setObjectName("verticalLayout");
        splitter = new QSplitter(ProjectFilesWidget);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        treeProject = new QTreeView(splitter);
        treeProject->setObjectName("treeProject");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(treeProject->sizePolicy().hasHeightForWidth());
        treeProject->setSizePolicy(sizePolicy);
        splitter->addWidget(treeProject);
        treeProject->header()->setVisible(false);
        grpFileOptions = new QGroupBox(splitter);
        grpFileOptions->setObjectName("grpFileOptions");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(grpFileOptions->sizePolicy().hasHeightForWidth());
        grpFileOptions->setSizePolicy(sizePolicy1);
        verticalLayout_2 = new QVBoxLayout(grpFileOptions);
        verticalLayout_2->setObjectName("verticalLayout_2");
        widget = new QWidget(grpFileOptions);
        widget->setObjectName("widget");
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        spinPriority = new QSpinBox(widget);
        spinPriority->setObjectName("spinPriority");

        horizontalLayout_2->addWidget(spinPriority);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_2->addWidget(widget);

        chkCompile = new QCheckBox(grpFileOptions);
        chkCompile->setObjectName("chkCompile");
        chkCompile->setEnabled(true);

        verticalLayout_2->addWidget(chkCompile);

        chkLink = new QCheckBox(grpFileOptions);
        chkLink->setObjectName("chkLink");

        verticalLayout_2->addWidget(chkLink);

        chkCompileAsCPP = new QCheckBox(grpFileOptions);
        chkCompileAsCPP->setObjectName("chkCompileAsCPP");

        verticalLayout_2->addWidget(chkCompileAsCPP);

        widget_2 = new QWidget(grpFileOptions);
        widget_2->setObjectName("widget_2");
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget_2);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        cbEncoding = new QComboBox(widget_2);
        cbEncoding->setObjectName("cbEncoding");
        cbEncoding->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout->addWidget(cbEncoding);

        cbEncodingDetail = new QComboBox(widget_2);
        cbEncodingDetail->setObjectName("cbEncodingDetail");
        cbEncodingDetail->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout->addWidget(cbEncodingDetail);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addWidget(widget_2);

        chkOverrideBuildCommand = new QCheckBox(grpFileOptions);
        chkOverrideBuildCommand->setObjectName("chkOverrideBuildCommand");

        verticalLayout_2->addWidget(chkOverrideBuildCommand);

        txtBuildCommand = new QPlainTextEdit(grpFileOptions);
        txtBuildCommand->setObjectName("txtBuildCommand");

        verticalLayout_2->addWidget(txtBuildCommand);

        splitter->addWidget(grpFileOptions);

        verticalLayout->addWidget(splitter);

        QWidget::setTabOrder(treeProject, spinPriority);
        QWidget::setTabOrder(spinPriority, chkCompile);
        QWidget::setTabOrder(chkCompile, chkLink);
        QWidget::setTabOrder(chkLink, chkCompileAsCPP);
        QWidget::setTabOrder(chkCompileAsCPP, cbEncoding);
        QWidget::setTabOrder(cbEncoding, cbEncodingDetail);
        QWidget::setTabOrder(cbEncodingDetail, chkOverrideBuildCommand);
        QWidget::setTabOrder(chkOverrideBuildCommand, txtBuildCommand);

        retranslateUi(ProjectFilesWidget);

        QMetaObject::connectSlotsByName(ProjectFilesWidget);
    } // setupUi

    void retranslateUi(QWidget *ProjectFilesWidget)
    {
        ProjectFilesWidget->setWindowTitle(QCoreApplication::translate("ProjectFilesWidget", "Form", nullptr));
        grpFileOptions->setTitle(QCoreApplication::translate("ProjectFilesWidget", "File Options", nullptr));
        label->setText(QCoreApplication::translate("ProjectFilesWidget", "Build Priority:", nullptr));
        chkCompile->setText(QCoreApplication::translate("ProjectFilesWidget", "Include in compilation", nullptr));
        chkLink->setText(QCoreApplication::translate("ProjectFilesWidget", "Include in linking", nullptr));
        chkCompileAsCPP->setText(QCoreApplication::translate("ProjectFilesWidget", "Compile files as C++", nullptr));
        label_2->setText(QCoreApplication::translate("ProjectFilesWidget", "Encoding", nullptr));
        chkOverrideBuildCommand->setText(QCoreApplication::translate("ProjectFilesWidget", "Override build command:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProjectFilesWidget: public Ui_ProjectFilesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTFILESWIDGET_H
