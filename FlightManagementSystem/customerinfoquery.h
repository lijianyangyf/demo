#ifndef CUSTOMERINFOQUERY_H
#define CUSTOMERINFOQUERY_H

#include <QDialog>

namespace Ui {
class CustomerInfoQuery;
}

class CustomerInfoQuery : public QDialog
{
    Q_OBJECT

public:
    explicit CustomerInfoQuery(QWidget *parent = nullptr);
    ~CustomerInfoQuery();
signals:
    void CustomerQueryManage(const bool &Status);
protected:
    void closeEvent(QCloseEvent *event)override;
private slots:
    void clearBox();
    void dataBind(QString str);
    void StringAdapter();
    void on_btn_Search_clicked();
    void on_btn_Reset_clicked();
private:
    Ui::CustomerInfoQuery *ui;
};

#endif // CUSTOMERINFOQUERY_H
