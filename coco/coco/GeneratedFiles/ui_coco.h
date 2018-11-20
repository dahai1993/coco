/********************************************************************************
** Form generated from reading UI file 'coco.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COCO_H
#define UI_COCO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cocoClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *cocoClass)
    {
        if (cocoClass->objectName().isEmpty())
            cocoClass->setObjectName(QStringLiteral("cocoClass"));
        cocoClass->resize(600, 400);
        menuBar = new QMenuBar(cocoClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        cocoClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(cocoClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        cocoClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(cocoClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        cocoClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(cocoClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        cocoClass->setStatusBar(statusBar);

        retranslateUi(cocoClass);

        QMetaObject::connectSlotsByName(cocoClass);
    } // setupUi

    void retranslateUi(QMainWindow *cocoClass)
    {
        cocoClass->setWindowTitle(QApplication::translate("cocoClass", "coco", 0));
    } // retranslateUi

};

namespace Ui {
    class cocoClass: public Ui_cocoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COCO_H
