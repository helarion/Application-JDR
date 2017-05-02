#include <QDataStream>
#include <iostream>
#include <QFile>
#include <QDebug>

#include "playlist.h"

Playlist::Playlist ()
{
    nom="";
    titre="";
    titreJeu="";
}

Playlist::Playlist (QString s_nom,QVector<QString> s_liste, QString s_titreJeu)
{
    nom=s_nom;
    liste=s_liste;
    //jeu=s_jeu;
    titreJeu=s_titreJeu;
    titre=nom.toLower();
    titre.replace( " ", "_" );
}
Playlist::Playlist (const Playlist & Copie)
{
    nom = Copie.nom;
    liste = Copie.liste;
    titre = Copie.titre;
    titreJeu = Copie.titreJeu;
}
Playlist::Playlist (QString nomFichier){ Load(nomFichier); }

Playlist::~Playlist()
{}

void Playlist::afficher ()
{
    qDebug() << "Playlist: " << nom;
    qDebug() << "Jeu" << titreJeu;
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

QString Playlist::getTitreJeu()
{
    //qDebug() << "return titreJeu:" <<titreJeu;
    return titreJeu;
}

QString Playlist::getTitre()
{
    return titre;
}

QVector<QString> Playlist::getListe()
{
    return liste;
}

/*Jeu Playlist::getJeu()
{
    return jeu;
}*/

void Playlist::setNom(QString nom)
{
    this->nom=nom;
    // nouveau titre de fichier adapté au nom
    titre=nom.toLower();
    titre.replace( " ", "_" );
}

void Playlist::setListe(QVector<QString> s_liste)
{
    this->liste=s_liste;
}

void Playlist::setTitreJeu(QString s_titreJeu)
{
    titreJeu=s_titreJeu;
}

void Playlist::Save()
{
    QString filename = "data/Playlist/";
    filename+=titreJeu+"_"+titre+".data";
    qDebug() << filename;
    QFile file(filename);

    if(!file.open(QIODevice::WriteOnly))
    {
        qDebug() << "Could not open " << filename;
        return;
    }

    QDataStream out(&file);

    out << nom << titreJeu << titre << liste;

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
    //in.setVersion(QDataStream::Qt_5_1);

    in >> nom;
    in >> titreJeu;
    in >> titre;
    in >> liste;

    file.close();
}

