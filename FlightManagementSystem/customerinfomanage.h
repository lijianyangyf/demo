#ifndef CUSTOMERINFOMANAGE_H
#define CUSTOMERINFOMANAGE_H

#include <QWidget>

namespace Ui {
class CustomerInfoManage;
}

class CustomerInfoManage : public QWidget
{
    Q_OBJECT

public:
    explicit CustomerInfoManage(QWidget *parent = nullptr);
    ~CustomerInfoManage();

private:
    Ui::CustomerInfoManage *ui;
};

#endif // CUSTOMERINFOMANAGE_H
