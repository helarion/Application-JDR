#include "BD/personnage.h"

#include <QString>
#include <QDebug>
#include <QFile>
#include <QDataStream>

Personnage::Personnage()
{

}

Personnage::Personnage(QString s_joueur, QString s_nom, QString s_prenom, int s_age,
                       QString s_description, QString s_background, QString s_invArmure,
                       QString s_invArme, QString s_invObjet,QString s_sexe,
                       Partie s_partie, QVector<QString> s_valeurAttribut)
{
    joueur=s_joueur;
    nom=s_nom;
    prenom=s_prenom;
    age=s_age;
    description=s_description;
    sexe=s_sexe;
    partie=s_partie;
    background=s_background;
    invArmure=s_invArmure;
    invArme=s_invArme;
    invObjet=s_invObjet;
    valeurAttribut=s_valeurAttribut;
    titrePartie=partie.getCampagne().getTitre()+"_"+partie.getTitre();
    titre=nom.toLower();
    titre+=prenom.toLower();
    titre.replace( " ", "_" );
}

Personnage::Personnage(QString titre)
{
    Load(titre);
}

QString Personnage::getJoueur()
{
    return joueur;
}

QString Personnage::getTitre()
{
    return titre;
}

QString Personnage::getNom()
{
    return nom;
}

QString Personnage::getPrenom()
{
    return prenom;
}

int Personnage::getAge()
{
    return age;
}

QString Personnage::getDescription()
{
    return description;
}

QString Personnage::getSexe()
{
    return sexe;
}

Partie Personnage::getPartie()
{
    return partie;
}

QString Personnage::getBackground()
{
    return background;
}

QString Personnage::getInvArme()
{
    return invArme;
}

QString Personnage::getInvArmure()
{
    return invArmure;
}

QString Personnage::getInvObjet()
{
    return invObjet;
}

void Personnage::setJoueur(QString s_joueur)
{
    joueur=s_joueur;
}

void Personnage::setNom(QString s_nom)
{
    nom=s_nom;
    // suppression du fichier actuel
    QString filename = "data/Personnage/";
    filename+=titrePartie+"_"+titre+".data";
    QFile file(filename);
    file.remove();

    // nouveau titre de fichier adapté au nom
    titre=nom.toLower();
    titre+=prenom.toLower();
    titre.replace( " ", "_" );

    // Sauvegarde du nouveau fichier
    Save();
}

void Personnage::setPrenom(QString s_prenom)
{
    prenom=s_prenom;
}

void Personnage::setAge(int s_age)
{
    age=s_age;
}

void Personnage::setDescription(QString s_description)
{
    description=s_description;
}

void Personnage::setBackground(QString s_background)
{
    background=s_background;
}

void Personnage::setInvArme(QString s_invArme)
{
    invArme=s_invArme;
}

void Personnage::setInvArmure(QString s_invArmure)
{
    invArmure=s_invArmure;
}

void Personnage::setInvObjet(QString s_invObjet)
{
    invObjet=s_invObjet;
}

void Personnage::setValeurAttribut(QVector<QString> list)
{
    valeurAttribut=list;
}

void Personnage::setSexe(QString s_sexe)
{
    sexe=s_sexe;
}

void Personnage::setPartie(Partie s_partie)
{
    // suppression du fichier actuel
    QString filename = "data/Partie/";
    filename+=partie.getTitreCampagne()+"_"+partie.getTitre()+".data";
    QFile file(filename);
    file.remove();

    // nouveau titre de fichier adapté au nom
    partie=s_partie;
    titrePartie=partie.getTitre();

    // Sauvegarde du nouveau fichier
    Save();
}

QVector<QString> Personnage::getValeurAttribut()
{
    return valeurAttribut;
}

void Personnage::afficher()
{
    qDebug() << "Personnage:" << nom;
    qDebug() << "Joueur:" << joueur;
    qDebug() << "prenom:" << prenom;
    qDebug() << "age:" << age;
    qDebug() << "description:" << description;
    qDebug() << "sexe:" << sexe;
}

void Personnage::Save()
{
    QString filename = "data/Personnage/";
    filename+=partie.getTitreCampagne()+"_"+partie.getTitre()+"_"+titre;
    filename+=".data";
    qDebug() << filename;
    QFile file(filename);

    if(!file.open(QIODevice::WriteOnly))
    {
        qDebug() << "Could not open " << filename;
        return;
    }

    QDataStream out(&file);

    out << joueur << nom << prenom
        << age << description << sexe
        << titre << titrePartie
        << valeurAttribut << invArme
        << invArmure << invObjet << background;

    file.flush();
    file.close();
}

void Personnage::Load(QString nomFichier)
{
    QString filename = "data/Personnage/";
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

    in >> joueur;
    in >> nom;
    in >> prenom;
    in >> age;
    in >> description;
    in >> sexe;
    in >> titre;
    in >> titrePartie;
    in >> valeurAttribut;
    in >> invArme;
    in >> invArmure;
    in >> invObjet;
    in >> background;

    partie.Load(titrePartie);
    file.close();

}
