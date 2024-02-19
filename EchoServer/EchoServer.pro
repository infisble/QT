QT       +=  gui
QT       += network
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

TARGET = EchoServer
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    global.cpp \
    mainwindow.cpp \
    mytcpserver.cpp

HEADERS += \
    Polim.h \
    global.h \
    mainwindow.h \
    mytcpserver.h

FORMS += \
    mainwindow.ui

