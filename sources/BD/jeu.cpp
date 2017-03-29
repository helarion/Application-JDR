#include <QDataStream>
#include <iostream>
#include <QFile>
#include <QDebug>

#include "headers/BD/jeu.h"

quint16 Jeu::increment = 1;

Jeu::Jeu ()
{
    num=-1;
    nom="";
    adrTheme="";
    titre="";
}

Jeu::Jeu (QString s_nom,QString s_adrTheme) : num(increment++)
{
    nom=s_nom;
    adrTheme=s_adrTheme;
    titre=nom.toLower();
    titre.replace( " ", "_" );
}
Jeu::Jeu (const Jeu & Copie)
{
    num = Copie.num;
    nom = Copie.nom;
    adrTheme = Copie.adrTheme;
}
Jeu::Jeu (QString titre){ Load(titre); }
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
    QString filename = "data/Jeu/";
    filename+=titre;
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

void Jeu::Load(QString titre)
{
    QString filename = "data/Jeu/";
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
    in >> adrTheme;

    qDebug() << titre << " Récupéré.";

    file.close();

}
