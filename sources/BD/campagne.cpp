#include "../../headers/BD/Campagne.h"
#include <QDataStream>
#include <iostream>
#include <QFile>
#include <QDebug>

quint16 Campagne::increment = 1;

Campagne::Campagne (QString s_nom, QString s_scenario, Jeu* s_jeu) : num(increment++)
{
    nom=s_nom;
    scenario=s_scenario;
    jeu=s_jeu;
}
Campagne::Campagne (const Campagne & Copie)
{
    num = Copie.num;
    nom = Copie.nom;
    scenario = Copie.scenario;
}
Campagne::Campagne (quint16 index){ Load(index); }
Campagne::~Campagne()
{}

void Campagne::afficher () const
{
    qDebug() << num;
    qDebug() << nom;
    qDebug() << scenario;
}

quint16 Campagne::getNum()
{
    return num;
}

QString Campagne::getNom()
{
    return nom;
}

QString Campagne::getScenario()
{
    return scenario;
}

Jeu* Campagne::getJeu()
{
    return jeu;
}

void Campagne::Save()
{
    qDebug() << num;
    QString filename = "C:/Users/Axel/Documents/GitHub/Projet-S6/data/Campagne/";
    filename+=QString::number(num);
    qDebug() << filename;
    QFile file(filename);

    if(!file.open(QIODevice::WriteOnly))
    {
        qDebug() << "Could not open " << filename;
        return;
    }

    QDataStream out(&file);
    //out.setVersion(QDataStream::Qt_5_1);

    out << num << nom << scenario;

    file.flush();
    file.close();
    qDebug() << filename << "Sauvegardé !";
}

void Campagne::Load(quint16 index)
{
    QString filename = "C:/Users/Axel/Documents/GitHub/Projet-S6/data/Campagne/";
    filename+=QString::number(index);
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
    in >> scenario;

    qDebug() << index << " Récupéré.";

    file.close();

}
