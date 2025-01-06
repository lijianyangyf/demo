#include "sql_dbconnection.h"
using namespace Ui;
QSqlDatabase sql_DBConnection::conn;
QStringList OfflineTableModel::DataHeaders;
QVector<QVector<QVariant>> OfflineTableModel::Data;
sql_DBConnection::sql_DBConnection()
{
    conn = QSqlDatabase::addDatabase("QODBC");
    conn.setDatabaseName("flightmanagementsystem");
}
void sql_DBConnection::ConnectionInitialize()
{
    conn = QSqlDatabase::addDatabase("QODBC");
    conn.setDatabaseName("flightmanagementsystem");
}
bool sql_DBConnection::ConnectionCheck()
{
    if(!conn.open())return 0;
    conn.close();
    return 1;
}

bool sql_DBConnection::fliter(QString str)
{
    QStringList dangerousPattern={"--", ";", "/*", "*/"};
    for (const QString& pattern:dangerousPattern)
    {
        if(str.contains(pattern,Qt::CaseInsensitive))
        {
            return false;
        }
    }
    return true;
}

bool OfflineTableModel::LoadData(QString str)
{
    if(!Ui::sql_DBConnection::fliter(str))return 0;
    Ui::sql_DBConnection::conn.open();
    QSqlQuery query(Ui::sql_DBConnection::conn);
    if(!query.exec(str))return 0;
    Data.clear();
    DataHeaders.clear();
    for(int i=0;i< query.record().count();i++)
        DataHeaders<<query.record().fieldName(i);
    while(query.next())
    {
        QVector<QVariant>row;
        for(int i=0;i<query.record().count();i++)
            row.append(query.value(i));
        Data.append(row);
    }
    Ui::sql_DBConnection::conn.close();
    return 1;
}
bool sql_DBConnection::DataQuery(QTableView *tv,QString str)
{
    if(!DataSet.LoadData(str))return 0;

    QStandardItemModel *tbm= new QStandardItemModel(tv);
    tbm->setHorizontalHeaderLabels(DataSet.DataHeaders);

    for(auto &row:DataSet.Data)
    {
        QList<QStandardItem*>items;
        for(auto &cell:row)
            items.append(new QStandardItem(cell.toString()));
        tbm->appendRow(items);
    }
    tv->setModel(tbm);
    tv->resizeColumnsToContents();
    return 1;
}
bool sql_DBConnection::DataExecute(QString str)
{
    if(!Ui::sql_DBConnection::fliter(str))return 0;
    conn.open();
    QSqlQuery query;
    if(!query.exec(str))return 0;
    conn.close();
    return 1;
}
void sql_DBConnection::TimeUpdate()
{
    QString currentTime=QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss");
    conn.open();
    QSqlQuery query;
    query.exec(QString("select FlightCode from flight_info where FlightState=0 and FlightLeaveTime<='%1'").arg(currentTime));
    while(query.next())
    {
        QString FlightCode = query.value(0).toString();
        DataExecute(QString("update ticket_info set Ticket_FlightState=1 where Ticket_FlightCode='%1' ").arg(FlightCode));
    }
    DataExecute(QString("update flight_info set FlightState=1 where FlightState=0 and FlightLeaveTime<='%1'").arg(currentTime));

    conn.open();
    query.exec(QString("select FlightCode from flight_info where FlightState=1 and FlightArriveTime<='%1'").arg(currentTime));
    while(query.next())
    {
        QString FlightCode = query.value(0).toString();
        DataExecute(QString("update ticket_info set Ticket_FlightState=2 where Ticket_FlightCode='%1' ").arg(FlightCode));
    }
    DataExecute(QString("update flight_info set FlightState=2 where FlightState=1 and FlightArriveTime<='%1'").arg(currentTime));

    currentTime=QDateTime::currentDateTime().addSecs(-30*60).toString("yyyy-MM-dd HH:mm:ss");
    DataExecute(QString("update ticket_info set Ticket_CustomerAccount=0 where Ticket_CustomerAccount<>0 and TicketPayState=0 and TicketPayTime<='%1' ").arg(currentTime));
}
