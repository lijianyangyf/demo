#ifndef TICKETINFOMANAGE_H
#define TICKETINFOMANAGE_H

#include <QDialog>

namespace Ui {
class TicketInfoManage;
}

class TicketInfoManage : public QDialog
{
    Q_OBJECT

public:
    explicit TicketInfoManage(QWidget *parent = nullptr);
    ~TicketInfoManage();

private:
    Ui::TicketInfoManage *ui;
};

#endif // TICKETINFOMANAGE_H
