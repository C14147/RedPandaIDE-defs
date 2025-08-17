/********************************************************************************
** Form generated from reading UI file 'projectcompileparamaterswidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTCOMPILEPARAMATERSWIDGET_H
#define UI_PROJECTCOMPILEPARAMATERSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProjectCompileParamatersWidget
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *grpAllowParallelBuilding;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QSpinBox *spinParallelJobs;
    QSpacerItem *horizontalSpacer_2;
    QTabWidget *tabCommands;
    QWidget *tabCCompiler;
    QHBoxLayout *horizontalLayout;
    QPlainTextEdit *txtCCompiler;
    QWidget *tabCppCompiler;
    QHBoxLayout *horizontalLayout_2;
    QPlainTextEdit *txtCPPCompiler;
    QWidget *tabLinker;
    QVBoxLayout *verticalLayout_2;
    QPlainTextEdit *txtLinker;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QToolButton *btnChooseLib;
    QWidget *tabResource;
    QHBoxLayout *horizontalLayout_5;
    QPlainTextEdit *txtResource;

    void setupUi(QWidget *ProjectCompileParamatersWidget)
    {
        if (ProjectCompileParamatersWidget->objectName().isEmpty())
            ProjectCompileParamatersWidget->setObjectName("ProjectCompileParamatersWidget");
        ProjectCompileParamatersWidget->resize(675, 447);
        verticalLayout = new QVBoxLayout(ProjectCompileParamatersWidget);
        verticalLayout->setObjectName("verticalLayout");
        grpAllowParallelBuilding = new QGroupBox(ProjectCompileParamatersWidget);
        grpAllowParallelBuilding->setObjectName("grpAllowParallelBuilding");
        grpAllowParallelBuilding->setCheckable(true);
        horizontalLayout_4 = new QHBoxLayout(grpAllowParallelBuilding);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label = new QLabel(grpAllowParallelBuilding);
        label->setObjectName("label");

        horizontalLayout_4->addWidget(label);

        spinParallelJobs = new QSpinBox(grpAllowParallelBuilding);
        spinParallelJobs->setObjectName("spinParallelJobs");

        horizontalLayout_4->addWidget(spinParallelJobs);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(grpAllowParallelBuilding);

        tabCommands = new QTabWidget(ProjectCompileParamatersWidget);
        tabCommands->setObjectName("tabCommands");
        tabCCompiler = new QWidget();
        tabCCompiler->setObjectName("tabCCompiler");
        horizontalLayout = new QHBoxLayout(tabCCompiler);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(5, 5, 5, 5);
        txtCCompiler = new QPlainTextEdit(tabCCompiler);
        txtCCompiler->setObjectName("txtCCompiler");

        horizontalLayout->addWidget(txtCCompiler);

        tabCommands->addTab(tabCCompiler, QString());
        tabCppCompiler = new QWidget();
        tabCppCompiler->setObjectName("tabCppCompiler");
        horizontalLayout_2 = new QHBoxLayout(tabCppCompiler);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(5, 5, 5, 5);
        txtCPPCompiler = new QPlainTextEdit(tabCppCompiler);
        txtCPPCompiler->setObjectName("txtCPPCompiler");

        horizontalLayout_2->addWidget(txtCPPCompiler);

        tabCommands->addTab(tabCppCompiler, QString());
        tabLinker = new QWidget();
        tabLinker->setObjectName("tabLinker");
        verticalLayout_2 = new QVBoxLayout(tabLinker);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(5, 5, 5, 5);
        txtLinker = new QPlainTextEdit(tabLinker);
        txtLinker->setObjectName("txtLinker");

        verticalLayout_2->addWidget(txtLinker);

        frame = new QFrame(tabLinker);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        btnChooseLib = new QToolButton(frame);
        btnChooseLib->setObjectName("btnChooseLib");
        btnChooseLib->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_3->addWidget(btnChooseLib);


        verticalLayout_2->addWidget(frame);

        tabCommands->addTab(tabLinker, QString());
        tabResource = new QWidget();
        tabResource->setObjectName("tabResource");
        horizontalLayout_5 = new QHBoxLayout(tabResource);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(5, 5, 5, 5);
        txtResource = new QPlainTextEdit(tabResource);
        txtResource->setObjectName("txtResource");

        horizontalLayout_5->addWidget(txtResource);

        tabCommands->addTab(tabResource, QString());

        verticalLayout->addWidget(tabCommands);

        QWidget::setTabOrder(grpAllowParallelBuilding, spinParallelJobs);
        QWidget::setTabOrder(spinParallelJobs, tabCommands);
        QWidget::setTabOrder(tabCommands, txtCCompiler);
        QWidget::setTabOrder(txtCCompiler, txtCPPCompiler);
        QWidget::setTabOrder(txtCPPCompiler, txtLinker);
        QWidget::setTabOrder(txtLinker, btnChooseLib);
        QWidget::setTabOrder(btnChooseLib, txtResource);

        retranslateUi(ProjectCompileParamatersWidget);

        tabCommands->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ProjectCompileParamatersWidget);
    } // setupUi

    void retranslateUi(QWidget *ProjectCompileParamatersWidget)
    {
        ProjectCompileParamatersWidget->setWindowTitle(QCoreApplication::translate("ProjectCompileParamatersWidget", "Form", nullptr));
        grpAllowParallelBuilding->setTitle(QCoreApplication::translate("ProjectCompileParamatersWidget", "Parallel Build", nullptr));
        label->setText(QCoreApplication::translate("ProjectCompileParamatersWidget", "Parallel Jobs(0 means infinite):", nullptr));
        tabCommands->setTabText(tabCommands->indexOf(tabCCompiler), QCoreApplication::translate("ProjectCompileParamatersWidget", "C Compiler", nullptr));
        tabCommands->setTabText(tabCommands->indexOf(tabCppCompiler), QCoreApplication::translate("ProjectCompileParamatersWidget", "C++ Compiler", nullptr));
        btnChooseLib->setText(QCoreApplication::translate("ProjectCompileParamatersWidget", "Add Library Files", nullptr));
        tabCommands->setTabText(tabCommands->indexOf(tabLinker), QCoreApplication::translate("ProjectCompileParamatersWidget", "Linker", nullptr));
        tabCommands->setTabText(tabCommands->indexOf(tabResource), QCoreApplication::translate("ProjectCompileParamatersWidget", "Resource", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProjectCompileParamatersWidget: public Ui_ProjectCompileParamatersWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTCOMPILEPARAMATERSWIDGET_H
