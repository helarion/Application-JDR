#ifndef COLLECTIONS_H
#define COLLECTIONS_H

#include <QVector>

#include "BD/jeu.h"
#include "BD/attribut.h"
#include "BD/partie.h"
#include "BD/campagne.h"

    extern void addJeu(Jeu j);
    extern void addAttribut(Attribut a);
    extern void addCampagne(Campagne c);
    extern void addPartie(Partie p);

    extern void deleteJeu(Jeu* j);
    extern void deleteAttribut(Attribut* a);
    extern void deleteCampagne(Campagne* c);
    extern void deletePartie(Partie* p);

    extern void remplirListJeu();
    extern void remplirListAttribut();
    extern void remplirListCampagne();
    extern void remplirListPartie();

    extern Jeu * chercheNomJeu(QString nom);

    extern QVector<Jeu> listJeu;
    extern QVector<Attribut> listAttribut;
    extern QVector<Campagne> listCampagne;
    extern QVector<Partie> listPartie;

    extern quint8 indexStack;

    extern Jeu* jeuSelect;
    extern Campagne* campagneSelect;
    extern Partie* partieSelect;
    extern Attribut* attributSelect;

#endif // COLLECTIONS_H
