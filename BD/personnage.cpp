#include "BD/personnage.h"

#include <QString>
#include <QDebug>
#include <QFile>
#include <QDataStream>

Personnage::Personnage()
{

}

Personnage::Personnage(QString s_nom, QString s_prenom,
                       int s_age, QString s_description,
                       QString s_sexe, Campagne s_campagne,
                       QVector<QString> s_valeurAttribut)
{
    nom=s_nom;
    prenom=s_prenom;
    age=s_age;
    description=s_description;
    sexe=s_sexe;
    campagne=s_campagne;
    valeurAttribut=s_valeurAttribut;
    titreCampagne=campagne.getTitre();
    titre=nom.toLower();
    titre+=prenom.toLower();
    titre.replace( " ", "_" );
}

Personnage::Personnage(QString titre)
{
    Load(titre);
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

void Personnage::setNom(QString s_nom)
{
    nom=s_nom;
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

void Personnage::setSexe(QString s_sexe)
{
    sexe=s_sexe;
}

void Personnage::afficher()
{
    qDebug() << "nom:" << nom;
    qDebug() << "prenom:" << prenom;
    qDebug() << "age:" << age;
    qDebug() << "description:" << description;
    qDebug() << "sexe:" << sexe;
}

void Personnage::Save()
{
    QString filename = "data/Personnage/";
    filename+=titreCampagne+"_"+titre;
    filename+=".data";
    qDebug() << filename;
    QFile file(filename);

    if(!file.open(QIODevice::WriteOnly))
    {
        qDebug() << "Could not open " << filename;
        return;
    }

    QDataStream out(&file);

    out << nom << prenom << age << description << sexe << titre << titreCampagne;

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

    in >> nom;
    in >> prenom;
    in >> age;
    in >> description;
    in >> sexe;
    in >> titre;
    in >> titreCampagne;

    campagne.Load(titreCampagne);
    file.close();

}
