#include <QFileDialog>

#include "fenetre/formNouveauJeu.h"
#include "ui_formNouveauJeu.h"
#include "fenetre/formNouveauAttribut.h"
#include "fenetre/formModifierAttribut.h"
#include "mainwindow.h"

#include "BD/jeu.h"
#include "BD/attribut.h"
#include "BD/collections.h"

formNouveauJeu::formNouveauJeu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formNouveauJeu)
{
    ui->setupUi(this);
    remplirListAttribut();
    ui->listAttributDisp->clear();
    ui->listAttributSelect->clear();

    for(int i=0;i<listAttribut.size();i++)
    {
        QListWidgetItem *newItem = new QListWidgetItem;
        newItem->setData(Qt::UserRole,i); // on met l'index de l'objet dans la liste comme donnée
        newItem->setText(listAttribut[i].getNom()); // le nom de l'objet comme text affiché
        if(listAttribut[i].getPreset()) ui->listAttributSelect->addItem(newItem);
        else ui->listAttributDisp->addItem(newItem);
    }
}

formNouveauJeu::~formNouveauJeu()
{
    delete ui;
}

void formNouveauJeu::changementAttribut()
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


void formNouveauJeu::on_CreerJeu_clicked()
{
    // récupération des valeurs du formulaire
    QString nom = ui->nomJeu->text();
    QString theme = ui->theme->text();
    // récupération des attributs selectionnés
    QVector<Attribut> list;
    for(int i=0;i<ui->listAttributSelect->count();i++)
    {
        int index=ui->listAttributSelect->item(i)->data(Qt::UserRole).toInt();
        list.append(listAttribut[index]);
    }
    Jeu j(nom,theme,list);
    j.Save();
    emit listJeuChanged();
    this->close();
}

void formNouveauJeu::on_parcourirButton_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),"",tr("Images (*.png *.bmp *.jpg)"));
    ui->theme->setText(fileName);
    ui->themeImage->setPixmap(fileName);
    ui->themeImage->adjustSize();
    ui->themeImage->setScaledContents(true);
}

void formNouveauJeu::on_nouveauAttributButton_clicked()
{
    formNouveauAttribut formNouveauAttribut;
    formNouveauAttribut.setModal(true);
    QObject::connect(&formNouveauAttribut, SIGNAL(listAttributChanged()),this, SLOT(changementAttribut()));
    formNouveauAttribut.exec();
}

void formNouveauJeu::on_ajouterButton_clicked()
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

void formNouveauJeu::on_retirerButton_clicked()
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

void formNouveauJeu::on_supprimerAttributButton_clicked()
{

}

void formNouveauJeu::on_modifierAttributButton_clicked()
{
    formModifierAttribut formModifierAttribut;
    formModifierAttribut.setModal(true);
    formModifierAttribut.exec();
}
