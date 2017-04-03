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
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changementJeu()
{
    remplirListJeu();
    qDebug() << "je récupère le signal";
    ui->listJeu->clear();
    for(int i=0;i<listJeu.size();i++)
    {
     ui->listJeu->addItem(listJeu[i].getNom());
    }
}

void MainWindow::on_jeuButton_clicked()
{
   indexStack=1;
   ui->contentStack->setCurrentIndex(indexStack);
   remplirListJeu();
   ui->listJeu->clear();
   for(int i=0;i<listJeu.size();i++)
   {
    ui->listJeu->addItem(listJeu[i].getNom());
   }
}

void MainWindow::on_retourButton_clicked()
{
    indexStack--;
    ui->contentStack->setCurrentIndex(indexStack);
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
    ui->listJeu->selectedItems();
    indexStack=2;
    ui->contentStack->setCurrentIndex(indexStack);
    remplirListCampagne();
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
}

void MainWindow::on_listJeu_itemSelectionChanged()
{
    jeuSelect=chercheNomJeu(ui->listJeu->currentItem()->text());
    qDebug() << "jeu:";
    listJeu[jeuSelect].afficher();
    ui->themeJeu->setPixmap(QPixmap(listJeu[jeuSelect].getTheme()));
}
