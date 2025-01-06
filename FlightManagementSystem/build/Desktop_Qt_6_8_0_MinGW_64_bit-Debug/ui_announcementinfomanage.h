/********************************************************************************
** Form generated from reading UI file 'announcementinfomanage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANNOUNCEMENTINFOMANAGE_H
#define UI_ANNOUNCEMENTINFOMANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_AnnouncementInfoManage
{
public:
    QTextEdit *txt_Announcement;
    QPushButton *btn_Up;
    QPushButton *btn_Down;
    QPushButton *btn_Reset;
    QPushButton *btn_Save;
    QLabel *label;
    QPushButton *btn_Insert;
    QPushButton *btn_Delete;
    QLabel *lbl_Note;
    QLabel *lbl1;
    QLabel *lbl_Operation;
    QTableView *tableView;

    void setupUi(QDialog *AnnouncementInfoManage)
    {
        if (AnnouncementInfoManage->objectName().isEmpty())
            AnnouncementInfoManage->setObjectName("AnnouncementInfoManage");
        AnnouncementInfoManage->resize(440, 289);
        txt_Announcement = new QTextEdit(AnnouncementInfoManage);
        txt_Announcement->setObjectName("txt_Announcement");
        txt_Announcement->setGeometry(QRect(10, 40, 421, 41));
        btn_Up = new QPushButton(AnnouncementInfoManage);
        btn_Up->setObjectName("btn_Up");
        btn_Up->setGeometry(QRect(250, 90, 56, 18));
        btn_Down = new QPushButton(AnnouncementInfoManage);
        btn_Down->setObjectName("btn_Down");
        btn_Down->setGeometry(QRect(310, 90, 56, 18));
        btn_Reset = new QPushButton(AnnouncementInfoManage);
        btn_Reset->setObjectName("btn_Reset");
        btn_Reset->setGeometry(QRect(190, 90, 56, 18));
        btn_Save = new QPushButton(AnnouncementInfoManage);
        btn_Save->setObjectName("btn_Save");
        btn_Save->setGeometry(QRect(10, 90, 56, 18));
        label = new QLabel(AnnouncementInfoManage);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 20, 51, 16));
        btn_Insert = new QPushButton(AnnouncementInfoManage);
        btn_Insert->setObjectName("btn_Insert");
        btn_Insert->setGeometry(QRect(70, 90, 56, 18));
        btn_Delete = new QPushButton(AnnouncementInfoManage);
        btn_Delete->setObjectName("btn_Delete");
        btn_Delete->setGeometry(QRect(130, 90, 56, 18));
        lbl_Note = new QLabel(AnnouncementInfoManage);
        lbl_Note->setObjectName("lbl_Note");
        lbl_Note->setGeometry(QRect(220, 0, 211, 16));
        lbl1 = new QLabel(AnnouncementInfoManage);
        lbl1->setObjectName("lbl1");
        lbl1->setGeometry(QRect(1, 0, 121, 16));
        lbl_Operation = new QLabel(AnnouncementInfoManage);
        lbl_Operation->setObjectName("lbl_Operation");
        lbl_Operation->setGeometry(QRect(110, 0, 41, 16));
        tableView = new QTableView(AnnouncementInfoManage);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(10, 120, 421, 161));
        tableView->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);

        retranslateUi(AnnouncementInfoManage);

        QMetaObject::connectSlotsByName(AnnouncementInfoManage);
    } // setupUi

    void retranslateUi(QDialog *AnnouncementInfoManage)
    {
        AnnouncementInfoManage->setWindowTitle(QCoreApplication::translate("AnnouncementInfoManage", "Dialog", nullptr));
        btn_Up->setText(QCoreApplication::translate("AnnouncementInfoManage", "\344\270\212\347\247\273", nullptr));
        btn_Down->setText(QCoreApplication::translate("AnnouncementInfoManage", "\344\270\213\347\247\273", nullptr));
        btn_Reset->setText(QCoreApplication::translate("AnnouncementInfoManage", "\351\207\215\347\275\256", nullptr));
        btn_Save->setText(QCoreApplication::translate("AnnouncementInfoManage", "\344\277\235\345\255\230", nullptr));
        label->setText(QCoreApplication::translate("AnnouncementInfoManage", "\351\200\232\347\237\245\345\206\205\345\256\271\357\274\232", nullptr));
        btn_Insert->setText(QCoreApplication::translate("AnnouncementInfoManage", "\346\267\273\345\212\240", nullptr));
        btn_Delete->setText(QCoreApplication::translate("AnnouncementInfoManage", "\345\210\240\351\231\244", nullptr));
        lbl_Note->setText(QString());
        lbl1->setText(QCoreApplication::translate("AnnouncementInfoManage", "\347\274\226\350\276\221\351\200\232\347\237\245\344\277\241\346\201\257 \347\212\266\346\200\201\357\274\232", nullptr));
        lbl_Operation->setText(QCoreApplication::translate("AnnouncementInfoManage", "\346\267\273\345\212\240", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AnnouncementInfoManage: public Ui_AnnouncementInfoManage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANNOUNCEMENTINFOMANAGE_H
