#ifndef ValeurAttributLong_H
#define ValeurAttributLong_H

#include <QVariant>
#include <QString>

#include "headers/BD/Attribut.h"
#include "headers/BD/personnage.h"

class ValeurAttributLong
{
    private:
        static quint16 increment;
        quint16 num;
        QString titre;
        QString valeur;
        Attribut* a;
        Personnage* p;
    public:
        ValeurAttributLong (QString s_nom,quint16, AttributLong* AttributLong,Personnage* personnage);	// Constructeur par défaut public
        ValeurAttributLong (const ValeurAttributLong & copie); // Constructeur de copie public
        ValeurAttributLong (QString titre);
        ValeurAttributLong();
        ~ValeurAttributLong ();				// Destructeur public
        void afficher () const;	// Affiche les informations du ValeurAttributLong dans la console
        void Save();
        void Load(QString titre);
        quint16 getNum();
        QString getNom();
        quint16 getType();
        bool getPreset();
};

#endif
