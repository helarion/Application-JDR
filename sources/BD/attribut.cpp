#include <QDataStream>
#include <iostream>
#include <QFile>
#include <QDebug>

#include "headers/BD/Attribut.h"

quint16 Attribut::increment = 1;

Attribut::Attribut () {}

Attribut::Attribut (QString s_nom,quint16 s_type,bool s_preset) : num(increment++)
{
    nom=s_nom;
    type=s_type;
    preset=s_preset;
    titre=nom.toLower();
    titre.replace( " ", "_" );
}
Attribut::Attribut (const Attribut & Copie)
{
    num = Copie.num;
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
    qDebug() << num;
    qDebug() << nom;
    qDebug() << preset;
    qDebug() << type;
}

quint16 Attribut::getNum()
{
    return num;
}

QString Attribut::getNom()
{
    return nom;
}

void Attribut::Save()
{
    qDebug() << num;
    QString filename = "data/Attribut/";
    filename+=QString::number(num);
    qDebug() << filename;
    QFile file(filename);

    if(!file.open(QIODevice::WriteOnly))
    {
        qDebug() << "Could not open " << filename;
        return;
    }

    QDataStream out(&file);

    out << num << nom << titre << type << preset;

    file.flush();
    file.close();
    qDebug() << filename << "Sauvegardé !";
}

void Attribut::Load(QString titre)
{
    QString filename = "data/Attribut/";
    filename+=titre;
    filename+=".data";
    QFile file(filename);

    if(!file.open(QIODevice::ReadOnly))
    {
        qDebug() << "Could not open " << filename;
        return;
    }

    QDataStream in(&file);
    in.setVersion(QDataStream::Qt_5_1);

    in >> num;
    in >> nom;
    in >> titre;
    in >> type;
    in >> preset;

    qDebug() << titre << " Récupéré.";

    file.close();
}
