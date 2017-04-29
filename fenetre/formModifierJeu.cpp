#include <qDebug>
#include <QFile>
#include <QFileInfo>
#include <QFileDialog>
#include <QPixMap>
#include <QMessageBox>

#include "fenetre/formModifierJeu.h"
#include "ui_formModifierJeu.h"
#include "fenetre/formNouveauAttribut.h"
#include "fenetre/formModifierAttribut.h"

#include "BD/collections.h"

formModifierJeu::formModifierJeu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formModifierJeu)
{
    ui->setupUi(this);
    // ajout des informations de l'objet sur le formulaire
    ui->nomJeu->setText(listJeu[jeuSelect].getNom());
    ui->theme->setText(listJeu[jeuSelect].getTheme());
    ui->listAttributDisp->clear();
    ui->listAttributSelect->clear();
    ui->listCompetenceDisp->clear();
    ui->listCompetenceSelect->clear();
    ui->listValeurDisp->clear();
    ui->listValeurSelect->clear();

    remplirListAttribut();

    // ajout des attributs séléctionnés de l'objet sur le formulaire
    for(int i=0;i<listJeu[jeuSelect].getListAttribut().size();i++)
    {
        Attribut a=listJeu[jeuSelect].getListAttribut()[i];
        QListWidgetItem *newItem = new QListWidgetItem;
        // on met le titre de l'objet comme donnée
        newItem->setData(Qt::UserRole,a.getTitre());
        // le nom de l'objet comme text affiché
        newItem->setText(a.getNom());

        if(a.getType()==0) ui->listAttributSelect->addItem(newItem);
        else if (a.getType()==1) ui->listValeurSelect->addItem(newItem);
        else if (a.getType()==2) ui->listCompetenceSelect->addItem(newItem);
    }
    Load();
}

void formModifierJeu::Load()
{
    // ajout des attributs non séléctionnés dans la liste des attributs dispnibles
    bool test=true;
    for(int i=0;i<listAttribut.size();i++)
    {
        test=true;
        for(int j=0;j<ui->listAttributSelect->count();j++)
        {

            QString titre;
            if(listAttribut[i].getType()==0)
            {
                titre=ui->listAttributSelect->item(j)->data(Qt::UserRole).toString();
            }
            else if(listAttribut[i].getType()==1)
            {
                titre=ui->listAttributSelect->item(j)->data(Qt::UserRole).toString();
            }
            else if(listAttribut[i].getType()==2)
            {
                titre=ui->listCompetenceSelect->item(j)->data(Qt::UserRole).toString();
            }

            // teste si l'attribut regardé de la liste est déja selectionné
            if(titre==listAttribut[i].getTitre())
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
            if(listAttribut[i].getType()==0)ui->listAttributDisp->addItem(newItem);
            else if(listAttribut[i].getType()==1)ui->listValeurDisp->addItem(newItem);
            else if(listAttribut[i].getType()==2)ui->listCompetenceDisp->addItem(newItem);
        }
    }
    QPixmap p(listJeu[jeuSelect].getTheme());
    int w = ui->themeImage->width();
    int h = ui->themeImage->height();
    ui->themeImage->setPixmap(p.scaled(w,h,Qt::KeepAspectRatio));
}

formModifierJeu::~formModifierJeu()
{
    delete ui;
}

void formModifierJeu::changementAttribut()
{
    ui->listAttributDisp->clear();
    ui->listCompetenceDisp->clear();
    ui->listValeurDisp->clear();

    remplirListAttribut();

    Load();
}

void formModifierJeu::on_supprimerJeuButton_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Suppression", "Etes vous sur de vouloir supprimer ce jeu ?",
                                    QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
      deleteJeu(jeuSelect);
          emit listJeuChanged();
          this->close();
    }
}

void formModifierJeu::on_modifierJeuButton_clicked()
{
    // on récupère les données
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
    for(int i=0;i<ui->listValeurSelect->count();i++)
    {
        QString titre=ui->listValeurSelect->item(i)->data(Qt::UserRole).toString();
        Attribut a(titre);
        list.append(a);
    }
    for(int i=0;i<ui->listCompetenceSelect->count();i++)
    {
        QString titre=ui->listCompetenceSelect->item(i)->data(Qt::UserRole).toString();
        Attribut a(titre);
        list.append(a);
    }
    listJeu[jeuSelect].setListAttribut(list);
    listJeu[jeuSelect].setNom(ui->nomJeu->text());
    // on signale une modification
    emit listJeuChanged();
    // on ferme le formulaire
    this->close();
}

void formModifierJeu::on_parcourirButton_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),"",tr("Images (*.png *.bmp *.jpg)"));
    ui->theme->setText(fileName);

    QPixmap p(fileName);
    int w = ui->themeImage->width();
    int h = ui->themeImage->height();
    ui->themeImage->setPixmap(p.scaled(w,h,Qt::KeepAspectRatio));
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
    if(ui->listAttributDisp->currentItem()!=NULL)
    {
        // on vérifie qu'un item est selectionné
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
    else if(ui->listValeurDisp->currentItem()!=NULL)
    {
        QListWidgetItem* item = ui->listValeurDisp->currentItem();
        QListWidgetItem *newItem = new QListWidgetItem;
        newItem->setData(Qt::UserRole,item->data(Qt::UserRole));
        newItem->setText(item->text());
        ui->listValeurSelect->addItem(newItem);
        delete item;
    }
    else if(ui->listCompetenceDisp->currentItem()!=NULL)
    {
        QListWidgetItem* item = ui->listCompetenceDisp->currentItem();
        QListWidgetItem *newItem = new QListWidgetItem;
        newItem->setData(Qt::UserRole,item->data(Qt::UserRole));
        newItem->setText(item->text());
        ui->listCompetenceSelect->addItem(newItem);
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
    else if(ui->listValeurSelect->currentItem()!=NULL)
    {
        QListWidgetItem* item = ui->listValeurSelect->currentItem();
        QListWidgetItem *newItem = new QListWidgetItem;
        newItem->setData(Qt::UserRole,item->data(Qt::UserRole));
        newItem->setText(item->text());
        ui->listValeurDisp->addItem(newItem);
        delete item;
    }
    else if(ui->listCompetenceSelect->currentItem()!=NULL)
    {
        QListWidgetItem* item = ui->listCompetenceSelect->currentItem();
        QListWidgetItem *newItem = new QListWidgetItem;
        newItem->setData(Qt::UserRole,item->data(Qt::UserRole));
        newItem->setText(item->text());
        ui->listCompetenceDisp->addItem(newItem);
        delete item;
    }
}

void formModifierJeu::on_modifierAttribut_clicked()
{
    if(ui->listAttributDisp->currentItem()!=NULL)
    {
        attributSelect=chercheTitreAttribut(ui->listAttributDisp->currentItem()->data(Qt::UserRole).toString());
        formModifierAttribut formModifierAttribut;
        formModifierAttribut.setModal(true);
        QObject::connect(&formModifierAttribut, SIGNAL(listAttributChanged()),this, SLOT(changementAttribut()));
        formModifierAttribut.exec();
    }
}

void formModifierJeu::on_listAttributSelect_itemSelectionChanged()
{
    ui->listAttributDisp->clearSelection();
    ui->listValeurDisp->clearSelection();
    ui->listCompetenceDisp->clearSelection();
    ui->listValeurSelect->clearSelection();
    ui->listCompetenceSelect->clearSelection();
}

void formModifierJeu::on_listAttributDisp_itemSelectionChanged()
{
    ui->listAttributSelect->clearSelection();
    ui->listValeurDisp->clearSelection();
    ui->listCompetenceDisp->clearSelection();
    ui->listValeurSelect->clearSelection();
    ui->listCompetenceSelect->clearSelection();
}

void formModifierJeu::on_listValeurSelect_itemSelectionChanged()
{
    ui->listAttributDisp->clearSelection();
    ui->listValeurDisp->clearSelection();
    ui->listCompetenceDisp->clearSelection();
    ui->listAttributSelect->clearSelection();
    ui->listCompetenceSelect->clearSelection();
}

void formModifierJeu::on_listValeurDisp_itemSelectionChanged()
{
    ui->listAttributDisp->clearSelection();
    ui->listAttributSelect->clearSelection();
    ui->listCompetenceDisp->clearSelection();
    ui->listValeurSelect->clearSelection();
    ui->listCompetenceSelect->clearSelection();
}

void formModifierJeu::on_listCompetenceSelect_itemSelectionChanged()
{
    ui->listAttributDisp->clearSelection();
    ui->listValeurDisp->clearSelection();
    ui->listCompetenceDisp->clearSelection();
    ui->listValeurSelect->clearSelection();
    ui->listAttributSelect->clearSelection();
}

void formModifierJeu::on_listCompetenceDisp_itemSelectionChanged()
{
    ui->listAttributDisp->clearSelection();
    ui->listValeurDisp->clearSelection();
    ui->listAttributSelect->clearSelection();
    ui->listValeurSelect->clearSelection();
    ui->listCompetenceSelect->clearSelection();
}
