#ifndef ARTICLEINFOMANAGE_H
#define ARTICLEINFOMANAGE_H

#include <QDialog>
#include "QItemSelection"
namespace Ui {
class ArticleInfoManage;
}

class ArticleInfoManage : public QDialog
{
    Q_OBJECT
    static QString ArticleId;
    static int ArticlePosition;
public:
    explicit ArticleInfoManage(QWidget *parent = nullptr);
    ~ArticleInfoManage();
protected:
    void closeEvent(QCloseEvent *event)override;
signals:
    void ArticleManageInfo(const bool &Status);
private slots:
    void dataBind();
    void clearBox();
    void selectionChanged(const QItemSelection &selected);
    void ArticlePositionUpdater();
    void on_btn_Save_clicked();
    void on_btn_Insert_clicked();
    void on_btn_Delete_clicked();
    void on_btn_Reset_clicked();
    void on_btn_Up_clicked();
    void on_btn_Down_clicked();

private:
    Ui::ArticleInfoManage *ui;
};

#endif // ARTICLEINFOMANAGE_H
