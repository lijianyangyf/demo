QT       += core gui
QT       += sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    announcementinfomanage.cpp \
    articleinfomanage.cpp \
    customerinfomanage.cpp \
    customerinfoquery.cpp \
    flightinfomanage.cpp \
    login_dialog.cpp \
    main.cpp \
    mainwindow.cpp \
    sql_dbconnection.cpp \
    ticketinfomanage.cpp \
    ticketinfoquery.cpp

HEADERS += \
    announcementinfomanage.h \
    articleinfomanage.h \
    customerinfomanage.h \
    customerinfoquery.h \
    flightinfomanage.h \
    login_dialog.h \
    mainwindow.h \
    sql_dbconnection.h \
    ticketinfomanage.h \
    ticketinfoquery.h

FORMS += \
    announcementinfomanage.ui \
    articleinfomanage.ui \
    customerinfomanage.ui \
    customerinfoquery.ui \
    flightinfomanage.ui \
    login_dialog.ui \
    mainwindow.ui \
    ticketinfomanage.ui \
    ticketinfoquery.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
