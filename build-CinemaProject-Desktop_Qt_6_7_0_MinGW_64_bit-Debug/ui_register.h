/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

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

class Ui_Dialog
{
public:
    QLabel *rusernamelabel;
    QLabel *rpasswordlabel;
    QLineEdit *rusernamelineEdit;
    QLineEdit *rpasswordlineEdit;
    QLineEdit *rretypepasswordlineEdit;
    QLabel *rretypepasswordlabel;
    QLabel *alreadyexistinglabel;
    QLabel *notmatchinglabel;
    QGroupBox *gendergroupBox;
    QRadioButton *maleradioButton;
    QRadioButton *femaleradioButton;
    QGroupBox *accountTypegroupBox;
    QRadioButton *userradioButton;
    QRadioButton *adminradioButton;
    QGroupBox *genregroupBox;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QGroupBox *dobgroupBox;
    QComboBox *monthcomboBox;
    QLineEdit *daylineEdit;
    QLabel *daylabel;
    QLabel *yearlabel;
    QLineEdit *yearlineEdit;
    QLabel *monthlabel;
    QLabel *ageErrorlabel;
    QPushButton *pushButton;
    QLabel *allFieldsErrorlabel;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(433, 596);
        Dialog->setWindowOpacity(6.000000000000000);
        Dialog->setStyleSheet(QString::fromUtf8(""));
        rusernamelabel = new QLabel(Dialog);
        rusernamelabel->setObjectName("rusernamelabel");
        rusernamelabel->setGeometry(QRect(50, 30, 61, 31));
        rpasswordlabel = new QLabel(Dialog);
        rpasswordlabel->setObjectName("rpasswordlabel");
        rpasswordlabel->setGeometry(QRect(50, 70, 61, 31));
        rusernamelineEdit = new QLineEdit(Dialog);
        rusernamelineEdit->setObjectName("rusernamelineEdit");
        rusernamelineEdit->setGeometry(QRect(170, 40, 131, 24));
        rpasswordlineEdit = new QLineEdit(Dialog);
        rpasswordlineEdit->setObjectName("rpasswordlineEdit");
        rpasswordlineEdit->setGeometry(QRect(170, 80, 131, 24));
        rpasswordlineEdit->setEchoMode(QLineEdit::Password);
        rretypepasswordlineEdit = new QLineEdit(Dialog);
        rretypepasswordlineEdit->setObjectName("rretypepasswordlineEdit");
        rretypepasswordlineEdit->setGeometry(QRect(170, 120, 131, 24));
        rretypepasswordlineEdit->setEchoMode(QLineEdit::Password);
        rretypepasswordlabel = new QLabel(Dialog);
        rretypepasswordlabel->setObjectName("rretypepasswordlabel");
        rretypepasswordlabel->setGeometry(QRect(50, 110, 101, 31));
        alreadyexistinglabel = new QLabel(Dialog);
        alreadyexistinglabel->setObjectName("alreadyexistinglabel");
        alreadyexistinglabel->setGeometry(QRect(310, 30, 101, 31));
        alreadyexistinglabel->setStyleSheet(QString::fromUtf8("color: red;\n"
""));
        notmatchinglabel = new QLabel(Dialog);
        notmatchinglabel->setObjectName("notmatchinglabel");
        notmatchinglabel->setGeometry(QRect(310, 110, 101, 31));
        notmatchinglabel->setStyleSheet(QString::fromUtf8("color: red;\n"
""));
        gendergroupBox = new QGroupBox(Dialog);
        gendergroupBox->setObjectName("gendergroupBox");
        gendergroupBox->setGeometry(QRect(50, 270, 120, 80));
        maleradioButton = new QRadioButton(gendergroupBox);
        maleradioButton->setObjectName("maleradioButton");
        maleradioButton->setGeometry(QRect(0, 20, 91, 22));
        femaleradioButton = new QRadioButton(gendergroupBox);
        femaleradioButton->setObjectName("femaleradioButton");
        femaleradioButton->setGeometry(QRect(0, 40, 91, 22));
        accountTypegroupBox = new QGroupBox(Dialog);
        accountTypegroupBox->setObjectName("accountTypegroupBox");
        accountTypegroupBox->setGeometry(QRect(210, 270, 120, 80));
        userradioButton = new QRadioButton(accountTypegroupBox);
        userradioButton->setObjectName("userradioButton");
        userradioButton->setGeometry(QRect(0, 20, 91, 22));
        adminradioButton = new QRadioButton(accountTypegroupBox);
        adminradioButton->setObjectName("adminradioButton");
        adminradioButton->setGeometry(QRect(0, 40, 91, 22));
        genregroupBox = new QGroupBox(Dialog);
        genregroupBox->setObjectName("genregroupBox");
        genregroupBox->setGeometry(QRect(50, 410, 201, 91));
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
        dobgroupBox = new QGroupBox(Dialog);
        dobgroupBox->setObjectName("dobgroupBox");
        dobgroupBox->setGeometry(QRect(50, 170, 251, 80));
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
        daylineEdit->setEchoMode(QLineEdit::Password);
        daylabel = new QLabel(dobgroupBox);
        daylabel->setObjectName("daylabel");
        daylabel->setGeometry(QRect(100, 20, 49, 16));
        yearlabel = new QLabel(dobgroupBox);
        yearlabel->setObjectName("yearlabel");
        yearlabel->setGeometry(QRect(190, 20, 49, 16));
        yearlineEdit = new QLineEdit(dobgroupBox);
        yearlineEdit->setObjectName("yearlineEdit");
        yearlineEdit->setGeometry(QRect(180, 50, 61, 24));
        yearlineEdit->setEchoMode(QLineEdit::Password);
        monthlabel = new QLabel(dobgroupBox);
        monthlabel->setObjectName("monthlabel");
        monthlabel->setGeometry(QRect(10, 20, 49, 16));
        ageErrorlabel = new QLabel(Dialog);
        ageErrorlabel->setObjectName("ageErrorlabel");
        ageErrorlabel->setGeometry(QRect(310, 180, 111, 31));
        ageErrorlabel->setStyleSheet(QString::fromUtf8("color: red;\n"
""));
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(50, 530, 80, 24));
        allFieldsErrorlabel = new QLabel(Dialog);
        allFieldsErrorlabel->setObjectName("allFieldsErrorlabel");
        allFieldsErrorlabel->setGeometry(QRect(140, 530, 151, 31));
        allFieldsErrorlabel->setStyleSheet(QString::fromUtf8("color: red;\n"
""));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        rusernamelabel->setText(QCoreApplication::translate("Dialog", "Username", nullptr));
        rpasswordlabel->setText(QCoreApplication::translate("Dialog", "Passwowrd", nullptr));
        rpasswordlineEdit->setText(QString());
        rretypepasswordlineEdit->setText(QString());
        rretypepasswordlabel->setText(QCoreApplication::translate("Dialog", "Retype Passwowrd", nullptr));
        alreadyexistinglabel->setText(QCoreApplication::translate("Dialog", "* Already Existing", nullptr));
        notmatchinglabel->setText(QCoreApplication::translate("Dialog", "* Not Matching", nullptr));
        gendergroupBox->setTitle(QCoreApplication::translate("Dialog", "Gender", nullptr));
        maleradioButton->setText(QCoreApplication::translate("Dialog", "Male", nullptr));
        femaleradioButton->setText(QCoreApplication::translate("Dialog", "Female", nullptr));
        accountTypegroupBox->setTitle(QCoreApplication::translate("Dialog", "Account Type", nullptr));
        userradioButton->setText(QCoreApplication::translate("Dialog", "User", nullptr));
        adminradioButton->setText(QCoreApplication::translate("Dialog", "Admin", nullptr));
        genregroupBox->setTitle(QCoreApplication::translate("Dialog", "Favourite Genre(s)", nullptr));
        checkBox->setText(QCoreApplication::translate("Dialog", "Action", nullptr));
        checkBox_2->setText(QCoreApplication::translate("Dialog", "Comedy", nullptr));
        checkBox_3->setText(QCoreApplication::translate("Dialog", "Romance", nullptr));
        checkBox_4->setText(QCoreApplication::translate("Dialog", "Other", nullptr));
        checkBox_5->setText(QCoreApplication::translate("Dialog", "Horror", nullptr));
        checkBox_6->setText(QCoreApplication::translate("Dialog", "Drama", nullptr));
        dobgroupBox->setTitle(QCoreApplication::translate("Dialog", "Date of Birth", nullptr));
        monthcomboBox->setItemText(0, QCoreApplication::translate("Dialog", "Jan", nullptr));
        monthcomboBox->setItemText(1, QCoreApplication::translate("Dialog", "Feb", nullptr));
        monthcomboBox->setItemText(2, QCoreApplication::translate("Dialog", "March", nullptr));
        monthcomboBox->setItemText(3, QCoreApplication::translate("Dialog", "April", nullptr));
        monthcomboBox->setItemText(4, QCoreApplication::translate("Dialog", "May", nullptr));
        monthcomboBox->setItemText(5, QCoreApplication::translate("Dialog", "June", nullptr));
        monthcomboBox->setItemText(6, QCoreApplication::translate("Dialog", "July", nullptr));
        monthcomboBox->setItemText(7, QCoreApplication::translate("Dialog", "Aug", nullptr));
        monthcomboBox->setItemText(8, QCoreApplication::translate("Dialog", "Sep", nullptr));
        monthcomboBox->setItemText(9, QCoreApplication::translate("Dialog", "Oct", nullptr));
        monthcomboBox->setItemText(10, QCoreApplication::translate("Dialog", "Nov", nullptr));
        monthcomboBox->setItemText(11, QCoreApplication::translate("Dialog", "Dec", nullptr));

        daylineEdit->setText(QString());
        daylabel->setText(QCoreApplication::translate("Dialog", "Day", nullptr));
        yearlabel->setText(QCoreApplication::translate("Dialog", "Year", nullptr));
        yearlineEdit->setText(QString());
        monthlabel->setText(QCoreApplication::translate("Dialog", "Month", nullptr));
        ageErrorlabel->setText(QCoreApplication::translate("Dialog", "* Age is less than 12", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog", "Register", nullptr));
        allFieldsErrorlabel->setText(QCoreApplication::translate("Dialog", "* All fields must be filled", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
