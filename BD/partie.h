#ifndef Partie_H
#define Partie_H

#include <QVariant>
#include <QString>

#include "Campagne.h"

class Partie
{
    private:
        QString nom;
        Campagne campagne;
        QString resume;
        QString titre;
        QString titreCampagne;
        static int increment;
    public:
        Partie();
        Partie (QString s_nom,Campagne s_campagne);	// Constructeur par défaut public
        Partie (const Partie & copie); // Constructeur de copie public
        Partie (QString titre);
        ~Partie ();				// Destructeur public
        void afficher () const;	// Affiche les informations du Partie dans la console
        void Save();
        void Load(QString titre);
        bool compare(Partie p);
        QString getNom();
        QString getResume();
        Campagne getCampagne();
        QString getTitreCampagne();
        QString getTitre();
        QVector<QString> getTitrePersonnages();
        void setNom(QString s_nom);
        void setResume(QString s_resume);
        void setCampagne(Campagne s_campagne);
        void setTitreCampagne(QString s_titreCampagne);
};

#endif
