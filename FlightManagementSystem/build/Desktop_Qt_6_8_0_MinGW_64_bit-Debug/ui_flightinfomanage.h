/********************************************************************************
** Form generated from reading UI file 'flightinfomanage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLIGHTINFOMANAGE_H
#define UI_FLIGHTINFOMANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FlightInfoManage
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_FIM_Save;
    QPushButton *btn_FIM_Reset;
    QPushButton *btn_FIM_Insert;
    QPushButton *btn_FIM_delete;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *lbl8;
    QLineEdit *txt_Departure;
    QHBoxLayout *horizontalLayout_8;
    QLabel *lbl7;
    QLineEdit *txt_Destination;
    QHBoxLayout *horizontalLayout_9;
    QLabel *lbl11;
    QComboBox *cbb_FlightStatus;
    QHBoxLayout *horizontalLayout_10;
    QLabel *lbl9;
    QSpinBox *sb_BusinessTicketCount;
    QHBoxLayout *horizontalLayout_11;
    QLabel *lbl3;
    QDoubleSpinBox *sb_BusinessTicketPrice;
    QLabel *lbl_Operation;
    QLabel *lbl1;
    QTableView *tableView;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *lbl2;
    QLineEdit *txt_FlightCode;
    QHBoxLayout *horizontalLayout_5;
    QLabel *lbl6;
    QDateTimeEdit *dte_LeaveTime;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lbl5;
    QDateTimeEdit *dte_ArriveTime;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lbl10;
    QSpinBox *sb_EconomyTicketCount;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lbl4;
    QDoubleSpinBox *sb_EconomyTicketPrice;
    QLabel *lbl_Note;

    void setupUi(QDialog *FlightInfoManage)
    {
        if (FlightInfoManage->objectName().isEmpty())
            FlightInfoManage->setObjectName("FlightInfoManage");
        FlightInfoManage->resize(518, 452);
        layoutWidget = new QWidget(FlightInfoManage);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(270, 200, 238, 20));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btn_FIM_Save = new QPushButton(layoutWidget);
        btn_FIM_Save->setObjectName("btn_FIM_Save");

        horizontalLayout->addWidget(btn_FIM_Save);

        btn_FIM_Reset = new QPushButton(layoutWidget);
        btn_FIM_Reset->setObjectName("btn_FIM_Reset");

        horizontalLayout->addWidget(btn_FIM_Reset);

        btn_FIM_Insert = new QPushButton(layoutWidget);
        btn_FIM_Insert->setObjectName("btn_FIM_Insert");

        horizontalLayout->addWidget(btn_FIM_Insert);

        btn_FIM_delete = new QPushButton(layoutWidget);
        btn_FIM_delete->setObjectName("btn_FIM_delete");

        horizontalLayout->addWidget(btn_FIM_delete);

        layoutWidget_2 = new QWidget(FlightInfoManage);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(325, 40, 181, 123));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        lbl8 = new QLabel(layoutWidget_2);
        lbl8->setObjectName("lbl8");

        horizontalLayout_7->addWidget(lbl8);

        txt_Departure = new QLineEdit(layoutWidget_2);
        txt_Departure->setObjectName("txt_Departure");

        horizontalLayout_7->addWidget(txt_Departure);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        lbl7 = new QLabel(layoutWidget_2);
        lbl7->setObjectName("lbl7");

        horizontalLayout_8->addWidget(lbl7);

        txt_Destination = new QLineEdit(layoutWidget_2);
        txt_Destination->setObjectName("txt_Destination");

        horizontalLayout_8->addWidget(txt_Destination);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        lbl11 = new QLabel(layoutWidget_2);
        lbl11->setObjectName("lbl11");

        horizontalLayout_9->addWidget(lbl11);

        cbb_FlightStatus = new QComboBox(layoutWidget_2);
        cbb_FlightStatus->addItem(QString());
        cbb_FlightStatus->addItem(QString());
        cbb_FlightStatus->addItem(QString());
        cbb_FlightStatus->addItem(QString());
        cbb_FlightStatus->setObjectName("cbb_FlightStatus");
        cbb_FlightStatus->setMaxCount(10);

        horizontalLayout_9->addWidget(cbb_FlightStatus);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        lbl9 = new QLabel(layoutWidget_2);
        lbl9->setObjectName("lbl9");

        horizontalLayout_10->addWidget(lbl9);

        sb_BusinessTicketCount = new QSpinBox(layoutWidget_2);
        sb_BusinessTicketCount->setObjectName("sb_BusinessTicketCount");
        sb_BusinessTicketCount->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);
        sb_BusinessTicketCount->setMaximum(999);

        horizontalLayout_10->addWidget(sb_BusinessTicketCount);


        verticalLayout_2->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        lbl3 = new QLabel(layoutWidget_2);
        lbl3->setObjectName("lbl3");

        horizontalLayout_11->addWidget(lbl3);

        sb_BusinessTicketPrice = new QDoubleSpinBox(layoutWidget_2);
        sb_BusinessTicketPrice->setObjectName("sb_BusinessTicketPrice");
        sb_BusinessTicketPrice->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);
        sb_BusinessTicketPrice->setDecimals(3);
        sb_BusinessTicketPrice->setMaximum(99999.990000000005239);
        sb_BusinessTicketPrice->setStepType(QAbstractSpinBox::StepType::DefaultStepType);

        horizontalLayout_11->addWidget(sb_BusinessTicketPrice);


        verticalLayout_2->addLayout(horizontalLayout_11);

        lbl_Operation = new QLabel(FlightInfoManage);
        lbl_Operation->setObjectName("lbl_Operation");
        lbl_Operation->setGeometry(QRect(110, 1, 41, 16));
        lbl1 = new QLabel(FlightInfoManage);
        lbl1->setObjectName("lbl1");
        lbl1->setGeometry(QRect(1, 1, 121, 16));
        tableView = new QTableView(FlightInfoManage);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(10, 231, 501, 211));
        tableView->setSelectionMode(QAbstractItemView::SelectionMode::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        layoutWidget_3 = new QWidget(FlightInfoManage);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(22, 42, 181, 123));
        verticalLayout = new QVBoxLayout(layoutWidget_3);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        lbl2 = new QLabel(layoutWidget_3);
        lbl2->setObjectName("lbl2");
        lbl2->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_6->addWidget(lbl2);

        txt_FlightCode = new QLineEdit(layoutWidget_3);
        txt_FlightCode->setObjectName("txt_FlightCode");
        txt_FlightCode->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_6->addWidget(txt_FlightCode);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        lbl6 = new QLabel(layoutWidget_3);
        lbl6->setObjectName("lbl6");
        lbl6->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_5->addWidget(lbl6);

        dte_LeaveTime = new QDateTimeEdit(layoutWidget_3);
        dte_LeaveTime->setObjectName("dte_LeaveTime");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dte_LeaveTime->sizePolicy().hasHeightForWidth());
        dte_LeaveTime->setSizePolicy(sizePolicy);
        dte_LeaveTime->setMaximumSize(QSize(16777215, 16777215));
        dte_LeaveTime->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);
        dte_LeaveTime->setMaximumDateTime(QDateTime(QDate(3000, 12, 31), QTime(23, 59, 59)));
        dte_LeaveTime->setMinimumDateTime(QDateTime(QDate(2000, 1, 1), QTime(0, 0, 0)));

        horizontalLayout_5->addWidget(dte_LeaveTime);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        lbl5 = new QLabel(layoutWidget_3);
        lbl5->setObjectName("lbl5");
        lbl5->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_4->addWidget(lbl5);

        dte_ArriveTime = new QDateTimeEdit(layoutWidget_3);
        dte_ArriveTime->setObjectName("dte_ArriveTime");
        sizePolicy.setHeightForWidth(dte_ArriveTime->sizePolicy().hasHeightForWidth());
        dte_ArriveTime->setSizePolicy(sizePolicy);
        dte_ArriveTime->setMaximumSize(QSize(16777215, 16777215));
        dte_ArriveTime->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);
        dte_ArriveTime->setMaximumDateTime(QDateTime(QDate(3000, 12, 31), QTime(23, 59, 59)));
        dte_ArriveTime->setMinimumDateTime(QDateTime(QDate(2000, 1, 1), QTime(0, 0, 0)));

        horizontalLayout_4->addWidget(dte_ArriveTime);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        lbl10 = new QLabel(layoutWidget_3);
        lbl10->setObjectName("lbl10");
        lbl10->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_3->addWidget(lbl10);

        sb_EconomyTicketCount = new QSpinBox(layoutWidget_3);
        sb_EconomyTicketCount->setObjectName("sb_EconomyTicketCount");
        sb_EconomyTicketCount->setMaximumSize(QSize(16777215, 16777215));
        sb_EconomyTicketCount->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);

        horizontalLayout_3->addWidget(sb_EconomyTicketCount);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lbl4 = new QLabel(layoutWidget_3);
        lbl4->setObjectName("lbl4");
        lbl4->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_2->addWidget(lbl4);

        sb_EconomyTicketPrice = new QDoubleSpinBox(layoutWidget_3);
        sb_EconomyTicketPrice->setObjectName("sb_EconomyTicketPrice");
        sb_EconomyTicketPrice->setMaximumSize(QSize(16777215, 16777215));
        sb_EconomyTicketPrice->setInputMethodHints(Qt::InputMethodHint::ImhFormattedNumbersOnly);
        sb_EconomyTicketPrice->setWrapping(false);
        sb_EconomyTicketPrice->setFrame(true);
        sb_EconomyTicketPrice->setButtonSymbols(QAbstractSpinBox::ButtonSymbols::NoButtons);
        sb_EconomyTicketPrice->setKeyboardTracking(true);
        sb_EconomyTicketPrice->setSuffix(QString::fromUtf8(""));
        sb_EconomyTicketPrice->setDecimals(3);
        sb_EconomyTicketPrice->setMaximum(99999.990000000005239);
        sb_EconomyTicketPrice->setStepType(QAbstractSpinBox::StepType::DefaultStepType);

        horizontalLayout_2->addWidget(sb_EconomyTicketPrice);


        verticalLayout->addLayout(horizontalLayout_2);

        lbl_Note = new QLabel(FlightInfoManage);
        lbl_Note->setObjectName("lbl_Note");
        lbl_Note->setGeometry(QRect(30, 200, 161, 21));

        retranslateUi(FlightInfoManage);

        cbb_FlightStatus->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(FlightInfoManage);
    } // setupUi

    void retranslateUi(QDialog *FlightInfoManage)
    {
        FlightInfoManage->setWindowTitle(QCoreApplication::translate("FlightInfoManage", "Dialog", nullptr));
        btn_FIM_Save->setText(QCoreApplication::translate("FlightInfoManage", "\344\277\235\345\255\230", nullptr));
        btn_FIM_Reset->setText(QCoreApplication::translate("FlightInfoManage", "\351\207\215\347\275\256", nullptr));
        btn_FIM_Insert->setText(QCoreApplication::translate("FlightInfoManage", "\346\267\273\345\212\240", nullptr));
        btn_FIM_delete->setText(QCoreApplication::translate("FlightInfoManage", "\345\210\240\351\231\244", nullptr));
        lbl8->setText(QCoreApplication::translate("FlightInfoManage", "\345\247\213\345\217\221\345\234\260\357\274\232", nullptr));
        lbl7->setText(QCoreApplication::translate("FlightInfoManage", "\347\233\256\347\232\204\345\234\260\357\274\232", nullptr));
        lbl11->setText(QCoreApplication::translate("FlightInfoManage", "\350\210\252\347\217\255\347\212\266\346\200\201\357\274\232", nullptr));
        cbb_FlightStatus->setItemText(0, QCoreApplication::translate("FlightInfoManage", "\345\267\262\345\217\226\346\266\210", nullptr));
        cbb_FlightStatus->setItemText(1, QCoreApplication::translate("FlightInfoManage", "\345\276\205\350\265\267\351\243\236", nullptr));
        cbb_FlightStatus->setItemText(2, QCoreApplication::translate("FlightInfoManage", "\351\243\236\350\241\214\344\270\255", nullptr));
        cbb_FlightStatus->setItemText(3, QCoreApplication::translate("FlightInfoManage", "\345\267\262\351\231\215\350\220\275", nullptr));

        lbl9->setText(QCoreApplication::translate("FlightInfoManage", "\345\225\206\345\212\241\350\210\261\344\275\231\347\245\250\346\225\260\351\207\217\357\274\232", nullptr));
        lbl3->setText(QCoreApplication::translate("FlightInfoManage", "\345\225\206\345\212\241\350\210\261\346\234\272\347\245\250\344\273\267\346\240\274\357\274\232", nullptr));
        lbl_Operation->setText(QCoreApplication::translate("FlightInfoManage", "\346\267\273\345\212\240", nullptr));
        lbl1->setText(QCoreApplication::translate("FlightInfoManage", "\347\274\226\350\276\221\350\210\252\347\217\255\344\277\241\346\201\257 \347\212\266\346\200\201\357\274\232", nullptr));
        lbl2->setText(QCoreApplication::translate("FlightInfoManage", "\350\210\252\347\217\255\345\217\267\357\274\232", nullptr));
        lbl6->setText(QCoreApplication::translate("FlightInfoManage", "\345\207\272\345\217\221\346\227\266\351\227\264\357\274\232", nullptr));
        lbl5->setText(QCoreApplication::translate("FlightInfoManage", "\345\210\260\350\276\276\346\227\266\351\227\264\357\274\232", nullptr));
        lbl10->setText(QCoreApplication::translate("FlightInfoManage", "\347\273\217\346\265\216\350\210\261\344\275\231\347\245\250\346\225\260\351\207\217\357\274\232", nullptr));
        lbl4->setText(QCoreApplication::translate("FlightInfoManage", "\347\273\217\346\265\216\350\210\261\346\234\272\347\245\250\344\273\267\346\240\274\357\274\232", nullptr));
        lbl_Note->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FlightInfoManage: public Ui_FlightInfoManage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLIGHTINFOMANAGE_H
