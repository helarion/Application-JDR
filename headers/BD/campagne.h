#ifndef Campagne_H
#define Campagne_H

#include <QVariant>
#include <QString>
#include "Jeu.h"

class Campagne
{
	private:
        static quint16 increment;
        quint16 num;
        QString nom;
        Jeu* jeu;
        QString scenario;
        QString titre;
	public:
        Campagne();
        Campagne (QString s_nom,QString s_scenario,Jeu* s_jeu);	// Constructeur par défaut public
        Campagne (const Campagne & copie); // Constructeur de copie public
        Campagne (QString titre);
        ~Campagne ();				// Destructeur public
        void afficher () const;	// Affiche les informations du Campagne dans la console
        void Save();
        void Load(QString titre);
        quint16 getNum();
        QString getNom();
        QString getScenario();
        Jeu* getJeu();
};

#endif
