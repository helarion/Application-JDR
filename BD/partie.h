#ifndef Partie_H
#define Partie_H

#include <QVariant>
#include <QString>

#include "Campagne.h"
#include "personnage.h"

class Partie
{
    private:
        QString nom;
        Campagne campagne;
        QString resume;
        QString titre;
        QString titreCampagne;
        QVector<Personnage> personnages;
        QVector<QString> titrePersonnages;
    public:
        Partie();
        Partie (QString s_nom,QString s_resume,Campagne s_campagne, QVector<Personnage> personnages);	// Constructeur par défaut public
        Partie (const Partie & copie); // Constructeur de copie public
        Partie (QString titre);
        ~Partie ();				// Destructeur public
        void afficher () const;	// Affiche les informations du Partie dans la console
        void Save();
        void Load(QString titre);
        QString getNom();
        QString getResume();
        Campagne getCampagne();
        QString getTitreCampagne();
        QString getTitre();
        QVector<Personnage> getPersonnage();
        QVector<QString> getTitrePersonnages();
        void setNom(QString s_nom);
        void setResume(QString s_resume);
        void setCampagne(Campagne s_campagne);
        void setPersonnages(QVector<Personnage> s_personnages);
};

#endif
