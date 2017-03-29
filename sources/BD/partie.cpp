#include <QDataStream>
#include <iostream>
#include <QFile>
#include <QDebug>

#include "headers/BD/Partie.h"

quint16 Partie::increment = 1;

Partie::Partie () {}

Partie::Partie (QString s_nom, QString s_resume, Campagne* s_campagne) : num(increment++)
{
    nom=s_nom;
    resume=s_resume;
    campagne=s_campagne;
    titre=nom.toLower();
    titre.replace( " ", "_" );
}
Partie::Partie (const Partie & Copie)
{
    num = Copie.num;
    nom = Copie.nom;
    resume = Copie.resume;
    titre = Copie.titre;
}
Partie::Partie (QString titre){ Load(titre); }
Partie::~Partie()
{}

void Partie::afficher () const
{
    qDebug() << num;
    qDebug() << nom;
    qDebug() << resume;
}

quint16 Partie::getNum()
{
    return num;
}

QString Partie::getNom()
{
    return nom;
}

QString Partie::getResume()
{
    return resume;
}

Campagne* Partie::getCampagne()
{
    return campagne;
}

void Partie::Save()
{
    qDebug() << num;
    QString filename = "data/Partie/";
    filename+=QString::number(num);
    qDebug() << filename;
    QFile file(filename);

    if(!file.open(QIODevice::WriteOnly))
    {
        qDebug() << "Could not open " << filename;
        return;
    }

    QDataStream out(&file);

    out << num << nom << resume;

    file.flush();
    file.close();
    qDebug() << filename << "Sauvegardé !";
}

void Partie::Load(QString titre)
{
    QString filename = "data/Partie/";
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
    in >> resume;

    qDebug() << titre << " Récupéré.";

    file.close();
}
