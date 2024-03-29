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
    explicit Welcome(QWidget *parent = nullptr);
    void setIndex(int x);
    ~Welcome();

private slots:
    void on_LogoutButton_clicked();

private:
    Ui::Welcome *ui;
};

#endif // WELCOME_H
