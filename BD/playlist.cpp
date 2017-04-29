#include <QDataStream>
#include <iostream>
#include <QFile>
#include <QDebug>

#include "playlist.h"

Playlist::Playlist ()
{
    nom="";
    type=-1;
    preset=false;
    titre="";
}

Playlist::Playlist (QString s_nom,QVector<QString> s_liste)
{
    nom=s_nom;
    liste=s_liste;
    titre=nom.toLower();
    titre.replace( " ", "_" );
}
Playlist::Playlist (const Playlist & Copie)
{
    nom = Copie.nom;
    liste = Copie.liste;
    titre = Copie.titre;
}
Playlist::Playlist (QString titre){ Load(titre); }
Playlist::~Playlist()
{}

void Playlist::afficher () const
{
    qDebug() << "Playlist: " << nom;
    qDebug() << "Liste: ";
    for(int i=0;i<liste.size();i++)
    {
        qDebug() << liste[i];
    }
    qDebug() << "titre: " << titre;
}

QString Playlist::getNom()
{
    return nom;
}

QString Playlist::getTitre()
{
    return titre;
}

QVector<QString> Playlist::getListe()
{
    return liste;
}

void Playlist::setNom(QString nom)
{
    this->nom=nom;

    QString filename = "data/Playlist/";
    filename+=titre;
    filename+=".data";
    QFile file(filename);
    file.remove();

    // nouveau titre de fichier adapté au nom
    titre=nom.toLower();
    titre.replace( " ", "_" );

    // Sauvegarde du nouveau fichier
    Save();
}

void Playlist::setListe(QVector<QString> s_liste)
{
    this->liste=s_liste;
}

void Playlist::Save()
{
    QString filename = "data/Playlist/";
    filename+=titre+".data";
    qDebug() << filename;
    QFile file(filename);

    if(!file.open(QIODevice::WriteOnly))
    {
        qDebug() << "Could not open " << filename;
        return;
    }

    QDataStream out(&file);

    out << nom << titre << liste;

    file.flush();
    file.close();
    //qDebug() << filename << "Sauvegardé !";
}

void Playlist::Load(QString nomFichier)
{
    QString filename = "data/Playlist/";
    filename+=nomFichier;
    filename+=".data";
    QFile file(filename);

    if(!file.open(QIODevice::ReadOnly))
    {
        qDebug() << "Could not open " << filename;
        return;
    }

    QDataStream in(&file);
    in.setVersion(QDataStream::Qt_5_1);

    in >> nom;
    in >> titre;
    in >> liste;

    //qDebug() << titre << " Récupéré.";

    file.close();
}

