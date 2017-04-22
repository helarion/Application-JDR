#include <qDebug>
#include <QFile>
#include <QFileInfo>
#include <QFileDialog>
#include <QPixMap>
#include <QMessageBox>

#include "fenetre/formModifierJeu.h"
#include "ui_formModifierJeu.h"
#include "fenetre/formNouveauAttribut.h"

#include "BD/collections.h"

formModifierJeu::formModifierJeu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formModifierJeu)
{
    ui->setupUi(this);
    // ajout des informations de l'objet sur le formulaire
    remplirListAttribut();
    ui->nomJeu->setText(listJeu[jeuSelect].getNom());
    ui->theme->setText(listJeu[jeuSelect].getTheme());
    ui->listAttributDisp->clear();
    ui->listAttributSelect->clear();
    bool test=true;
    // ajout des attributs séléctionnés de l'objet sur le formulaire
    for(int i=0;i<listJeu[jeuSelect].getListAttribut().size();i++)
    {
        QListWidgetItem *newItem = new QListWidgetItem;
        // on met le titre de l'objet comme donnée
        newItem->setData(Qt::UserRole,listJeu[jeuSelect].getListAttribut()[i].getTitre());
        // le nom de l'objet comme text affiché
        newItem->setText(listJeu[jeuSelect].getListAttribut()[i].getNom());
        ui->listAttributSelect->addItem(newItem);
    }

    // ajout des attributs non séléctionnés dans la liste des attributs dispnibles
    for(int i=0;i<listAttribut.size();i++)
    {
        test=true;
        for(int j=0;i<ui->listAttributSelect->count();j++)
        {
            // teste si l'attribut regardé de la liste est déja selectionné
            if(ui->listAttributSelect->item(j)->data(Qt::UserRole).toString()==listAttribut[i].getTitre())
            {
                test=false;
                break;
            }
        }
        if(test) // si l'attribut regardé n'est pas déja selectionné on l'ajoute dans la liste des disponibles
        {
            QListWidgetItem *newItem = new QListWidgetItem;
            // on met le titre de l'objet comme donnée
            newItem->setData(Qt::UserRole,listAttribut[i].getTitre());
            // le nom de l'objet comme text affiché
            newItem->setText(listAttribut[i].getNom());
            ui->listAttributDisp->addItem(newItem);
        }
    }
}

formModifierJeu::~formModifierJeu()
{
    delete ui;
}

void formModifierJeu::changementAttribut()
{
    bool test=true;
    remplirListAttribut();
    ui->listAttributDisp->clear();
    // ajout des attributs non séléctionnés dans la liste des attributs dispnibles
    for(int i=0;i<listAttribut.size();i++)
    {
        test=true;
        for(int j=0;i<ui->listAttributSelect->count();j++)
        {
            // teste si l'attribut regardé de la liste est déja selectionné
            if(ui->listAttributSelect->item(j)->data(Qt::UserRole).toString()==listAttribut[i].getTitre())
            {
                test=false;
                break;
            }
        }
        if(test) // si l'attribut regardé n'est pas déja selectionné on l'ajoute dans la liste des disponibles
        {
            QListWidgetItem *newItem = new QListWidgetItem;
            // on met le titre de l'objet comme donnée
            newItem->setData(Qt::UserRole,listAttribut[i].getTitre());
            // le nom de l'objet comme text affiché
            newItem->setText(listAttribut[i].getNom());
            ui->listAttributDisp->addItem(newItem);
        }
    }
}

void formModifierJeu::on_supprimerJeuButton_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Suppression", "Etes vous sur de vouloir supprimer ce jeu ?",
                                    QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
      deleteJeu(listJeu[jeuSelect]);
          emit listJeuChanged();
          this->close();
    }
}

void formModifierJeu::on_modifierJeuButton_clicked()
{
    // on récupère les données
    listJeu[jeuSelect].setNom(ui->nomJeu->text());
    QString fileName=ui->theme->text();
    if(listJeu[jeuSelect].getTheme()!=fileName) listJeu[jeuSelect].setTheme(fileName);
    // on liste les attributs selectionnés
    QVector<Attribut> list;
    for(int i=0;i<ui->listAttributSelect->count();i++)
    {
        QString titre=ui->listAttributSelect->item(i)->data(Qt::UserRole).toString();
        Attribut a(titre);
        list.append(a);
    }
    qDebug() << "taille=" << list.size();
    listJeu[jeuSelect].setListAttribut(list);
    listJeu[jeuSelect].Save();
    // on signale une modification
    emit listJeuChanged();
    // on ferme le formulaire
    this->close();
}

void formModifierJeu::on_parcourirButton_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),"",tr("Images (*.png *.bmp *.jpg)"));
    ui->theme->setText(fileName);
    ui->themeImage->setPixmap(fileName);
    ui->themeImage->adjustSize();
    ui->themeImage->setScaledContents(true);
}

void formModifierJeu::on_nouveauAttribut_clicked()
{
    formNouveauAttribut formNouveauAttribut;
    formNouveauAttribut.setModal(true);
    QObject::connect(&formNouveauAttribut, SIGNAL(listAttributChanged()),this, SLOT(changementAttribut()));
    formNouveauAttribut.exec();
}

void formModifierJeu::on_ajouterButton_clicked()
{
    // on vérifie qu'un item est selectionné
    if(ui->listAttributDisp->currentItem()!=NULL)
    {
        // on met l'attribut dispo seclectionné dans la liste des attributs select
        // et on le supprime de la liste dispo
        QListWidgetItem* item = ui->listAttributDisp->currentItem();
        QListWidgetItem *newItem = new QListWidgetItem;
        // on met le titre de l'objet comme donnée
        newItem->setData(Qt::UserRole,item->data(Qt::UserRole));
        // le nom de l'objet comme text affiché
        newItem->setText(item->text());
        ui->listAttributSelect->addItem(newItem);
        delete item;
    }
}

void formModifierJeu::on_supprimerButton_clicked()
{
    // on vérifie qu'un item est selectionné
    if(ui->listAttributSelect->currentItem()!=NULL)
    {
        // on met l'attribut dispo seclectionné dans la liste des attributs select
        // et on le supprime de la liste dispo
        QListWidgetItem* item = ui->listAttributSelect->currentItem();
        QListWidgetItem *newItem = new QListWidgetItem;
        // on met le titre de l'objet comme donnée
        newItem->setData(Qt::UserRole,item->data(Qt::UserRole));
        // le nom de l'objet comme text affiché
        newItem->setText(item->text());
        ui->listAttributDisp->addItem(newItem);
        delete item;
    }
}

void formModifierJeu::on_supprimerAttribut_clicked()
{
    ui->listAttributDisp->currentItem();
}
