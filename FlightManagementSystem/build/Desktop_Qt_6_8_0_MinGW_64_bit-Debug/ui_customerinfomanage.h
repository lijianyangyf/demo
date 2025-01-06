/********************************************************************************
** Form generated from reading UI file 'customerinfomanage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERINFOMANAGE_H
#define UI_CUSTOMERINFOMANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomerInfoManage
{
public:

    void setupUi(QWidget *CustomerInfoManage)
    {
        if (CustomerInfoManage->objectName().isEmpty())
            CustomerInfoManage->setObjectName("CustomerInfoManage");
        CustomerInfoManage->resize(800, 600);

        retranslateUi(CustomerInfoManage);

        QMetaObject::connectSlotsByName(CustomerInfoManage);
    } // setupUi

    void retranslateUi(QWidget *CustomerInfoManage)
    {
        CustomerInfoManage->setWindowTitle(QCoreApplication::translate("CustomerInfoManage", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CustomerInfoManage: public Ui_CustomerInfoManage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERINFOMANAGE_H
