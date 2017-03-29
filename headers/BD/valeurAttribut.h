#ifndef ValeurAttribut_H
#define ValeurAttribut_H

#include "headers/BD/attribut.h"
#include "headers/BD/personnage.h"

#include <QVariant>
#include <QString>


class ValeurAttribut
{
    public:
        ValeurAttribut (QString s_valeur, Attribut* s_attribut,Personnage* s_personnage);	// Constructeur par défaut public
        ValeurAttribut (const ValeurAttribut & copie); // Constructeur de copie public
        ValeurAttribut (QString titre);
        ValeurAttribut();
        ~ValeurAttribut ();				// Destructeur public
        void afficher () const;	// Affiche les informations du ValeurAttribut dans la console
        void Save();
        void Load(QString titre);
        quint16 getNum();
        QString getNom();
    private:
        static quint16 increment;
        quint16 num;
        QString titre;
        QString valeur;
        Attribut* attribut;
        Personnage* personnage;
};

#endif
