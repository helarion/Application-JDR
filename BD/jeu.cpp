#include <QDataStream>
#include <iostream>
#include <QFile>
#include <QDebug>
#include <QFileInfo>

#include "BD/jeu.h"
#include "BD/collections.h"

quint16 Jeu::increment = 1;

Jeu::Jeu ()
{
    num=-1;
    nom="";
    adrTheme="";
    titre="";
}

Jeu::Jeu (QString s_nom,QString s_adrTheme, QVector<Attribut*> list) : num(increment++)
{
    nom=s_nom;
    titre=nom.toLower();
    titre.replace( " ", "_" );
    QFile image(s_adrTheme);
    QFileInfo info(s_adrTheme);
    s_adrTheme="data/Jeu/"+titre+"."+info.suffix();
    image.copy(s_adrTheme);
    adrTheme=s_adrTheme;
    listAttribut=list;
}
Jeu::Jeu (const Jeu & Copie)
{
    num = Copie.num;
    nom = Copie.nom;
    adrTheme = Copie.adrTheme;
    titre = Copie.titre;
}
Jeu::Jeu (QString nomFichier){ Load(nomFichier); }
Jeu::~Jeu()
{}

void Jeu::afficher () const
{
    qDebug() << num;
    qDebug() << nom;
    qDebug() << adrTheme;
    qDebug() << titre;
}

QString Jeu::getTitre()
{
    return titre;
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

void Jeu::setNom(QString s_nom)
{
    nom=s_nom; // modification du nom

    // suppression du fichier actuel
    QString filename = "data/Jeu/";
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

void Jeu::setTheme(QString s_theme)
{
    QFile image(s_theme);
    QFileInfo info(s_theme);
    QString chemin="data/Jeu/"+titre+"."+info.suffix();
    //qDebug() << "chemin:" << chemin;
    image.copy(chemin);
    adrTheme=chemin;

}

void Jeu::Save()
{
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

    out << num << nom << adrTheme << titre;

    file.flush();
    file.close();
    qDebug() << filename << "Sauvegardé !";
}

void Jeu::Load(QString nomFichier)
{
    QString filename = "data/Jeu/";
    filename+=nomFichier;
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
    in >> titre;

    qDebug() << titre << " Récupéré.";

    file.close();

}
