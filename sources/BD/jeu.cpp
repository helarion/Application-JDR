#include "../../headers/BD/jeu.h"

#include <QDataStream>
#include <iostream>
#include <QFile>
#include <QDebug>

quint16 jeu::increment = 1;

jeu::jeu (const QString s_nom,const QString s_adrTheme) : num(increment++),nom(s_nom),adrTheme(s_adrTheme){}
jeu::jeu (const jeu & copie)
{
    num = copie.num;
    nom = copie.nom;
    adrTheme = copie.adrTheme;
}
jeu::~jeu()
{}

void jeu::afficher () const
{

}

quint16 jeu::getNum()
{
    return num;
}

QString jeu::getNom()
{
    return nom;
}

QString jeu::getTheme()
{
    return adrTheme;
}


void jeu::initJeuSystem ()
{
    qRegisterMetaTypeStreamOperators<jeu>("jeu");

    qMetaTypeId<jeu>();				// Teste la validité de la classe jeu
}


QDataStream & operator << (QDataStream & out, const jeu & valeur)
{
    out << valeur.num << valeur.nom << valeur.adrTheme;

    return out;
}

QDataStream & operator >> (QDataStream & in, jeu & valeur)
{
    in >> valeur.num;
    in >> valeur.nom;
    in >> valeur.adrTheme;

    return in;
}

void jeu::Save()
{
    qDebug() << num;
    QString filename = "C:/Users/Axel/Documents/GitHub/Projet-S6/data/jeu/";
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

    out << num << nom << adrTheme;

    file.flush();
    file.close();
    qDebug() << filename << "Sauvegardé !";
}

void jeu::Load(quint index)
{
    QString filename = "C:/Users/Axel/Documents/GitHub/Projet-S6/data/jeu/";
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
    in >> adrTheme;

    file.close();

}
