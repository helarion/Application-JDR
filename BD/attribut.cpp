#include <QDataStream>
#include <iostream>
#include <QFile>
#include <QDebug>

#include "BD/Attribut.h"

Attribut::Attribut ()
{
    nom="";
    type=-1;
    preset=false;
    titre="";
}

Attribut::Attribut (QString s_nom,int s_type,bool s_preset)
{
    nom=s_nom;
    type=s_type;
    preset=s_preset;
    titre=nom.toLower();
    titre.replace( " ", "_" );
}
Attribut::Attribut (const Attribut & Copie)
{
    nom = Copie.nom;
    preset = Copie.preset;
    type = Copie.type;
    titre = Copie.titre;
}
Attribut::Attribut (QString titre){ Load(titre); }
Attribut::~Attribut()
{}

void Attribut::afficher () const
{
    qDebug() << "nom: " << nom;
    qDebug() << "preset: " << preset;
    qDebug() << "type: " << type;
    qDebug() << "titre: " << titre;
}

QString Attribut::getNom()
{
    return nom;
}

QString Attribut::getTitre()
{
    return titre;
}

bool Attribut::getPreset() { return preset;}

void Attribut::setNom(QString nom)
{
    this->nom=nom;

    QString filename = "data/Attribut/";
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

void Attribut::setType(int type)
{
    this->type=type;
}

void Attribut::setPreset(bool preset)
{
    this->preset=preset;
}

void Attribut::Save()
{
    QString filename = "data/Attribut/";
    filename+=titre+".data";
    qDebug() << filename;
    QFile file(filename);

    if(!file.open(QIODevice::WriteOnly))
    {
        qDebug() << "Could not open " << filename;
        return;
    }

    QDataStream out(&file);

    out << nom << titre << type << preset;

    file.flush();
    file.close();
    //qDebug() << filename << "Sauvegardé !";
}

void Attribut::Load(QString nomFichier)
{
    QString filename = "data/Attribut/";
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
    in >> type;
    in >> preset;

    //qDebug() << titre << " Récupéré.";

    file.close();
}
