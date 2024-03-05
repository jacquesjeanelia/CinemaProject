/********************************************************************************
** Form generated from reading UI file 'welcome.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOME_H
#define UI_WELCOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Welcome
{
public:
    QLabel *HelloLabel;
    QLabel *ImageLabel;
    QPushButton *LogoutButton;

    void setupUi(QDialog *Welcome)
    {
        if (Welcome->objectName().isEmpty())
            Welcome->setObjectName("Welcome");
        Welcome->resize(347, 300);
        HelloLabel = new QLabel(Welcome);
        HelloLabel->setObjectName("HelloLabel");
        HelloLabel->setGeometry(QRect(10, 10, 381, 20));
        ImageLabel = new QLabel(Welcome);
        ImageLabel->setObjectName("ImageLabel");
        ImageLabel->setGeometry(QRect(20, 49, 361, 191));
        LogoutButton = new QPushButton(Welcome);
        LogoutButton->setObjectName("LogoutButton");
        LogoutButton->setGeometry(QRect(20, 260, 93, 29));

        retranslateUi(Welcome);

        QMetaObject::connectSlotsByName(Welcome);
    } // setupUi

    void retranslateUi(QDialog *Welcome)
    {
        Welcome->setWindowTitle(QCoreApplication::translate("Welcome", "Dialog", nullptr));
        HelloLabel->setText(QCoreApplication::translate("Welcome", "Hello, ", nullptr));
        ImageLabel->setText(QCoreApplication::translate("Welcome", "TextLabel", nullptr));
        LogoutButton->setText(QCoreApplication::translate("Welcome", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Welcome: public Ui_Welcome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOME_H
