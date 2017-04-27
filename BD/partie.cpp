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

Partie::Partie (QString s_nom, QString s_resume, Campagne s_campagne, QVector<Personnage> s_personnages)
{
    nom=s_nom;
    resume=s_resume;
    campagne=s_campagne;
    personnages=s_personnages;
    for(int i=0;i<personnages.size();i++)
    {
        titrePersonnages.append(personnages[i].getTitre());
    }
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
    qDebug() << "Affichage Partie:";
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

QVector<Personnage> Partie::getPersonnage()
{
    return personnages;
}

QVector<QString> Partie::getTitrePersonnages()
{
    return titrePersonnages;
}

void Partie::setNom(QString s_nom)
{
    nom=s_nom; // modification du nom

    // suppression du fichier actuel
    QString filename = "data/Partie/";
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

void Partie::setResume(QString s_resume)
{
    resume=s_resume;
}

void Partie::setCampagne(Campagne s_campagne)
{
    campagne=s_campagne;
}

void Partie::setPersonnages(QVector<Personnage> s_personnages)
{
    personnages=s_personnages;
    titrePersonnages.clear();
    for(int i=0;i<personnages.size();i++)
    {
        titrePersonnages.append(personnages[i].getTitre());
    }
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
