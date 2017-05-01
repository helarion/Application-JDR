#include <QDataStream>
#include <iostream>
#include <QFile>
#include <QDebug>
#include <QFileInfo>

#include "BD/jeu.h"
#include "BD/collections.h"

Jeu::Jeu ()
{
    nom="";
    adrTheme="";
    titre="";
}

Jeu::Jeu (QString s_nom,QString s_adrTheme, QVector<Attribut> list)
{
    nom=s_nom;
    titre=nom.toLower();
    titre.replace( " ", "_" );
    QFile image(s_adrTheme);
    QFileInfo info(s_adrTheme);
    s_adrTheme="data/Jeu/"+titre+"."+info.suffix();
    image.copy(s_adrTheme);
    adrTheme=s_adrTheme;
    this->listAttribut=list;
    // on remplit la liste des titres
    for(int i=0;i<this->listAttribut.size();i++)
    {
        listTitreAttribut.append(listAttribut[i].getTitre());
    }
}
Jeu::Jeu (const Jeu & Copie)
{
    nom = Copie.nom;
    adrTheme = Copie.adrTheme;
    titre = Copie.titre;
    this->listAttribut=Copie.listAttribut;
    this->listTitreAttribut=Copie.listTitreAttribut;
}
Jeu::Jeu (QString nomFichier){ Load(nomFichier); }
Jeu::~Jeu()
{}

void Jeu::afficher () const
{
    qDebug() << "Affichage Jeu:";
    qDebug() << nom;
    qDebug() << adrTheme;
    qDebug() << titre;
}

QString Jeu::getTitre()
{
    return titre;
}

QString Jeu::getNom()
{
    return nom;
}

QString Jeu::getTheme()
{
    return adrTheme;
}

QVector<Attribut> Jeu::getListAttribut()
{
    return this->listAttribut;
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
    QFile::remove(adrTheme);
    /*if (QFile::exists(s_theme))
    {
        // YES NO
        QFile::remove(s_theme);
    }*/
    QFile image(s_theme);
    QFileInfo info(s_theme);
    QString chemin="data/Jeu/"+titre+"."+info.suffix();
    //qDebug() << "chemin:" << chemin;
    image.copy(chemin);
    adrTheme=chemin;
}

void Jeu::setListAttribut(QVector<Attribut> list)
{
    this->listAttribut.clear();
    this->listTitreAttribut.clear();
    this->listAttribut=list;
    for(int i=0;i<this->listAttribut.size();i++)
    {
        this->listTitreAttribut.append(this->listAttribut[i].getTitre());
    }
}

void Jeu::editAttribut(int index, QString titre)
{
    listTitreAttribut.replace(index,titre);
}

bool Jeu::compare(Jeu j)
{
    if(titre==j.getTitre()) return true;
    return false;
}

QVector<QString> Jeu::getListTitreAttribut() { return listTitreAttribut; }

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

    out << nom << adrTheme << titre << listTitreAttribut;

    file.flush();
    file.close();
    //qDebug() << filename << "Sauvegardé !";
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

    in >> nom;
    in >> adrTheme;
    in >> titre;
    in >> listTitreAttribut;

    this->listAttribut.clear();

    for(int i=0;i<listTitreAttribut.size();i++)
    {
        Attribut a(listTitreAttribut[i]);
        this->listAttribut.append(a);
    }

    //qDebug() << titre << " Récupéré.";

    file.close();

}
