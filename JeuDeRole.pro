#-------------------------------------------------
#
# Project created by QtCreator 2017-03-12T00:37:08
#
#-------------------------------------------------

QT += core gui
QT += widgets
QT += core

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = JeuDeRole
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += sources/main.cpp\
    sources/fenetre/campagne.cpp \
    sources/fenetre/continuerstyle.cpp \
    sources/fenetre/feuillepersonnage.cpp \
    sources/fenetre/inventaire.cpp \
    sources/fenetre/mainwindow.cpp \
    sources/fenetre/nouvellecampagne.cpp \
    sources/fenetre/nouvellepartie.cpp \
    sources/fenetre/partie.cpp \
    sources/fenetre/style.cpp \
    sources/fenetre/test.cpp \
    sources/fenetre/testWidget.cpp
    sources/fenetre/mainwindow.cpp \
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

HEADERS  += mainwindow.h \
    headers/fenetre/formjeu.h \
    headers/fenetre/mainwindow.h \
    headers/fenetre/style.h \
    headers/fenetre/test.h \
    headers/fenetre/ui_mainwindow.h
    headers/fenetre/ui_mainwindow.h \
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

FORMS    += mainwindow.ui \
    nouveaustyle.ui \
    continuerstyle.ui \
    campagne.ui \
    partie.ui \
    feuillepersonnage.ui \
    inventaire.ui \
    nouvellepartie.ui \
    nouvellecampagne.ui \
    sources/fenetre/campagne.ui \
    sources/fenetre/continuerstyle.ui \
    sources/fenetre/feuillepersonnage.ui \
    sources/fenetre/formjeu.ui \
    sources/fenetre/inventaire.ui \
    sources/fenetre/mainwindow.ui \
    sources/fenetre/nouveaustyle.ui \
    sources/fenetre/nouvellecampagne.ui \
    sources/fenetre/nouvellepartie.ui \
    sources/fenetre/partie.ui \
    sources/fenetre/style.ui \
    sources/fenetre/test.ui
