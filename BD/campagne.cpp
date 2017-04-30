#include <QDataStream>
#include <iostream>
#include <QFile>
#include <QDebug>

#include "BD/Campagne.h"

Campagne::Campagne ()
{
    nom="";
    scenario="";
    titreJeu="";
}

Campagne::Campagne (QString s_nom, QString s_scenario, QString s_titreJeu)
{
    nom=s_nom;
    scenario=s_scenario;
    titreJeu=s_titreJeu;
    jeu.Load(titreJeu);
    titre=nom.toLower();
    titre.replace( " ", "_" );
}
Campagne::Campagne (const Campagne & Copie)
{
    nom = Copie.nom;
    scenario = Copie.scenario;
    titre = Copie.titre;
    jeu = Copie.jeu;
}
Campagne::Campagne (QString titre){ Load(titre); }

Campagne::~Campagne()
{}

void Campagne::afficher () const
{
    qDebug() << "Affichage Campagne:";
    qDebug() << nom;
    qDebug() << scenario;
}

QString Campagne::getNom()
{
    return nom;
}

QString Campagne::getScenario()
{
    return scenario;
}

Jeu Campagne::getJeu()
{
    return jeu;
}

QString Campagne::getTitre()
{
    return titre;
}

QString Campagne::getTitreJeu()
{
    return titreJeu;
}

void Campagne::setNom(QString s_nom)
{
    nom=s_nom; // modification du nom

    // suppression du fichier actuel
    QString filename = "data/Campagne/";
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

void Campagne::setScenario(QString s_scenario)
{
    scenario=s_scenario;
}

void Campagne::setTitreJeu(QString titreJeu)
{
    jeu=Jeu(titreJeu);
    this->titreJeu=titreJeu;
}

bool Campagne::compare(Campagne c)
{
    if(nom==c.getNom() && scenario==c.getScenario() && titre==c.getTitre() && jeu.compare(c.getJeu())) return true;
    return false;
}

void Campagne::Save()
{
    QString filename = "data/Campagne/";
    filename+=titre;
    filename+=".data";
    QFile file(filename);

    if(!file.open(QIODevice::WriteOnly))
    {
        qDebug() << "Could not open " << filename;
        return;
    }

    QDataStream out(&file);

    out << nom << scenario << titreJeu << titre;

    file.flush();
    file.close();
    qDebug() << filename << "Sauvegardé !";
}

void Campagne::Load(QString fichier)
{
    QString filename = "data/Campagne/";
    filename+=fichier;
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
    in >> scenario;
    in >> titreJeu;
    in >> titre;

    jeu.Load(titreJeu);

    //qDebug() << titre << " Récupéré.";

    file.close();
}
