#include "BisectionMethod.h"
#include "NumericalMethod_Method.h"
#include <QDoubleValidator>
#include <math.h>


BisectionMethod::BisectionMethod(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	this->setWindowTitle("Bisection Method");
	this->setWindowIcon(QIcon(":/NumericalMethod/WindowLogo.jpg"));
	this->setFixedSize(900, 800);
	ValidateLineEditToDouble();
	ui.widget->setInteraction(QCP::iRangeZoom, true);
	ui.widget->addGraph();
	ui.widget->graph(0)-> setPen(QPen(Qt::red)); //line graph
	ui.widget->addGraph();
	ui.widget->graph(1)->setScatterStyle(QCPScatterStyle::ssCrossCircle); // root points
	ui.widget->graph(1)->setLineStyle(QCPGraph::lsNone);
	ui.widget->xAxis->setRange(-5, 10);
	ui.widget->yAxis->setRange(-10, 10);
	ui.widget->xAxis->setLabel("x(i)");
	ui.widget->yAxis->setLabel("f(x(i))");
}

void BisectionMethod::ValidateLineEditToDouble()
{
	QDoubleValidator* Validator = new QDoubleValidator(0, 100, 5, this);
	ui.GuessALineEdit->setValidator(Validator);
	ui.GuessBlineEdit->setValidator(Validator);
	ui.ErrorLineEdit->setValidator(Validator);
	ui.Iteration_Line->setValidator(Validator);
}

void BisectionMethod::F(int i)
{
	Y1b.push_back(X1a[i] * X1a[i] * X1a[i] - 4 * X1a[i] - 9);
}

double BisectionMethod::F(double x)
{
	return x * x * x - 4 * x - 9;
}

void BisectionMethod::Bisect(double* x, double a, double b, int* NumberOfIteration)
{
	*x = (a + b) / 2;
	++(*NumberOfIteration);
	X1a.push_back(*x);
}

void BisectionMethod::Plot()
{
	ui.widget->graph(0)->setData(Qv_x, QV_y);
	ui.widget->replot();
	ui.widget->update();
}

void BisectionMethod::AddPointEquation(double x, double y)
{
	Qv_x.append(x);
	QV_y.append(y);
}

void BisectionMethod::AddPoint(double p, double q)
{
	s.append(p);
	z.append(q);
}

void BisectionMethod::ClearData()
{
	Qv_x.clear();
	QV_y.clear();
	Xa.clear();
	Ya.clear();
}

void BisectionMethod::ClearDataPoint()
{
	s.clear();
	z.clear();
	X1a.clear();
	Y1b.clear();
	c = 0;
	f = 0;

}

void BisectionMethod::Plot(int i)
{
	ui.widget->graph(1)->setData(s, z);
	ui.widget->replot();
	ui.widget->update();
}

void BisectionMethod::Plotx()
{
	ui.widget->graph(0)->setData(Qv_x, QV_y);
	ui.widget->graph(1)->setData(s, z);
	ui.widget->replot();
	ui.widget->update();
}


void BisectionMethod::on_BackButton_clicked()
{
	this->destroy(true);
	NumericalMethod_Method* Method = new NumericalMethod_Method();
	Method->show();
}

void BisectionMethod::on_OkayButton_clicked()
{
	Initial_Value_A = ui.GuessALineEdit->text().toDouble();
	Initial_Value_B = ui.GuessBlineEdit->text().toDouble();
	Error_Value = ui.ErrorLineEdit->text().toDouble();
    Max_Iteration = ui.Iteration_Line->text().toDouble();
	Bisect(&x, Initial_Value_A, Initial_Value_B, &iTR);
	do 
	{
		if (F(Initial_Value_A) * F(x) < 0)
		{
			Initial_Value_B = x;
		}
		else
		{
			Initial_Value_A = x;
		}
		Bisect(&x, Initial_Value_A, Initial_Value_B, &iTR);
		if (fabs(X1 - x) < Error_Value)
		{
			printf("root found");
		}
	} while (iTR<Max_Iteration);
	for (int k = 0; k < Max_Iteration; k++)
	{
		F(k);
	}
	for (int k=0; k<1000 ; k++)
	{
		Xa.push_back(k / 50.0 - 1);
		Ya.push_back(Xa[k] * Xa[k] * Xa[k] - 4 * Xa[k] - 9);
		AddPointEquation(Xa[k], Ya[k]);
	}
	Plot();
	ui.widget->replot();
	Initial_Value_A = 0;
	Initial_Value_B = 0;
	Error_Value = 0;
	iTR = 0;
}

void BisectionMethod::on_ClearButton_clicked()
{
	ClearData();
	ClearDataPoint();
	Plotx();
}

void BisectionMethod::on_IterationButton_clicked()
{
	if (c < Max_Iteration)
	{
		for (int i = f ; i < Max_Iteration; i++)
		{
			AddPoint(X1a[i], Y1b[i]);
			Plot(i);
			f++;
			break;
		}
		c++;
	}
}

