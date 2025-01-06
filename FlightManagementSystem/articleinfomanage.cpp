#include "articleinfomanage.h"
#include "ui_articleinfomanage.h"
#include "sql_dbconnection.h"
#include "QCloseEvent"
#include "QMessageBox"
QString ArticleInfoManage::ArticleId;
int ArticleInfoManage::ArticlePosition;
ArticleInfoManage::ArticleInfoManage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ArticleInfoManage)
{
    ui->setupUi(this);
    clearBox();
    dataBind();
    connect(ui->tableView->selectionModel(),&QItemSelectionModel::selectionChanged,this,&ArticleInfoManage::selectionChanged);
}
void ArticleInfoManage::closeEvent(QCloseEvent *event)
{
    emit ArticleManageInfo(true);
    event->accept();
}
ArticleInfoManage::~ArticleInfoManage()
{
    delete ui;
}
void ArticleInfoManage::clearBox()
{
    ui->lbl_Note->setText("");
    ui->lbl_Operation->setText("添加");
    ui->txt_ArticleTitle->clear();
    ui->txt_ArticleContent->clear();
    ArticleId="";
    ArticlePosition=0;
}
void ArticleInfoManage::dataBind()
{
    ui->tableView->reset();
    Ui::sql_DBConnection::DataQuery(ui->tableView,"select * from article_info order by ArticlePosition ASC");
    connect(ui->tableView->selectionModel(),&QItemSelectionModel::selectionChanged,this,&ArticleInfoManage::selectionChanged);
    QStandardItemModel *model = qobject_cast<QStandardItemModel*>(ui->tableView->model());
    if(model)
    {
        model->setHeaderData(0, Qt::Horizontal, "文章唯一编号");
        model->setHeaderData(1, Qt::Horizontal, "文章位置");
        model->setHeaderData(2, Qt::Horizontal, "文章标题");
        model->setHeaderData(3, Qt::Horizontal, "文章内容");
        ui->tableView->resizeColumnsToContents();
    }
}
void ArticleInfoManage::selectionChanged(const QItemSelection &selected)
{
    QModelIndexList Indexes =selected.indexes();
    if(Indexes.empty())return;
    QModelIndex index = Indexes.first();
    ui->lbl_Operation->setText("编辑");
    ui->lbl_Note->setText("");
    ArticleId=index.siblingAtColumn(0).data().toString();
    ArticlePosition=index.siblingAtColumn(1).data().toInt();
    ui->txt_ArticleTitle->setText(index.siblingAtColumn(2).data().toString());
    ui->txt_ArticleContent->setText(index.siblingAtColumn(3).data().toString());
}
void ArticleInfoManage::on_btn_Save_clicked()
{
    QString ArticleContent=ui->txt_ArticleContent->toPlainText();
    QString ArticleTitle=ui->txt_ArticleTitle->text();
    if(ArticleId=="")
    {
        ui->lbl_Note->setText("请选择要修改的通知");
        ui->lbl_Note->setStyleSheet("QLabel { color : red;}");
        return;
    }
    else if(ArticleTitle=="")
    {
        ui->lbl_Note->setText("文章标题不得为空");
        ui->lbl_Note->setStyleSheet("QLabel { color : red;}");
        ui->txt_ArticleTitle->setFocus();
    }
    else if(ArticleTitle.length()>100)
    {
        ui->lbl_Note->setText("文章标题不得超过50字");
        ui->lbl_Note->setStyleSheet("QLabel { color : red;}");
        ui->txt_ArticleTitle->setFocus();
    }
    else if(ArticleContent=="")
    {
        ui->lbl_Note->setText("文章内容不得为空");
        ui->lbl_Note->setStyleSheet("QLabel { color : red;}");
        ui->txt_ArticleTitle->setFocus();
    }
    else
    {
        QMessageBox::StandardButton result=QMessageBox::question(this,"询问","是否选择修改该文章",QMessageBox::Yes|QMessageBox::No);
        if(result ==QMessageBox::Yes)
        {

            if(Ui::sql_DBConnection::DataExecute(
                    QString("update article_info set ArticleTitle='%1' , ArticleContent='%2' where ArticleId=%3").
                    arg(ArticleTitle).
                    arg(ArticleContent).
                    arg(ArticleId)))
            {
                clearBox();
                dataBind();
                ui->lbl_Note->setText("成功修改文章");
                ui->lbl_Note->setStyleSheet("QLabel { color : blue;}");
            }
            else
            {
                ui->lbl_Note->setText("修改文章失败");
                ui->lbl_Note->setStyleSheet("QLabel { color : red;}");
            }
        }
        else return;
    }
}


void ArticleInfoManage::on_btn_Insert_clicked()
{
    if(ui->lbl_Operation->text()=="编辑")
    {
        QMessageBox::StandardButton result=QMessageBox::question(this,"询问","现在是编辑模式，是否改成添加",QMessageBox::Yes|QMessageBox::No);
        if(result==QMessageBox::No)return;
        ui->lbl_Operation->setText("添加");
    }
    QStandardItemModel *model = qobject_cast<QStandardItemModel*>(ui->tableView->model());
    QString ArticleContent=ui->txt_ArticleContent->toPlainText();
    QString ArticleTitle=ui->txt_ArticleTitle->text();
    if(ArticleTitle=="")
    {
        ui->lbl_Note->setText("文章标题不得为空");
        ui->lbl_Note->setStyleSheet("QLabel { color : red;}");
        ui->txt_ArticleTitle->setFocus();
    }
    else if(ArticleTitle.length()>100)
    {
        ui->lbl_Note->setText("文章标题不得超过50字");
        ui->lbl_Note->setStyleSheet("QLabel { color : red;}");
        ui->txt_ArticleTitle->setFocus();
    }
    else if(ArticleContent=="")
    {
        ui->lbl_Note->setText("文章内容不得为空");
        ui->lbl_Note->setStyleSheet("QLabel { color : red;}");
        ui->txt_ArticleTitle->setFocus();
    }
    else
    {
        if(Ui::sql_DBConnection::DataExecute(
                QString("insert into article_info (`ArticlePosition`,`ArticleTitle`,`ArticleContent`) values(%1,'%2','%3')").
                arg(model->rowCount()+1).
                arg(ArticleTitle).
                arg(ArticleContent)
                ))
        {
            dataBind();
            clearBox();
            ui->lbl_Note->setText("成功添加文章");
            ui->lbl_Note->setStyleSheet("QLabel { color : blue;}");
        }
        else
        {
            ui->lbl_Note->setText("添加文章失败");
            ui->lbl_Note->setStyleSheet("QLabel { color : red;}");
        }
    }
}


void ArticleInfoManage::on_btn_Delete_clicked()
{
    if(ArticleId=="")
    {
        ui->lbl_Note->setText("请选择要删除的文章");
        ui->lbl_Note->setStyleSheet("QLabel { color : red;}");
        return;
    }
    else
    {
        QMessageBox::StandardButton result=QMessageBox::question(this,"询问","是否选择删除该文章",QMessageBox::Yes|QMessageBox::No);
        if(result ==QMessageBox::Yes)
        {
            if(Ui::sql_DBConnection::DataExecute(QString("delete from article_info where ArticleId=%1").arg(ArticleId)))
            {
                clearBox();
                dataBind();
                ArticlePositionUpdater();
                dataBind();
                ui->lbl_Note->setText("成功删除文章");
                ui->lbl_Note->setStyleSheet("QLabel { color : blue;}");
            }
            else
            {
                ui->lbl_Note->setText("删除通知文章");
                ui->lbl_Note->setStyleSheet("QLabel { color : red;}");
            }
        }
        else return;
    }
}


void ArticleInfoManage::on_btn_Reset_clicked()
{
    clearBox();
    dataBind();
}


void ArticleInfoManage::on_btn_Up_clicked()
{
    if(ArticlePosition==1)
    {
        ui->lbl_Note->setText("文章已经到最顶上了，无法再向上移动！");
        ui->lbl_Note->setStyleSheet("QLabel { color : red;}");
        return;
    }
    Ui::sql_DBConnection::DataExecute(QString("update article_info set ArticlePosition=%1 where ArticlePosition=%2").arg(ArticlePosition).arg(ArticlePosition-1));
    Ui::sql_DBConnection::DataExecute(QString("update article_info set ArticlePosition=%1 where ArticleId=%2").arg(ArticlePosition-1).arg(ArticleId));
    clearBox();
    dataBind();
    ui->lbl_Note->setText("文章向上移动成功！");
    ui->lbl_Note->setStyleSheet("QLabel { color : blue;}");
}


void ArticleInfoManage::on_btn_Down_clicked()
{
    QStandardItemModel *model = qobject_cast<QStandardItemModel*>(ui->tableView->model());
    if(ArticlePosition==model->rowCount())
    {
        ui->lbl_Note->setText("文章已经到最底下了，无法再向下移动！");
        ui->lbl_Note->setStyleSheet("QLabel { color : red;}");
        return;
    }
    Ui::sql_DBConnection::DataExecute(QString("update article_info set ArticlePosition=%1 where ArticlePosition=%2").arg(ArticlePosition).arg(ArticlePosition+1));
    Ui::sql_DBConnection::DataExecute(QString("update article_info set ArticlePosition=%1 where ArticleId=%2").arg(ArticlePosition+1).arg(ArticleId));
    clearBox();
    dataBind();
    ui->lbl_Note->setText("文章向下移动成功！");
    ui->lbl_Note->setStyleSheet("QLabel { color : blue;}");
}

void ArticleInfoManage::ArticlePositionUpdater()
{
    QStandardItemModel *model = qobject_cast<QStandardItemModel*>(ui->tableView->model());
    if(model)
    {
        for(int i=0;i<model->rowCount();i++)
        {
            QStandardItem *item = model->item(i, 0);
            Ui::sql_DBConnection::DataExecute(QString("update article_info set ArticlePosition=%1 where ArticleId=%2").arg(i+1).arg(item->text()));
        }
    }
}
