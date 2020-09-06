/********************************************************************************
** Form generated from reading UI file 'BisectionMethod.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BISECTIONMETHOD_H
#define UI_BISECTIONMETHOD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_BisectionMethod
{
public:
    QWidget *centralWidget;
    QLabel *label_3;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *OkayButton;
    QPushButton *BackButton;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_4;
    QLineEdit *GuessALineEdit;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QSpacerItem *verticalSpacer_3;
    QLineEdit *GuessBlineEdit;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *ErrorLineEdit;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *Iteration_Line;
    QCustomPlot *widget;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_4;
    QPushButton *IterationButton;
    QPushButton *ClearButton;

    void setupUi(QMainWindow *BisectionMethod)
    {
        if (BisectionMethod->objectName().isEmpty())
            BisectionMethod->setObjectName(QString::fromUtf8("BisectionMethod"));
        BisectionMethod->resize(900, 800);
        BisectionMethod->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(BisectionMethod);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 100, 151, 31));
        QFont font;
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 300, 95, 72));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        OkayButton = new QPushButton(layoutWidget);
        OkayButton->setObjectName(QString::fromUtf8("OkayButton"));
        OkayButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-top-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));\n"
"border-left-color: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 255, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));\n"
"border-bottom-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(0, 0, 0, 255), stop:0.05 rgba(14, 8, 73, 255), stop:0.36 rgba(28, 17, 145, 255), stop:0.6 rgba(126, 14, 81, 255), stop:0.75 rgba(234, 11, 11, 255), stop:0.79 rgba(244, 70, 5, 255), stop:0.86 rgba(255, 136, 0, 255), stop:0.935 rgba(239, 236, 55, 255));\n"
"border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.512438 rgba(103, 34, 79, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-right-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.363184 rgba(88, 114, 74, 2"
                        "49), stop:1 rgba(255, 255, 255, 255));\n"
"gridline-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"selection-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));"));

        verticalLayout->addWidget(OkayButton);

        BackButton = new QPushButton(layoutWidget);
        BackButton->setObjectName(QString::fromUtf8("BackButton"));
        BackButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-top-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));\n"
"border-left-color: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 255, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));\n"
"border-bottom-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(0, 0, 0, 255), stop:0.05 rgba(14, 8, 73, 255), stop:0.36 rgba(28, 17, 145, 255), stop:0.6 rgba(126, 14, 81, 255), stop:0.75 rgba(234, 11, 11, 255), stop:0.79 rgba(244, 70, 5, 255), stop:0.86 rgba(255, 136, 0, 255), stop:0.935 rgba(239, 236, 55, 255));\n"
"border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.512438 rgba(103, 34, 79, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-right-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.363184 rgba(88, 114, 74, 2"
                        "49), stop:1 rgba(255, 255, 255, 255));\n"
"gridline-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"selection-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));"));

        verticalLayout->addWidget(BackButton);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 70, 141, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 150, 71, 58));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        verticalLayout_2->addWidget(label_4);

        GuessALineEdit = new QLineEdit(layoutWidget2);
        GuessALineEdit->setObjectName(QString::fromUtf8("GuessALineEdit"));

        verticalLayout_2->addWidget(GuessALineEdit);

        layoutWidget3 = new QWidget(centralWidget);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(90, 150, 71, 58));
        verticalLayout_3 = new QVBoxLayout(layoutWidget3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        verticalLayout_3->addWidget(label_5);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        GuessBlineEdit = new QLineEdit(layoutWidget3);
        GuessBlineEdit->setObjectName(QString::fromUtf8("GuessBlineEdit"));

        verticalLayout_3->addWidget(GuessBlineEdit);

        layoutWidget4 = new QWidget(centralWidget);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(10, 220, 254, 26));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget4);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        horizontalLayout_2->addWidget(label_6);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        ErrorLineEdit = new QLineEdit(layoutWidget4);
        ErrorLineEdit->setObjectName(QString::fromUtf8("ErrorLineEdit"));

        horizontalLayout_2->addWidget(ErrorLineEdit);

        layoutWidget5 = new QWidget(centralWidget);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(10, 260, 293, 26));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget5);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        horizontalLayout_3->addWidget(label_7);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        Iteration_Line = new QLineEdit(layoutWidget5);
        Iteration_Line->setObjectName(QString::fromUtf8("Iteration_Line"));

        horizontalLayout_3->addWidget(Iteration_Line);

        widget = new QCustomPlot(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(300, -10, 601, 811));
        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(120, 300, 111, 65));
        verticalLayout_4 = new QVBoxLayout(widget1);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        IterationButton = new QPushButton(widget1);
        IterationButton->setObjectName(QString::fromUtf8("IterationButton"));
        IterationButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-top-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));\n"
"border-left-color: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 255, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));\n"
"border-bottom-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(0, 0, 0, 255), stop:0.05 rgba(14, 8, 73, 255), stop:0.36 rgba(28, 17, 145, 255), stop:0.6 rgba(126, 14, 81, 255), stop:0.75 rgba(234, 11, 11, 255), stop:0.79 rgba(244, 70, 5, 255), stop:0.86 rgba(255, 136, 0, 255), stop:0.935 rgba(239, 236, 55, 255));\n"
"border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.512438 rgba(103, 34, 79, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-right-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.363184 rgba(88, 114, 74, 2"
                        "49), stop:1 rgba(255, 255, 255, 255));\n"
"gridline-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"selection-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));"));

        verticalLayout_4->addWidget(IterationButton);

        ClearButton = new QPushButton(widget1);
        ClearButton->setObjectName(QString::fromUtf8("ClearButton"));
        ClearButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-top-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));\n"
"border-left-color: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 255, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));\n"
"border-bottom-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(0, 0, 0, 255), stop:0.05 rgba(14, 8, 73, 255), stop:0.36 rgba(28, 17, 145, 255), stop:0.6 rgba(126, 14, 81, 255), stop:0.75 rgba(234, 11, 11, 255), stop:0.79 rgba(244, 70, 5, 255), stop:0.86 rgba(255, 136, 0, 255), stop:0.935 rgba(239, 236, 55, 255));\n"
"border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.512438 rgba(103, 34, 79, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-right-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.363184 rgba(88, 114, 74, 2"
                        "49), stop:1 rgba(255, 255, 255, 255));\n"
"gridline-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"selection-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));"));

        verticalLayout_4->addWidget(ClearButton);

        BisectionMethod->setCentralWidget(centralWidget);

        retranslateUi(BisectionMethod);

        QMetaObject::connectSlotsByName(BisectionMethod);
    } // setupUi

    void retranslateUi(QMainWindow *BisectionMethod)
    {
        BisectionMethod->setWindowTitle(QCoreApplication::translate("BisectionMethod", "BisectionMethod", nullptr));
        label_3->setText(QCoreApplication::translate("BisectionMethod", "Enter initial guess:", nullptr));
        OkayButton->setText(QCoreApplication::translate("BisectionMethod", "Okay", nullptr));
        BackButton->setText(QCoreApplication::translate("BisectionMethod", "Back", nullptr));
        label->setText(QCoreApplication::translate("BisectionMethod", "<html><head/><body><p><span style=\" font-style:italic;\">f</span>(x):</p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("BisectionMethod", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">X</span><span style=\" font-size:9pt; font-weight:600; vertical-align:super;\">3</span><span style=\" font-size:9pt; font-weight:600;\">-4</span><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">X</span><span style=\" font-size:9pt; font-weight:600;\">-9</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("BisectionMethod", "a", nullptr));
        label_5->setText(QCoreApplication::translate("BisectionMethod", "b", nullptr));
        label_6->setText(QCoreApplication::translate("BisectionMethod", "Allowed Error:", nullptr));
        label_7->setText(QCoreApplication::translate("BisectionMethod", "Maximum Iteration:", nullptr));
        IterationButton->setText(QCoreApplication::translate("BisectionMethod", "Add iteration root", nullptr));
        ClearButton->setText(QCoreApplication::translate("BisectionMethod", "Clear graph", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BisectionMethod: public Ui_BisectionMethod {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BISECTIONMETHOD_H
