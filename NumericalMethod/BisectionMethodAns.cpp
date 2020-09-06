#include "BisectionMethodAns.h"

BisectionMethodAns::BisectionMethodAns(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	this->setFixedSize(400, 400);
	this->setWindowFlag(Qt::FramelessWindowHint);
}