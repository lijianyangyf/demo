/********************************************************************************
** Form generated from reading UI file 'customerinfoquery.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERINFOQUERY_H
#define UI_CUSTOMERINFOQUERY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomerInfoQuery
{
public:
    QTableView *tableView;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *chb_CustomerName;
    QLabel *lbl2;
    QLineEdit *txt_CustomerName;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *chb_CustomerBirthday;
    QLabel *lbl4;
    QComboBox *cbb_CustomerBirthday;
    QDateEdit *de_CustomerBirthday;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *chb_CustomerIdentityNumber;
    QLabel *lbl5;
    QLineEdit *txt_CustomerIdentityNumber;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *chb_CustomerTelephone;
    QLabel *lbl6;
    QLineEdit *txt_CustomerTelephone;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_7;
    QCheckBox *chb_CustomerEmail;
    QLabel *lbl7;
    QLineEdit *txt_CustomerEmail;
    QWidget *layoutWidget_7;
    QHBoxLayout *horizontalLayout_9;
    QCheckBox *chb_CustomerAddress;
    QLabel *lbl8;
    QLineEdit *txt_CustomerAddress;
    QWidget *layoutWidget_8;
    QHBoxLayout *horizontalLayout_10;
    QCheckBox *chb_CustomerUserName;
    QLabel *lbl9;
    QLineEdit *txt_CustomerUserName;
    QWidget *layoutWidget_9;
    QHBoxLayout *horizontalLayout_11;
    QCheckBox *chb_CustomerType;
    QLabel *lbl10;
    QComboBox *cbb_CustomerType;
    QWidget *layoutWidget_10;
    QHBoxLayout *horizontalLayout_12;
    QCheckBox *chb_CustomerRegisterDate;
    QLabel *lbl11;
    QComboBox *cbb_CustomerRegisterDate;
    QDateEdit *de_CustomerRegisterDate;
    QPushButton *btn_Search;
    QPushButton *btn_Reset;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QCheckBox *chb_CustomerAccount;
    QLabel *lbl1;
    QLineEdit *txt_CustomerAccount;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *chb_CustomerSex;
    QLabel *lbl3;
    QComboBox *cbb_CustomerSex;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_13;
    QCheckBox *chb_CustomerPassword;
    QLabel *lbl12;
    QLineEdit *txt_CustomerPassword;

    void setupUi(QDialog *CustomerInfoQuery)
    {
        if (CustomerInfoQuery->objectName().isEmpty())
            CustomerInfoQuery->setObjectName("CustomerInfoQuery");
        CustomerInfoQuery->resize(809, 500);
        tableView = new QTableView(CustomerInfoQuery);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(10, 160, 791, 331));
        tableView->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        layoutWidget = new QWidget(CustomerInfoQuery);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 70, 193, 21));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        chb_CustomerName = new QCheckBox(layoutWidget);
        chb_CustomerName->setObjectName("chb_CustomerName");
        chb_CustomerName->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"    width: 20px;\n"
"    height: 10px;\n"
"    margin: 0px;\n"
"}"));

        horizontalLayout_2->addWidget(chb_CustomerName);

        lbl2 = new QLabel(layoutWidget);
        lbl2->setObjectName("lbl2");

        horizontalLayout_2->addWidget(lbl2);

        txt_CustomerName = new QLineEdit(layoutWidget);
        txt_CustomerName->setObjectName("txt_CustomerName");

        horizontalLayout_2->addWidget(txt_CustomerName);

        layoutWidget_3 = new QWidget(CustomerInfoQuery);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(270, 10, 221, 21));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        chb_CustomerBirthday = new QCheckBox(layoutWidget_3);
        chb_CustomerBirthday->setObjectName("chb_CustomerBirthday");
        chb_CustomerBirthday->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"    width: 20px;\n"
"    height: 10px;\n"
"    margin: 0px;\n"
"}"));

        horizontalLayout_4->addWidget(chb_CustomerBirthday);

        lbl4 = new QLabel(layoutWidget_3);
        lbl4->setObjectName("lbl4");

        horizontalLayout_4->addWidget(lbl4);

        cbb_CustomerBirthday = new QComboBox(layoutWidget_3);
        cbb_CustomerBirthday->addItem(QString());
        cbb_CustomerBirthday->addItem(QString());
        cbb_CustomerBirthday->addItem(QString());
        cbb_CustomerBirthday->setObjectName("cbb_CustomerBirthday");

        horizontalLayout_4->addWidget(cbb_CustomerBirthday);

        de_CustomerBirthday = new QDateEdit(layoutWidget_3);
        de_CustomerBirthday->setObjectName("de_CustomerBirthday");
        de_CustomerBirthday->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);

        horizontalLayout_4->addWidget(de_CustomerBirthday);

        layoutWidget_4 = new QWidget(CustomerInfoQuery);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(270, 40, 241, 21));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        chb_CustomerIdentityNumber = new QCheckBox(layoutWidget_4);
        chb_CustomerIdentityNumber->setObjectName("chb_CustomerIdentityNumber");
        chb_CustomerIdentityNumber->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"    width: 20px;\n"
"    height: 10px;\n"
"    margin: 0px;\n"
"}"));

        horizontalLayout_5->addWidget(chb_CustomerIdentityNumber);

        lbl5 = new QLabel(layoutWidget_4);
        lbl5->setObjectName("lbl5");

        horizontalLayout_5->addWidget(lbl5);

        txt_CustomerIdentityNumber = new QLineEdit(layoutWidget_4);
        txt_CustomerIdentityNumber->setObjectName("txt_CustomerIdentityNumber");

        horizontalLayout_5->addWidget(txt_CustomerIdentityNumber);

        layoutWidget_5 = new QWidget(CustomerInfoQuery);
        layoutWidget_5->setObjectName("layoutWidget_5");
        layoutWidget_5->setGeometry(QRect(270, 70, 241, 21));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        chb_CustomerTelephone = new QCheckBox(layoutWidget_5);
        chb_CustomerTelephone->setObjectName("chb_CustomerTelephone");
        chb_CustomerTelephone->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"    width: 20px;\n"
"    height: 10px;\n"
"    margin: 0px;\n"
"}"));

        horizontalLayout_6->addWidget(chb_CustomerTelephone);

        lbl6 = new QLabel(layoutWidget_5);
        lbl6->setObjectName("lbl6");

        horizontalLayout_6->addWidget(lbl6);

        txt_CustomerTelephone = new QLineEdit(layoutWidget_5);
        txt_CustomerTelephone->setObjectName("txt_CustomerTelephone");

        horizontalLayout_6->addWidget(txt_CustomerTelephone);

        layoutWidget_6 = new QWidget(CustomerInfoQuery);
        layoutWidget_6->setObjectName("layoutWidget_6");
        layoutWidget_6->setGeometry(QRect(270, 100, 241, 21));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        chb_CustomerEmail = new QCheckBox(layoutWidget_6);
        chb_CustomerEmail->setObjectName("chb_CustomerEmail");
        chb_CustomerEmail->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"    width: 20px;\n"
"    height: 10px;\n"
"    margin: 0px;\n"
"}"));

        horizontalLayout_7->addWidget(chb_CustomerEmail);

        lbl7 = new QLabel(layoutWidget_6);
        lbl7->setObjectName("lbl7");

        horizontalLayout_7->addWidget(lbl7);

        txt_CustomerEmail = new QLineEdit(layoutWidget_6);
        txt_CustomerEmail->setObjectName("txt_CustomerEmail");

        horizontalLayout_7->addWidget(txt_CustomerEmail);

        layoutWidget_7 = new QWidget(CustomerInfoQuery);
        layoutWidget_7->setObjectName("layoutWidget_7");
        layoutWidget_7->setGeometry(QRect(560, 10, 241, 21));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget_7);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        chb_CustomerAddress = new QCheckBox(layoutWidget_7);
        chb_CustomerAddress->setObjectName("chb_CustomerAddress");
        chb_CustomerAddress->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"    width: 20px;\n"
"    height: 10px;\n"
"    margin: 0px;\n"
"}"));

        horizontalLayout_9->addWidget(chb_CustomerAddress);

        lbl8 = new QLabel(layoutWidget_7);
        lbl8->setObjectName("lbl8");

        horizontalLayout_9->addWidget(lbl8);

        txt_CustomerAddress = new QLineEdit(layoutWidget_7);
        txt_CustomerAddress->setObjectName("txt_CustomerAddress");

        horizontalLayout_9->addWidget(txt_CustomerAddress);

        layoutWidget_8 = new QWidget(CustomerInfoQuery);
        layoutWidget_8->setObjectName("layoutWidget_8");
        layoutWidget_8->setGeometry(QRect(560, 40, 193, 21));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget_8);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        chb_CustomerUserName = new QCheckBox(layoutWidget_8);
        chb_CustomerUserName->setObjectName("chb_CustomerUserName");
        chb_CustomerUserName->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"    width: 20px;\n"
"    height: 10px;\n"
"    margin: 0px;\n"
"}"));

        horizontalLayout_10->addWidget(chb_CustomerUserName);

        lbl9 = new QLabel(layoutWidget_8);
        lbl9->setObjectName("lbl9");

        horizontalLayout_10->addWidget(lbl9);

        txt_CustomerUserName = new QLineEdit(layoutWidget_8);
        txt_CustomerUserName->setObjectName("txt_CustomerUserName");

        horizontalLayout_10->addWidget(txt_CustomerUserName);

        layoutWidget_9 = new QWidget(CustomerInfoQuery);
        layoutWidget_9->setObjectName("layoutWidget_9");
        layoutWidget_9->setGeometry(QRect(560, 70, 191, 21));
        horizontalLayout_11 = new QHBoxLayout(layoutWidget_9);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        chb_CustomerType = new QCheckBox(layoutWidget_9);
        chb_CustomerType->setObjectName("chb_CustomerType");
        chb_CustomerType->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"    width: 20px;\n"
"    height: 10px;\n"
"    margin: 0px;\n"
"}"));

        horizontalLayout_11->addWidget(chb_CustomerType);

        lbl10 = new QLabel(layoutWidget_9);
        lbl10->setObjectName("lbl10");

        horizontalLayout_11->addWidget(lbl10);

        cbb_CustomerType = new QComboBox(layoutWidget_9);
        cbb_CustomerType->addItem(QString());
        cbb_CustomerType->addItem(QString());
        cbb_CustomerType->addItem(QString());
        cbb_CustomerType->addItem(QString());
        cbb_CustomerType->setObjectName("cbb_CustomerType");

        horizontalLayout_11->addWidget(cbb_CustomerType);

        layoutWidget_10 = new QWidget(CustomerInfoQuery);
        layoutWidget_10->setObjectName("layoutWidget_10");
        layoutWidget_10->setGeometry(QRect(560, 100, 221, 21));
        horizontalLayout_12 = new QHBoxLayout(layoutWidget_10);
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        chb_CustomerRegisterDate = new QCheckBox(layoutWidget_10);
        chb_CustomerRegisterDate->setObjectName("chb_CustomerRegisterDate");
        chb_CustomerRegisterDate->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"    width: 20px;\n"
"    height: 10px;\n"
"    margin: 0px;\n"
"}"));

        horizontalLayout_12->addWidget(chb_CustomerRegisterDate);

        lbl11 = new QLabel(layoutWidget_10);
        lbl11->setObjectName("lbl11");

        horizontalLayout_12->addWidget(lbl11);

        cbb_CustomerRegisterDate = new QComboBox(layoutWidget_10);
        cbb_CustomerRegisterDate->addItem(QString());
        cbb_CustomerRegisterDate->addItem(QString());
        cbb_CustomerRegisterDate->addItem(QString());
        cbb_CustomerRegisterDate->setObjectName("cbb_CustomerRegisterDate");

        horizontalLayout_12->addWidget(cbb_CustomerRegisterDate);

        de_CustomerRegisterDate = new QDateEdit(layoutWidget_10);
        de_CustomerRegisterDate->setObjectName("de_CustomerRegisterDate");
        de_CustomerRegisterDate->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);

        horizontalLayout_12->addWidget(de_CustomerRegisterDate);

        btn_Search = new QPushButton(CustomerInfoQuery);
        btn_Search->setObjectName("btn_Search");
        btn_Search->setGeometry(QRect(600, 140, 56, 18));
        btn_Reset = new QPushButton(CustomerInfoQuery);
        btn_Reset->setObjectName("btn_Reset");
        btn_Reset->setGeometry(QRect(680, 140, 56, 18));
        layoutWidget1 = new QWidget(CustomerInfoQuery);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(20, 10, 193, 21));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        chb_CustomerAccount = new QCheckBox(layoutWidget1);
        chb_CustomerAccount->setObjectName("chb_CustomerAccount");
        chb_CustomerAccount->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"    width: 20px;\n"
"    height: 10px;\n"
"    margin: 0px;\n"
"}"));

        horizontalLayout->addWidget(chb_CustomerAccount);

        lbl1 = new QLabel(layoutWidget1);
        lbl1->setObjectName("lbl1");

        horizontalLayout->addWidget(lbl1);

        txt_CustomerAccount = new QLineEdit(layoutWidget1);
        txt_CustomerAccount->setObjectName("txt_CustomerAccount");

        horizontalLayout->addWidget(txt_CustomerAccount);

        layoutWidget2 = new QWidget(CustomerInfoQuery);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(20, 100, 191, 21));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        chb_CustomerSex = new QCheckBox(layoutWidget2);
        chb_CustomerSex->setObjectName("chb_CustomerSex");
        chb_CustomerSex->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"    width: 20px;\n"
"    height: 10px;\n"
"    margin: 0px;\n"
"}"));

        horizontalLayout_3->addWidget(chb_CustomerSex);

        lbl3 = new QLabel(layoutWidget2);
        lbl3->setObjectName("lbl3");

        horizontalLayout_3->addWidget(lbl3);

        cbb_CustomerSex = new QComboBox(layoutWidget2);
        cbb_CustomerSex->addItem(QString());
        cbb_CustomerSex->addItem(QString());
        cbb_CustomerSex->addItem(QString());
        cbb_CustomerSex->setObjectName("cbb_CustomerSex");

        horizontalLayout_3->addWidget(cbb_CustomerSex);

        layoutWidget_2 = new QWidget(CustomerInfoQuery);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(20, 40, 193, 21));
        horizontalLayout_13 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        chb_CustomerPassword = new QCheckBox(layoutWidget_2);
        chb_CustomerPassword->setObjectName("chb_CustomerPassword");
        chb_CustomerPassword->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"    width: 20px;\n"
"    height: 10px;\n"
"    margin: 0px;\n"
"}"));

        horizontalLayout_13->addWidget(chb_CustomerPassword);

        lbl12 = new QLabel(layoutWidget_2);
        lbl12->setObjectName("lbl12");

        horizontalLayout_13->addWidget(lbl12);

        txt_CustomerPassword = new QLineEdit(layoutWidget_2);
        txt_CustomerPassword->setObjectName("txt_CustomerPassword");

        horizontalLayout_13->addWidget(txt_CustomerPassword);


        retranslateUi(CustomerInfoQuery);

        QMetaObject::connectSlotsByName(CustomerInfoQuery);
    } // setupUi

    void retranslateUi(QDialog *CustomerInfoQuery)
    {
        CustomerInfoQuery->setWindowTitle(QCoreApplication::translate("CustomerInfoQuery", "Dialog", nullptr));
        chb_CustomerName->setText(QString());
        lbl2->setText(QCoreApplication::translate("CustomerInfoQuery", "\347\224\250\346\210\267\345\247\223\345\220\215\357\274\232", nullptr));
        chb_CustomerBirthday->setText(QString());
        lbl4->setText(QCoreApplication::translate("CustomerInfoQuery", "\347\224\250\346\210\267\345\207\272\347\224\237\346\227\245\346\234\237\357\274\232", nullptr));
        cbb_CustomerBirthday->setItemText(0, QCoreApplication::translate("CustomerInfoQuery", "=", nullptr));
        cbb_CustomerBirthday->setItemText(1, QCoreApplication::translate("CustomerInfoQuery", ">", nullptr));
        cbb_CustomerBirthday->setItemText(2, QCoreApplication::translate("CustomerInfoQuery", "<", nullptr));

        de_CustomerBirthday->setDisplayFormat(QCoreApplication::translate("CustomerInfoQuery", "yyyy/M/d", nullptr));
        chb_CustomerIdentityNumber->setText(QString());
        lbl5->setText(QCoreApplication::translate("CustomerInfoQuery", "\347\224\250\346\210\267\350\272\253\344\273\275\350\257\201\345\217\267\347\240\201\357\274\232", nullptr));
        chb_CustomerTelephone->setText(QString());
        lbl6->setText(QCoreApplication::translate("CustomerInfoQuery", "\347\224\250\346\210\267\350\201\224\347\263\273\347\224\265\350\257\235\357\274\232", nullptr));
        chb_CustomerEmail->setText(QString());
        lbl7->setText(QCoreApplication::translate("CustomerInfoQuery", "\347\224\250\346\210\267\347\224\265\345\255\220\351\202\256\347\256\261\345\234\260\345\235\200\357\274\232", nullptr));
        chb_CustomerAddress->setText(QString());
        lbl8->setText(QCoreApplication::translate("CustomerInfoQuery", "\347\224\250\346\210\267\351\202\256\351\200\222\345\234\260\345\235\200\357\274\232", nullptr));
        chb_CustomerUserName->setText(QString());
        lbl9->setText(QCoreApplication::translate("CustomerInfoQuery", "\347\224\250\346\210\267\350\264\246\346\210\267\345\220\215\357\274\232", nullptr));
        chb_CustomerType->setText(QString());
        lbl10->setText(QCoreApplication::translate("CustomerInfoQuery", "\347\224\250\346\210\267\347\261\273\345\236\213\357\274\232", nullptr));
        cbb_CustomerType->setItemText(0, QCoreApplication::translate("CustomerInfoQuery", "\346\231\256\351\200\232\347\224\250\346\210\267", nullptr));
        cbb_CustomerType->setItemText(1, QCoreApplication::translate("CustomerInfoQuery", "vip1\347\224\250\346\210\267", nullptr));
        cbb_CustomerType->setItemText(2, QCoreApplication::translate("CustomerInfoQuery", "vip2\347\224\250\346\210\267", nullptr));
        cbb_CustomerType->setItemText(3, QCoreApplication::translate("CustomerInfoQuery", "vip3\347\224\250\346\210\267", nullptr));

        chb_CustomerRegisterDate->setText(QString());
        lbl11->setText(QCoreApplication::translate("CustomerInfoQuery", "\347\224\250\346\210\267\346\263\250\345\206\214\346\227\245\346\234\237\357\274\232", nullptr));
        cbb_CustomerRegisterDate->setItemText(0, QCoreApplication::translate("CustomerInfoQuery", "=", nullptr));
        cbb_CustomerRegisterDate->setItemText(1, QCoreApplication::translate("CustomerInfoQuery", ">", nullptr));
        cbb_CustomerRegisterDate->setItemText(2, QCoreApplication::translate("CustomerInfoQuery", "<", nullptr));

        btn_Search->setText(QCoreApplication::translate("CustomerInfoQuery", "\346\237\245\350\257\242", nullptr));
        btn_Reset->setText(QCoreApplication::translate("CustomerInfoQuery", "\351\207\215\347\275\256", nullptr));
        chb_CustomerAccount->setText(QString());
        lbl1->setText(QCoreApplication::translate("CustomerInfoQuery", "\347\224\250\346\210\267\350\264\246\345\217\267\357\274\232", nullptr));
        chb_CustomerSex->setText(QString());
        lbl3->setText(QCoreApplication::translate("CustomerInfoQuery", "\347\224\250\346\210\267\346\200\247\345\210\253\357\274\232", nullptr));
        cbb_CustomerSex->setItemText(0, QCoreApplication::translate("CustomerInfoQuery", "\344\277\235\345\257\206", nullptr));
        cbb_CustomerSex->setItemText(1, QCoreApplication::translate("CustomerInfoQuery", "\347\224\267", nullptr));
        cbb_CustomerSex->setItemText(2, QCoreApplication::translate("CustomerInfoQuery", "\345\245\263", nullptr));

        chb_CustomerPassword->setText(QString());
        lbl12->setText(QCoreApplication::translate("CustomerInfoQuery", "\347\224\250\346\210\267\345\247\223\345\220\215\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CustomerInfoQuery: public Ui_CustomerInfoQuery {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERINFOQUERY_H
