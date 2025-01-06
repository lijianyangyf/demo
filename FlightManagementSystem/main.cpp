#include "mainwindow.h"
#include "sql_dbconnection.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QSettings setting("config.ini",QSettings::IniFormat);
    w.Login();
    return a.exec();
}
