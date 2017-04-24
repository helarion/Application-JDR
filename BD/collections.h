#ifndef COLLECTIONS_H
#define COLLECTIONS_H

#include <QVector>

#include "BD/jeu.h"
#include "BD/attribut.h"
#include "BD/partie.h"
#include "BD/campagne.h"

    // ajouts et suppressions
    extern void addJeu(Jeu j);
    extern void addAttribut(Attribut a);
    extern void addCampagne(Campagne c);
    extern void addPartie(Partie p);

    extern void deleteJeu(int index);
    extern void deleteAttribut(int index);
    extern void deleteCampagne(int index);
    extern void deletePartie(int index);

    // mises à jour d'un objet
    extern void updateJeu(Jeu precedent, Jeu nouveau);

    //affichage des listes
    void afficherJeu();
    void afficherAttribut();
    void afficherCampagne();
    void afficherPartie();

    //récupérations des objets sérialisés dans les listes
    extern void remplirListJeu();
    extern void remplirListAttribut();
    extern void remplirListCampagne();
    extern void remplirListPartie();

    // recherche de l'index d'un objet à partir de son nom
    extern int chercheTitreJeu(QString titre);
    extern int chercheTitreCampagne(QString titre);
    extern int chercheTitreAttribut(QString titre);

    // données (collections et index)
    extern QVector<Jeu> listJeu;
    extern QVector<Attribut> listAttribut;
    extern QVector<Campagne> listCampagne;
    extern QVector<Partie> listPartie;

    extern quint8 indexStack;

    extern int jeuSelect;
    extern int campagneSelect;
    extern int partieSelect;
    extern int attributSelect;

#endif // COLLECTIONS_H
