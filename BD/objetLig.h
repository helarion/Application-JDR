#ifndef ObjetLig_H
#define ObjetLig_H

#include <QVariant>
#include <QString>
#include "Jeu.h"

class ObjetLig
{
    private:
        static quint16 increment;
        quint16 num;
        QString nom;
        Jeu* jeu;
        QString scenario;
    public:
        ObjetLig (QString s_nom,QString s_scenario,Jeu* s_jeu);	// Constructeur par défaut public
        ObjetLig (const ObjetLig & copie); // Constructeur de copie public
        ObjetLig (quint16 index);
        ~ObjetLig ();				// Destructeur public
        void afficher () const;	// Affiche les informations du ObjetLig dans la console
        void Save();
        void Load(quint16 index);
        quint16 getNum();
        QString getNom();
        QString getScenario();
        Jeu* getJeu();
};

#endif
