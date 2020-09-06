#include "NRMethod.h"
#include "NumericalMethod_Method.h"
#include <QDoubleValidator>
#include <math.h>


NRMethod::NRMethod(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	this->setWindowTitle("Newton-Raphson Method");
	this->setWindowIcon(QIcon(":/NumericalMethod/WindowLogo.jpg"));
	this->setFixedSize(900, 800);
	ValidateLineEditToDouble();
	ui.GraphPlot->setInteraction(QCP::iRangeZoom, true);
	ui.GraphPlot->addGraph();
	ui.GraphPlot->graph(0)->setPen(QPen(Qt::red));//line 
	ui.GraphPlot->addGraph();
	ui.GraphPlot->graph(1)->setScatterStyle(QCPScatterStyle::ssCrossCircle); // root points
	ui.GraphPlot->graph(1)->setLineStyle(QCPGraph::lsNone);
	ui.GraphPlot->xAxis->setRange(-5, 10);
	ui.GraphPlot->yAxis->setRange(-5, 10);
	ui.GraphPlot->xAxis->setLabel("x(i)");
	ui.GraphPlot->yAxis->setLabel("f(x(i))");
}

void NRMethod::ValidateLineEditToDouble()
{
	QDoubleValidator* Validate = new QDoubleValidator(0, 100, 100, this);
	ui.MaximumIterationLineEdit->setValidator(Validate);
	ui.AllowedError_LineEdit->setValidator(Validate);
	ui.AllowedError_LineEdit->setValidator(Validate);
}

double NRMethod::F(double x)
{
	return x * std::log10(x) - 1.2;
}

void NRMethod::F(int i)
{
	Yb.push_back(Xa[i] * std::log10(Xa[i]) - 1.2);
}

void NRMethod::AddPointLine(double x, double y)
{
	f.append(x);
	g.append(y);
}

void NRMethod::AddPoint(double x, double y)
{
	s.append(x);
	z.append(y);
}

void NRMethod::PlotLine()
{
	ui.GraphPlot->graph(0)->setData(f, g);
	ui.GraphPlot->replot();
	ui.GraphPlot->update();
}

void NRMethod::Plot()
{
	ui.GraphPlot->graph(1)->setData(s, z);
	ui.GraphPlot->replot();
	ui.GraphPlot->update();
}

void NRMethod::PlotX()
{
	ui.GraphPlot->graph(0)->setData(f, g);
	ui.GraphPlot->graph(1)->setData(s, z);
	ui.GraphPlot->replot();
	ui.GraphPlot->update();
}

void NRMethod::ClearData()
{
	s.clear();
	z.clear();
	Xa.clear();
	Yb.clear();
	c = 0;
	p = 0;
}

void NRMethod::ClearDataPoint()
{
	f.clear();
	g.clear();
	X1a.clear();
	Y1b.clear();
}

double NRMethod::df(double x)
{
	return std::log10(x) + 0.43429;
}

void NRMethod::on_OkayButton_clicked()
{
	Assumed_Root = ui.Aprroximateroot_LineEdit->text().toDouble();
	Allowed_Error = ui.AllowedError_LineEdit->text().toDouble();
	Maximun_Iteration = ui.MaximumIterationLineEdit->text().toDouble();
	for (itr = 1; itr < Maximun_Iteration+1; itr++)
	{
		h = F(Assumed_Root) / df(Assumed_Root);
		Assumed_Root1 = Assumed_Root - h;
		Xa.push_back(Assumed_Root1);
		Assumed_Root = Assumed_Root1;
	}
	for (int i = 0; i < Maximun_Iteration; i++)
	{
		F(i);
	}
	for (int k = 0; k < 500; k++)
	{
		X1a.push_back(k / 50.0 - 1);
		Y1b.push_back(X1a[k] * std::log10(X1a[k]) - 1.2);
		AddPointLine(X1a[k], Y1b[k]);
	}
	PlotLine();
}

void NRMethod::on_ClearButton_clicked()
{
	ClearData();
	ClearDataPoint();
	PlotX();
}

void NRMethod::on_IterationRootButton_clicked()
{
	if (c < Maximun_Iteration)
	{
		for (int i = p; i < Maximun_Iteration; i++)
		{
			AddPoint(Xa[i], Yb[i]);
			Plot();
			p++;
			break;
		}
		c++;
	}
}

void NRMethod::on_BackButton_clicked()
{
	this->destroy(true);
	NumericalMethod_Method* Method = new NumericalMethod_Method();
	Method->show();

}
