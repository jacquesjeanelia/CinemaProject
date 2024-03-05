#include "welcome.h"
#include "ui_welcome.h"
#include "Users.h"
#include "loginwindow.h"

Welcome::Welcome(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Welcome)
{
    ui->setupUi(this);


    QString username = usernames[index];
    QString age = QString::number(ages[index]);
    QPixmap pix (":/new/prefix1/Welcome Image.jpg");
    int w = ui->ImageLabel->width();
    int h = ui->ImageLabel->height();
    //ui->ImageLabel->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    ui->ImageLabel->setPixmap(pix.scaled(300,200));
}

Welcome::~Welcome()
{
    delete ui;
}

void Welcome::setIndex(int x)
{
    ui->HelloLabel->setText("Hello "+ usernames[x] + ", " + QString ::number(ages[x]));
}


void Welcome::on_LogoutButton_clicked()
{
    hide();
    LoginWindow *loginWindow = new LoginWindow();
    loginWindow->show();

}



