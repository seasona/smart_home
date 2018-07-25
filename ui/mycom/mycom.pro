#-------------------------------------------------
#
# Project created by QtCreator 2018-07-16T11:37:42
#
#-------------------------------------------------

QT       += core gui

TARGET = mycom
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    win_qextserialport.cpp \
    qextserialport.cpp \
    qextserialbase.cpp \
    login.cpp

HEADERS  += mainwindow.h \
    win_qextserialport.h \
    qextserialport.h \
    qextserialbase.h \
    login.h

FORMS    += mainwindow.ui \
    login.ui

OTHER_FILES += \
    mycom.pro.user

RESOURCES += \
    pic.qrc
