/********************************************************************************
** Form generated from reading UI file 'NRMethod.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NRMETHOD_H
#define UI_NRMETHOD_H

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

class Ui_NRMethod
{
public:
    QWidget *centralWidget;
    QCustomPlot *GraphPlot;
    QLabel *label_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *Aprroximateroot_LineEdit;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *AllowedError_LineEdit;
    QSpacerItem *horizontalSpacer_7;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QSpacerItem *verticalSpacer;
    QLineEdit *MaximumIterationLineEdit;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *OkayButton;
    QPushButton *BackButton;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_3;
    QPushButton *IterationRootButton;
    QPushButton *ClearButton;

    void setupUi(QMainWindow *NRMethod)
    {
        if (NRMethod->objectName().isEmpty())
            NRMethod->setObjectName(QString::fromUtf8("NRMethod"));
        NRMethod->resize(900, 800);
        NRMethod->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(NRMethod);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        GraphPlot = new QCustomPlot(centralWidget);
        GraphPlot->setObjectName(QString::fromUtf8("GraphPlot"));
        GraphPlot->setGeometry(QRect(250, 0, 651, 801));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 100, 211, 41));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 70, 181, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 150, 211, 26));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        Aprroximateroot_LineEdit = new QLineEdit(layoutWidget1);
        Aprroximateroot_LineEdit->setObjectName(QString::fromUtf8("Aprroximateroot_LineEdit"));

        horizontalLayout_2->addWidget(Aprroximateroot_LineEdit);

        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(-10, 180, 241, 26));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_3->addWidget(label_5);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        AllowedError_LineEdit = new QLineEdit(layoutWidget2);
        AllowedError_LineEdit->setObjectName(QString::fromUtf8("AllowedError_LineEdit"));

        horizontalLayout_3->addWidget(AllowedError_LineEdit);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        layoutWidget3 = new QWidget(centralWidget);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 220, 221, 102));
        verticalLayout = new QVBoxLayout(layoutWidget3);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        MaximumIterationLineEdit = new QLineEdit(layoutWidget3);
        MaximumIterationLineEdit->setObjectName(QString::fromUtf8("MaximumIterationLineEdit"));

        verticalLayout->addWidget(MaximumIterationLineEdit);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 330, 95, 65));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        OkayButton = new QPushButton(widget);
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

        verticalLayout_2->addWidget(OkayButton);

        BackButton = new QPushButton(widget);
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

        verticalLayout_2->addWidget(BackButton);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(110, 330, 112, 65));
        verticalLayout_3 = new QVBoxLayout(widget1);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        IterationRootButton = new QPushButton(widget1);
        IterationRootButton->setObjectName(QString::fromUtf8("IterationRootButton"));
        IterationRootButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-top-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));\n"
"border-left-color: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 255, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));\n"
"border-bottom-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(0, 0, 0, 255), stop:0.05 rgba(14, 8, 73, 255), stop:0.36 rgba(28, 17, 145, 255), stop:0.6 rgba(126, 14, 81, 255), stop:0.75 rgba(234, 11, 11, 255), stop:0.79 rgba(244, 70, 5, 255), stop:0.86 rgba(255, 136, 0, 255), stop:0.935 rgba(239, 236, 55, 255));\n"
"border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.512438 rgba(103, 34, 79, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-right-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.363184 rgba(88, 114, 74, 2"
                        "49), stop:1 rgba(255, 255, 255, 255));\n"
"gridline-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"selection-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));"));

        verticalLayout_3->addWidget(IterationRootButton);

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

        verticalLayout_3->addWidget(ClearButton);

        NRMethod->setCentralWidget(centralWidget);

        retranslateUi(NRMethod);

        QMetaObject::connectSlotsByName(NRMethod);
    } // setupUi

    void retranslateUi(QMainWindow *NRMethod)
    {
        NRMethod->setWindowTitle(QCoreApplication::translate("NRMethod", "NRMethod", nullptr));
        label_3->setText(QCoreApplication::translate("NRMethod", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600;\">Enter the approximate root</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("NRMethod", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">f(x)=</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("NRMethod", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">x </span><span style=\" font-size:9pt; font-weight:600;\">log</span><span style=\" font-size:9pt; font-weight:600; vertical-align:sub;\">10</span><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">x - 1.2</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("NRMethod", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600; font-style:italic;\">x</span><span style=\" font-size:9pt; font-weight:600; font-style:italic; vertical-align:sub;\">0</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("NRMethod", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600;\">Error</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("NRMethod", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600;\">Maximum allowed iterations</span></p><p><br/></p></body></html>", nullptr));
        OkayButton->setText(QCoreApplication::translate("NRMethod", "Okay", nullptr));
        BackButton->setText(QCoreApplication::translate("NRMethod", "Back", nullptr));
        IterationRootButton->setText(QCoreApplication::translate("NRMethod", "Add Iteration root", nullptr));
        ClearButton->setText(QCoreApplication::translate("NRMethod", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NRMethod: public Ui_NRMethod {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NRMETHOD_H
