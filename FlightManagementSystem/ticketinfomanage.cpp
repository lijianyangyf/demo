#include "ticketinfomanage.h"
#include "ui_ticketinfomanage.h"

TicketInfoManage::TicketInfoManage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::TicketInfoManage)
{
    ui->setupUi(this);
}

TicketInfoManage::~TicketInfoManage()
{
    delete ui;
}
