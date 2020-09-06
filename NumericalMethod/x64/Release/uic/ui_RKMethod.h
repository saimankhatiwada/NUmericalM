/********************************************************************************
** Form generated from reading UI file 'RKMethod.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RKMETHOD_H
#define UI_RKMETHOD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RKMethod
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *RKMethod)
    {
        if (RKMethod->objectName().isEmpty())
            RKMethod->setObjectName(QString::fromUtf8("RKMethod"));
        RKMethod->resize(400, 300);
        menuBar = new QMenuBar(RKMethod);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        RKMethod->setMenuBar(menuBar);
        mainToolBar = new QToolBar(RKMethod);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        RKMethod->addToolBar(mainToolBar);
        centralWidget = new QWidget(RKMethod);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        RKMethod->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(RKMethod);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        RKMethod->setStatusBar(statusBar);

        retranslateUi(RKMethod);

        QMetaObject::connectSlotsByName(RKMethod);
    } // setupUi

    void retranslateUi(QMainWindow *RKMethod)
    {
        RKMethod->setWindowTitle(QCoreApplication::translate("RKMethod", "RKMethod", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RKMethod: public Ui_RKMethod {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RKMETHOD_H
