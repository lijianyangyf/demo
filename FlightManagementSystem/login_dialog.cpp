#include "login_dialog.h"
#include "ui_login_dialog.h"
#include <QCloseEvent>
#include <QImage>
Login_Dialog::Login_Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Login_Dialog)
{
    ui->setupUi(this);
/*    QImage *image = new QImage();
    image->load("C:\\Users\\12914\\Pictures\\Screenshots\\d3946fdbcf2ee50ebba2d804d4133c1.png");
    QGraphicsScene *scene = new QGraphicsScene;
    scene->addPixmap(QPixmap::fromImage(*image).scaled(ui->graphicsView->width(), ui->graphicsView->height(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
    ui->graphicsView->setScene(scene);
//    ui->graphicsView->resize(image->width() + 10, image->height() + 10);
    ui->graphicsView->show();*/
    ui->graphicsView->lower();
}

Login_Dialog::~Login_Dialog()
{
    delete ui;
}
void Login_Dialog::SentLoginInfo(const bool x)
{
    bool status = x;
    emit LoginInfo(status);
    accept();
}
void Login_Dialog::on_btn_Login_clicked()
{
    if(ui->txt_Account->text()=="")
    {
        ui->lbl_Note->setText("请输入账号");
        ui->lbl_Note->setStyleSheet("QLabel { color : red;}");
        ui->txt_Account->setFocus();
    }
    else if(ui->txt_Account->text()!="admin")
    {
        ui->lbl_Note->setText("账号错误");
        ui->lbl_Note->setStyleSheet("QLabel { color : red;}");
        ui->txt_Account->setFocus();
    }
    else if(ui->txt_Password->text()=="")
    {
        ui->lbl_Note->setText("请输入密码");
        ui->lbl_Note->setStyleSheet("QLabel { color : red;}");
        ui->txt_Password->setFocus();
    }
    else if(ui->txt_Password->text()!="sysu")
    {
        ui->lbl_Note->setText("密码错误");
        ui->lbl_Note->setStyleSheet("QLabel { color : red;}");
        ui->txt_Password->setFocus();
    }
    else if(ui->txt_Account->text()=="admin"&& ui->txt_Password->text()=="sysu")
        SentLoginInfo(true);
}


void Login_Dialog::on_btn_Cancel_clicked()
{
    SentLoginInfo(false);
}

void Login_Dialog::closeEvent(QCloseEvent *event)
{
    emit LoginInfo(false);
    event->accept();
}
