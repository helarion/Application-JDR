#ifndef Groupe_H
#define Groupe_H

#include <QVariant>
#include <QString>
#include <vector>
#include "joueur.h"
#include "groupe.h"

class Groupe
{
    private:
        vector<Joueur*> joueurs;
    public:
        Groupe (vector<Joueur*> s_joueurs);	// Constructeur par défaut public
        Groupe (const Groupe & copie); // Constructeur de copie public
        Groupe (quint16 index);
        ~Groupe ();				// Destructeur public
        void afficher () const;	// Affiche les informations du Groupe dans la console
        void Save();
        void Load(quint16 index);
        vector<Joueur*> getJoueurS();
};

#endif
