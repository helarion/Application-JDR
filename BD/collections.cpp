#include <QDir>
#include <QDebug>

#include "collections.h"

QVector<Jeu> listJeu;
QVector<Attribut> listAttribut;
QVector<Campagne> listCampagne;
QVector<Partie> listPartie;
QVector<Personnage> listPersonnage;
QVector<Playlist> listPlaylist;

quint8 indexStack=0;

int jeuSelect=-1;
int campagneSelect=-1;
int partieSelect=-1;
int attributSelect=-1;
int playlistSelect=-1;

void addJeu(Jeu j) { listJeu.prepend(j); }
void addAttribut(Attribut a) { listAttribut.prepend(a); }
void addCampagne(Campagne c) { listCampagne.prepend(c); }
void addPartie(Partie p) { listPartie.prepend(p); }
void addPersonnage(Personnage p) { listPersonnage.prepend(p); }
void addPlaylist(Playlist p) { listPlaylist.prepend(p); }

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

extern void deleteJeu(int index)
{
    QString titre=listJeu[index].getTitre();
    QString path="data/Jeu/"+titre+".data";
    QDir d;
    d.remove(path);
    listJeu.remove(index);
}

extern void deleteAttribut(int index)
{
    QString titre=listAttribut[index].getTitre();
    QString path="data/Attribut/"+titre+".data";
    QDir d;
    d.remove(path);
    listAttribut.remove(index);
}

extern void deleteCampagne(int index)
{
    QString titre=listCampagne[index].getTitre();
    QString path="data/Campagne/"+titre+".data";
    QDir d;
    d.remove(path);
    listCampagne.remove(index);
}

extern void deletePartie(int index)
{
    QString titre=listPartie[index].getTitre();
    QString path="data/Partie/"+titre+".data";
    QDir d;
    d.remove(path);
    listPartie.remove(index);
}

extern void deletePersonnage(int index)
{
    QString titre=listPersonnage[index].getTitre();
    QString path="data/Personnage/"+titre+".data";
    QDir d;
    d.remove(path);
    listPersonnage.remove(index);
}

extern void deletePlaylist(int index)
{
    QString titre=listPlaylist[index].getTitre();
    QString path="data/Playlist/"+titre+".data";
    QDir d;
    d.remove(path);
    listPlaylist.remove(index);
}

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

void afficherPersonnage()
{
    for(int i=0; i<listPersonnage.size(); i++)
    {
        listPersonnage[i].afficher();
    }
}

void afficherPlaylist()
{
    for(int i=0; i<listPlaylist.size(); i++)
    {
        listPlaylist[i].afficher();
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
        }
    }
}

void remplirListPersonnage()
{
    QString nom;
    QStringList list;
    QString path="data/Personnage";
    QDir dir(path);
    QFileInfoList files = dir.entryInfoList();
    foreach (QFileInfo file, files){
        if (!file.isDir()){
            list=file.fileName().split(".data");
            nom=list.at(0);
            Personnage p(nom);
            listPersonnage.append(p);
        }
    }
}

void remplirListPlaylist()
{
    QString nom;
    QStringList list;
    QString path="data/Playlist";
    QDir dir(path);
    QFileInfoList files = dir.entryInfoList();
    foreach (QFileInfo file, files){
        if (!file.isDir()){
            list=file.fileName().split(".data");
            nom=list.at(0);
            Playlist p(nom);
            listPlaylist.append(p);
        }
    }
}

int chercheTitreJeu(QString titre)
{
    for(int i=0;i<listJeu.size();i++)
    {
        if(listJeu[i].getTitre()==titre) return i;
    }
    return -1;
}

int chercheTitreCampagne(QString titre)
{
    for(int i=0;i<listCampagne.size();i++)
    {
        if(listCampagne[i].getTitre()==titre) return i;
    }
    return -1;
}

int chercheTitreAttribut(QString titre)
{
    for(int i=0;i<listAttribut.size();i++)
    {
        if(listAttribut[i].getTitre()==titre) return i;
    }
    return -1;
}
