#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "Users.h"
#include "welcome.h"
#include "registerwindow.h"
LoginWindow::LoginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);

    ui->ErrorLabel->setVisible(false);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_LoginPushButton_clicked()
{

    QString name = ui->UsernameLineEdit->text();
    QString pass = ui->PasswordLineEdit->text();


    for (int x = 0; x<100;x++)
    {
        if((name==usernames[x])&&(pass==passwords[x]))
        {
            index = x;
            Welcome* welcome = new Welcome(name,ages[x], this);
            welcome->show();
            ui->ErrorLabel->setVisible(false);

        }
        else
        {
            ui->ErrorLabel->setVisible(true);
        }
    }
}


void LoginWindow::on_RegisterPushButton_clicked()
{
    registerwindow* regwindow = new registerwindow();
    regwindow ->show();
}

