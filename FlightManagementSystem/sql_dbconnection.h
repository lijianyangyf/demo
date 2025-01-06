#ifndef SQL_DBCONNECTION_H
#define SQL_DBCONNECTION_H
#include <QAbstractItemModel>
#include <QAbstractTableModel>
#include <QStandardItemModel>
#include <Qvector>
#include <QSqlRecord>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QTableView>
#include <QDebug>
#include <QString>
#include <QSettings>
#include <QVariant>
#include <QListView>
#include <QTimer>
#include <QDateTime>
#include <QItemSelectionModel>

namespace Ui
{
    class OfflineTableModel
    {
    public:
        static QVector<QVector<QVariant>>Data;
        static QStringList DataHeaders;
        static bool LoadData(QString str);
    };
    class sql_DBConnection
    {
        static OfflineTableModel DataSet;
    public:
        static QSqlDatabase conn;
        sql_DBConnection();
        static bool fliter(QString str);
        static void ConnectionInitialize();
        static bool ConnectionCheck();
        static bool DataQuery(QTableView *tv,QString str);
        static bool DataExecute(QString str);
        static void TimeUpdate();
    };
}


#endif // SQL_DBCONNECTION_H
