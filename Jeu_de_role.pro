#-------------------------------------------------
#
# Project created by QtCreator 2016-10-06T23:14:29
#
#-------------------------------------------------

QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Jeu_de_role
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    sources/mainwindow.cpp

HEADERS  += mainwindow.h \
    headers/mainwindow.h \
    headers/ui_mainwindow.h

FORMS    += mainwindow.ui
