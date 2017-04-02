#include <QDir>
#include <QDebug>

#include "collections.h"

QVector<Jeu> listJeu(100);
QVector<Attribut> listAttribut(1000);
QVector<Campagne> listCampagne(250);
QVector<Partie> listPartie(500);

quint8 indexStack=0;

Jeu* jeuSelect=NULL;
Campagne* campagneSelect=NULL;
Partie* partieSelect=NULL;
Attribut* attributSelect=NULL;

void addJeu(Jeu j) { listJeu.prepend(j); }
void addAttribut(Attribut a) { listAttribut.prepend(a); }
void addCampagne(Campagne c) { listCampagne.prepend(c); }
void addPartie(Partie p) { listPartie.prepend(p); }

extern void deleteJeu(Jeu* j)
{
    QString titre=j->getTitre();
    QString path="data/Jeu/"+titre+".data";
    qDebug() << "titre:" << titre;
    qDebug() << "path:" << path;
    QDir d;
    d.remove(path);
}

extern void deleteAttribut(Attribut* a);
extern void deleteCampagne(Campagne* c);
extern void deletePartie(Partie* p);

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
            qDebug() << "FILE: " <<nom;
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

Jeu * chercheNomJeu(QString nom)
{
    for(int i=0;i<listJeu.size();i++)
    {
        if(listJeu[i].getNom()==nom) return &listJeu[i];
    }
    return NULL;
}
