// Tools
#include <QtWidgets>
#include <QWidget>
#include <QDebug>
#include <QVector>
#include <QPixMap>

#include "mainwindow.h"
#include "ui_mainwindow.h"

// fenetres
#include "fenetre/formNouveauJeu.h"
#include "fenetre/formModifierJeu.h"
#include "fenetre/formNouvelleCampagne.h"
#include "fenetre/formModifierCampagne.h"
#include "fenetre/formNouveauAttribut.h"
#include "fenetre/formModifierAttribut.h"
#include "fenetre/formNouvellePartie.h"

// Database
#include "BD/jeu.h"
#include "BD/campagne.h"
#include "BD/partie.h"
#include "BD/attribut.h"
#include "BD/collections.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->contentStack->setCurrentIndex(indexStack);
    ui->retourButton->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changementJeu()
{
    remplirListJeu();
    qDebug() << "remplit le vector";
    ui->listJeu->clear();
    qDebug() << "vide la liste";
    for(int i=0;i<listJeu.size();i++)
    {
        qDebug() << "fait un item";
        QListWidgetItem *newItem = new QListWidgetItem;
        // on met le titre de l'objet comme donnée
        newItem->setData(Qt::UserRole,listJeu[i].getTitre());
        // le nom de l'objet comme text affiché
        newItem->setText(listJeu[i].getNom());
        ui->listJeu->addItem(newItem);
        qDebug() << "ajoute item";
    }
    qDebug() << "Fin";
}

void MainWindow::on_jeuButton_clicked()
{
   ui->retourButton->setVisible(true);
   indexStack=1;
   ui->contentStack->setCurrentIndex(indexStack);
   remplirListJeu();
   ui->listJeu->clear();
   for(int i=0;i<listJeu.size();i++)
   {
       QListWidgetItem *newItem = new QListWidgetItem;
       // on met le titre de l'objet comme donnée
       newItem->setData(Qt::UserRole,listJeu[i].getTitre());
       // le nom de l'objet comme text affiché
       newItem->setText(listJeu[i].getNom());
       ui->listJeu->addItem(newItem);
   }
}

void MainWindow::on_retourButton_clicked()
{
    indexStack--;
    ui->contentStack->setCurrentIndex(indexStack);
    if(indexStack==0) ui->retourButton->hide();
}

void MainWindow::on_nouveauJeuButton_clicked()
{
    formNouveauJeu formNouveauJeu;
    MainWindow w(this);
    QObject::connect(&formNouveauJeu, SIGNAL(listJeuChanged()),this, SLOT(changementJeu()));
    formNouveauJeu.setModal(true);
    formNouveauJeu.exec();
}

void MainWindow::on_modifierJeuButton_clicked()
{
    formModifierJeu formModifierJeu;
    QObject::connect(&formModifierJeu, SIGNAL(listJeuChanged()),this, SLOT(changementJeu()));
    formModifierJeu.setModal(true);
    formModifierJeu.exec();
}

void MainWindow::on_selectionnerJeuButton_clicked()
{
    indexStack=2;
    ui->contentStack->setCurrentIndex(indexStack);
    remplirListCampagne();
    ui->listCampagne->clear();
    for(int i=0;i<listCampagne.size();i++)
    {
        if(listCampagne[i].getJeu().compare(listJeu[jeuSelect]))
        {
            QListWidgetItem *newItem = new QListWidgetItem;
            // on met le titre de l'objet comme donnée
            newItem->setData(Qt::UserRole,listCampagne[i].getTitre());
            // le nom de l'objet comme text affiché
            newItem->setText(listCampagne[i].getNom());
            ui->listCampagne->addItem(newItem);
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
    indexStack=3;
    ui->contentStack->setCurrentIndex(indexStack);
    remplirListPartie();
    ui->listPartie->clear();
    for(int i=0;i<listPartie.size();i++)
    {
        if(listPartie[i].getCampagne().compare(listCampagne[campagneSelect]))
        {
            QListWidgetItem *newItem = new QListWidgetItem;
            // on met le titre de l'objet comme donnée
            newItem->setData(Qt::UserRole,listPartie[i].getTitre());
            // le nom de l'objet comme text affiché
            newItem->setText(listPartie[i].getNom());
            ui->listPartie->addItem(newItem);
        }
    }
}

void MainWindow::on_listJeu_itemSelectionChanged()
{
    jeuSelect=chercheTitreJeu(ui->listJeu->currentItem()->data(Qt::UserRole).toString());
    ui->themeJeu->setPixmap(QPixmap(listJeu[jeuSelect].getTheme()));
    ui->themeJeu->adjustSize();
    ui->themeJeu->setScaledContents(true);
}

void MainWindow::on_listCampagne_itemSelectionChanged()
{
    campagneSelect=chercheTitreCampagne(ui->listCampagne->currentItem()->data(Qt::UserRole).toString());
}

void MainWindow::on_ajouterPartieButton_clicked()
{
    formNouvellePartie formNouvellePartie;
    formNouvellePartie.setModal(true);
    formNouvellePartie.exec();
}

void MainWindow::on_modifierPartieButton_clicked()
{

}

void MainWindow::on_selectionnerPartieButton_clicked()
{

}
