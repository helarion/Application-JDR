#include "headers/BD/Campagne.h"
#include <QDataStream>
#include <iostream>
#include <QFile>
#include <QDebug>

quint16 Campagne::increment = 1;

Campagne::Campagne () {}

Campagne::Campagne (QString s_nom, QString s_scenario, Jeu* s_jeu) : num(increment++)
{
    nom=s_nom;
    scenario=s_scenario;
    jeu=s_jeu;
    titre=nom.toLower();
    titre.replace( " ", "_" );
}
Campagne::Campagne (const Campagne & Copie)
{
    num = Copie.num;
    nom = Copie.nom;
    scenario = Copie.scenario;
    titre = Copie.titre;
}
Campagne::Campagne (QString titre){ Load(titre); }
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
    QString filename = "data/Campagne/";
    filename+=QString::number(num);
    qDebug() << filename;
    QFile file(filename);

    if(!file.open(QIODevice::WriteOnly))
    {
        qDebug() << "Could not open " << filename;
        return;
    }

    QDataStream out(&file);

    out << num << nom << scenario;

    file.flush();
    file.close();
    qDebug() << filename << "Sauvegardé !";
}

void Campagne::Load(QString titre)
{
    QString filename = "data/Campagne/";
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
    in >> scenario;

    qDebug() << titre << " Récupéré.";

    file.close();
}
