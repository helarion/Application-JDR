#include <QDataStream>
#include <iostream>
#include <QFile>
#include <QDebug>

#include "BD/Partie.h"

Partie::Partie ()
{
    nom="";
    resume="";
    titre="";
}

Partie::Partie (QString s_nom, QString s_resume, Campagne s_campagne)
{
    nom=s_nom;
    resume=s_resume;
    campagne=s_campagne;
    titreCampagne=campagne.getTitre();
    titre=nom.toLower();
    titre.replace( " ", "_" );
}
Partie::Partie (const Partie & Copie)
{
    nom = Copie.nom;
    resume = Copie.resume;
    titre = Copie.titre;
    campagne = Copie.campagne;
    titreCampagne = Copie.titreCampagne;
}
Partie::Partie (QString titre){ Load(titre); }
Partie::~Partie()
{}

void Partie::afficher () const
{
    qDebug() << nom;
    qDebug() << resume;
}

QString Partie::getNom()
{
    return nom;
}

QString Partie::getResume()
{
    return resume;
}

Campagne Partie::getCampagne()
{
    return campagne;
}

QString Partie::getTitreCampagne()
{
    return titreCampagne;
}

QString Partie::getTitre()
{
    return titre;
}

void Partie::Save()
{
    QString filename = "data/Partie/";
    filename+=titre+".data";
    QFile file(filename);

    if(!file.open(QIODevice::WriteOnly))
    {
        qDebug() << "Could not open " << filename;
        return;
    }

    QDataStream out(&file);

    out << nom << resume << titreCampagne;

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

    in >> nom;
    in >> resume;
    in >> titreCampagne;

    campagne.Load(titreCampagne);

    file.close();
}
