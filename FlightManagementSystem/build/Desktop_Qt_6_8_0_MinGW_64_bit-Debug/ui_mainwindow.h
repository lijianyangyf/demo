/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *CustomerInfoManagerment;
    QAction *FlightInfoManagement;
    QAction *TicketInfoManagement;
    QAction *AnnouncementManagement;
    QAction *ArticleManagement;
    QAction *Quit;
    QAction *CustomerInfoQuery;
    QAction *FlightInfoQuery;
    QAction *TicketInfoQuery;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 398);
        CustomerInfoManagerment = new QAction(MainWindow);
        CustomerInfoManagerment->setObjectName("CustomerInfoManagerment");
        CustomerInfoManagerment->setCheckable(false);
        CustomerInfoManagerment->setEnabled(false);
        FlightInfoManagement = new QAction(MainWindow);
        FlightInfoManagement->setObjectName("FlightInfoManagement");
        FlightInfoManagement->setCheckable(false);
        TicketInfoManagement = new QAction(MainWindow);
        TicketInfoManagement->setObjectName("TicketInfoManagement");
        TicketInfoManagement->setCheckable(false);
        TicketInfoManagement->setEnabled(false);
        AnnouncementManagement = new QAction(MainWindow);
        AnnouncementManagement->setObjectName("AnnouncementManagement");
        AnnouncementManagement->setCheckable(false);
        ArticleManagement = new QAction(MainWindow);
        ArticleManagement->setObjectName("ArticleManagement");
        ArticleManagement->setCheckable(false);
        Quit = new QAction(MainWindow);
        Quit->setObjectName("Quit");
        Quit->setCheckable(false);
        Quit->setMenuRole(QAction::MenuRole::QuitRole);
        CustomerInfoQuery = new QAction(MainWindow);
        CustomerInfoQuery->setObjectName("CustomerInfoQuery");
        FlightInfoQuery = new QAction(MainWindow);
        FlightInfoQuery->setObjectName("FlightInfoQuery");
        FlightInfoQuery->setEnabled(false);
        TicketInfoQuery = new QAction(MainWindow);
        TicketInfoQuery->setObjectName("TicketInfoQuery");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 18));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName("menu_2");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(CustomerInfoManagerment);
        menu->addAction(FlightInfoManagement);
        menu->addAction(TicketInfoManagement);
        menu->addAction(AnnouncementManagement);
        menu->addAction(ArticleManagement);
        menu->addSeparator();
        menu->addAction(Quit);
        menu_2->addAction(CustomerInfoQuery);
        menu_2->addAction(FlightInfoQuery);
        menu_2->addAction(TicketInfoQuery);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        CustomerInfoManagerment->setText(QCoreApplication::translate("MainWindow", "\345\256\242\346\210\267\344\277\241\346\201\257\347\256\241\347\220\206", nullptr));
        FlightInfoManagement->setText(QCoreApplication::translate("MainWindow", "\350\210\252\347\217\255\344\277\241\346\201\257\347\256\241\347\220\206", nullptr));
        TicketInfoManagement->setText(QCoreApplication::translate("MainWindow", "\346\234\272\347\245\250\344\277\241\346\201\257\347\256\241\347\220\206", nullptr));
        AnnouncementManagement->setText(QCoreApplication::translate("MainWindow", "\351\200\232\347\237\245\347\256\241\347\220\206", nullptr));
        ArticleManagement->setText(QCoreApplication::translate("MainWindow", "\346\226\207\347\253\240\347\256\241\347\220\206", nullptr));
        Quit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        CustomerInfoQuery->setText(QCoreApplication::translate("MainWindow", "\345\256\242\346\210\267\344\277\241\346\201\257\346\237\245\350\257\242", nullptr));
        FlightInfoQuery->setText(QCoreApplication::translate("MainWindow", "\350\210\252\347\217\255\344\277\241\346\201\257\346\237\245\350\257\242", nullptr));
        TicketInfoQuery->setText(QCoreApplication::translate("MainWindow", "\346\234\272\347\245\250\344\277\241\346\201\257\346\237\245\350\257\242", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\344\277\241\346\201\257\347\256\241\347\220\206", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\344\277\241\346\201\257\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
