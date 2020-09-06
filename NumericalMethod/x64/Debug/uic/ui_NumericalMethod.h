/********************************************************************************
** Form generated from reading UI file 'NumericalMethod.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NUMERICALMETHOD_H
#define UI_NUMERICALMETHOD_H

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

QT_BEGIN_NAMESPACE

class Ui_NumericalMethodClass
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLineEdit *UsernameLineEdit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *PasswordLineEdit;
    QSpacerItem *verticalSpacer_2;
    QPushButton *LoginButton;
    QLabel *label_9;
    QLabel *label_8;

    void setupUi(QMainWindow *NumericalMethodClass)
    {
        if (NumericalMethodClass->objectName().isEmpty())
            NumericalMethodClass->setObjectName(QString::fromUtf8("NumericalMethodClass"));
        NumericalMethodClass->resize(600, 400);
        NumericalMethodClass->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(NumericalMethodClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(150, 230, 277, 145));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        UsernameLineEdit = new QLineEdit(layoutWidget);
        UsernameLineEdit->setObjectName(QString::fromUtf8("UsernameLineEdit"));
        UsernameLineEdit->setStyleSheet(QString::fromUtf8("border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.472637 rgba(125, 43, 224, 246), stop:1 rgba(255, 255, 255, 255));"));

        horizontalLayout->addWidget(UsernameLineEdit);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(10, 25, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        PasswordLineEdit = new QLineEdit(layoutWidget);
        PasswordLineEdit->setObjectName(QString::fromUtf8("PasswordLineEdit"));
        PasswordLineEdit->setCursor(QCursor(Qt::IBeamCursor));
        PasswordLineEdit->setStyleSheet(QString::fromUtf8("border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.472637 rgba(125, 43, 224, 246), stop:1 rgba(255, 255, 255, 255));"));
        PasswordLineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(PasswordLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer_2 = new QSpacerItem(10, 25, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        LoginButton = new QPushButton(layoutWidget);
        LoginButton->setObjectName(QString::fromUtf8("LoginButton"));
        QFont font1;
        font1.setPointSize(12);
        LoginButton->setFont(font1);
        LoginButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-top-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));\n"
"border-left-color: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 255, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));\n"
"border-bottom-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(0, 0, 0, 255), stop:0.05 rgba(14, 8, 73, 255), stop:0.36 rgba(28, 17, 145, 255), stop:0.6 rgba(126, 14, 81, 255), stop:0.75 rgba(234, 11, 11, 255), stop:0.79 rgba(244, 70, 5, 255), stop:0.86 rgba(255, 136, 0, 255), stop:0.935 rgba(239, 236, 55, 255));\n"
"border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.512438 rgba(103, 34, 79, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-right-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0.363184 rgba(88, 114, 74, 2"
                        "49), stop:1 rgba(255, 255, 255, 255));\n"
"gridline-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"selection-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));"));
        LoginButton->setAutoDefault(false);
        LoginButton->setFlat(false);

        verticalLayout_2->addWidget(LoginButton);

        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(120, 60, 411, 71));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Times New Roman"));
        font2.setPointSize(15);
        font2.setItalic(false);
        label_9->setFont(font2);
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(120, 0, 401, 81));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Times New Roman"));
        font3.setPointSize(20);
        label_8->setFont(font3);
        NumericalMethodClass->setCentralWidget(centralWidget);

        retranslateUi(NumericalMethodClass);

        LoginButton->setDefault(false);


        QMetaObject::connectSlotsByName(NumericalMethodClass);
    } // setupUi

    void retranslateUi(QMainWindow *NumericalMethodClass)
    {
        NumericalMethodClass->setWindowTitle(QCoreApplication::translate("NumericalMethodClass", "NumericalMethod", nullptr));
        label->setText(QCoreApplication::translate("NumericalMethodClass", "Username:", nullptr));
        label_2->setText(QCoreApplication::translate("NumericalMethodClass", "Password:", nullptr));
        LoginButton->setText(QCoreApplication::translate("NumericalMethodClass", "Login", nullptr));
        label_9->setText(QCoreApplication::translate("NumericalMethodClass", "Supervisor: Dr. -lng. Deepranjan Dongol", nullptr));
        label_8->setText(QCoreApplication::translate("NumericalMethodClass", "Project by: Saiman Khatiwada", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NumericalMethodClass: public Ui_NumericalMethodClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NUMERICALMETHOD_H
