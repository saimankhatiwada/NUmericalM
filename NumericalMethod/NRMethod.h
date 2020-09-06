#pragma once

#include <QMainWindow>
#include "ui_NRMethod.h"
#include <vector>

class NRMethod : public QMainWindow
{
	Q_OBJECT

public:
	NRMethod(QWidget *parent = Q_NULLPTR);

	void ValidateLineEditToDouble();

	double F(double x);
	double df(double x);
	void F(int i);

	void AddPointLine(double x, double y);
	void AddPoint(double x, double y);

	void PlotLine();
	void Plot();
	void PlotX();

	void ClearData();
	void ClearDataPoint();


private slots :
	void on_OkayButton_clicked();
	void on_ClearButton_clicked();
	void on_IterationRootButton_clicked();
	void on_BackButton_clicked();

private:
	Ui::NRMethod ui;
	int itr, c = 0, p = 0;
	double Allowed_Error;
	double Maximun_Iteration;
	double Assumed_Root, Assumed_Root1;
	double h;
	QVector<double> s, z;//root points
	std::vector<double> Xa, Yb;
	QVector<double> f, g; //line
	std::vector<double> X1a, Y1b;
};
