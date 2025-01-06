#include "customerinfomanage.h"
#include "ui_customerinfomanage.h"

CustomerInfoManage::CustomerInfoManage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CustomerInfoManage)
{
    ui->setupUi(this);
}

CustomerInfoManage::~CustomerInfoManage()
{
    delete ui;
}
