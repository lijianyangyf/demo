#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sql_dbconnection.h"
#include "flightinfomanage.h"
#include "login_dialog.h"
#include "customerinfoquery.h"
#include "ticketinfoquery.h"
#include "announcementinfomanage.h"
#include "articleinfomanage.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    Ui::sql_DBConnection::ConnectionInitialize();
    ui->setupUi(this);
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::updater);
    timer->start(1000);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Login()
{
    Login_Dialog *lg = new Login_Dialog(this);
    connect(lg,&Login_Dialog::LoginInfo,this,&MainWindow::ShowUp);
    lg->exec();

}
void MainWindow::ShowUp(const bool &Status)
{
    if(Status==true)this->show();
    else if(Status==false)
    {
        this->close();
        QTimer::singleShot(100,this,QCoreApplication::quit);
    }
}

void MainWindow::on_Quit_triggered()
{
    this->close();
}


void MainWindow::on_FlightInfoManagement_triggered()
{
    this->hide();
    FlightInfoManage *fim = new FlightInfoManage(this);
    connect(fim,&FlightInfoManage::FlightManageInfo,this,&MainWindow::ShowUp);
    fim->exec();
}

void MainWindow::updater()
{
    Ui::sql_DBConnection::TimeUpdate();
}

void MainWindow::on_CustomerInfoQuery_triggered()
{
    this->hide();
    CustomerInfoQuery *ciq = new CustomerInfoQuery(this);
    connect(ciq,&CustomerInfoQuery::CustomerQueryManage,this,&MainWindow::ShowUp);
    ciq->exec();
}


void MainWindow::on_TicketInfoQuery_triggered()
{
    this->hide();
    TicketInfoQuery *tiq = new TicketInfoQuery(this);
    connect(tiq,&TicketInfoQuery::TicketQueryManage,this,&MainWindow::ShowUp);
    tiq->exec();
}


void MainWindow::on_AnnouncementManagement_triggered()
{
    this->hide();
    AnnouncementInfoManage *aim = new AnnouncementInfoManage(this);
    connect(aim,&AnnouncementInfoManage::AnnouncementManageInfo,this,&MainWindow::ShowUp);
    aim->exec();
}


void MainWindow::on_ArticleManagement_triggered()
{
    this->hide();
    ArticleInfoManage *aim = new ArticleInfoManage(this);
    connect(aim,&ArticleInfoManage::ArticleManageInfo,this,&MainWindow::ShowUp);
    aim->exec();
}

