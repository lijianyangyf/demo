#include "announcementinfomanage.h"
#include "ui_announcementinfomanage.h"
#include "sql_dbconnection.h"
#include "QCloseEvent"
#include "QMessageBox"
QString AnnouncementInfoManage::AnnouncementId;
int AnnouncementInfoManage::AnnouncementPosition;
AnnouncementInfoManage::AnnouncementInfoManage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AnnouncementInfoManage)
{
    ui->setupUi(this);
    clearBox();
    dataBind();
    connect(ui->tableView->selectionModel(),&QItemSelectionModel::selectionChanged,this,&AnnouncementInfoManage::selectionChanged);
}
void AnnouncementInfoManage::closeEvent(QCloseEvent *event)
{
    emit AnnouncementManageInfo(true);
    event->accept();
}
AnnouncementInfoManage::~AnnouncementInfoManage()
{
    delete ui;
}
void AnnouncementInfoManage::clearBox()
{
    ui->lbl_Note->setText("");
    ui->lbl_Operation->setText("添加");
    ui->txt_Announcement->clear();
    AnnouncementId="";
    AnnouncementPosition=0;
}
void AnnouncementInfoManage::dataBind()
{
    ui->tableView->reset();
    Ui::sql_DBConnection::DataQuery(ui->tableView,"select * from announcement_info order by AnnouncementPosition ASC");
    connect(ui->tableView->selectionModel(),&QItemSelectionModel::selectionChanged,this,&AnnouncementInfoManage::selectionChanged);
    QStandardItemModel *model = qobject_cast<QStandardItemModel*>(ui->tableView->model());
    if(model)
    {
        model->setHeaderData(0, Qt::Horizontal, "公告唯一编号");
        model->setHeaderData(1, Qt::Horizontal, "公告位置");
        model->setHeaderData(2, Qt::Horizontal, "公告内容");
        ui->tableView->resizeColumnsToContents();
    }
}
void AnnouncementInfoManage::selectionChanged(const QItemSelection &selected)
{
    QModelIndexList Indexes =selected.indexes();
    if(Indexes.empty())return;
    QModelIndex index = Indexes.first();
    ui->lbl_Operation->setText("编辑");
    ui->lbl_Note->setText("");
    AnnouncementId=index.siblingAtColumn(0).data().toString();
    AnnouncementPosition=index.siblingAtColumn(1).data().toInt();
    ui->txt_Announcement->setText(index.siblingAtColumn(2).data().toString());
}
void AnnouncementInfoManage::on_btn_Save_clicked()
{
    if(AnnouncementId=="")
    {
        ui->lbl_Note->setText("请选择要修改的通知");
        ui->lbl_Note->setStyleSheet("QLabel { color : red;}");
        return;
    }
    else if(ui->txt_Announcement->toPlainText()=="")
    {
        ui->lbl_Note->setText("通知内容不得为空");
        ui->lbl_Note->setStyleSheet("QLabel { color : red;}");
        ui->txt_Announcement->setFocus();
    }
    else if(ui->txt_Announcement->toPlainText().length()>100)
    {
        ui->lbl_Note->setText("通知内容不得超过50字");
        ui->lbl_Note->setStyleSheet("QLabel { color : red;}");
        ui->txt_Announcement->setFocus();
    }
    else
    {
        QMessageBox::StandardButton result=QMessageBox::question(this,"询问","是否选择修改该通知",QMessageBox::Yes|QMessageBox::No);
        if(result ==QMessageBox::Yes)
        {
            if(Ui::sql_DBConnection::DataExecute(
                    QString("update announcement_info set AnnouncementContent='%1' where AnnouncementId=%2").
                    arg(ui->txt_Announcement->toPlainText()).
                    arg(AnnouncementId)))
            {
                clearBox();
                dataBind();
                ui->lbl_Note->setText("成功修改通知");
                ui->lbl_Note->setStyleSheet("QLabel { color : blue;}");
            }
            else
            {
                ui->lbl_Note->setText("修改通知失败");
                ui->lbl_Note->setStyleSheet("QLabel { color : red;}");
            }
        }
        else return;
    }
}


void AnnouncementInfoManage::on_btn_Insert_clicked()
{
    if(ui->lbl_Operation->text()=="编辑")
    {
        QMessageBox::StandardButton result=QMessageBox::question(this,"询问","现在是编辑模式，是否改成添加",QMessageBox::Yes|QMessageBox::No);
        if(result==QMessageBox::No)return;
        ui->lbl_Operation->setText("添加");
    }
    QStandardItemModel *model = qobject_cast<QStandardItemModel*>(ui->tableView->model());
    QString AnnouncementContent=ui->txt_Announcement->toPlainText();
    if(AnnouncementContent=="")
    {
        ui->lbl_Note->setText("通知内容不得为空");
        ui->lbl_Note->setStyleSheet("QLabel { color : red;}");
        ui->txt_Announcement->setFocus();
    }
    else if(AnnouncementContent.length()>100)
    {
        ui->lbl_Note->setText("通知内容不得超过50字");
        ui->lbl_Note->setStyleSheet("QLabel { color : red;}");
        ui->txt_Announcement->setFocus();
    }
    else if(model->rowCount()==7)
    {
        ui->lbl_Note->setText("通知不得为多于7条，请删除一条之后再插入！");
        ui->lbl_Note->setStyleSheet("QLabel { color : red;}");
    }
    else
    {
        if(Ui::sql_DBConnection::DataExecute(
                QString("insert into announcement_info (`AnnouncementPosition`,`AnnouncementContent`) values(%1,'%2')").
                arg(model->rowCount()+1).
                arg(AnnouncementContent)
                ))
        {
            dataBind();
            clearBox();
            ui->lbl_Note->setText("成功添加通知");
            ui->lbl_Note->setStyleSheet("QLabel { color : blue;}");
        }
        else
        {
            ui->lbl_Note->setText("添加通知失败");
            ui->lbl_Note->setStyleSheet("QLabel { color : red;}");
        }
    }
}


void AnnouncementInfoManage::on_btn_Delete_clicked()
{
    if(AnnouncementId=="")
    {
        ui->lbl_Note->setText("请选择要删除的通知");
        ui->lbl_Note->setStyleSheet("QLabel { color : red;}");
        return;
    }
    else
    {
        QMessageBox::StandardButton result=QMessageBox::question(this,"询问","是否选择删除该通知",QMessageBox::Yes|QMessageBox::No);
        if(result ==QMessageBox::Yes)
        {
            if(Ui::sql_DBConnection::DataExecute(QString("delete from announcement_info where AnnouncementId=%1").arg(AnnouncementId)))
            {
                clearBox();
                dataBind();
                AnnouncementPositionUpdater();
                dataBind();
                ui->lbl_Note->setText("成功删除通知");
                ui->lbl_Note->setStyleSheet("QLabel { color : blue;}");
            }
            else
            {
                ui->lbl_Note->setText("删除通知失败");
                ui->lbl_Note->setStyleSheet("QLabel { color : red;}");
            }
        }
        else return;
    }
}


void AnnouncementInfoManage::on_btn_Reset_clicked()
{
    clearBox();
    dataBind();
}


void AnnouncementInfoManage::on_btn_Up_clicked()
{
    if(AnnouncementPosition==1)
    {
        ui->lbl_Note->setText("通知已经到最顶上了，无法再向上移动！");
        ui->lbl_Note->setStyleSheet("QLabel { color : red;}");
        return;
    }
    Ui::sql_DBConnection::DataExecute(QString("update announcement_info set AnnouncementPosition=%1 where AnnouncementPosition=%2").arg(AnnouncementPosition).arg(AnnouncementPosition-1));
    Ui::sql_DBConnection::DataExecute(QString("update announcement_info set AnnouncementPosition=%1 where AnnouncementId=%2").arg(AnnouncementPosition-1).arg(AnnouncementId));
    clearBox();
    dataBind();
    ui->lbl_Note->setText("通知向上移动成功！");
    ui->lbl_Note->setStyleSheet("QLabel { color : blue;}");
}


void AnnouncementInfoManage::on_btn_Down_clicked()
{
    QStandardItemModel *model = qobject_cast<QStandardItemModel*>(ui->tableView->model());
    if(AnnouncementPosition==model->rowCount())
    {
        ui->lbl_Note->setText("通知已经到最底下了，无法再向下移动！");
        ui->lbl_Note->setStyleSheet("QLabel { color : red;}");
        return;
    }
    Ui::sql_DBConnection::DataExecute(QString("update announcement_info set AnnouncementPosition=%1 where AnnouncementPosition=%2").arg(AnnouncementPosition).arg(AnnouncementPosition+1));
    Ui::sql_DBConnection::DataExecute(QString("update announcement_info set AnnouncementPosition=%1 where AnnouncementId=%2").arg(AnnouncementPosition+1).arg(AnnouncementId));
    clearBox();
    dataBind();
    ui->lbl_Note->setText("通知向下移动成功！");
    ui->lbl_Note->setStyleSheet("QLabel { color : blue;}");
}

void AnnouncementInfoManage::AnnouncementPositionUpdater()
{
    QStandardItemModel *model = qobject_cast<QStandardItemModel*>(ui->tableView->model());
    if(model)
    {
        for(int i=0;i<model->rowCount();i++)
        {
            QStandardItem *item = model->item(i, 0);
            Ui::sql_DBConnection::DataExecute(QString("update announcement_info set AnnouncementPosition=%1 where AnnouncementId=%2").arg(i+1).arg(item->text()));
        }
    }
}
