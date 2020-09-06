#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_NumericalMethod.h"

class NumericalMethod : public QMainWindow
{
    Q_OBJECT

public:
    NumericalMethod(QWidget *parent = Q_NULLPTR);

private slots:
    void on_LoginButton_clicked();

private:
    Ui::NumericalMethodClass ui;

    
};
