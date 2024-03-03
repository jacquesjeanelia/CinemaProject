#include "registerwindow.h"
#include "ui_registerwindow.h"
#include "Users.h"
#include "QDate"
#include "welcome.h"

registerwindow::registerwindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::registerwindow)
{
    ui->setupUi(this);

    ui->errorAlreadyexisting->setVisible(false);
    ui->errorNotmatching->setVisible(false);
    ui->errorAge->setVisible(false);
    ui->errorAllFields->setVisible(false);
}

registerwindow::~registerwindow()
{
    delete ui;
}

void registerwindow::on_pushButton_clicked()
{
    ui->errorAlreadyexisting->setVisible(false);
    ui->errorNotmatching->setVisible(false);
    ui->errorAge->setVisible(false);
    ui->errorAllFields->setVisible(false);

    QString reg_user = ui ->rusernamelineEdit->text();
    QString reg_pass = ui ->rpasswordlineEdit->text();
    QString reg_retype_pass = ui ->rretypepasswordlineEdit->text();
    QString reg_dob_month = ui ->monthcomboBox->currentText();
    QString reg_dob_day = ui ->daylineEdit->text();
    QString reg_dob_year = ui ->yearlineEdit->text();
    int reg_dob_year_int = reg_dob_year.toInt();


    bool reg_gender_male = ui ->maleradioButton ->isChecked();
    bool reg_gender_female = ui ->femaleradioButton ->isChecked();

    bool reg_type_user = ui ->userradioButton ->isChecked();
    bool reg_type_admin = ui ->adminradioButton ->isChecked();

    bool reg_genre_action = ui->checkBox ->isChecked();
    bool reg_genre_comedy = ui->checkBox_2 ->isChecked();
    bool reg_genre_romance = ui->checkBox_3 ->isChecked();
    bool reg_genre_drama = ui->checkBox_4 ->isChecked();
    bool reg_genre_horror = ui->checkBox_5 ->isChecked();
    bool reg_genre_other = ui->checkBox_6 ->isChecked();

    QDate current_date = QDate::currentDate();
    int current_year = current_date.year();
    int age = (current_year - reg_dob_year_int);

    for (int i= 0;i<usersCount;i++)
        if(reg_user ==usernames[i]){
            ui->errorAlreadyexisting->setVisible(true);
        }

   else if(reg_pass != reg_retype_pass){
        ui->errorNotmatching->setVisible(true);
    }


   else if (age<12){
        ui->errorAge->setVisible(true);
    }

    else if (reg_user.isEmpty() ||reg_pass.isEmpty() ||reg_retype_pass.isEmpty() ||reg_dob_day.isEmpty() ||reg_dob_month.isEmpty() ||reg_dob_year.isEmpty()){
        ui->errorAllFields->setVisible(true);
    }

   else if (!reg_gender_male && !reg_gender_female) {
         ui->errorAllFields->setVisible(true);
    }

   else if (!reg_type_admin && !reg_type_user) {
        ui->errorAllFields->setVisible(true);
    }

   else if (!reg_genre_action && !reg_genre_comedy && !reg_genre_romance && !reg_genre_drama && !reg_genre_horror && !reg_genre_other){
        ui->errorAllFields->setVisible(true);
    }
    else{
        usernames[usersCount] = reg_user;
        passwords[usersCount] = reg_pass;
        ages[usersCount] = age;

        int x = usersCount;

        usersCount++;

        Welcome* welcome = new Welcome(this);
        welcome->setIndex(x);
        welcome ->show();
        hide();
        break;
    }


}

