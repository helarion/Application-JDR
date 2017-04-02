#include <QDataStream>
#include <iostream>
#include <QFile>
#include <QDebug>

#include "BD/ValeurAttribut.h"

quint16 ValeurAttribut::increment = 1;

ValeurAttribut::ValeurAttribut () {}

ValeurAttribut::ValeurAttribut (QString s_valeur, Attribut* s_attribut,Personnage* s_personnage) : num(increment++)
{
    valeur=s_valeur;
    personnage=s_personnage;
    attribut=s_attribut;
    titre="";
    titre.replace( " ", "_" );
}
ValeurAttribut::ValeurAttribut (const ValeurAttribut & Copie)
{
    num = Copie.num;
    valeur = Copie.valeur;
    titre = Copie.titre;
    personnage = Copie.personnage;
    attribut = Copie.attribut;
}
ValeurAttribut::ValeurAttribut (QString titre){ Load(titre); }
ValeurAttribut::~ValeurAttribut()
{}

void ValeurAttribut::afficher () const
{
    qDebug() << num;
    qDebug() << valeur;
}

quint16 ValeurAttribut::getNum()
{
    return num;
}

void ValeurAttribut::Save()
{
    qDebug() << num;
    QString filename = "data/ValeurAttribut/";
    filename+=QString::number(num);
    qDebug() << filename;
    QFile file(filename);

    if(!file.open(QIODevice::WriteOnly))
    {
        qDebug() << "Could not open " << filename;
        return;
    }

    QDataStream out(&file);

    out << num << titre << valeur;

    file.flush();
    file.close();
    qDebug() << filename << "Sauvegardé !";
}

void ValeurAttribut::Load(QString titre)
{
    QString filename = "data/ValeurAttribut/";
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
    in >> titre;
    in >> valeur;

    qDebug() << titre << " Récupéré.";

    file.close();
}
