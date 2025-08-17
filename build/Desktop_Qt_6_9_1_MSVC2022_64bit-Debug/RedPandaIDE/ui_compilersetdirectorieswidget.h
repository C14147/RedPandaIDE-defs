/********************************************************************************
** Form generated from reading UI file 'compilersetdirectorieswidget.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPILERSETDIRECTORIESWIDGET_H
#define UI_COMPILERSETDIRECTORIESWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CompilerSetDirectoriesWidget
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QToolButton *btnAdd;
    QToolButton *btnDelete;
    QToolButton *btnRemoveInvalid;
    QSpacerItem *horizontalSpacer;
    QListView *listView;

    void setupUi(QWidget *CompilerSetDirectoriesWidget)
    {
        if (CompilerSetDirectoriesWidget->objectName().isEmpty())
            CompilerSetDirectoriesWidget->setObjectName("CompilerSetDirectoriesWidget");
        CompilerSetDirectoriesWidget->resize(400, 300);
        verticalLayout = new QVBoxLayout(CompilerSetDirectoriesWidget);
        verticalLayout->setObjectName("verticalLayout");
        frame = new QFrame(CompilerSetDirectoriesWidget);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Plain);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnAdd = new QToolButton(frame);
        btnAdd->setObjectName("btnAdd");
        btnAdd->setAutoRaise(false);

        horizontalLayout->addWidget(btnAdd);

        btnDelete = new QToolButton(frame);
        btnDelete->setObjectName("btnDelete");
        btnDelete->setAutoRaise(false);

        horizontalLayout->addWidget(btnDelete);

        btnRemoveInvalid = new QToolButton(frame);
        btnRemoveInvalid->setObjectName("btnRemoveInvalid");
        btnRemoveInvalid->setToolButtonStyle(Qt::ToolButtonIconOnly);
        btnRemoveInvalid->setAutoRaise(false);

        horizontalLayout->addWidget(btnRemoveInvalid);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(frame);

        listView = new QListView(CompilerSetDirectoriesWidget);
        listView->setObjectName("listView");
        listView->setAcceptDrops(true);
        listView->setDragEnabled(true);
        listView->setDragDropMode(QAbstractItemView::InternalMove);
        listView->setDefaultDropAction(Qt::MoveAction);
        listView->setAlternatingRowColors(true);

        verticalLayout->addWidget(listView);

        QWidget::setTabOrder(btnAdd, btnDelete);
        QWidget::setTabOrder(btnDelete, btnRemoveInvalid);
        QWidget::setTabOrder(btnRemoveInvalid, listView);

        retranslateUi(CompilerSetDirectoriesWidget);

        QMetaObject::connectSlotsByName(CompilerSetDirectoriesWidget);
    } // setupUi

    void retranslateUi(QWidget *CompilerSetDirectoriesWidget)
    {
        CompilerSetDirectoriesWidget->setWindowTitle(QCoreApplication::translate("CompilerSetDirectoriesWidget", "Form", nullptr));
#if QT_CONFIG(tooltip)
        btnAdd->setToolTip(QCoreApplication::translate("CompilerSetDirectoriesWidget", "Add", nullptr));
#endif // QT_CONFIG(tooltip)
        btnAdd->setText(QCoreApplication::translate("CompilerSetDirectoriesWidget", "Add", nullptr));
#if QT_CONFIG(tooltip)
        btnDelete->setToolTip(QCoreApplication::translate("CompilerSetDirectoriesWidget", "Remove", nullptr));
#endif // QT_CONFIG(tooltip)
        btnDelete->setText(QCoreApplication::translate("CompilerSetDirectoriesWidget", "Remove", nullptr));
#if QT_CONFIG(tooltip)
        btnRemoveInvalid->setToolTip(QCoreApplication::translate("CompilerSetDirectoriesWidget", "Remove Invalid", nullptr));
#endif // QT_CONFIG(tooltip)
        btnRemoveInvalid->setText(QCoreApplication::translate("CompilerSetDirectoriesWidget", "Remove Invalid", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CompilerSetDirectoriesWidget: public Ui_CompilerSetDirectoriesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPILERSETDIRECTORIESWIDGET_H
