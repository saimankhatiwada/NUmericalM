#pragma once

#include <QMainWindow>
#include "ui_RKMethod.h"

class RKMethod : public QMainWindow
{
	Q_OBJECT

public:
	RKMethod(QWidget *parent = Q_NULLPTR);

private:
	Ui::RKMethod ui;
};
