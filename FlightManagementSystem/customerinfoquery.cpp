#include "customerinfoquery.h"
#include "ui_customerinfoquery.h"
#include <QCloseEvent>
#include <sql_dbconnection.h>
CustomerInfoQuery::CustomerInfoQuery(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::CustomerInfoQuery)
{
    ui->setupUi(this);
    clearBox();
    dataBind("select * from customer_info");
}

void CustomerInfoQuery::closeEvent(QCloseEvent *event)
{
    emit CustomerQueryManage(true);
    event->accept();
}
CustomerInfoQuery::~CustomerInfoQuery()
{
    delete ui;
}
void CustomerInfoQuery::clearBox()
{
    ui->chb_CustomerAccount->setChecked(false);
    ui->txt_CustomerAccount->clear();
    ui->chb_CustomerPassword->setChecked(false);
    ui->txt_CustomerPassword->clear();
    ui->chb_CustomerName->setChecked(false);
    ui->txt_CustomerName->clear();
    ui->chb_CustomerSex->setChecked(false);
    ui->cbb_CustomerSex->setCurrentIndex(0);
    ui->chb_CustomerBirthday->setChecked(false);
    ui->cbb_CustomerBirthday->setCurrentIndex(0);
    ui->de_CustomerBirthday->setDate(QDate::fromString("2000-01-01","yyyy-MM-dd"));
    ui->chb_CustomerIdentityNumber->setChecked(false);
    ui->txt_CustomerIdentityNumber->clear();
    ui->chb_CustomerTelephone->setChecked(false);
    ui->txt_CustomerTelephone->clear();
    ui->chb_CustomerEmail->setChecked(false);
    ui->txt_CustomerEmail->clear();
    ui->chb_CustomerAddress->setChecked(false);
    ui->txt_CustomerAddress->clear();
    ui->chb_CustomerUserName->setChecked(false);
    ui->txt_CustomerUserName->clear();
    ui->chb_CustomerType->setChecked(false);
    ui->cbb_CustomerType->setCurrentIndex(0);
    ui->chb_CustomerRegisterDate->setChecked(false);
    ui->cbb_CustomerRegisterDate->setCurrentIndex(0);
    ui->de_CustomerRegisterDate->setDate(QDate::fromString("2000-01-01","yyyy-MM-dd"));
}
void CustomerInfoQuery::dataBind(QString str)
{
    ui->tableView->reset();
    Ui::sql_DBConnection::DataQuery(ui->tableView,str);
    StringAdapter();
}
void CustomerInfoQuery::StringAdapter()
{
    QStandardItemModel *model = qobject_cast<QStandardItemModel*>(ui->tableView->model());
    if(model)
    {
        model->setHeaderData(0, Qt::Horizontal, "用户账号");
        model->setHeaderData(1, Qt::Horizontal, "用户密码");
        model->setHeaderData(2, Qt::Horizontal, "用户姓名");
        model->setHeaderData(3, Qt::Horizontal, "用户性别");
        model->setHeaderData(4, Qt::Horizontal, "用户出生日期");
        model->setHeaderData(5, Qt::Horizontal, "用户身份证号码");
        model->setHeaderData(6, Qt::Horizontal, "用户联系电话");
        model->setHeaderData(7, Qt::Horizontal, "用户邮箱");
        model->setHeaderData(8, Qt::Horizontal, "用户邮递地址");
        model->setHeaderData(9, Qt::Horizontal, "用户账户名");
        model->setHeaderData(10, Qt::Horizontal, "用户所选择的头像");
        model->setHeaderData(11, Qt::Horizontal, "用户类型");
        model->setHeaderData(12, Qt::Horizontal, "用户注册日期");
        ui->tableView->resizeColumnsToContents();
        for(int i=0;i<model->rowCount();i++)
        {
            QStandardItem *item = model->item(i, 4);
            if (item) {
                QDateTime dateTime = QDateTime::fromString(item->text(),Qt::ISODate);
                item->setText(dateTime.date().toString("yyyy-MM-dd"));
            }
            item=model->item(i,12);
            if (item) {
                QDateTime dateTime = QDateTime::fromString(item->text(),Qt::ISODate);
                item->setText(dateTime.date().toString("yyyy-MM-dd"));
            }
            item=model->item(i,3);
            int cbb=item->text().toInt();
            if(cbb == 0)item->setText("保密");
            else if(cbb == 1)item->setText("男");
            else if(cbb == 2)item->setText("女");
            else item->setText("保密");
            item=model->item(i,11);
            cbb=item->text().toInt();
            if(cbb == 0)item->setText("普通用户");
            else if(cbb == 1)item->setText("vip1用户");
            else if(cbb == 2)item->setText("vip2用户");
            else if(cbb == 3)item->setText("vip3用户");
            else item->setText("普通用户");
        }
    }
}
void CustomerInfoQuery::on_btn_Search_clicked()
{
    QString str="select * from customer_info where 1=1";
    if(ui->chb_CustomerAccount->isChecked())
    {
        str +=" and CustomerAccount=";
        str +=ui->txt_CustomerAccount->text();
    }
    if(ui->chb_CustomerPassword->isChecked())
    {
        str +=" and CustomerPassword='";
        str +=ui->txt_CustomerPassword->text();
        str +="'";
    }
    if(ui->chb_CustomerName->isChecked())
    {
        str +=" and CustomerName='";
        str +=ui->txt_CustomerName->text();
        str +="'";
    }
    if(ui->chb_CustomerSex->isChecked())
    {
        str +=" and CustomerSex=";
        str +=QString::number(ui->cbb_CustomerSex->currentIndex());
    }
    if(ui->chb_CustomerBirthday->isChecked())
    {
        str +=" and CustomerBirthday=";
        str +=ui->cbb_CustomerBirthday->currentText();
        str +="'";
        str +=ui->de_CustomerBirthday->date().toString("yyyy-MM-dd");
        str +="'";
    }
    if(ui->chb_CustomerIdentityNumber->isChecked())
    {
        str +=" and CustomerIdentityNumber='";
        str +=ui->txt_CustomerIdentityNumber->text();
        str +="'";
    }
    if(ui->chb_CustomerTelephone->isChecked())
    {
        str +=" and CustomerTelephone='";
        str +=ui->txt_CustomerTelephone->text();
        str +="'";
    }
    if(ui->chb_CustomerEmail->isChecked())
    {
        str +=" and CustomerEmail='";
        str +=ui->txt_CustomerEmail->text();
        str +="'";
    }
    if(ui->chb_CustomerAddress->isChecked())
    {
        str +=" and CustomerAddress='";
        str +=ui->txt_CustomerAddress->text();
        str +="'";
    }
    if(ui->chb_CustomerUserName->isChecked())
    {
        str +=" and CustomerUserName='";
        str +=ui->txt_CustomerUserName->text();
        str +="'";
    }
    if(ui->chb_CustomerType->isChecked())
    {
        str +=" and CustomerType=";
        str +=QString::number(ui->cbb_CustomerType->currentIndex());
    }
    if(ui->chb_CustomerRegisterDate->isChecked())
    {
        str +=" and CustomerRegisterDate";
        str +=ui->cbb_CustomerRegisterDate->currentText();
        str +="'";
        str +=ui->de_CustomerRegisterDate->date().toString("yyyy-MM-dd");
        str +="'";
    }
    clearBox();
    dataBind(str);
}


void CustomerInfoQuery::on_btn_Reset_clicked()
{
    clearBox();
    dataBind("select * from customer_info");
}

