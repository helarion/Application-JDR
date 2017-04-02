#ifndef Jeu_H
#define Jeu_H

#include <QVariant>
#include <QString>
#include <QVector>

#include "BD/attribut.h"

class Jeu
{
    public:
        Jeu ();
        Jeu (QString s_nom,QString s_adrTheme,QVector<Attribut*> list);	// Constructeur par défaut public
        Jeu (const Jeu & Copie); // Constructeur de Copie public
        Jeu (QString titre);
        ~Jeu ();				// Destructeur public
        void afficher () const;	// Affiche les informations du Jeu dans la console
        void Save();
        void Load(QString titre);
        quint16 getNum();
        QString getNom();
        QString getTheme();
        QString getTitre();
        void setNom(QString s_nom);
        void setTheme(QString s_theme);
	private:
        static quint16 increment;
        quint16 num;
        QString nom;
        QString adrTheme;
        QString titre;
        QVector<Attribut*> listAttribut;
};

#endif
