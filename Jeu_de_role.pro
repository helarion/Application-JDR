#-------------------------------------------------
#
# Project created by QtCreator 2016-10-06T23:14:29
#
#-------------------------------------------------

TEMPLATE = app

QT += core gui
      core
      uitools
QT += multimedia

CONFIG -= console

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Jeu_de_role
DESTDIR = $$PWD

RC_FILE = jdr.rc

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
    BD/campagne.h \
    BD/jeu.h \
    BD/partie.h \
    BD/personnage.h \
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
    ui_formModifierJeu.h \
    fenetre/formModifierPartie.h \
    fenetre/formNouveauPersonnage.h \
    fenetre/formModifierPersonnage.h \
    fenetre/formLecteurMusique.h \
    BD/playlist.h

FORMS += \
    mainwindow.ui \
    fenetre/formModifierAttribut.ui \
    fenetre/formModifierCampagne.ui \
    fenetre/formNouveauAttribut.ui \
    fenetre/formNouveauJeu.ui \
    fenetre/formNouvelleCampagne.ui \
    fenetre/formNouvellePartie.ui \
    fenetre/formModifierJeu.ui \
    fenetre/formModifierPartie.ui \
    fenetre/formNouveauPersonnage.ui \
    fenetre/formModifierPersonnage.ui \
    fenetre/formLecteurMusique.ui

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    BD/attribut.cpp \
    BD/campagne.cpp \
    BD/jeu.cpp \
    BD/partie.cpp \
    BD/personnage.cpp \
    fenetre/formModifierAttribut.cpp \
    fenetre/formModifierCampagne.cpp \
    fenetre/formModifierJeu.cpp \
    fenetre/formNouveauAttribut.cpp \
    fenetre/formNouveauJeu.cpp \
    fenetre/formNouvelleCampagne.cpp \
    fenetre/formNouvellePartie.cpp \
    BD/collections.cpp \
    fenetre/formModifierPartie.cpp \
    fenetre/formNouveauPersonnage.cpp \
    fenetre/formModifierPersonnage.cpp \
    fenetre/formLecteurMusique.cpp \
    BD/playlist.cpp

