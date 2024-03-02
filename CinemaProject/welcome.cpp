#include "welcome.h"
#include "ui_welcome.h"
#include "Users.h"

Welcome::Welcome(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Welcome)
{
    ui->setupUi(this);


    QString username = usernames[index];
    QString age = QString::number(ages[index]);

    ui->HelloLabel->setText("Hello "+ username + ", " + age);
    QPixmap pix (":/new/prefix1/Welcome Image.jpg");
    int w = ui->ImageLabel->width();
    int h = ui->ImageLabel->height();
    ui->ImageLabel->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
}

Welcome::~Welcome()
{
    delete ui;
}

int Welcome::setValue(int x)
{
    return x;
}


void Welcome::on_LogoutButton_clicked()
{
    hide();
}

