#include "ticketinfoquery.h"
#include "ui_ticketinfoquery.h"
#include "sql_dbconnection.h"
#include <QCloseEvent>
TicketInfoQuery::TicketInfoQuery(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::TicketInfoQuery)
{
    ui->setupUi(this);
    clearBox();
    dataBind("select * from ticket_info");
}

TicketInfoQuery::~TicketInfoQuery()
{
    delete ui;
}
void TicketInfoQuery::closeEvent(QCloseEvent *event)
{
    emit TicketQueryManage(true);
    event->accept();
}

void TicketInfoQuery::dataBind(QString str)
{
    ui->tableView->reset();
    Ui::sql_DBConnection::DataQuery(ui->tableView,str);
    StringAdapter();
}
void TicketInfoQuery::clearBox()
{
    ui->chb_TicketId->setChecked(false);
    ui->txt_TicketId->clear();
    ui->chb_Ticket_FlightId->setChecked(false);
    ui->txt_Ticket_FlightId->clear();
    ui->chb_Ticket_FlightCode->setChecked(false);
    ui->txt_Ticket_FlightCode->clear();
    ui->chb_Ticket_CustomerAccount->setChecked(false);
    ui->txt_Ticket_CustomerAccount->clear();
    ui->chb_Ticket_FlightState->setChecked(false);
    ui->cbb_Ticket_FlightState->setCurrentIndex(0);
    ui->chb_TicketOwnerName->setChecked(false);
    ui->txt_TicketOwnerName->clear();
    ui->chb_TicketOwnerIdentityNumber->setChecked(false);
    ui->txt_TicketOwnerIdentityNumber->clear();
    ui->chb_TicketOwnerBirthday->setChecked(false);
    ui->cbb_TicketOwnerBirthday->setCurrentIndex(0);
    ui->de_TicketOwnerBirthday->setDate(QDate::fromString("2000-01-01","yyyy-MM-dd"));
    ui->chb_TicketOwnerType->setChecked(false);
    ui->cbb_TicketOwnerType->setCurrentIndex(0);
    ui->chb_TicketOwnerTelephone->setChecked(false);
    ui->txt_TicketOwnerTelephone->clear();
    ui->chb_TicketOwnerEmail->setChecked(false);
    ui->txt_TicketOwnerEmail->clear();
    ui->chb_TicketSeatType->setChecked(false);
    ui->cbb_TicketSeatType->setCurrentIndex(0);
    ui->chb_TicketSeatNumber->setChecked(false);
    ui->txt_TicketSeatNumber->clear();
    ui->chb_TicketPayState->setChecked(false);
    ui->cbb_TicketPayState->setCurrentIndex(0);
    ui->chb_TicketPayTime->setChecked(false);
    ui->cbb_TicketPayTime->setCurrentIndex(0);
    ui->dte_TicketPayTime->setDateTime(QDateTime::fromString("2000-01-01 00:00:00","yyyy-MM-dd HH:mm:ss"));
}
void TicketInfoQuery::StringAdapter()
{
    QStandardItemModel *model = qobject_cast<QStandardItemModel*>(ui->tableView->model());
    if(model)
    {
        model->setHeaderData(0, Qt::Horizontal, "机票唯一编号");
        model->setHeaderData(1, Qt::Horizontal, "机票的航班唯一编号");
        model->setHeaderData(2, Qt::Horizontal, "机票的航班号");
        model->setHeaderData(3, Qt::Horizontal, "机票的用户账号");
        model->setHeaderData(4, Qt::Horizontal, "机票的航班起飞状态");
        model->setHeaderData(5, Qt::Horizontal, "机票乘机人的姓名");
        model->setHeaderData(6, Qt::Horizontal, "机票乘机人的身份证号码");
        model->setHeaderData(7, Qt::Horizontal, "机票乘机人出生日期");
        model->setHeaderData(8, Qt::Horizontal, "机票乘机人类型");
        model->setHeaderData(9, Qt::Horizontal, "机票乘机人电话");
        model->setHeaderData(10, Qt::Horizontal, "机票乘机人邮箱");
        model->setHeaderData(11, Qt::Horizontal, "机票座位类型");
        model->setHeaderData(12, Qt::Horizontal, "机票座位号");
        model->setHeaderData(13, Qt::Horizontal, "机票支付状态");
        model->setHeaderData(14, Qt::Horizontal, "机票订单生成时间");
        ui->tableView->resizeColumnsToContents();
        for(int i=0;i<model->rowCount();i++)
        {
            QStandardItem *item = model->item(i, 7);
            if (item) {
                QDateTime dateTime = QDateTime::fromString(item->text(),Qt::ISODate);
                item->setText(dateTime.date().toString("yyyy-MM-dd"));
            }
            item=model->item(i,14);
            if (item) {
                QDateTime dateTime = QDateTime::fromString(item->text(),Qt::ISODate);
                item->setText(dateTime.toString("yyyy-MM-dd HH:mm:ss"));
            }
            item=model->item(i,4);
            int cbb=item->text().toInt();
            if(cbb == -1)item->setText("已取消");
            else if(cbb == 0)item->setText("待起飞");
            else if(cbb == 1)item->setText("飞行中");
            else if(cbb == 2)item->setText("已降落");
            else item->setText("待起飞");
            item=model->item(i,8);
            cbb=item->text().toInt();
            if(cbb == 0)item->setText("未成年人");
            else if(cbb == 1)item->setText("成年人");
            else if(cbb == 2)item->setText("老人");
            else item->setText("成年人");
            item=model->item(i,11);
            cbb=item->text().toInt();
            if(cbb == 0)item->setText("经济舱");
            else if(cbb == 1)item->setText("商务舱");
            else item->setText("经济舱");
            item=model->item(i,13);
            cbb=item->text().toInt();
            if(cbb == 0)item->setText("未支付");
            else if(cbb == 1)item->setText("已支付");
            else item->setText("未支付");
        }
    }
}
void TicketInfoQuery::on_btn_Search_clicked()
{
    QString str="select * from ticket_info where 1=1";
    if(ui->chb_TicketId->isChecked())
    {
        str +=" and TicketId=";
        str +=ui->txt_TicketId->text();
    }
    if(ui->chb_Ticket_FlightId->isChecked())
    {
        str +=" and Ticket_FlightId=";
        str +=ui->txt_Ticket_FlightId->text();
    }
    if(ui->chb_Ticket_FlightCode->isChecked())
    {
        str +=" and Ticket_FlightCode='";
        str +=ui->txt_Ticket_FlightCode->text();
        str +="'";
    }
    if(ui->chb_Ticket_CustomerAccount->isChecked())
    {
        str +=" and Ticket_CustomerAccount=";
        str +=ui->txt_Ticket_CustomerAccount->text();
    }
    if(ui->chb_Ticket_FlightState->isChecked())
    {
        str +=" and Ticket_FlightState=";
        str +=QString::number(ui->cbb_Ticket_FlightState->currentIndex()-1);
    }
    if(ui->chb_TicketOwnerName->isChecked())
    {
        str +=" and TicketOwnerName='";
        str +=ui->txt_TicketOwnerName->text();
        str +="'";
    }
    if(ui->chb_TicketOwnerIdentityNumber->isChecked())
    {
        str +=" and TicketOwnerIdentityNumber='";
        str +=ui->txt_TicketOwnerIdentityNumber->text();
        str +="'";
    }
    if(ui->chb_TicketOwnerBirthday->isChecked())
    {
        str +=" and TicketOwnerBirthday=";
        str +=ui->cbb_TicketOwnerBirthday->currentText();
        str +="'";
        str +=ui->de_TicketOwnerBirthday->date().toString("yyyy-MM-dd");
        str +="'";
    }
    if(ui->chb_TicketOwnerType->isChecked())
    {
        str +=" and TicketOwnerType=";
        str +=QString::number(ui->cbb_TicketOwnerType->currentIndex());
    }
    if(ui->chb_TicketOwnerTelephone->isChecked())
    {
        str +=" and TicketOwnerTelephone='";
        str +=ui->txt_TicketOwnerTelephone->text();
        str +="'";
    }
    if(ui->chb_TicketOwnerEmail->isChecked())
    {
        str +=" and TicketOwnerEmail='";
        str +=ui->txt_TicketOwnerEmail->text();
        str +="'";
    }
    if(ui->chb_TicketSeatType->isChecked())
    {
        str +=" and TicketSeatType=";
        str +=QString::number(ui->cbb_TicketSeatType->currentIndex());
    }
    if(ui->chb_TicketSeatNumber->isChecked())
    {
        str +=" and TicketSeatNumber='";
        str +=ui->txt_TicketSeatNumber->text();
        str +="'";
    }
    if(ui->chb_TicketPayState->isChecked())
    {
        str +=" and TicketPayState=";
        str +=QString::number(ui->cbb_TicketPayState->currentIndex());
    }
    if(ui->chb_TicketPayTime->isChecked())
    {
        str +=" and TicketPayTime=";
        str +=ui->cbb_TicketPayTime->currentText();
        str +="'";
        str +=ui->dte_TicketPayTime->dateTime().toString("yyyy-MM-dd HH:mm:ss");
        str +="'";
    }
    clearBox();
    dataBind(str);
}


void TicketInfoQuery::on_btn_Reset_clicked()
{
    clearBox();
    dataBind("select * from ticket_info");
}

