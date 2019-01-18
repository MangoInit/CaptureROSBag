#-------------------------------------------------
#
# Project created by QtCreator 2018-08-04T16:45:07
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets




TARGET = CaptureROSBag
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    littlewin.cpp

HEADERS  += mainwindow.h \
    littlewin.h

FORMS    += mainwindow.ui \
    littlewin.ui

CONFIG +=

RESOURCES += \
    image.qrc

RC_FILE += turtle.rc

target.source = $$TARGET
target.path = /usr/bin

INSTALLS = target


DISTFILES += \
    dir.png \
    exit.png \
    file.png \
    turtle.png\
    add.png

QT += network
