#ifndef LOGIN_DIALOG_H
#define LOGIN_DIALOG_H

#include <QDialog>

namespace Ui {
class Login_Dialog;
}

class Login_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Login_Dialog(QWidget *parent = nullptr);
    ~Login_Dialog();
    void SentLoginInfo(const bool x);
    void closeEvent(QCloseEvent *event)override;
signals:
    void LoginInfo(const bool &Status);
private slots:
    void on_btn_Login_clicked();
    void on_btn_Cancel_clicked();

private:
    Ui::Login_Dialog *ui;
};

#endif // LOGIN_DIALOG_H
