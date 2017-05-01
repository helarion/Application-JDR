#ifndef PLAYLIST_H
#define PLAYLIST_H

#include <QVariant>
#include <QString>
#include <QVector>

#include "BD/jeu.h"

class Playlist
{
    private:
        QString nom;
        QString titre;
        QVector<QString> liste;
        QString titreJeu;
        Jeu jeu;
    public:
        Playlist(QString s_nom,QVector<QString> s_liste, Jeu s_jeu);	// Constructeur par défaut public
        Playlist (const Playlist & copie); // Constructeur de copie public
        Playlist (QString titre);
        Playlist();
        ~Playlist ();				// Destructeur public
        void afficher () const;	// Affiche les informations du Attribut dans la console
        void Save();
        void Load(QString nomFichier);
        QString getNom();
        QString getTitre();
        QVector<QString> getListe();
        Jeu getJeu();
        void setNom(QString nom);
        void setListe(QVector<QString> s_liste);
};

#endif // PLAYLIST_H
