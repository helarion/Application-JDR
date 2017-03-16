#-------------------------------------------------
#
# Project created by QtCreator 2016-10-06T23:14:29
#
#-------------------------------------------------

TEMPLATE = app

QT += core gui
      core
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Jeu_de_role


FORMS += \
    sources/fenetre/formCampagne.ui \
    sources/fenetre/formFeuillePersonnage.ui \
    sources/fenetre/formInventaire.ui \
    sources/fenetre/formNouveauJeu.ui \
    sources/fenetre/formNouvelleCampagne.ui \
    sources/fenetre/formNouvellePartie.ui \
    sources/fenetre/formPartie.ui \
    sources/fenetre/formJeu.ui \
    sources/mainwindow.ui

HEADERS += \
    headers/BD/campagne.h \
    headers/BD/element.h \
    headers/BD/elementObjet.h \
    headers/BD/groupe.h \
    headers/BD/jeu.h \
    headers/BD/jeuElement.h \
    headers/BD/joueur.h \
    headers/BD/objetCol.h \
    headers/BD/objetLig.h \
    headers/BD/partie.h \
    headers/BD/personnage.h \
    headers/BD/valeurElement.h \
    headers/BD/valeurElementLong.h \
    headers/BD/valeurObjet.h \
    headers/fenetre/formCampagne.h \
    headers/fenetre/formFeuillePersonnage.h \
    headers/fenetre/formInventaire.h \
    headers/fenetre/formNouveauJeu.h \
    headers/fenetre/formNouvelleCampagne.h \
    headers/fenetre/formNouvellePartie.h \
    headers/fenetre/formPartie.h \
    headers/fenetre/formJeu.h \
    headers/mainwindow.h \
    ui_formCampagne.h \
    ui_formFeuillePersonnage.h \
    ui_formInventaire.h \
    ui_formNouveauJeu.h \
    ui_formNouvelleCampagne.h \
    ui_formNouvellePartie.h \
    ui_formPartie.h \
    ui_formJeu.h \
    ui_mainwindow.h \

SOURCES += \
    sources/BD/campagne.cpp \
    sources/BD/element.cpp \
    sources/BD/elementObjet.cpp \
    sources/BD/grouper.cpp \
    sources/BD/jeu.cpp \
    sources/BD/jeuElement.cpp \
    sources/BD/joueur.cpp \
    sources/BD/objetCol.cpp \
    sources/BD/objetLig.cpp \
    sources/BD/partie.cpp \
    sources/BD/personnage.cpp \
    sources/BD/valeurElement.cpp \
    sources/BD/valeurElementLong.cpp \
    sources/BD/valeurObjet.cpp \
    sources/fenetre/formCampagne.cpp \
    sources/fenetre/formFeuillePersonnage.cpp \
    sources/fenetre/formInventaire.cpp \
    sources/fenetre/formNouveauJeu.cpp \
    sources/fenetre/formNouvelleCampagne.cpp \
    sources/fenetre/formNouvellePartie.cpp \
    sources/fenetre/formPartie.cpp \
    sources/fenetre/formJeu.cpp \
    sources/main.cpp \
    sources/mainwindow.cpp
