#ifndef TICKETINFOQUERY_H
#define TICKETINFOQUERY_H

#include <QDialog>

namespace Ui {
class TicketInfoQuery;
}

class TicketInfoQuery : public QDialog
{
    Q_OBJECT

public:
    explicit TicketInfoQuery(QWidget *parent = nullptr);
    ~TicketInfoQuery();
signals:
    void TicketQueryManage(const bool &Status);
protected:
    void closeEvent(QCloseEvent *event)override;
private slots:
    void clearBox();
    void dataBind(QString str);
    void StringAdapter();
    void on_btn_Search_clicked();
    void on_btn_Reset_clicked();

private:
    Ui::TicketInfoQuery *ui;
};

#endif // TICKETINFOQUERY_H
