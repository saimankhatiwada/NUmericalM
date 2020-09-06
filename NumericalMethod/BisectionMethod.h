#pragma once

#include <QMainWindow>
#include "ui_BisectionMethod.h"
#include <vector>



class BisectionMethod : public QMainWindow
{
	Q_OBJECT

public:
	BisectionMethod(QWidget *parent = Q_NULLPTR);

	void ValidateLineEditToDouble();

	void F( int i);
	double F(double x);
	void Bisect(double* x, double a, double b, int* NumberOfIteration);

	void Plot();
	void AddPointEquation(double x, double y);
	void AddPoint(double p, double q);

	void ClearData();
	void ClearDataPoint();
	void Plot(int i);
	void Plotx();


private slots:
	void on_BackButton_clicked();
	void on_OkayButton_clicked();
	void on_ClearButton_clicked();
	void on_IterationButton_clicked();

private:
	Ui::BisectionMethod ui;
	int iTR = 0;
	int c = 0, f=0;
	double x, X1;
	QVector<double> Qv_x, QV_y;
	QVector<double> s, z;
	double Initial_Value_A;
	double Initial_Value_B;
	double Error_Value;
	double Max_Iteration;
	std::vector<double> Xa, Ya;
	std::vector<double> X1a, Y1b;
};

