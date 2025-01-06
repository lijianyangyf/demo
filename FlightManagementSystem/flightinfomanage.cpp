#include "flightinfomanage.h"
#include "ui_flightinfomanage.h"
#include "sql_dbconnection.h"
#include <QMessageBox>
QString FlightInfoManage::FlightID;
FlightInfoManage::FlightInfoManage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::FlightInfoManage)
{
    ui->setupUi(this);
    dataBind();
    connect(ui->tableView->selectionModel(),&QItemSelectionModel::selectionChanged,this,&FlightInfoManage::selectionChanged);
}

FlightInfoManage::~FlightInfoManage()
{
    delete ui;
}
void FlightInfoManage::clearBox()
{
    FlightID="";
    ui->tableView->reset();
    ui->lbl_Operation->setText("添加");
    ui->lbl_Note->clear();
    ui->txt_FlightCode->clear();
    ui->txt_Departure->clear();
    ui->txt_Destination->clear();
    ui->dte_LeaveTime->setDateTime(QDateTime::fromString("2000-01-01 00:00:00","yyyy-MM-dd hh:mm:ss"));
    ui->dte_ArriveTime->setDateTime(QDateTime::currentDateTime());
    ui->sb_EconomyTicketCount->setValue(0);
    ui->sb_EconomyTicketPrice->setValue(0);
    ui->sb_BusinessTicketCount->setValue(0);
    ui->sb_BusinessTicketPrice->setValue(0);
    ui->cbb_FlightStatus->setCurrentIndex(1);
}
void FlightInfoManage::dataBind()
{
    ui->tableView->reset();
    Ui::sql_DBConnection::DataQuery(ui->tableView,"select * from flight_info");
    StringAdapter();
    connect(ui->tableView->selectionModel(),&QItemSelectionModel::selectionChanged,this,&FlightInfoManage::selectionChanged);

}
void FlightInfoManage::selectionChanged(const QItemSelection &selected)
{
    QModelIndexList Indexes =selected.indexes();
    if(Indexes.empty())return;
    QModelIndex index = Indexes.first();
    ui->lbl_Operation->setText("编辑");
    ui->lbl_Note->setText("");
    FlightID=index.siblingAtColumn(0).data().toString();
    ui->txt_FlightCode->setText(index.siblingAtColumn(1).data().toString());
    ui->dte_LeaveTime->setDateTime(QDateTime::fromString(index.siblingAtColumn(2).data().toString(),Qt::ISODate));
    ui->dte_ArriveTime->setDateTime(QDateTime::fromString(index.siblingAtColumn(3).data().toString(),Qt::ISODate));
    ui->txt_Departure->setText(index.siblingAtColumn(4).data().toString());
    ui->txt_Destination->setText(index.siblingAtColumn(5).data().toString());
    ui->sb_EconomyTicketCount->setValue(index.siblingAtColumn(6).data().toInt());
    ui->sb_EconomyTicketPrice->setValue(index.siblingAtColumn(7).data().toDouble());
    ui->sb_BusinessTicketCount->setValue(index.siblingAtColumn(8).data().toInt());
    ui->sb_BusinessTicketPrice->setValue(index.siblingAtColumn(9).data().toDouble());
    int choice;
    QString ccb=index.siblingAtColumn(10).data().toString();
    if(ccb == "已取消")choice=0;
    else if(ccb == "待起飞")choice=1;
    else if(ccb == "飞行中")choice=2;
    else if(ccb == "已降落")choice=3;
    else choice=1;
    ui->cbb_FlightStatus->setCurrentIndex(choice);
}

void FlightInfoManage::on_btn_FIM_Reset_clicked()
{
    clearBox();
    dataBind();
}
void FlightInfoManage::closeEvent(QCloseEvent *event)
{
    emit FlightManageInfo(true);
    event->accept();
}

void FlightInfoManage::on_btn_FIM_delete_clicked()
{
    if(FlightID=="")
    {
        ui->lbl_Note->setText("请选择要删除的航班");
        ui->lbl_Note->setStyleSheet("QLabel { color : red;}");
        return;
    }
    else
    {
        QMessageBox::StandardButton result=QMessageBox::question(this,"询问","是否选择删除该航班",QMessageBox::Yes|QMessageBox::No);
        if(result ==QMessageBox::Yes)
        {
            if(Ui::sql_DBConnection::DataExecute(QString("delete from flight_info where FlightId=%1").arg(FlightID)))
            {
                TicketDeleter();
                clearBox();
                dataBind();
                ui->lbl_Note->setText("成功删除航班");
                ui->lbl_Note->setStyleSheet("QLabel { color : blue;}");
            }
            else
            {
                ui->lbl_Note->setText("删除航班失败");
                ui->lbl_Note->setStyleSheet("QLabel { color : red;}");
            }
        }
        else return;
    }
}


void FlightInfoManage::on_btn_FIM_Save_clicked()
{
    if(FlightID=="")
    {
        ui->lbl_Note->setText("请选择要修改的航班");
        ui->lbl_Note->setStyleSheet("QLabel { color : red;}");
        return;
    }
    else
    {
        QMessageBox::StandardButton result=QMessageBox::question(this,"询问","是否选择修改该航班",QMessageBox::Yes|QMessageBox::No);
        if(result ==QMessageBox::Yes)
        {
            if(Ui::sql_DBConnection::DataExecute(
                    QString("update flight_info set FlightCode='%1',FlightLeaveTime='%2',FlightArriveTime='%3',FlightDeparture='%4',FlightDestination='%5',FlightEconomyClass=%6,FlightEconomyPrice=%7,FlightBusinessClass =%8,FlightBusinessPrice =%9,FlightState=%10 where FlightId=%11").
                    arg(ui->txt_FlightCode->text()).
                    arg(ui->dte_LeaveTime->dateTime().toString("yyyy-MM-dd HH:mm:ss")).
                    arg(ui->dte_ArriveTime->dateTime().toString("yyyy-MM-dd HH:mm:ss")).
                    arg(ui->txt_Departure->text()).
                    arg(ui->txt_Destination->text()).
                    arg(ui->sb_EconomyTicketCount->value()).
                    arg(ui->sb_EconomyTicketPrice->value()).
                    arg(ui->sb_BusinessTicketCount->value()).
                    arg(ui->sb_BusinessTicketPrice->value()).
                    arg(ui->cbb_FlightStatus->currentIndex()-1).
                    arg(FlightID)))
            {
                TicketUpdater();
                clearBox();
                dataBind();
                ui->lbl_Note->setText("成功修改航班");
                ui->lbl_Note->setStyleSheet("QLabel { color : blue;}");
            }
            else
            {
                ui->lbl_Note->setText("修改航班失败");
                ui->lbl_Note->setStyleSheet("QLabel { color : red;}");
            }
        }
        else return;
    }
}



void FlightInfoManage::on_btn_FIM_Insert_clicked()
{
    if(ui->lbl_Operation->text()=="编辑")
    {
        QMessageBox::StandardButton result=QMessageBox::question(this,"询问","现在是编辑模式，是否改成添加",QMessageBox::Yes|QMessageBox::No);
        if(result==QMessageBox::No)return;
        ui->lbl_Operation->setText("添加");
    }
    if(ui->txt_FlightCode->text()=="")
    {
        ui->lbl_Note->setText("航班号不能为空");
        ui->lbl_Note->setStyleSheet("QLabel { color : red;}");
        ui->txt_FlightCode->setFocus();
    }
    else if(ui->txt_Departure->text()=="")
    {
        ui->lbl_Note->setText("始发地不能为空");
        ui->lbl_Note->setStyleSheet("QLabel { color : red;}");
        ui->txt_Departure->setFocus();
    }
    else if(ui->txt_Destination->text()=="")
    {
        ui->lbl_Note->setText("目的地不能为空");
        ui->lbl_Note->setStyleSheet("QLabel { color : red;}");
        ui->txt_Destination->setFocus();
    }
    else
    {
        if(Ui::sql_DBConnection::DataExecute(
            QString("insert into flight_info (`FlightCode`,`FlightLeaveTime`, `FlightArriveTime`, `FlightDeparture`, `FlightDestination`, `FlightEconomyClass`, `FlightEconomyPrice`, `FlightBusinessClass`, `FlightBusinessPrice`, `FlightState`) values('%1','%2','%3','%4','%5',%6,%7,%8,%9,%10)").
            arg(ui->txt_FlightCode->text()).
            arg(ui->dte_LeaveTime->dateTime().toString("yyyy-MM-dd HH:mm:ss")).
            arg(ui->dte_ArriveTime->dateTime().toString("yyyy-MM-dd HH:mm:ss")).
            arg(ui->txt_Departure->text()).
            arg(ui->txt_Destination->text()).
            arg(ui->sb_EconomyTicketCount->value()).
            arg(ui->sb_EconomyTicketPrice->value()).
            arg(ui->sb_BusinessTicketCount->value()).
            arg(ui->sb_BusinessTicketPrice->value()).
            arg(ui->cbb_FlightStatus->currentIndex()-1)
            ))
        {
            dataBind();
            TicketInserter();
            clearBox();
            ui->lbl_Note->setText("成功添加航班");
            ui->lbl_Note->setStyleSheet("QLabel { color : blue;}");
        }
        else
        {
            ui->lbl_Note->setText("添加航班失败");
            ui->lbl_Note->setStyleSheet("QLabel { color : red;}");
        }
    }
}

void FlightInfoManage::StringAdapter()
{
    QStandardItemModel *model = qobject_cast<QStandardItemModel*>(ui->tableView->model());
    if(model)
    {
        model->setHeaderData(0, Qt::Horizontal, "航班唯一编号");
        model->setHeaderData(1, Qt::Horizontal, "航班号");
        model->setHeaderData(2, Qt::Horizontal, "航班起飞时间");
        model->setHeaderData(3, Qt::Horizontal, "航班降落时间");
        model->setHeaderData(4, Qt::Horizontal, "航班始发地");
        model->setHeaderData(5, Qt::Horizontal, "航班目的地");
        model->setHeaderData(6, Qt::Horizontal, "经济舱余票");
        model->setHeaderData(7, Qt::Horizontal, "经济舱价格");
        model->setHeaderData(8, Qt::Horizontal, "商务舱余票");
        model->setHeaderData(9, Qt::Horizontal, "商务舱价格");
        model->setHeaderData(10, Qt::Horizontal, "航班起飞状态");
        ui->tableView->resizeColumnsToContents();
        for(int i=0;i<model->rowCount();i++)
        {
            QStandardItem *item = model->item(i, 2);
            if (item) {
                QDateTime dateTime = QDateTime::fromString(item->text(),Qt::ISODate);
                item->setText(dateTime.toString("yyyy-MM-dd HH:mm:ss"));
            }
            item=model->item(i,3);
            if (item) {
                QDateTime dateTime = QDateTime::fromString(item->text(),Qt::ISODate);
                item->setText(dateTime.toString("yyyy-MM-dd HH:mm:ss"));
            }
            item=model->item(i,10);
            int ccb=item->text().toInt();
            if(ccb == -1)item->setText("已取消");
            else if(ccb == 0)item->setText("待起飞");
            else if(ccb == 1)item->setText("飞行中");
            else if(ccb == 2)item->setText("已降落");
            else item->setText("待起飞");
        }
    }
}
void FlightInfoManage::TicketDeleter()
{
    Ui::sql_DBConnection::DataExecute(
        QString("delete from ticket_info where Ticket_FlightId=%1").
        arg(FlightID)
        );
}
void FlightInfoManage::TicketInserter()
{
    QStandardItemModel *model = qobject_cast<QStandardItemModel*>(ui->tableView->model());
    QStandardItem *item =model->item(model->rowCount()-1,0);
    FlightID=item->text();
    QString lit="ABCDEF";
    for(int i=0;i<ui->sb_BusinessTicketCount->value();i++)
    {
        int d,e;
        d=i/4+1;
        e=i%4;
        QString SeatNumber=QString("%1%2").arg(d).arg(lit[e]);
        QString sqlstr=QString("insert into ticket_info (`Ticket_FlightId`,`Ticket_FlightCode`,`Ticket_CustomerAccount`,`Ticket_FlightState`,`TicketOwnerName`,`TicketOwnerIdentityNumber`,`TicketOwnerBirthday`,`TicketOwnerType`,`TicketOwnerTelephone`,`TicketSeatType`,`TicketSeatNumber`) values(%1,'%2',0,%3,'nobody','0','2000-1-1',1,'0',%4,'%5')").
                         arg(FlightID).
                         arg(ui->txt_FlightCode->text()).
                         arg(ui->cbb_FlightStatus->currentIndex()-1).
                         arg(1).
                         arg(SeatNumber);
        qDebug()<<sqlstr;
        qDebug()<<sqlstr;
        Ui::sql_DBConnection::DataExecute(sqlstr);

    }
    for(int i=0;i<ui->sb_EconomyTicketCount->value();i++)
    {
        int d,e;
        d=i/6+1+ui->sb_BusinessTicketCount->value()/4;
        e=i%6;
        QString SeatNumber=QString("%1%2").arg(d).arg(lit[e]);

        Ui::sql_DBConnection::DataExecute(
            QString("insert into ticket_info (`Ticket_FlightId`,`Ticket_FlightCode`,`Ticket_CustomerAccount`,`Ticket_FlightState`,`TicketOwnerName`,`TicketOwnerIdentityNumber`,`TicketOwnerBirthday`,`TicketOwnerType`,`TicketOwnerTelephone`,`TicketSeatType`,`TicketSeatNumber`) values(%1,'%2',0,%3,'nobody','0','2000-1-1',1,'0',%4,'%5')").
            arg(FlightID).
            arg(ui->txt_FlightCode->text()).
            arg(ui->cbb_FlightStatus->currentIndex()-1).
            arg(0).
            arg(SeatNumber)
            );
    }
}
void FlightInfoManage::TicketUpdater()
{
    Ui::sql_DBConnection::DataExecute(
        QString("update ticket_info set Ticket_FlightState=%1 where Ticket_FlightId=%2").
        arg(ui->cbb_FlightStatus->currentIndex()-1).
        arg(FlightID));
}
