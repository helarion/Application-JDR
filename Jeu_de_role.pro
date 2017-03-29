#-------------------------------------------------
#
# Project created by QtCreator 2016-10-06T23:14:29
#
#-------------------------------------------------

TEMPLATE = app

QT += core gui
      core
      uitools

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Jeu_de_role
DESTDIR = $$PWD

FORMS += \
    sources/fenetre/formNouveauJeu.ui \
    sources/fenetre/formNouvelleCampagne.ui \
    sources/fenetre/formNouvellePartie.ui \
    sources/mainwindow.ui \
    sources/fenetre/formModifierJeu.ui \
    sources/fenetre/formModifierAttribut.ui \
    sources/fenetre/formModifierCampagne.ui \
    sources/fenetre/formNouveauAttribut.ui

HEADERS += \
    headers/BD/campagne.h \
    headers/BD/groupe.h \
    headers/BD/jeu.h \
    headers/BD/jeuAttribut.h \
    headers/BD/joueur.h \
    headers/BD/objetCol.h \
    headers/BD/objetLig.h \
    headers/BD/partie.h \
    headers/BD/personnage.h \
    headers/BD/valeurAttribut.h \
    headers/BD/valeurAttributLong.h \
    headers/BD/valeurObjet.h \
    headers/BD/typeattribut.h \
    headers/BD/attribut.h \
    headers/BD/attributObjet.h \
    headers/fenetre/formNouveauJeu.h \
    headers/fenetre/formNouvelleCampagne.h \
    headers/fenetre/formNouvellePartie.h \
    headers/fenetre/formModifierJeu.h \
    headers/fenetre/formModifierCampagne.h \
    headers/fenetre/formModifierAttribut.h \
    headers/fenetre/formNouveauAttribut.h \
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
    headers/BD/valeurAttributtLong.h

SOURCES += \
    sources/BD/campagne.cpp \
    sources/BD/grouper.cpp \
    sources/BD/jeu.cpp \
    sources/BD/joueur.cpp \
    sources/BD/objetCol.cpp \
    sources/BD/objetLig.cpp \
    sources/BD/partie.cpp \
    sources/BD/personnage.cpp \
    sources/BD/valeurAttribut.cpp \
    sources/BD/valeurAttributLong.cpp \
    sources/BD/valeurObjet.cpp \
    sources/BD/typeattribut.cpp \
    sources/BD/attribut.cpp \
    sources/BD/attributObjet.cpp \
    sources/BD/valeurAttribut.cpp \
    sources/BD/valeurAttributLong.cpp \
    sources/fenetre/formNouveauJeu.cpp \
    sources/fenetre/formNouvelleCampagne.cpp \
    sources/fenetre/formNouvellePartie.cpp \
    sources/fenetre/formModifierJeu.cpp \
    sources/fenetre/formModifierCampagne.cpp \
    sources/fenetre/formModifierAttribut.cpp \
    sources/fenetre/formNouveauAttribut.cpp \
    sources/main.cpp \
    sources/mainwindow.cpp

