#include "NumericalMethod_Method.h"
#include "BisectionMethod.h"
#include "NRMethod.h"
#include "RKMethod.h"

NumericalMethod_Method::NumericalMethod_Method(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	this->setWindowTitle("Numerical Method");
	this->setFixedSize(800, 500);
	this->setWindowIcon(QIcon(":/NumericalMethod/WindowLogo.jpg"));
}

void NumericalMethod_Method::on_BisectionButton_clicked()
{
	this->destroy(true);
	BisectionMethod* Bisection = new BisectionMethod();
	Bisection->show();
}

void NumericalMethod_Method::on_NRMethodBUtton_clicked()
{
	this->destroy(true);
	NRMethod* NR = new NRMethod();
	NR->show();
}

void NumericalMethod_Method::on_RKMethodButton_clicked()
{
	this->destroy(true);
	RKMethod* RK = new RKMethod();
	RK->show();
}
