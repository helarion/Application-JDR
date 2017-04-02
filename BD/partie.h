#ifndef Partie_H
#define Partie_H

#include <QVariant>
#include <QString>
#include "Campagne.h"

class Partie
{
    private:
        static quint16 increment;
        quint16 num;
        QString nom;
        Campagne* campagne;
        QString resume;
        QString titre;
    public:
        Partie();
        Partie (QString s_nom,QString s_resume,Campagne* s_campagne);	// Constructeur par défaut public
        Partie (const Partie & copie); // Constructeur de copie public
        Partie (QString titre);
        ~Partie ();				// Destructeur public
        void afficher () const;	// Affiche les informations du Partie dans la console
        void Save();
        void Load(QString titre);
        quint16 getNum();
        QString getNom();
        QString getResume();
        Campagne* getCampagne();
        QString getTitre();
};

#endif
