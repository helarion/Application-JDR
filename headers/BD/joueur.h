#ifndef Joueur_H
#define Joueur_H

#include <QVariant>
#include <QString>
#include "Jeu.h"

class Joueur
{
    private:
        static quint16 increment;
        quint16 num;
        QString nom;
        QString prenom;
        QString adresse;
        quint16 droits;
    public:
        Joueur (QString s_nom, QString s_prenom,QString s_adresse, quint16 s_droits);	// Constructeur par défaut public
        Joueur (const Joueur & copie); // Constructeur de copie public
        Joueur (quint16 index);
        ~Joueur ();				// Destructeur public
        void afficher () const;	// Affiche les informations du Joueur dans la console
        void Save();
        void Load(quint16 index);
        quint16 getNum();
        QString getNom();
        QString getPrenom();
        QString getAdresse();
        quint16 getDroits();
};

#endif
