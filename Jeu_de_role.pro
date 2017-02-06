#-------------------------------------------------
#
# Project created by QtCreator 2016-10-06T23:14:29
#
#-------------------------------------------------

QT += core gui
QT += sql
QT += widgets
QT += core

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Jeu_de_role
TEMPLATE = app


SOURCES += main.cpp\
    sources/mainwindow.cpp \
    sources/BD/campagne.cpp \
    sources/BD/element.cpp \
    sources/BD/elementObjet.cpp \
    sources/BD/grouper.cpp \
    sources/BD/jeu.cpp \
    sources/BD/jeuElement.cpp \
    sources/BD/joueur.cpp \
    sources/BD/objetLig.cpp \
    sources/BD/partie.cpp \
    sources/BD/personnage.cpp \
    sources/BD/valeurElement.cpp \
    sources/BD/valeurElementLong.cpp \
    sources/BD/valeurObjet.cpp

HEADERS  += headers/mainwindow.h \
    headers/ui_mainwindow.h \
    headers/BD/campagne.h \
    headers/BD/element.h \
    headers/BD/elementObjet.h \
    headers/BD/jeu.h \
    headers/BD/jeuElement.h \
    headers/BD/joueur.h \
    headers/BD/objetLig.h \
    headers/BD/partie.h \
    headers/BD/personnage.h \
    headers/BD/valeurElement.h \
    headers/BD/valeurElementLong.h \
    headers/BD/valeurObjet.h \
    headers/BD/groupe.h

FORMS    += mainwindow.ui
