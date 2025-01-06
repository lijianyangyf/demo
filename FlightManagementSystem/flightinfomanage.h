#ifndef FLIGHTINFOMANAGE_H
#define FLIGHTINFOMANAGE_H

#include <QDialog>
#include <QItemSelectionModel>
#include <QCloseEvent>
namespace Ui {
class FlightInfoManage;
}

class FlightInfoManage : public QDialog
{
    Q_OBJECT
    static QString FlightID;
public:
    explicit FlightInfoManage(QWidget *parent = nullptr);
    ~FlightInfoManage();
protected:
    void closeEvent(QCloseEvent *event)override;
signals:
    void FlightManageInfo(const bool &Status);
private slots:
    void dataBind();
    void clearBox();
    void selectionChanged(const QItemSelection &selected);
    void StringAdapter();
    void TicketInserter();
    void TicketUpdater();
    void TicketDeleter();
    void on_btn_FIM_Reset_clicked();
    void on_btn_FIM_delete_clicked();
    void on_btn_FIM_Save_clicked();
    void on_btn_FIM_Insert_clicked();
private:
    Ui::FlightInfoManage *ui;
};

#endif // FLIGHTINFOMANAGE_H
