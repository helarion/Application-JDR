#include "../../headers/BD/jeu.h"

#include <QDataStream>
#include <iostream>
#include <QFile>
#include <QDebug>

quint16 Jeu::increment = 1;

Jeu::Jeu (QString s_nom,QString s_adrTheme) : num(increment++)
{
    nom=s_nom;
    adrTheme=s_adrTheme;
}
Jeu::Jeu (const Jeu & Copie)
{
    num = Copie.num;
    nom = Copie.nom;
    adrTheme = Copie.adrTheme;
}
Jeu::Jeu (QString index){ Load(index); }
Jeu::~Jeu()
{}

void Jeu::afficher () const
{
    qDebug() << num;
    qDebug() << nom;
    qDebug() << adrTheme;
}

quint16 Jeu::getNum()
{
    return num;
}

QString Jeu::getNom()
{
    return nom;
}

QString Jeu::getTheme()
{
    return adrTheme;
}

void Jeu::Save()
{
    qDebug() << nom;
    QString filename = "C:/Users/Axel/Documents/GitHub/Projet-S6/data/Jeu/";
    filename+=nom;
    filename+=".data";
    qDebug() << filename;
    QFile file(filename);

    if(!file.open(QIODevice::WriteOnly))
    {
        qDebug() << "Could not open " << filename;
        return;
    }

    QDataStream out(&file);
    //out.setVersion(QDataStream::Qt_5_1);

    out << num << nom << adrTheme;

    file.flush();
    file.close();
    qDebug() << filename << "Sauvegardé !";
}

void Jeu::Load(QString index)
{
    QString filename = "C:/Users/Axel/Documents/GitHub/Projet-S6/data/Jeu/";
    filename+=index;
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
    in >> adrTheme;

    qDebug() << index << " Récupéré.";

    file.close();

}
