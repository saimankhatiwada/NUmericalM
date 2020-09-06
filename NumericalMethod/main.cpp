#include "NumericalMethod.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    NumericalMethod w;
    w.show();
    w.setWindowTitle("Numerical Method:Login");
    w.setWindowIcon(QIcon(":/NumericalMethod/WindowLogo.jpg"));
    return a.exec();
}
