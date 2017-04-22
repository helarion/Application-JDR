#ifndef Campagne_H
#define Campagne_H

#include <QVariant>
#include <QString>
#include "Jeu.h"

class Campagne
{
	private:
        QString nom;
        QString titreJeu;
        Jeu jeu;
        QString scenario;
        QString titre;
	public:
        Campagne();
        Campagne (QString s_nom,QString s_scenario,QString s_titreJeu);	// Constructeur par défaut public
        Campagne (const Campagne & copie); // Constructeur de copie public
        Campagne (QString titre);
        ~Campagne ();				// Destructeur public
        void afficher () const;	// Affiche les informations du Campagne dans la console
        void Save();
        void Load(QString titre);
        QString getNom();
        QString getTitre();
        QString getTitreJeu();
        QString getScenario();
        bool compare(Campagne c);
        void setJeu(Jeu j);
        void setTitreJeu(QString titreJeu);
        Jeu getJeu();
};

#endif
