#include <QDir>
#include <QDebug>

#include "collections.h"

QVector<Jeu> listJeu(1000);
QVector<Attribut> listAttribut(10000);
QVector<Campagne> listCampagne(5000);
QVector<Partie> listPartie(10000);
QVector<Personnage> listPersonnage(50000);
QVector<Playlist> listPlaylist(10000);

quint8 indexStack=0;

int jeuSelect=-1;
int campagneSelect=-1;
int partieSelect=-1;
int attributSelect=-1;
int playlistSelect=-1;
int personnageSelect=-1;

void addJeu(Jeu j) { listJeu.prepend(j); }
void addAttribut(Attribut a) { listAttribut.prepend(a); }
void addCampagne(Campagne c) { listCampagne.prepend(c); }
void addPartie(Partie p) { listPartie.prepend(p); }
void addPersonnage(Personnage p) { listPersonnage.prepend(p); }
void addPlaylist(Playlist p) { listPlaylist.prepend(p); }

void updateJeu(Jeu prec, Jeu suiv)
{
    for(int i=0;i<listCampagne.size(); i++)
    {
        qDebug() << "Jeu:"<<listCampagne[i].getJeu().getNom();
        qDebug() << "titreJeu:"<<listCampagne[i].getJeu().getTitre();
        if(listCampagne[i].getJeu().getTitre()==prec.getTitre())
        {
            Campagne precC=listCampagne[i];
            Campagne c=listCampagne[i];
            c.setJeu(suiv);
            deleteCampagne(i);
            c.Save();
            updateCampagne(precC,c);
        }
    }
    for(int i=0;i<listPlaylist.size(); i++)
    {
        if(listPlaylist[i].getTitreJeu()==prec.getTitre())
        {
            Playlist p=listPlaylist[i];
            p.setTitreJeu(suiv.getTitre());
            deletePlaylist(i);
            p.Save();
        }
    }
}

void updateAttribut(Attribut prec, Attribut suiv)
{
    for(int i=0;i<listJeu.size(); i++)
    {
        QVector<QString> l=listJeu[i].getListTitreAttribut();
        for (int j=0;j<l.size();j++)
        {
            if(l[j]==(prec).getTitre())
            {
                listJeu[i].editAttribut(j,suiv.getTitre());
                listJeu[i].Save();
            }
        }
    }
}

void updateCampagne(Campagne prec, Campagne suiv)
{

    for(int i=0;i<listPartie.size(); i++)
    {
        qDebug() << "partie i";
        listPartie[i].afficher();
        qDebug() << "campagne prec" << prec.getTitre();
        if(listPartie[i].getCampagne().getTitre()==prec.getTitre())
        {        
            Partie precP=listPartie[i];
            Partie p=listPartie[i];
            deletePartie(i);

            p.setCampagne(suiv);
            p.Save();
            updatePartie(precP,p);
         }
    }
}

void updatePartie(Partie prec, Partie suiv)
{
    for(int i=0;i<listPersonnage.size(); i++)
    {
        if(listPersonnage[i].getPartie().getTitre()==prec.getTitre())
        {
            Personnage p=listPersonnage[i];
            p.setPartie(suiv);
            deletePersonnage(i);
            p.Save();
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
    Partie p = listPartie[index];
    p.afficher();
    QString c=p.getCampagne().getTitre();
    QString titre=p.getTitre();
    QString path="data/Partie/"+c+"_"+titre+".data";

    QDir d;
    d.remove(path);
    listPartie.remove(index);
}

extern void deletePersonnage(int index)
{
    QString titre=listPersonnage[index].getTitre();
    QString titrePartie=listPersonnage[index].getTitrePartie();

    QString path="data/Personnage/"+titrePartie+"_"+titre+".data";
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
        if (!file.isDir() && file.fileName().contains(".data")){
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
        if (!file.isDir() && file.fileName().contains(".data")){
            list=file.fileName().split(".data");
            nom=list.at(0);
            Campagne c(nom);
            listCampagne.append(c);
        }
    }
}

void remplirListPartie()
{
    listPartie.clear();
    QString nom;
    QStringList list;
    QString path="data/Partie";
    QDir dir(path);
    QFileInfoList files = dir.entryInfoList();
    foreach (QFileInfo file, files){
        if (!file.isDir() && file.fileName().contains(".data")){
            list=file.fileName().split(".data");
            nom=list.at(0);
            Partie p(nom);
            listPartie.append(p);
        }
    }
}

void remplirListPersonnage()
{
    listPersonnage.clear();
    QString nom;
    QStringList list;
    QString path="data/Personnage";
    QDir dir(path);
    QFileInfoList files = dir.entryInfoList();
    foreach (QFileInfo file, files){
        if (!file.isDir() && file.fileName().contains(".data")){
            list=file.fileName().split(".data");
            nom=list.at(0);
            Personnage p(nom);
            listPersonnage.append(p);
        }
    }
}

void remplirListPlaylist()
{
    listPlaylist.clear();
    QString nom;
    QStringList list;
    QString path="data/Playlist";
    QDir dir(path);
    QFileInfoList files = dir.entryInfoList();
    foreach (QFileInfo file, files)
    {
        if (!file.isDir() && file.fileName().contains(".data")){
            list=file.fileName().split(".data");
            nom=list.at(0);
            Playlist p(nom);
            listPlaylist.append(p);
        }
    }
}

int chercheTitrePartie(QString titre)
{
    for(int i=0;i<listPartie.size();i++)
    {
        if(listPartie[i].getTitre()==titre) return i;
    }
    return -1;
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

int chercheTitrePersonnage(QString titre)
{
    for(int i=0;i<listPersonnage.size();i++)
    {
        if(listPersonnage[i].getTitre()==titre) return i;
    }
    return -1;
}
