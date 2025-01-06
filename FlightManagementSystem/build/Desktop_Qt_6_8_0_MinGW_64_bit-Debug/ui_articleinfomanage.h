/********************************************************************************
** Form generated from reading UI file 'articleinfomanage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARTICLEINFOMANAGE_H
#define UI_ARTICLEINFOMANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_ArticleInfoManage
{
public:
    QLabel *lbl_Operation;
    QPushButton *btn_Delete;
    QLabel *lbl_Note;
    QPushButton *btn_Insert;
    QPushButton *btn_Save;
    QLabel *lbl1;
    QPushButton *btn_Reset;
    QTextEdit *txt_ArticleContent;
    QPushButton *btn_Up;
    QPushButton *btn_Down;
    QLabel *label;
    QTableView *tableView;
    QLabel *label_2;
    QLineEdit *txt_ArticleTitle;

    void setupUi(QDialog *ArticleInfoManage)
    {
        if (ArticleInfoManage->objectName().isEmpty())
            ArticleInfoManage->setObjectName("ArticleInfoManage");
        ArticleInfoManage->resize(439, 448);
        lbl_Operation = new QLabel(ArticleInfoManage);
        lbl_Operation->setObjectName("lbl_Operation");
        lbl_Operation->setGeometry(QRect(110, 0, 41, 16));
        btn_Delete = new QPushButton(ArticleInfoManage);
        btn_Delete->setObjectName("btn_Delete");
        btn_Delete->setGeometry(QRect(130, 250, 56, 18));
        lbl_Note = new QLabel(ArticleInfoManage);
        lbl_Note->setObjectName("lbl_Note");
        lbl_Note->setGeometry(QRect(220, 0, 211, 16));
        btn_Insert = new QPushButton(ArticleInfoManage);
        btn_Insert->setObjectName("btn_Insert");
        btn_Insert->setGeometry(QRect(70, 250, 56, 18));
        btn_Save = new QPushButton(ArticleInfoManage);
        btn_Save->setObjectName("btn_Save");
        btn_Save->setGeometry(QRect(10, 250, 56, 18));
        lbl1 = new QLabel(ArticleInfoManage);
        lbl1->setObjectName("lbl1");
        lbl1->setGeometry(QRect(1, 0, 121, 16));
        btn_Reset = new QPushButton(ArticleInfoManage);
        btn_Reset->setObjectName("btn_Reset");
        btn_Reset->setGeometry(QRect(190, 250, 56, 18));
        txt_ArticleContent = new QTextEdit(ArticleInfoManage);
        txt_ArticleContent->setObjectName("txt_ArticleContent");
        txt_ArticleContent->setGeometry(QRect(10, 60, 421, 181));
        btn_Up = new QPushButton(ArticleInfoManage);
        btn_Up->setObjectName("btn_Up");
        btn_Up->setGeometry(QRect(250, 250, 56, 18));
        btn_Down = new QPushButton(ArticleInfoManage);
        btn_Down->setObjectName("btn_Down");
        btn_Down->setGeometry(QRect(310, 250, 56, 18));
        label = new QLabel(ArticleInfoManage);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 40, 51, 16));
        tableView = new QTableView(ArticleInfoManage);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(10, 280, 421, 161));
        tableView->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        label_2 = new QLabel(ArticleInfoManage);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 20, 51, 16));
        txt_ArticleTitle = new QLineEdit(ArticleInfoManage);
        txt_ArticleTitle->setObjectName("txt_ArticleTitle");
        txt_ArticleTitle->setGeometry(QRect(70, 20, 351, 20));

        retranslateUi(ArticleInfoManage);

        QMetaObject::connectSlotsByName(ArticleInfoManage);
    } // setupUi

    void retranslateUi(QDialog *ArticleInfoManage)
    {
        ArticleInfoManage->setWindowTitle(QCoreApplication::translate("ArticleInfoManage", "Dialog", nullptr));
        lbl_Operation->setText(QCoreApplication::translate("ArticleInfoManage", "\346\267\273\345\212\240", nullptr));
        btn_Delete->setText(QCoreApplication::translate("ArticleInfoManage", "\345\210\240\351\231\244", nullptr));
        lbl_Note->setText(QString());
        btn_Insert->setText(QCoreApplication::translate("ArticleInfoManage", "\346\267\273\345\212\240", nullptr));
        btn_Save->setText(QCoreApplication::translate("ArticleInfoManage", "\344\277\235\345\255\230", nullptr));
        lbl1->setText(QCoreApplication::translate("ArticleInfoManage", "\347\274\226\350\276\221\346\226\207\347\253\240\344\277\241\346\201\257 \347\212\266\346\200\201\357\274\232", nullptr));
        btn_Reset->setText(QCoreApplication::translate("ArticleInfoManage", "\351\207\215\347\275\256", nullptr));
        btn_Up->setText(QCoreApplication::translate("ArticleInfoManage", "\344\270\212\347\247\273", nullptr));
        btn_Down->setText(QCoreApplication::translate("ArticleInfoManage", "\344\270\213\347\247\273", nullptr));
        label->setText(QCoreApplication::translate("ArticleInfoManage", "\346\226\207\347\253\240\345\206\205\345\256\271\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("ArticleInfoManage", "\346\226\207\347\253\240\346\240\207\351\242\230\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ArticleInfoManage: public Ui_ArticleInfoManage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARTICLEINFOMANAGE_H
