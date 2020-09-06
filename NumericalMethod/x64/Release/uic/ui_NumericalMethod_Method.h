/********************************************************************************
** Form generated from reading UI file 'NumericalMethod_Method.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NUMERICALMETHOD_METHOD_H
#define UI_NUMERICALMETHOD_METHOD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NumericalMethod_Method
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *BisectionButton;
    QSpacerItem *verticalSpacer;
    QPushButton *NRMethodBUtton;
    QSpacerItem *verticalSpacer_2;
    QPushButton *RKMethodButton;
    QSpacerItem *verticalSpacer_3;
    QLabel *label;

    void setupUi(QWidget *NumericalMethod_Method)
    {
        if (NumericalMethod_Method->objectName().isEmpty())
            NumericalMethod_Method->setObjectName(QString::fromUtf8("NumericalMethod_Method"));
        NumericalMethod_Method->resize(800, 565);
        NumericalMethod_Method->setStyleSheet(QString::fromUtf8(""));
        layoutWidget = new QWidget(NumericalMethod_Method);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 140, 591, 361));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        BisectionButton = new QPushButton(layoutWidget);
        BisectionButton->setObjectName(QString::fromUtf8("BisectionButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BisectionButton->sizePolicy().hasHeightForWidth());
        BisectionButton->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(20);
        font.setBold(false);
        font.setWeight(50);
        BisectionButton->setFont(font);
        BisectionButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-top-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));\n"
"border-left-color: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 255, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));\n"
"border-bottom-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(0, 0, 0, 255), stop:0.05 rgba(14, 8, 73, 255), stop:0.36 rgba(28, 17, 145, 255), stop:0.6 rgba(126, 14, 81, 255), stop:0.75 rgba(234, 11, 11, 255), stop:0.79 rgba(244, 70, 5, 255), stop:0.86 rgba(255, 136, 0, 255), stop:0.935 rgba(239, 236, 55, 255));\n"
"border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.512438 rgba(103, 34, 79, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-right-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.363184 rgba(88, 114, 74, 2"
                        "49), stop:1 rgba(255, 255, 255, 255));\n"
"gridline-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"selection-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));"));

        verticalLayout->addWidget(BisectionButton);

        verticalSpacer = new QSpacerItem(10, 25, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        NRMethodBUtton = new QPushButton(layoutWidget);
        NRMethodBUtton->setObjectName(QString::fromUtf8("NRMethodBUtton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(NRMethodBUtton->sizePolicy().hasHeightForWidth());
        NRMethodBUtton->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(20);
        NRMethodBUtton->setFont(font1);
        NRMethodBUtton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-top-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));\n"
"border-left-color: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 255, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));\n"
"border-bottom-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(0, 0, 0, 255), stop:0.05 rgba(14, 8, 73, 255), stop:0.36 rgba(28, 17, 145, 255), stop:0.6 rgba(126, 14, 81, 255), stop:0.75 rgba(234, 11, 11, 255), stop:0.79 rgba(244, 70, 5, 255), stop:0.86 rgba(255, 136, 0, 255), stop:0.935 rgba(239, 236, 55, 255));\n"
"border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.512438 rgba(103, 34, 79, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-right-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.363184 rgba(88, 114, 74, 2"
                        "49), stop:1 rgba(255, 255, 255, 255));\n"
"gridline-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"selection-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));"));

        verticalLayout->addWidget(NRMethodBUtton);

        verticalSpacer_2 = new QSpacerItem(10, 25, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        RKMethodButton = new QPushButton(layoutWidget);
        RKMethodButton->setObjectName(QString::fromUtf8("RKMethodButton"));
        sizePolicy1.setHeightForWidth(RKMethodButton->sizePolicy().hasHeightForWidth());
        RKMethodButton->setSizePolicy(sizePolicy1);
        RKMethodButton->setFont(font1);
        RKMethodButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-top-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));\n"
"border-left-color: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 255, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));\n"
"border-bottom-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(0, 0, 0, 255), stop:0.05 rgba(14, 8, 73, 255), stop:0.36 rgba(28, 17, 145, 255), stop:0.6 rgba(126, 14, 81, 255), stop:0.75 rgba(234, 11, 11, 255), stop:0.79 rgba(244, 70, 5, 255), stop:0.86 rgba(255, 136, 0, 255), stop:0.935 rgba(239, 236, 55, 255));\n"
"border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.512438 rgba(103, 34, 79, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-right-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.363184 rgba(88, 114, 74, 2"
                        "49), stop:1 rgba(255, 255, 255, 255));\n"
"gridline-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"selection-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));"));

        verticalLayout->addWidget(RKMethodButton);

        verticalSpacer_3 = new QSpacerItem(10, 25, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        label = new QLabel(NumericalMethod_Method);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(210, 40, 411, 51));
        QFont font2;
        font2.setPointSize(30);
        label->setFont(font2);

        retranslateUi(NumericalMethod_Method);

        QMetaObject::connectSlotsByName(NumericalMethod_Method);
    } // setupUi

    void retranslateUi(QWidget *NumericalMethod_Method)
    {
        NumericalMethod_Method->setWindowTitle(QCoreApplication::translate("NumericalMethod_Method", "NumericalMethod_Method", nullptr));
        BisectionButton->setText(QCoreApplication::translate("NumericalMethod_Method", "Bisection Method", nullptr));
        NRMethodBUtton->setText(QCoreApplication::translate("NumericalMethod_Method", "Newton-Raphson Method", nullptr));
        RKMethodButton->setText(QCoreApplication::translate("NumericalMethod_Method", "Rugen-Kutta Method", nullptr));
        label->setText(QCoreApplication::translate("NumericalMethod_Method", "Select the method", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NumericalMethod_Method: public Ui_NumericalMethod_Method {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NUMERICALMETHOD_METHOD_H
