#pragma once

#include <QMainWindow>
#include "ui_NumericalMethod_Method.h"

class NumericalMethod_Method : public QMainWindow
{
	Q_OBJECT

public:
	NumericalMethod_Method(QWidget *parent = Q_NULLPTR);

private slots:
	void on_BisectionButton_clicked();
	void on_NRMethodBUtton_clicked();
	void on_RKMethodButton_clicked();

private:
	Ui::NumericalMethod_Method ui;
};
