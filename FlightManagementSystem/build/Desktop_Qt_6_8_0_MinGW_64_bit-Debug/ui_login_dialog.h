/********************************************************************************
** Form generated from reading UI file 'login_dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_DIALOG_H
#define UI_LOGIN_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login_Dialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *lbl_Account;
    QLineEdit *txt_Account;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lbl_Password;
    QLineEdit *txt_Password;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btn_Login;
    QPushButton *btn_Cancel;
    QGraphicsView *graphicsView;
    QLabel *lbl_Note;

    void setupUi(QDialog *Login_Dialog)
    {
        if (Login_Dialog->objectName().isEmpty())
            Login_Dialog->setObjectName("Login_Dialog");
        Login_Dialog->resize(400, 300);
        layoutWidget = new QWidget(Login_Dialog);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(100, 100, 211, 95));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        lbl_Account = new QLabel(layoutWidget);
        lbl_Account->setObjectName("lbl_Account");
        QFont font;
        font.setBold(true);
        lbl_Account->setFont(font);

        horizontalLayout->addWidget(lbl_Account);

        txt_Account = new QLineEdit(layoutWidget);
        txt_Account->setObjectName("txt_Account");

        horizontalLayout->addWidget(txt_Account);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lbl_Password = new QLabel(layoutWidget);
        lbl_Password->setObjectName("lbl_Password");
        lbl_Password->setFont(font);

        horizontalLayout_2->addWidget(lbl_Password);

        txt_Password = new QLineEdit(layoutWidget);
        txt_Password->setObjectName("txt_Password");
        QFont font1;
        font1.setBold(false);
        txt_Password->setFont(font1);
        txt_Password->setEchoMode(QLineEdit::EchoMode::Password);

        horizontalLayout_2->addWidget(txt_Password);


        verticalLayout->addLayout(horizontalLayout_2);

        layoutWidget1 = new QWidget(Login_Dialog);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(100, 190, 211, 31));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        btn_Login = new QPushButton(layoutWidget1);
        btn_Login->setObjectName("btn_Login");

        horizontalLayout_3->addWidget(btn_Login);

        btn_Cancel = new QPushButton(layoutWidget1);
        btn_Cancel->setObjectName("btn_Cancel");

        horizontalLayout_3->addWidget(btn_Cancel);

        btn_Cancel->raise();
        btn_Login->raise();
        graphicsView = new QGraphicsView(Login_Dialog);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(0, 0, 401, 301));
        lbl_Note = new QLabel(Login_Dialog);
        lbl_Note->setObjectName("lbl_Note");
        lbl_Note->setGeometry(QRect(100, 240, 211, 20));
        lbl_Note->setAlignment(Qt::AlignmentFlag::AlignCenter);
        graphicsView->raise();
        layoutWidget1->raise();
        layoutWidget1->raise();
        lbl_Note->raise();

        retranslateUi(Login_Dialog);

        QMetaObject::connectSlotsByName(Login_Dialog);
    } // setupUi

    void retranslateUi(QDialog *Login_Dialog)
    {
        Login_Dialog->setWindowTitle(QCoreApplication::translate("Login_Dialog", "Dialog", nullptr));
        lbl_Account->setText(QCoreApplication::translate("Login_Dialog", "\350\264\246\345\217\267\357\274\232", nullptr));
        lbl_Password->setText(QCoreApplication::translate("Login_Dialog", "\345\257\206\347\240\201\357\274\232", nullptr));
        btn_Login->setText(QCoreApplication::translate("Login_Dialog", "\347\231\273\345\275\225", nullptr));
        btn_Cancel->setText(QCoreApplication::translate("Login_Dialog", "\345\217\226\346\266\210", nullptr));
        lbl_Note->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Login_Dialog: public Ui_Login_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_DIALOG_H
