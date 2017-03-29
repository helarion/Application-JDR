// Tools
#include <QtWidgets>
#include <QWidget>
#include <QDebug>
#include <QVector>

#include "headers/mainwindow.h"
#include "ui_mainwindow.h"

// fenetres
#include "headers/fenetre/formNouveauJeu.h"
#include "headers/fenetre/formModifierJeu.h"
#include "headers/fenetre/formNouvelleCampagne.h"
#include "headers/fenetre/formModifierCampagne.h"
#include "headers/fenetre/formNouveauAttribut.h"
#include "headers/fenetre/formModifierAttribut.h"

// Database
#include "headers/BD/jeu.h"
#include "headers/BD/campagne.h"
#include "headers/BD/partie.h"
#include "headers/BD/attribut.h"

int index=0;
QVector<Jeu> listJeu(100);
QVector<Campagne> listCampagne(100);
QVector<Partie> listPartie(100);
QVector<Attribut> listAttribut(100);

Jeu* jeu;
Campagne* campagne;
Partie* partie;

/*Jeu chercheNom(QString nom)
{
    for(int i=0;i<listJeu.size();i++)
    {
        if(listJeu[i].getNom()==nom) return listJeu[i];
    }
    return NULL;
}*/

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->contentStack->setCurrentIndex(index);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_jeuButton_clicked()
{
   index=1;
   ui->contentStack->setCurrentIndex(index);
   QString nom;
   QStringList list;
   QString path="data/Jeu";
   QDir dir(path);
   QFileInfoList files = dir.entryInfoList();
   foreach (QFileInfo file, files){
       if (!file.isDir()){
           list=file.fileName().split(".data");
           nom=list.at(0);
           Jeu j(nom);
           listJeu.append(j);
           ui->listJeu->addItem(nom);
           qDebug() << "FILE: " <<nom;
       }
   }
   path="data/Attribut";
   dir.setPath(path);
   files = dir.entryInfoList();
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

void MainWindow::on_retourButton_clicked()
{
    index--;
    ui->contentStack->setCurrentIndex(index);
}

void MainWindow::on_nouveauJeuButton_clicked()
{
    formNouveauJeu formNouveauJeu;
    formNouveauJeu.setModal(true);
    formNouveauJeu.exec();
}

void MainWindow::on_modifierJeuButton_clicked()
{
    formModifierJeu formModifierJeu;
    formModifierJeu.setModal(true);
    formModifierJeu.exec();
}

void MainWindow::on_selectionnerJeuButton_clicked()
{
    ui->listJeu->selectedItems();
    index=2;
    ui->contentStack->setCurrentIndex(index);
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
            ui->listCampagne->addItem(nom);
            qDebug() << "FILE: " <<nom;
        }
    }
}

void MainWindow::on_nouveauCampagneButton_clicked()
{
    formNouvelleCampagne formNouvelleCampagne;
    formNouvelleCampagne.setModal(true);
    formNouvelleCampagne.exec();
}

void MainWindow::on_modifierCampagneButton_clicked()
{
    formModifierCampagne formModifierCampagne;
    formModifierCampagne.setModal(true);
    formModifierCampagne.exec();
}

void MainWindow::on_selectionnerCampagneButton_clicked()
{
    index=3;
    ui->contentStack->setCurrentIndex(index);
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
            ui->listCampagne->addItem(nom);
            qDebug() << "FILE: " <<nom;
        }
    }
}
