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

HEADERS += \
    ui_formModifierAttribut.h \
    ui_formModifierCampagne.h \
    ui_formNouveauAttribut.h \
    ui_formNouveauJeu.h \
    ui_formNouvelleCampagne.h \
    ui_formNouvellePartie.h \
    ui_mainwindow.h \
    mainwindow.h \
    BD/attribut.h \
    BD/attributObjet.h \
    BD/campagne.h \
    BD/groupe.h \
    BD/jeu.h \
    BD/jeuElement.h \
    BD/joueur.h \
    BD/objetCol.h \
    BD/objetLig.h \
    BD/partie.h \
    BD/personnage.h \
    BD/typeattribut.h \
    BD/valeurAttribut.h \
    BD/valeurAttributtLong.h \
    BD/valeurObjet.h \
    fenetre/formCampagne.h \
    fenetre/formInventaire.h \
    fenetre/formModifierAttribut.h \
    fenetre/formModifierCampagne.h \
    fenetre/formModifierJeu.h \
    fenetre/formNouveauAttribut.h \
    fenetre/formNouveauJeu.h \
    fenetre/formNouvelleCampagne.h \
    fenetre/formNouvellePartie.h \
    BD/collections.h \
    ui_formModifierJeu.h

FORMS += \
    mainwindow.ui \
    fenetre/formModifierAttribut.ui \
    fenetre/formModifierCampagne.ui \
    fenetre/formNouveauAttribut.ui \
    fenetre/formNouveauJeu.ui \
    fenetre/formNouvelleCampagne.ui \
    fenetre/formNouvellePartie.ui \
    fenetre/formModifierJeu.ui

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    BD/attribut.cpp \
    BD/attributObjet.cpp \
    BD/campagne.cpp \
    BD/grouper.cpp \
    BD/jeu.cpp \
    BD/jeuElement.cpp \
    BD/joueur.cpp \
    BD/objetCol.cpp \
    BD/objetLig.cpp \
    BD/partie.cpp \
    BD/personnage.cpp \
    BD/typeattribut.cpp \
    BD/valeurAttribut.cpp \
    BD/valeurAttributLong.cpp \
    BD/valeurObjet.cpp \
    fenetre/formModifierAttribut.cpp \
    fenetre/formModifierCampagne.cpp \
    fenetre/formModifierJeu.cpp \
    fenetre/formNouveauAttribut.cpp \
    fenetre/formNouveauJeu.cpp \
    fenetre/formNouvelleCampagne.cpp \
    fenetre/formNouvellePartie.cpp \
    BD/collections.cpp

