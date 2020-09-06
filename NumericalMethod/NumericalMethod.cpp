#include "NumericalMethod.h"
#include "NumericalMethod_Method.h"
#include <QPixmap>
#include <QMessageBox>

NumericalMethod::NumericalMethod(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    this->setFixedSize(600,400);
}

void NumericalMethod::on_LoginButton_clicked()
{
    QString Usernaame = "admin";
    QString Password  = "admin";
    QString Checking_Username = ui.UsernameLineEdit->text();
    QString Checking_Password = ui.PasswordLineEdit->text();
    if (Checking_Username != NULL && Checking_Password != NULL)
    {
        if (Checking_Username == Usernaame && Checking_Password != Password)
        {
            QMessageBox::information(this, "Login Failed", "Incorrect Password");
        }
        if (Checking_Password == Password && Checking_Username != Usernaame)
        {
            QMessageBox::information(this, "Login Failed", "Incorrect Username");
        }
        if (Checking_Username != Usernaame && Checking_Password != Password)
        {
            QMessageBox::information(this, "Login Failed", "Incorrect Username and Password");
        }
        if (Checking_Username == Usernaame && Checking_Password == Password)
        {
            this->destroy(true);
            NumericalMethod_Method* Method = new NumericalMethod_Method();
            Method->show();
        }
    }
    if (Checking_Username == NULL && Checking_Password != NULL)
    {
        QMessageBox::critical(this, "Invalid ", "Enter Username");
    }
    if (Checking_Username != NULL && Checking_Password == NULL)
    {
        QMessageBox::critical(this, "Invalid ", "Enter Password");
    }
    if(Checking_Username == NULL && Checking_Password == NULL)
    {
        QMessageBox::critical(this, "Invalid ","Enter Username and Password");
    }
}
