/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *UsernameLineEdit;
    QLineEdit *PasswordLineEdit;
    QLabel *PasswordLabel;
    QLabel *UsernameLabel;
    QPushButton *LoginPushButton;
    QPushButton *RegisterPushButton;
    QLabel *ErrorLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName("LoginWindow");
        LoginWindow->resize(388, 290);
        centralwidget = new QWidget(LoginWindow);
        centralwidget->setObjectName("centralwidget");
        UsernameLineEdit = new QLineEdit(centralwidget);
        UsernameLineEdit->setObjectName("UsernameLineEdit");
        UsernameLineEdit->setGeometry(QRect(110, 40, 113, 26));
        PasswordLineEdit = new QLineEdit(centralwidget);
        PasswordLineEdit->setObjectName("PasswordLineEdit");
        PasswordLineEdit->setGeometry(QRect(110, 90, 113, 26));
        PasswordLabel = new QLabel(centralwidget);
        PasswordLabel->setObjectName("PasswordLabel");
        PasswordLabel->setGeometry(QRect(30, 90, 63, 20));
        UsernameLabel = new QLabel(centralwidget);
        UsernameLabel->setObjectName("UsernameLabel");
        UsernameLabel->setGeometry(QRect(30, 40, 81, 20));
        LoginPushButton = new QPushButton(centralwidget);
        LoginPushButton->setObjectName("LoginPushButton");
        LoginPushButton->setGeometry(QRect(70, 160, 93, 29));
        RegisterPushButton = new QPushButton(centralwidget);
        RegisterPushButton->setObjectName("RegisterPushButton");
        RegisterPushButton->setGeometry(QRect(180, 160, 93, 29));
        ErrorLabel = new QLabel(centralwidget);
        ErrorLabel->setObjectName("ErrorLabel");
        ErrorLabel->setGeometry(QRect(30, 130, 301, 20));
        LoginWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LoginWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 388, 26));
        LoginWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(LoginWindow);
        statusbar->setObjectName("statusbar");
        LoginWindow->setStatusBar(statusbar);

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "LoginWindow", nullptr));
        PasswordLabel->setText(QCoreApplication::translate("LoginWindow", "Password", nullptr));
        UsernameLabel->setText(QCoreApplication::translate("LoginWindow", "Username", nullptr));
        LoginPushButton->setText(QCoreApplication::translate("LoginWindow", "Login", nullptr));
        RegisterPushButton->setText(QCoreApplication::translate("LoginWindow", "Register", nullptr));
        ErrorLabel->setText(QCoreApplication::translate("LoginWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">Error: wrong username or password</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
