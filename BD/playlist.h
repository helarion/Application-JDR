#ifndef PLAYLIST_H
#define PLAYLIST_H

#include <QVariant>
#include <QString>
#include <QVector>

class Playlist
{
    private:
        QString nom;
        QString titre;
        QVector<QString> liste;
    public:
        Playlist(QString s_nom,QVector<QString> s_liste);	// Constructeur par défaut public
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
        void setNom(QString nom);
        void setListe(QVector<QString> s_liste);
};

#endif // PLAYLIST_H
