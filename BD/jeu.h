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
        Jeu (QString s_nom,QString s_adrTheme,QVector<Attribut> list);	// Constructeur par défaut public
        Jeu (const Jeu & Copie); // Constructeur de Copie public
        Jeu (QString titre);
        ~Jeu ();				// Destructeur public
        void afficher () const;	// Affiche les informations du Jeu dans la console
        void Save();
        void Load(QString titre);
        bool compare(Jeu j);
        QString getNom();
        QString getTheme();
        QString getTitre();
        QVector<Attribut> getListAttribut();
        QVector<QString> getListTitreAttribut();
        void setNom(QString s_nom);
        void setTheme(QString s_theme);
        void setListAttribut(QVector<Attribut> list);
        void editAttribut(int index, QString titre);
	private:
        QString nom;
        QString adrTheme;
        QString titre;
        QVector<QString> listTitreAttribut;
        QVector<Attribut> listAttribut;
};

#endif
