#include <QDataStream>
#include <iostream>
#include <QFile>
#include <QDebug>
#include <QFileInfo>
#include <QMessageBox>

#include "BD/Partie.h"

int Partie::increment=0;

Partie::Partie ()
{
    nom="";
    resume="";
    titre="";
}

Partie::Partie (QString s_nom,Campagne s_campagne)
{
    nom=s_nom;
    campagne=s_campagne;
    resume="";
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
Partie::Partie (QString fichier){ Load(fichier); }
Partie::~Partie()
{}

void Partie::afficher () const
{
    qDebug() << "Partie:" << nom;
    qDebug() << "resume:" << resume;
    qDebug() << "titre:" << titre;
    campagne.afficher();
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


void Partie::setNom(QString s_nom)
{
    nom=s_nom; // modification du nom

    // suppression du fichier actuel
    QString filename = "data/Partie/";
    QString c=campagne.getTitre();
    filename+=c+"_"+titre+".data";
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

bool Partie::compare(Partie p)
{
    if(nom==p.getNom() && resume == p.getResume() && titre == p.getTitre()  && campagne.compare(p.getCampagne()))
        return true;
    return false;
}

void Partie::Save()
{
    QString filename = "data/Partie/";
    filename+=campagne.getTitre()+"_"+titre+".data";
    QFile file(filename);

    // test si un fichier existe déja à ce nom
    QFileInfo check_file(filename);
    if (check_file.exists() && check_file.isFile())
    {
        // si c'est le cas, on compare les deux fichiers
        Partie p(filename);
        // s'ils sont différent on fait coexister les fichiers
        // avec deux titres différents
        if(compare(p)==false)
        {
            QMessageBox msgBox;
            msgBox.setText("Conflit de sauvegarde");
            msgBox.setInformativeText("Le fichier que vous vous apprétez à sauvegarder existe déja, écraser ?");
            msgBox.setStandardButtons(QMessageBox::Save | QMessageBox::Discard);
            msgBox.setDefaultButton(QMessageBox::Save);

            int ret = msgBox.exec();
            switch (ret) {
              case QMessageBox::Save:
                  break;
              case QMessageBox::Discard:
                    return;
                    break;
              default:
                  return;
                  break;
            }
        }
        else // s'ils sont identiques on annule la sauvegarde qui se trouve être inutile
        {
            return;
        }
    }

    if(!file.open(QIODevice::WriteOnly))
    {
        qDebug() << "Could not open " << filename;
        return;
    }

    QDataStream out(&file);

    qDebug() << "titre" << titre;

    out << nom << titre << titreCampagne;

    file.flush();
    file.close();
    qDebug() << filename << "Sauvegardé !";
}

void Partie::Load(QString fichier)
{
    QString filename = "data/Partie/";
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
    in >> titre;
    in >> titreCampagne;

    qDebug() << "titrecampagne:"<<titreCampagne;

    campagne.Load(titreCampagne);

    file.close();
}
