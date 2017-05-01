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
#include "fenetre/formModifierPartie.h"
#include "fenetre/formLecteurMusique.h"
#include "fenetre/formNouveauPersonnage.h"
#include "fenetre/formModifierPersonnage.h"

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
    ui->playlistButton->hide();
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

void MainWindow::changementCampagne()
{
    remplirListCampagne();
    qDebug() << "remplit le vector";
    ui->listCampagne->clear();
    qDebug() << "vide la liste";
    for(int i=0;i<listCampagne.size();i++)
    {
        if(listCampagne[i].getJeu().compare(listJeu[jeuSelect]))
        {
            qDebug() << "fait un item";
            QListWidgetItem *newItem = new QListWidgetItem;
            // on met le titre de l'objet comme donnée
            newItem->setData(Qt::UserRole,listCampagne[i].getTitre());
            // le nom de l'objet comme text affiché
            newItem->setText(listCampagne[i].getNom());
            ui->listCampagne->addItem(newItem);
            qDebug() << "ajoute item";
        }
    }
    qDebug() << "Fin";
}

void MainWindow::changementPartie()
{
    remplirListPartie();
    ui->listPartie->clear();
    qDebug() << "vide la liste";
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

void MainWindow::on_retourButton_clicked()
{
    indexStack--;
    ui->contentStack->setCurrentIndex(indexStack);
    if(indexStack==0)
    {
        ui->retourButton->hide();
        ui->playlistButton->hide();
    }
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
    if(ui->listJeu->currentItem()!=NULL)
    {
        formModifierJeu formModifierJeu;
        QObject::connect(&formModifierJeu, SIGNAL(listJeuChanged()),this, SLOT(changementJeu()));
        formModifierJeu.setModal(true);
        formModifierJeu.exec();
    }
}

void MainWindow::on_selectionnerJeuButton_clicked()
{
    if(ui->listJeu->currentItem()!=NULL)
    {
        ui->retourButton->setVisible(true);
        ui->playlistButton->setVisible(true);
        indexStack++;
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
}

void MainWindow::on_nouveauCampagneButton_clicked()
{
    formNouvelleCampagne formNouvelleCampagne;
    formNouvelleCampagne.setModal(true);
    QObject::connect(&formNouvelleCampagne, SIGNAL(listCampagneChanged()),this, SLOT(changementCampagne()));
    formNouvelleCampagne.exec();
}

void MainWindow::on_modifierCampagneButton_clicked()
{
    if(ui->listCampagne->currentItem()!=NULL)
    {
        formModifierCampagne formModifierCampagne;
        formModifierCampagne.setModal(true);
        QObject::connect(&formModifierCampagne, SIGNAL(listCampagneChanged()),this, SLOT(changementCampagne()));
        formModifierCampagne.exec();
    }
}

void MainWindow::on_selectionnerCampagneButton_clicked()
{
    if(ui->listCampagne->currentItem()!=NULL)
    {
        ui->listPartie->clear();
        indexStack++;
        ui->contentStack->setCurrentIndex(indexStack);
        remplirListPartie();
        for(int i=0;i<listPartie.size();i++)
        {
            if(listPartie[i].getCampagne().compare(listCampagne[campagneSelect]))
            {
                QListWidgetItem *newItem = new QListWidgetItem;
                // on met l'index de liste comme donnée
                newItem->setData(Qt::UserRole,i);
                // le nom de l'objet comme text affiché
                newItem->setText(listPartie[i].getNom());
                ui->listPartie->addItem(newItem);
            }
        }
    }
}

void MainWindow::on_listJeu_itemSelectionChanged()
{
    jeuSelect=chercheTitreJeu(ui->listJeu->currentItem()->data(Qt::UserRole).toString());
    QPixmap p(listJeu[jeuSelect].getTheme());
    int w = ui->themeJeu->width();
    int h = ui->themeJeu->height();
    ui->themeJeu->setPixmap(p.scaled(w,h,Qt::KeepAspectRatio));
}

void MainWindow::on_listCampagne_itemSelectionChanged()
{
    campagneSelect=chercheTitreCampagne(ui->listCampagne->currentItem()->data(Qt::UserRole).toString());
}

void MainWindow::on_ajouterPartieButton_clicked()
{
    formNouvellePartie formNouvellePartie;
    formNouvellePartie.setModal(true);
    QObject::connect(&formNouvellePartie, SIGNAL(listPartieChanged()),this, SLOT(changementPartie()));
    formNouvellePartie.exec();
}

void MainWindow::on_modifierPartieButton_clicked()
{
    if(ui->listPartie->currentItem()!=NULL)
    {
        int index=ui->listPartie->currentItem()->data(Qt::UserRole).toInt();
        partieSelect=index;
        listPartie[index].afficher();
        formModifierPartie formModifierPartie;
        QObject::connect(&formModifierPartie, SIGNAL(listPartieChanged()),this, SLOT(changementPartie()));
        formModifierPartie.setModal(true);
        formModifierPartie.exec();
    }
}

void MainWindow::on_selectionnerPartieButton_clicked()
{
    if(ui->listPartie->currentItem()!=NULL)
    {
        partieSelect=ui->listPartie->currentItem()->data(Qt::UserRole).toInt();
        ui->listPersonnage->clear();
        indexStack++;
        ui->contentStack->setCurrentIndex(indexStack);
        remplirListPersonnage();       
        ui->resumeEdit->setText(listPartie[partieSelect].getResume());
        for(int i=0;i<listPersonnage.size();i++)
        {
            if(listPersonnage[i].getPartie().compare(listPartie[partieSelect]))
            {
                QListWidgetItem *newItem = new QListWidgetItem;
                // on met l'index de liste comme donnée
                newItem->setData(Qt::UserRole,i);
                // le nom de l'objet comme text affiché
                newItem->setText(listPersonnage[i].getNom()+listPersonnage[i].getPrenom());
                ui->listPersonnage->addItem(newItem);
            }
        }
    }
}

void MainWindow::changementPersonnage()
{
    remplirListPersonnage();
    ui->listPersonnage->clear();
    for(int i=0;i<listPersonnage.size();i++)
    {
        if(listPersonnage[i].getPartie().compare(listPartie[partieSelect]))
        {
            QListWidgetItem *newItem = new QListWidgetItem;
            // on met le titre de l'objet comme donnée
            newItem->setData(Qt::UserRole,listPersonnage[i].getTitre());
            // le nom de l'objet comme text affiché
            newItem->setText(listPersonnage[i].getNom()+listPersonnage[i].getPrenom());
            ui->listPersonnage->addItem(newItem);
        }
    }
}

void MainWindow::on_listJeu_itemDoubleClicked(QListWidgetItem *item)
{
    on_selectionnerJeuButton_clicked();
}

void MainWindow::on_listCampagne_itemDoubleClicked(QListWidgetItem *item)
{
    on_selectionnerCampagneButton_clicked();
}

void MainWindow::on_listPartie_itemDoubleClicked(QListWidgetItem *item)
{
    on_selectionnerPartieButton_clicked();
}

void MainWindow::on_ajouterPersonnageButton_clicked()
{
    formNouveauPersonnage formNouveauPersonnage;
    formNouveauPersonnage.setModal(true);
    QObject::connect(&formNouveauPersonnage, SIGNAL(listPersonnageChanged()),this, SLOT(changementPersonnage()));
    formNouveauPersonnage.exec();
}

void MainWindow::on_modifierPersonnageButton_clicked()
{
    if(ui->listPersonnage->currentItem()!=NULL)
    {
        personnageSelect=ui->listPersonnage->currentItem()->data(Qt::UserRole).toInt();
        formModifierPersonnage formModifierPersonnage;
        formModifierPersonnage.setModal(true);
        QObject::connect(&formModifierPersonnage, SIGNAL(listPersonnageChanged()),this, SLOT(changementPersonnage()));
        formModifierPersonnage.exec();
    }
}

void MainWindow::on_listPersonnage_itemDoubleClicked(QListWidgetItem *item)
{
    on_modifierPersonnageButton_clicked();
}

void MainWindow::on_playlistButton_clicked()
{
    formLecteurMusique *form = new formLecteurMusique();
    form->setAttribute(Qt::WA_DeleteOnClose);
    form->setModal(Qt::NonModal);
    form->show();
}
