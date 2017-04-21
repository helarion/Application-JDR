#include <QDir>
#include <QDebug>

#include "collections.h"

QVector<Jeu> listJeu;
QVector<Attribut> listAttribut;
QVector<Campagne> listCampagne;
QVector<Partie> listPartie;

quint8 indexStack=0;

int jeuSelect=-1;
int campagneSelect=-1;
int partieSelect=-1;
int attributSelect=-1;

void addJeu(Jeu j) { listJeu.prepend(j); }
void addAttribut(Attribut a) { listAttribut.prepend(a); }
void addCampagne(Campagne c) { listCampagne.prepend(c); }
void addPartie(Partie p) { listPartie.prepend(p); }

void updateJeu(QString prec, QString suiv)
{
    for(int i=0;i<listCampagne.size(); i++)
    {
        if(listCampagne[i].getTitreJeu()==prec) listCampagne[i].setTitreJeu(suiv);
    }
}

void updateAttribut(QString prec, QString suiv)
{
    for(int i=0;i<listJeu.size(); i++)
    {
        QVector<QString> l=listJeu[i].getListTitreAttribut();
        for (int j=0;j<l.size();j++)
        {
            if(l[j]==(prec)) listJeu[i].editAttribut(j,suiv);
        }

    }
}

extern void deleteJeu(Jeu j)
{
    QString titre=j.getTitre();
    QString path="data/Jeu/"+titre+".data";
    qDebug() << "titre:" << titre;
    qDebug() << "path:" << path;
    QDir d;
    d.remove(path);
}

extern void deleteAttribut(Attribut* a);
extern void deleteCampagne(Campagne* c);
extern void deletePartie(Partie* p);

void afficherJeu()
{
    for(int i=0; i<listJeu.size(); i++)
    {
        listJeu[i].afficher();
    }
}

void afficherAttribut()
{
    for(int i=0; i<listAttribut.size(); i++)
    {
        listAttribut[i].afficher();
    }
}

void afficherCampagne()
{
    for(int i=0; i<listCampagne.size(); i++)
    {
        listCampagne[i].afficher();
    }
}

void afficherPartie()
{
    for(int i=0; i<listPartie.size(); i++)
    {
        listPartie[i].afficher();
    }
}

void remplirListJeu()
{
    listJeu.clear();
    QString nom;
    QStringList list;
    QString path="data/Jeu";
    QDir dir(path);
    QFileInfoList files = dir.entryInfoList();
    foreach (QFileInfo file, files){
        if (!file.isDir() && file.fileName().contains(".data")){
            list=file.fileName().split(".data");
            nom=list.at(0);
            Jeu j(nom);
            listJeu.append(j);
        }
    }
}

void remplirListAttribut()
{
    listAttribut.clear();
    QString nom;
    QStringList list;
    QString path="data/Attribut";
    QDir dir(path);
    QFileInfoList files = dir.entryInfoList();
    foreach (QFileInfo file, files){
        if (!file.isDir()){
            list=file.fileName().split(".data");
            nom=list.at(0);
            Attribut a(nom);
            listAttribut.append(a);
            qDebug() << "FILE: " <<nom;
        }
    }
}

void remplirListCampagne()
{
    listCampagne.clear();
    QString nom;
    QStringList list;
    QString path="data/Campagne";
    QDir dir(path);
    QFileInfoList files = dir.entryInfoList();
    foreach (QFileInfo file, files){
        if (!file.isDir()){
            list=file.fileName().split(".data");
            nom=list.at(0);
            Campagne c(nom);
            listCampagne.append(c);
            qDebug() << "FILE: " <<nom;
        }
    }
}

void remplirListPartie()
{
    QString nom;
    QStringList list;
    QString path="data/Partie";
    QDir dir(path);
    QFileInfoList files = dir.entryInfoList();
    foreach (QFileInfo file, files){
        if (!file.isDir()){
            list=file.fileName().split(".data");
            nom=list.at(0);
            Partie p(nom);
            listPartie.append(p);
            qDebug() << "FILE: " <<nom;
        }
    }
}

int chercheNomJeu(QString nom)
{
    for(int i=0;i<listJeu.size();i++)
    {
        if(listJeu[i].getNom()==nom) return i;
    }
    return -1;
}
