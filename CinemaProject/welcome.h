#ifndef WELCOME_H
#define WELCOME_H

#include <QDialog>

namespace Ui {
class Welcome;
}

class Welcome : public QDialog
{
    Q_OBJECT

public:
    explicit Welcome(QString user_name,int _age, QWidget *parent = nullptr);
    int setValue(int x);
    ~Welcome();

private slots:
    void on_LogoutButton_clicked();

private:
    Ui::Welcome *ui;
};

#endif // WELCOME_H
