/********************************************************************************
** Form generated from reading UI file 'ticketinfoquery.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TICKETINFOQUERY_H
#define UI_TICKETINFOQUERY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TicketInfoQuery
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *chb_Ticket_FlightId;
    QLabel *lbl2;
    QLineEdit *txt_Ticket_FlightId;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *chb_Ticket_FlightState;
    QLabel *lbl3;
    QComboBox *cbb_Ticket_FlightState;
    QTableView *tableView;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *chb_TicketOwnerName;
    QLabel *lbl5;
    QLineEdit *txt_TicketOwnerName;
    QWidget *layoutWidget_7;
    QHBoxLayout *horizontalLayout_9;
    QCheckBox *chb_TicketSeatNumber;
    QLabel *lbl8;
    QLineEdit *txt_TicketSeatNumber;
    QPushButton *btn_Search;
    QPushButton *btn_Reset;
    QWidget *layoutWidget_8;
    QHBoxLayout *horizontalLayout_10;
    QCheckBox *chb_TicketOwnerEmail;
    QLabel *lbl9;
    QLineEdit *txt_TicketOwnerEmail;
    QWidget *layoutWidget_9;
    QHBoxLayout *horizontalLayout_11;
    QCheckBox *chb_TicketSeatType;
    QLabel *lbl10;
    QComboBox *cbb_TicketSeatType;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *chb_TicketOwnerBirthday;
    QLabel *lbl4;
    QComboBox *cbb_TicketOwnerBirthday;
    QDateEdit *de_TicketOwnerBirthday;
    QWidget *layoutWidget_10;
    QHBoxLayout *horizontalLayout_12;
    QCheckBox *chb_TicketPayTime;
    QLabel *lbl11;
    QComboBox *cbb_TicketPayTime;
    QDateTimeEdit *dte_TicketPayTime;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *chb_TicketOwnerIdentityNumber;
    QLabel *lbl6;
    QLineEdit *txt_TicketOwnerIdentityNumber;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_7;
    QCheckBox *chb_TicketOwnerTelephone;
    QLabel *lbl7;
    QLineEdit *txt_TicketOwnerTelephone;
    QWidget *layoutWidget_11;
    QHBoxLayout *horizontalLayout;
    QCheckBox *chb_TicketId;
    QLabel *lbl1;
    QLineEdit *txt_TicketId;
    QWidget *layoutWidget_12;
    QHBoxLayout *horizontalLayout_8;
    QCheckBox *chb_Ticket_FlightCode;
    QLabel *lbl12;
    QLineEdit *txt_Ticket_FlightCode;
    QWidget *layoutWidget_13;
    QHBoxLayout *horizontalLayout_13;
    QCheckBox *chb_Ticket_CustomerAccount;
    QLabel *lbl13;
    QLineEdit *txt_Ticket_CustomerAccount;
    QWidget *layoutWidget_14;
    QHBoxLayout *horizontalLayout_14;
    QCheckBox *chb_TicketOwnerType;
    QLabel *lbl14;
    QComboBox *cbb_TicketOwnerType;
    QWidget *layoutWidget_15;
    QHBoxLayout *horizontalLayout_15;
    QCheckBox *chb_TicketPayState;
    QLabel *lbl10_2;
    QComboBox *cbb_TicketPayState;

    void setupUi(QDialog *TicketInfoQuery)
    {
        if (TicketInfoQuery->objectName().isEmpty())
            TicketInfoQuery->setObjectName("TicketInfoQuery");
        TicketInfoQuery->resize(900, 525);
        layoutWidget = new QWidget(TicketInfoQuery);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 30, 193, 21));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        chb_Ticket_FlightId = new QCheckBox(layoutWidget);
        chb_Ticket_FlightId->setObjectName("chb_Ticket_FlightId");
        chb_Ticket_FlightId->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"    width: 20px;\n"
"    height: 10px;\n"
"    margin: 0px;\n"
"}"));

        horizontalLayout_2->addWidget(chb_Ticket_FlightId);

        lbl2 = new QLabel(layoutWidget);
        lbl2->setObjectName("lbl2");

        horizontalLayout_2->addWidget(lbl2);

        txt_Ticket_FlightId = new QLineEdit(layoutWidget);
        txt_Ticket_FlightId->setObjectName("txt_Ticket_FlightId");

        horizontalLayout_2->addWidget(txt_Ticket_FlightId);

        layoutWidget_2 = new QWidget(TicketInfoQuery);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(10, 120, 191, 21));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        chb_Ticket_FlightState = new QCheckBox(layoutWidget_2);
        chb_Ticket_FlightState->setObjectName("chb_Ticket_FlightState");
        chb_Ticket_FlightState->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"    width: 20px;\n"
"    height: 10px;\n"
"    margin: 0px;\n"
"}"));

        horizontalLayout_3->addWidget(chb_Ticket_FlightState);

        lbl3 = new QLabel(layoutWidget_2);
        lbl3->setObjectName("lbl3");

        horizontalLayout_3->addWidget(lbl3);

        cbb_Ticket_FlightState = new QComboBox(layoutWidget_2);
        cbb_Ticket_FlightState->addItem(QString());
        cbb_Ticket_FlightState->addItem(QString());
        cbb_Ticket_FlightState->addItem(QString());
        cbb_Ticket_FlightState->addItem(QString());
        cbb_Ticket_FlightState->setObjectName("cbb_Ticket_FlightState");

        horizontalLayout_3->addWidget(cbb_Ticket_FlightState);

        tableView = new QTableView(TicketInfoQuery);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(0, 190, 891, 331));
        tableView->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        layoutWidget_4 = new QWidget(TicketInfoQuery);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(260, 0, 241, 21));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        chb_TicketOwnerName = new QCheckBox(layoutWidget_4);
        chb_TicketOwnerName->setObjectName("chb_TicketOwnerName");
        chb_TicketOwnerName->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"    width: 20px;\n"
"    height: 10px;\n"
"    margin: 0px;\n"
"}"));

        horizontalLayout_5->addWidget(chb_TicketOwnerName);

        lbl5 = new QLabel(layoutWidget_4);
        lbl5->setObjectName("lbl5");

        horizontalLayout_5->addWidget(lbl5);

        txt_TicketOwnerName = new QLineEdit(layoutWidget_4);
        txt_TicketOwnerName->setObjectName("txt_TicketOwnerName");

        horizontalLayout_5->addWidget(txt_TicketOwnerName);

        layoutWidget_7 = new QWidget(TicketInfoQuery);
        layoutWidget_7->setObjectName("layoutWidget_7");
        layoutWidget_7->setGeometry(QRect(550, 60, 171, 21));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget_7);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        chb_TicketSeatNumber = new QCheckBox(layoutWidget_7);
        chb_TicketSeatNumber->setObjectName("chb_TicketSeatNumber");
        chb_TicketSeatNumber->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"    width: 20px;\n"
"    height: 10px;\n"
"    margin: 0px;\n"
"}"));

        horizontalLayout_9->addWidget(chb_TicketSeatNumber);

        lbl8 = new QLabel(layoutWidget_7);
        lbl8->setObjectName("lbl8");

        horizontalLayout_9->addWidget(lbl8);

        txt_TicketSeatNumber = new QLineEdit(layoutWidget_7);
        txt_TicketSeatNumber->setObjectName("txt_TicketSeatNumber");

        horizontalLayout_9->addWidget(txt_TicketSeatNumber);

        btn_Search = new QPushButton(TicketInfoQuery);
        btn_Search->setObjectName("btn_Search");
        btn_Search->setGeometry(QRect(550, 150, 56, 18));
        btn_Reset = new QPushButton(TicketInfoQuery);
        btn_Reset->setObjectName("btn_Reset");
        btn_Reset->setGeometry(QRect(630, 150, 56, 18));
        layoutWidget_8 = new QWidget(TicketInfoQuery);
        layoutWidget_8->setObjectName("layoutWidget_8");
        layoutWidget_8->setGeometry(QRect(550, 0, 193, 21));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget_8);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        chb_TicketOwnerEmail = new QCheckBox(layoutWidget_8);
        chb_TicketOwnerEmail->setObjectName("chb_TicketOwnerEmail");
        chb_TicketOwnerEmail->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"    width: 20px;\n"
"    height: 10px;\n"
"    margin: 0px;\n"
"}"));

        horizontalLayout_10->addWidget(chb_TicketOwnerEmail);

        lbl9 = new QLabel(layoutWidget_8);
        lbl9->setObjectName("lbl9");

        horizontalLayout_10->addWidget(lbl9);

        txt_TicketOwnerEmail = new QLineEdit(layoutWidget_8);
        txt_TicketOwnerEmail->setObjectName("txt_TicketOwnerEmail");

        horizontalLayout_10->addWidget(txt_TicketOwnerEmail);

        layoutWidget_9 = new QWidget(TicketInfoQuery);
        layoutWidget_9->setObjectName("layoutWidget_9");
        layoutWidget_9->setGeometry(QRect(550, 30, 171, 21));
        horizontalLayout_11 = new QHBoxLayout(layoutWidget_9);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        chb_TicketSeatType = new QCheckBox(layoutWidget_9);
        chb_TicketSeatType->setObjectName("chb_TicketSeatType");
        chb_TicketSeatType->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"    width: 20px;\n"
"    height: 10px;\n"
"    margin: 0px;\n"
"}"));

        horizontalLayout_11->addWidget(chb_TicketSeatType);

        lbl10 = new QLabel(layoutWidget_9);
        lbl10->setObjectName("lbl10");

        horizontalLayout_11->addWidget(lbl10);

        cbb_TicketSeatType = new QComboBox(layoutWidget_9);
        cbb_TicketSeatType->addItem(QString());
        cbb_TicketSeatType->addItem(QString());
        cbb_TicketSeatType->setObjectName("cbb_TicketSeatType");

        horizontalLayout_11->addWidget(cbb_TicketSeatType);

        layoutWidget_3 = new QWidget(TicketInfoQuery);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(260, 60, 221, 21));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        chb_TicketOwnerBirthday = new QCheckBox(layoutWidget_3);
        chb_TicketOwnerBirthday->setObjectName("chb_TicketOwnerBirthday");
        chb_TicketOwnerBirthday->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"    width: 20px;\n"
"    height: 10px;\n"
"    margin: 0px;\n"
"}"));

        horizontalLayout_4->addWidget(chb_TicketOwnerBirthday);

        lbl4 = new QLabel(layoutWidget_3);
        lbl4->setObjectName("lbl4");

        horizontalLayout_4->addWidget(lbl4);

        cbb_TicketOwnerBirthday = new QComboBox(layoutWidget_3);
        cbb_TicketOwnerBirthday->addItem(QString());
        cbb_TicketOwnerBirthday->addItem(QString());
        cbb_TicketOwnerBirthday->addItem(QString());
        cbb_TicketOwnerBirthday->setObjectName("cbb_TicketOwnerBirthday");

        horizontalLayout_4->addWidget(cbb_TicketOwnerBirthday);

        de_TicketOwnerBirthday = new QDateEdit(layoutWidget_3);
        de_TicketOwnerBirthday->setObjectName("de_TicketOwnerBirthday");
        de_TicketOwnerBirthday->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);

        horizontalLayout_4->addWidget(de_TicketOwnerBirthday);

        layoutWidget_10 = new QWidget(TicketInfoQuery);
        layoutWidget_10->setObjectName("layoutWidget_10");
        layoutWidget_10->setGeometry(QRect(550, 120, 281, 21));
        horizontalLayout_12 = new QHBoxLayout(layoutWidget_10);
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        chb_TicketPayTime = new QCheckBox(layoutWidget_10);
        chb_TicketPayTime->setObjectName("chb_TicketPayTime");
        chb_TicketPayTime->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"    width: 20px;\n"
"    height: 10px;\n"
"    margin: 0px;\n"
"}"));

        horizontalLayout_12->addWidget(chb_TicketPayTime);

        lbl11 = new QLabel(layoutWidget_10);
        lbl11->setObjectName("lbl11");

        horizontalLayout_12->addWidget(lbl11);

        cbb_TicketPayTime = new QComboBox(layoutWidget_10);
        cbb_TicketPayTime->addItem(QString());
        cbb_TicketPayTime->addItem(QString());
        cbb_TicketPayTime->addItem(QString());
        cbb_TicketPayTime->setObjectName("cbb_TicketPayTime");

        horizontalLayout_12->addWidget(cbb_TicketPayTime);

        dte_TicketPayTime = new QDateTimeEdit(layoutWidget_10);
        dte_TicketPayTime->setObjectName("dte_TicketPayTime");
        dte_TicketPayTime->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);

        horizontalLayout_12->addWidget(dte_TicketPayTime);

        layoutWidget_5 = new QWidget(TicketInfoQuery);
        layoutWidget_5->setObjectName("layoutWidget_5");
        layoutWidget_5->setGeometry(QRect(260, 30, 241, 21));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        chb_TicketOwnerIdentityNumber = new QCheckBox(layoutWidget_5);
        chb_TicketOwnerIdentityNumber->setObjectName("chb_TicketOwnerIdentityNumber");
        chb_TicketOwnerIdentityNumber->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"    width: 20px;\n"
"    height: 10px;\n"
"    margin: 0px;\n"
"}"));

        horizontalLayout_6->addWidget(chb_TicketOwnerIdentityNumber);

        lbl6 = new QLabel(layoutWidget_5);
        lbl6->setObjectName("lbl6");

        horizontalLayout_6->addWidget(lbl6);

        txt_TicketOwnerIdentityNumber = new QLineEdit(layoutWidget_5);
        txt_TicketOwnerIdentityNumber->setObjectName("txt_TicketOwnerIdentityNumber");

        horizontalLayout_6->addWidget(txt_TicketOwnerIdentityNumber);

        layoutWidget_6 = new QWidget(TicketInfoQuery);
        layoutWidget_6->setObjectName("layoutWidget_6");
        layoutWidget_6->setGeometry(QRect(260, 120, 241, 21));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        chb_TicketOwnerTelephone = new QCheckBox(layoutWidget_6);
        chb_TicketOwnerTelephone->setObjectName("chb_TicketOwnerTelephone");
        chb_TicketOwnerTelephone->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"    width: 20px;\n"
"    height: 10px;\n"
"    margin: 0px;\n"
"}"));

        horizontalLayout_7->addWidget(chb_TicketOwnerTelephone);

        lbl7 = new QLabel(layoutWidget_6);
        lbl7->setObjectName("lbl7");

        horizontalLayout_7->addWidget(lbl7);

        txt_TicketOwnerTelephone = new QLineEdit(layoutWidget_6);
        txt_TicketOwnerTelephone->setObjectName("txt_TicketOwnerTelephone");

        horizontalLayout_7->addWidget(txt_TicketOwnerTelephone);

        layoutWidget_11 = new QWidget(TicketInfoQuery);
        layoutWidget_11->setObjectName("layoutWidget_11");
        layoutWidget_11->setGeometry(QRect(10, 0, 193, 21));
        horizontalLayout = new QHBoxLayout(layoutWidget_11);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        chb_TicketId = new QCheckBox(layoutWidget_11);
        chb_TicketId->setObjectName("chb_TicketId");
        chb_TicketId->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"    width: 20px;\n"
"    height: 10px;\n"
"    margin: 0px;\n"
"}"));

        horizontalLayout->addWidget(chb_TicketId);

        lbl1 = new QLabel(layoutWidget_11);
        lbl1->setObjectName("lbl1");

        horizontalLayout->addWidget(lbl1);

        txt_TicketId = new QLineEdit(layoutWidget_11);
        txt_TicketId->setObjectName("txt_TicketId");

        horizontalLayout->addWidget(txt_TicketId);

        layoutWidget_12 = new QWidget(TicketInfoQuery);
        layoutWidget_12->setObjectName("layoutWidget_12");
        layoutWidget_12->setGeometry(QRect(10, 60, 193, 21));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget_12);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        chb_Ticket_FlightCode = new QCheckBox(layoutWidget_12);
        chb_Ticket_FlightCode->setObjectName("chb_Ticket_FlightCode");
        chb_Ticket_FlightCode->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"    width: 20px;\n"
"    height: 10px;\n"
"    margin: 0px;\n"
"}"));

        horizontalLayout_8->addWidget(chb_Ticket_FlightCode);

        lbl12 = new QLabel(layoutWidget_12);
        lbl12->setObjectName("lbl12");

        horizontalLayout_8->addWidget(lbl12);

        txt_Ticket_FlightCode = new QLineEdit(layoutWidget_12);
        txt_Ticket_FlightCode->setObjectName("txt_Ticket_FlightCode");

        horizontalLayout_8->addWidget(txt_Ticket_FlightCode);

        layoutWidget_13 = new QWidget(TicketInfoQuery);
        layoutWidget_13->setObjectName("layoutWidget_13");
        layoutWidget_13->setGeometry(QRect(10, 90, 193, 21));
        horizontalLayout_13 = new QHBoxLayout(layoutWidget_13);
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        chb_Ticket_CustomerAccount = new QCheckBox(layoutWidget_13);
        chb_Ticket_CustomerAccount->setObjectName("chb_Ticket_CustomerAccount");
        chb_Ticket_CustomerAccount->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"    width: 20px;\n"
"    height: 10px;\n"
"    margin: 0px;\n"
"}"));

        horizontalLayout_13->addWidget(chb_Ticket_CustomerAccount);

        lbl13 = new QLabel(layoutWidget_13);
        lbl13->setObjectName("lbl13");

        horizontalLayout_13->addWidget(lbl13);

        txt_Ticket_CustomerAccount = new QLineEdit(layoutWidget_13);
        txt_Ticket_CustomerAccount->setObjectName("txt_Ticket_CustomerAccount");

        horizontalLayout_13->addWidget(txt_Ticket_CustomerAccount);

        layoutWidget_14 = new QWidget(TicketInfoQuery);
        layoutWidget_14->setObjectName("layoutWidget_14");
        layoutWidget_14->setGeometry(QRect(260, 90, 191, 21));
        horizontalLayout_14 = new QHBoxLayout(layoutWidget_14);
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        chb_TicketOwnerType = new QCheckBox(layoutWidget_14);
        chb_TicketOwnerType->setObjectName("chb_TicketOwnerType");
        chb_TicketOwnerType->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"    width: 20px;\n"
"    height: 10px;\n"
"    margin: 0px;\n"
"}"));

        horizontalLayout_14->addWidget(chb_TicketOwnerType);

        lbl14 = new QLabel(layoutWidget_14);
        lbl14->setObjectName("lbl14");

        horizontalLayout_14->addWidget(lbl14);

        cbb_TicketOwnerType = new QComboBox(layoutWidget_14);
        cbb_TicketOwnerType->addItem(QString());
        cbb_TicketOwnerType->addItem(QString());
        cbb_TicketOwnerType->addItem(QString());
        cbb_TicketOwnerType->setObjectName("cbb_TicketOwnerType");

        horizontalLayout_14->addWidget(cbb_TicketOwnerType);

        layoutWidget_15 = new QWidget(TicketInfoQuery);
        layoutWidget_15->setObjectName("layoutWidget_15");
        layoutWidget_15->setGeometry(QRect(550, 90, 201, 21));
        horizontalLayout_15 = new QHBoxLayout(layoutWidget_15);
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        chb_TicketPayState = new QCheckBox(layoutWidget_15);
        chb_TicketPayState->setObjectName("chb_TicketPayState");
        chb_TicketPayState->setStyleSheet(QString::fromUtf8("QCheckBox::indicator {\n"
"    width: 20px;\n"
"    height: 10px;\n"
"    margin: 0px;\n"
"}"));

        horizontalLayout_15->addWidget(chb_TicketPayState);

        lbl10_2 = new QLabel(layoutWidget_15);
        lbl10_2->setObjectName("lbl10_2");

        horizontalLayout_15->addWidget(lbl10_2);

        cbb_TicketPayState = new QComboBox(layoutWidget_15);
        cbb_TicketPayState->addItem(QString());
        cbb_TicketPayState->addItem(QString());
        cbb_TicketPayState->setObjectName("cbb_TicketPayState");

        horizontalLayout_15->addWidget(cbb_TicketPayState);


        retranslateUi(TicketInfoQuery);

        QMetaObject::connectSlotsByName(TicketInfoQuery);
    } // setupUi

    void retranslateUi(QDialog *TicketInfoQuery)
    {
        TicketInfoQuery->setWindowTitle(QCoreApplication::translate("TicketInfoQuery", "Dialog", nullptr));
        chb_Ticket_FlightId->setText(QString());
        lbl2->setText(QCoreApplication::translate("TicketInfoQuery", "\350\210\252\347\217\255\347\274\226\345\217\267\357\274\232", nullptr));
        chb_Ticket_FlightState->setText(QString());
        lbl3->setText(QCoreApplication::translate("TicketInfoQuery", "\350\210\252\347\217\255\347\232\204\351\243\236\350\241\214\347\212\266\346\200\201\357\274\232", nullptr));
        cbb_Ticket_FlightState->setItemText(0, QCoreApplication::translate("TicketInfoQuery", "\345\267\262\345\217\226\346\266\210", nullptr));
        cbb_Ticket_FlightState->setItemText(1, QCoreApplication::translate("TicketInfoQuery", "\345\276\205\350\265\267\351\243\236", nullptr));
        cbb_Ticket_FlightState->setItemText(2, QCoreApplication::translate("TicketInfoQuery", "\351\243\236\350\241\214\344\270\255", nullptr));
        cbb_Ticket_FlightState->setItemText(3, QCoreApplication::translate("TicketInfoQuery", "\345\267\262\351\231\215\350\220\275", nullptr));

        chb_TicketOwnerName->setText(QString());
        lbl5->setText(QCoreApplication::translate("TicketInfoQuery", "\344\271\230\346\234\272\344\272\272\345\247\223\345\220\215\357\274\232", nullptr));
        chb_TicketSeatNumber->setText(QString());
        lbl8->setText(QCoreApplication::translate("TicketInfoQuery", "\346\234\272\347\245\250\345\272\247\344\275\215\345\217\267\357\274\232", nullptr));
        btn_Search->setText(QCoreApplication::translate("TicketInfoQuery", "\346\237\245\350\257\242", nullptr));
        btn_Reset->setText(QCoreApplication::translate("TicketInfoQuery", "\351\207\215\347\275\256", nullptr));
        chb_TicketOwnerEmail->setText(QString());
        lbl9->setText(QCoreApplication::translate("TicketInfoQuery", "\344\271\230\346\234\272\344\272\272\347\224\265\345\255\220\351\202\256\347\256\261\357\274\232", nullptr));
        chb_TicketSeatType->setText(QString());
        lbl10->setText(QCoreApplication::translate("TicketInfoQuery", "\346\234\272\347\245\250\345\272\247\344\275\215\347\261\273\345\236\213\357\274\232", nullptr));
        cbb_TicketSeatType->setItemText(0, QCoreApplication::translate("TicketInfoQuery", "\347\273\217\346\265\216\350\210\261", nullptr));
        cbb_TicketSeatType->setItemText(1, QCoreApplication::translate("TicketInfoQuery", "\345\225\206\345\212\241\350\210\261", nullptr));

        chb_TicketOwnerBirthday->setText(QString());
        lbl4->setText(QCoreApplication::translate("TicketInfoQuery", "\344\271\230\346\234\272\344\272\272\345\207\272\347\224\237\346\227\245\346\234\237\357\274\232", nullptr));
        cbb_TicketOwnerBirthday->setItemText(0, QCoreApplication::translate("TicketInfoQuery", "=", nullptr));
        cbb_TicketOwnerBirthday->setItemText(1, QCoreApplication::translate("TicketInfoQuery", ">", nullptr));
        cbb_TicketOwnerBirthday->setItemText(2, QCoreApplication::translate("TicketInfoQuery", "<", nullptr));

        de_TicketOwnerBirthday->setDisplayFormat(QCoreApplication::translate("TicketInfoQuery", "yyyy/M/d", nullptr));
        chb_TicketPayTime->setText(QString());
        lbl11->setText(QCoreApplication::translate("TicketInfoQuery", "\346\234\272\347\245\250\350\256\242\345\215\225\347\224\237\346\210\220\346\227\266\351\227\264\357\274\232", nullptr));
        cbb_TicketPayTime->setItemText(0, QCoreApplication::translate("TicketInfoQuery", "=", nullptr));
        cbb_TicketPayTime->setItemText(1, QCoreApplication::translate("TicketInfoQuery", ">", nullptr));
        cbb_TicketPayTime->setItemText(2, QCoreApplication::translate("TicketInfoQuery", "<", nullptr));

        chb_TicketOwnerIdentityNumber->setText(QString());
        lbl6->setText(QCoreApplication::translate("TicketInfoQuery", "\344\271\230\346\234\272\344\272\272\350\272\253\344\273\275\350\257\201\345\217\267\347\240\201\357\274\232", nullptr));
        chb_TicketOwnerTelephone->setText(QString());
        lbl7->setText(QCoreApplication::translate("TicketInfoQuery", "\344\271\230\346\234\272\344\272\272\347\224\265\350\257\235\357\274\232", nullptr));
        chb_TicketId->setText(QString());
        lbl1->setText(QCoreApplication::translate("TicketInfoQuery", "\346\234\272\347\245\250\347\274\226\345\217\267\357\274\232", nullptr));
        chb_Ticket_FlightCode->setText(QString());
        lbl12->setText(QCoreApplication::translate("TicketInfoQuery", "\350\210\252\347\217\255\345\217\267\357\274\232", nullptr));
        chb_Ticket_CustomerAccount->setText(QString());
        lbl13->setText(QCoreApplication::translate("TicketInfoQuery", "\350\264\255\344\271\260\350\264\246\345\217\267\357\274\232", nullptr));
        chb_TicketOwnerType->setText(QString());
        lbl14->setText(QCoreApplication::translate("TicketInfoQuery", "\344\271\230\346\234\272\344\272\272\347\261\273\345\236\213\357\274\232", nullptr));
        cbb_TicketOwnerType->setItemText(0, QCoreApplication::translate("TicketInfoQuery", "\346\234\252\346\210\220\345\271\264\344\272\272", nullptr));
        cbb_TicketOwnerType->setItemText(1, QCoreApplication::translate("TicketInfoQuery", "\346\210\220\345\271\264\344\272\272", nullptr));
        cbb_TicketOwnerType->setItemText(2, QCoreApplication::translate("TicketInfoQuery", "\350\200\201\344\272\272", nullptr));

        chb_TicketPayState->setText(QString());
        lbl10_2->setText(QCoreApplication::translate("TicketInfoQuery", "\346\234\272\347\245\250\346\224\257\344\273\230\347\212\266\346\200\201\357\274\232", nullptr));
        cbb_TicketPayState->setItemText(0, QCoreApplication::translate("TicketInfoQuery", "\346\234\252\346\224\257\344\273\230", nullptr));
        cbb_TicketPayState->setItemText(1, QCoreApplication::translate("TicketInfoQuery", "\345\267\262\346\224\257\344\273\230", nullptr));

    } // retranslateUi

};

namespace Ui {
    class TicketInfoQuery: public Ui_TicketInfoQuery {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TICKETINFOQUERY_H
