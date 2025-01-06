/********************************************************************************
** Form generated from reading UI file 'ticketinfomanage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TICKETINFOMANAGE_H
#define UI_TICKETINFOMANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_TicketInfoManage
{
public:

    void setupUi(QDialog *TicketInfoManage)
    {
        if (TicketInfoManage->objectName().isEmpty())
            TicketInfoManage->setObjectName("TicketInfoManage");
        TicketInfoManage->resize(520, 460);

        retranslateUi(TicketInfoManage);

        QMetaObject::connectSlotsByName(TicketInfoManage);
    } // setupUi

    void retranslateUi(QDialog *TicketInfoManage)
    {
        TicketInfoManage->setWindowTitle(QCoreApplication::translate("TicketInfoManage", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TicketInfoManage: public Ui_TicketInfoManage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TICKETINFOMANAGE_H
