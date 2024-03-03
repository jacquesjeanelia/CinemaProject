/********************************************************************************
** Form generated from reading UI file 'registerwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWINDOW_H
#define UI_REGISTERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_registerwindow
{
public:
    QLineEdit *rpasswordlineEdit;
    QLabel *rretypepasswordlabel;
    QLabel *errorAllFields;
    QLabel *errorAlreadyexisting;
    QLineEdit *rretypepasswordlineEdit;
    QLabel *rusernamelabel;
    QLabel *rpasswordlabel;
    QPushButton *pushButton;
    QGroupBox *gendergroupBox;
    QRadioButton *maleradioButton;
    QRadioButton *femaleradioButton;
    QLabel *errorNotmatching;
    QLabel *errorAge;
    QGroupBox *accountTypegroupBox;
    QRadioButton *userradioButton;
    QRadioButton *adminradioButton;
    QGroupBox *dobgroupBox;
    QComboBox *monthcomboBox;
    QLineEdit *daylineEdit;
    QLabel *daylabel;
    QLabel *yearlabel;
    QLineEdit *yearlineEdit;
    QLabel *monthlabel;
    QLineEdit *rusernamelineEdit;
    QGroupBox *genregroupBox;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;

    void setupUi(QDialog *registerwindow)
    {
        if (registerwindow->objectName().isEmpty())
            registerwindow->setObjectName("registerwindow");
        registerwindow->resize(494, 594);
        rpasswordlineEdit = new QLineEdit(registerwindow);
        rpasswordlineEdit->setObjectName("rpasswordlineEdit");
        rpasswordlineEdit->setGeometry(QRect(180, 80, 131, 24));
        rpasswordlineEdit->setEchoMode(QLineEdit::Password);
        rretypepasswordlabel = new QLabel(registerwindow);
        rretypepasswordlabel->setObjectName("rretypepasswordlabel");
        rretypepasswordlabel->setGeometry(QRect(60, 110, 101, 31));
        errorAllFields = new QLabel(registerwindow);
        errorAllFields->setObjectName("errorAllFields");
        errorAllFields->setGeometry(QRect(150, 530, 151, 31));
        errorAllFields->setStyleSheet(QString::fromUtf8("color: red;\n"
""));
        errorAlreadyexisting = new QLabel(registerwindow);
        errorAlreadyexisting->setObjectName("errorAlreadyexisting");
        errorAlreadyexisting->setGeometry(QRect(320, 30, 101, 31));
        errorAlreadyexisting->setStyleSheet(QString::fromUtf8("color: red;\n"
""));
        rretypepasswordlineEdit = new QLineEdit(registerwindow);
        rretypepasswordlineEdit->setObjectName("rretypepasswordlineEdit");
        rretypepasswordlineEdit->setGeometry(QRect(180, 120, 131, 24));
        rretypepasswordlineEdit->setEchoMode(QLineEdit::Password);
        rusernamelabel = new QLabel(registerwindow);
        rusernamelabel->setObjectName("rusernamelabel");
        rusernamelabel->setGeometry(QRect(60, 30, 61, 31));
        rpasswordlabel = new QLabel(registerwindow);
        rpasswordlabel->setObjectName("rpasswordlabel");
        rpasswordlabel->setGeometry(QRect(60, 70, 61, 31));
        pushButton = new QPushButton(registerwindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(60, 530, 80, 24));
        gendergroupBox = new QGroupBox(registerwindow);
        gendergroupBox->setObjectName("gendergroupBox");
        gendergroupBox->setGeometry(QRect(60, 270, 120, 80));
        maleradioButton = new QRadioButton(gendergroupBox);
        maleradioButton->setObjectName("maleradioButton");
        maleradioButton->setGeometry(QRect(0, 20, 91, 22));
        femaleradioButton = new QRadioButton(gendergroupBox);
        femaleradioButton->setObjectName("femaleradioButton");
        femaleradioButton->setGeometry(QRect(0, 40, 91, 22));
        errorNotmatching = new QLabel(registerwindow);
        errorNotmatching->setObjectName("errorNotmatching");
        errorNotmatching->setGeometry(QRect(320, 110, 101, 31));
        errorNotmatching->setStyleSheet(QString::fromUtf8("color: red;\n"
""));
        errorAge = new QLabel(registerwindow);
        errorAge->setObjectName("errorAge");
        errorAge->setGeometry(QRect(320, 180, 111, 31));
        errorAge->setStyleSheet(QString::fromUtf8("color: red;\n"
""));
        accountTypegroupBox = new QGroupBox(registerwindow);
        accountTypegroupBox->setObjectName("accountTypegroupBox");
        accountTypegroupBox->setGeometry(QRect(220, 270, 120, 80));
        userradioButton = new QRadioButton(accountTypegroupBox);
        userradioButton->setObjectName("userradioButton");
        userradioButton->setGeometry(QRect(0, 20, 91, 22));
        adminradioButton = new QRadioButton(accountTypegroupBox);
        adminradioButton->setObjectName("adminradioButton");
        adminradioButton->setGeometry(QRect(0, 40, 91, 22));
        dobgroupBox = new QGroupBox(registerwindow);
        dobgroupBox->setObjectName("dobgroupBox");
        dobgroupBox->setGeometry(QRect(60, 170, 251, 80));
        monthcomboBox = new QComboBox(dobgroupBox);
        monthcomboBox->addItem(QString());
        monthcomboBox->addItem(QString());
        monthcomboBox->addItem(QString());
        monthcomboBox->addItem(QString());
        monthcomboBox->addItem(QString());
        monthcomboBox->addItem(QString());
        monthcomboBox->addItem(QString());
        monthcomboBox->addItem(QString());
        monthcomboBox->addItem(QString());
        monthcomboBox->addItem(QString());
        monthcomboBox->addItem(QString());
        monthcomboBox->addItem(QString());
        monthcomboBox->setObjectName("monthcomboBox");
        monthcomboBox->setGeometry(QRect(0, 50, 72, 24));
        daylineEdit = new QLineEdit(dobgroupBox);
        daylineEdit->setObjectName("daylineEdit");
        daylineEdit->setGeometry(QRect(90, 50, 51, 24));
        daylineEdit->setEchoMode(QLineEdit::Normal);
        daylabel = new QLabel(dobgroupBox);
        daylabel->setObjectName("daylabel");
        daylabel->setGeometry(QRect(100, 20, 49, 16));
        yearlabel = new QLabel(dobgroupBox);
        yearlabel->setObjectName("yearlabel");
        yearlabel->setGeometry(QRect(190, 20, 49, 16));
        yearlineEdit = new QLineEdit(dobgroupBox);
        yearlineEdit->setObjectName("yearlineEdit");
        yearlineEdit->setGeometry(QRect(180, 50, 61, 24));
        yearlineEdit->setEchoMode(QLineEdit::Normal);
        monthlabel = new QLabel(dobgroupBox);
        monthlabel->setObjectName("monthlabel");
        monthlabel->setGeometry(QRect(10, 20, 49, 16));
        rusernamelineEdit = new QLineEdit(registerwindow);
        rusernamelineEdit->setObjectName("rusernamelineEdit");
        rusernamelineEdit->setGeometry(QRect(180, 40, 131, 24));
        genregroupBox = new QGroupBox(registerwindow);
        genregroupBox->setObjectName("genregroupBox");
        genregroupBox->setGeometry(QRect(60, 410, 201, 91));
        checkBox = new QCheckBox(genregroupBox);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(0, 20, 78, 22));
        checkBox_2 = new QCheckBox(genregroupBox);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setGeometry(QRect(0, 40, 78, 22));
        checkBox_3 = new QCheckBox(genregroupBox);
        checkBox_3->setObjectName("checkBox_3");
        checkBox_3->setGeometry(QRect(0, 60, 78, 22));
        checkBox_4 = new QCheckBox(genregroupBox);
        checkBox_4->setObjectName("checkBox_4");
        checkBox_4->setGeometry(QRect(120, 60, 78, 22));
        checkBox_5 = new QCheckBox(genregroupBox);
        checkBox_5->setObjectName("checkBox_5");
        checkBox_5->setGeometry(QRect(120, 40, 78, 22));
        checkBox_6 = new QCheckBox(genregroupBox);
        checkBox_6->setObjectName("checkBox_6");
        checkBox_6->setGeometry(QRect(120, 20, 78, 22));

        retranslateUi(registerwindow);

        QMetaObject::connectSlotsByName(registerwindow);
    } // setupUi

    void retranslateUi(QDialog *registerwindow)
    {
        registerwindow->setWindowTitle(QCoreApplication::translate("registerwindow", "Dialog", nullptr));
        rpasswordlineEdit->setText(QString());
        rretypepasswordlabel->setText(QCoreApplication::translate("registerwindow", "Retype Passwowrd", nullptr));
        errorAllFields->setText(QCoreApplication::translate("registerwindow", "* All fields must be filled", nullptr));
        errorAlreadyexisting->setText(QCoreApplication::translate("registerwindow", "* Already Existing", nullptr));
        rretypepasswordlineEdit->setText(QString());
        rusernamelabel->setText(QCoreApplication::translate("registerwindow", "Username", nullptr));
        rpasswordlabel->setText(QCoreApplication::translate("registerwindow", "Passwowrd", nullptr));
        pushButton->setText(QCoreApplication::translate("registerwindow", "Register", nullptr));
        gendergroupBox->setTitle(QCoreApplication::translate("registerwindow", "Gender", nullptr));
        maleradioButton->setText(QCoreApplication::translate("registerwindow", "Male", nullptr));
        femaleradioButton->setText(QCoreApplication::translate("registerwindow", "Female", nullptr));
        errorNotmatching->setText(QCoreApplication::translate("registerwindow", "* Not Matching", nullptr));
        errorAge->setText(QCoreApplication::translate("registerwindow", "* Age is less than 12", nullptr));
        accountTypegroupBox->setTitle(QCoreApplication::translate("registerwindow", "Account Type", nullptr));
        userradioButton->setText(QCoreApplication::translate("registerwindow", "User", nullptr));
        adminradioButton->setText(QCoreApplication::translate("registerwindow", "Admin", nullptr));
        dobgroupBox->setTitle(QCoreApplication::translate("registerwindow", "Date of Birth", nullptr));
        monthcomboBox->setItemText(0, QCoreApplication::translate("registerwindow", "Jan", nullptr));
        monthcomboBox->setItemText(1, QCoreApplication::translate("registerwindow", "Feb", nullptr));
        monthcomboBox->setItemText(2, QCoreApplication::translate("registerwindow", "March", nullptr));
        monthcomboBox->setItemText(3, QCoreApplication::translate("registerwindow", "April", nullptr));
        monthcomboBox->setItemText(4, QCoreApplication::translate("registerwindow", "May", nullptr));
        monthcomboBox->setItemText(5, QCoreApplication::translate("registerwindow", "June", nullptr));
        monthcomboBox->setItemText(6, QCoreApplication::translate("registerwindow", "July", nullptr));
        monthcomboBox->setItemText(7, QCoreApplication::translate("registerwindow", "Aug", nullptr));
        monthcomboBox->setItemText(8, QCoreApplication::translate("registerwindow", "Sep", nullptr));
        monthcomboBox->setItemText(9, QCoreApplication::translate("registerwindow", "Oct", nullptr));
        monthcomboBox->setItemText(10, QCoreApplication::translate("registerwindow", "Nov", nullptr));
        monthcomboBox->setItemText(11, QCoreApplication::translate("registerwindow", "Dec", nullptr));

        daylineEdit->setText(QString());
        daylabel->setText(QCoreApplication::translate("registerwindow", "Day", nullptr));
        yearlabel->setText(QCoreApplication::translate("registerwindow", "Year", nullptr));
        yearlineEdit->setText(QString());
        monthlabel->setText(QCoreApplication::translate("registerwindow", "Month", nullptr));
        genregroupBox->setTitle(QCoreApplication::translate("registerwindow", "Favourite Genre(s)", nullptr));
        checkBox->setText(QCoreApplication::translate("registerwindow", "Action", nullptr));
        checkBox_2->setText(QCoreApplication::translate("registerwindow", "Comedy", nullptr));
        checkBox_3->setText(QCoreApplication::translate("registerwindow", "Romance", nullptr));
        checkBox_4->setText(QCoreApplication::translate("registerwindow", "Other", nullptr));
        checkBox_5->setText(QCoreApplication::translate("registerwindow", "Horror", nullptr));
        checkBox_6->setText(QCoreApplication::translate("registerwindow", "Drama", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registerwindow: public Ui_registerwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWINDOW_H
