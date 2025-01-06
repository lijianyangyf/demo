#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void Login();

private slots:

    void ShowUp(const bool &Status);

    void on_Quit_triggered();

    void on_FlightInfoManagement_triggered();

    void updater();

    void on_CustomerInfoQuery_triggered();

    void on_TicketInfoQuery_triggered();

    void on_AnnouncementManagement_triggered();

    void on_ArticleManagement_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
