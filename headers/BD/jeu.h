#ifndef Jeu_H
#define Jeu_H

#include <QVariant>
#include <QString>


class Jeu
{
    public:
        Jeu (QString s_nom,QString s_adrTheme);	// Constructeur par défaut public
        Jeu (const Jeu & Copie); // Constructeur de Copie public
        Jeu (QString index);
        ~Jeu ();				// Destructeur public
        void afficher () const;	// Affiche les informations du Jeu dans la console
        void Save();
        void Load(QString index);
        quint16 getNum();
        QString getNom();
        QString getTheme();
	private:
        static quint16 increment;
        quint16 num;
        QString nom;
        QString adrTheme;
};

#endif
