#ifndef ANNOUNCEMENTINFOMANAGE_H
#define ANNOUNCEMENTINFOMANAGE_H

#include <QDialog>
#include "QItemSelection"
namespace Ui {
class AnnouncementInfoManage;
}

class AnnouncementInfoManage : public QDialog
{
    Q_OBJECT
    static QString AnnouncementId;
    static int AnnouncementPosition;
public:
    explicit AnnouncementInfoManage(QWidget *parent = nullptr);
    ~AnnouncementInfoManage();
protected:
    void closeEvent(QCloseEvent *event)override;
signals:
    void AnnouncementManageInfo(const bool &Status);
private slots:
    void dataBind();
    void clearBox();
    void selectionChanged(const QItemSelection &selected);
    void AnnouncementPositionUpdater();
    void on_btn_Save_clicked();
    void on_btn_Insert_clicked();
    void on_btn_Delete_clicked();
    void on_btn_Reset_clicked();
    void on_btn_Up_clicked();
    void on_btn_Down_clicked();

private:
    Ui::AnnouncementInfoManage *ui;
};

#endif // ANNOUNCEMENTINFOMANAGE_H
