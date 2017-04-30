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

#define ATTRIBUT 0
#define VALEUR 1
#define COMPETENCE 2
#define LISTE 3
#define INFORMATION 4

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
    ui->listInformationDisp->clear();
    ui->listInformationSelect->clear();


    remplirListAttribut();


    // ajout des attributs séléctionnés de l'objet sur le formulaire
    QVector<Attribut> listAtt = listJeu[jeuSelect].getListAttribut();
    for(int i=0;i<listAtt.size();i++)
    {
        Attribut a=listAtt[i];
        QListWidgetItem *newItem = new QListWidgetItem;
        // on met le titre de l'objet comme donnée
        newItem->setData(Qt::UserRole,a.getTitre());
        // le nom de l'objet comme text affiché
        newItem->setText(a.getNom());

        if(a.getType()==ATTRIBUT) ui->listAttributSelect->addItem(newItem);
        else if (a.getType()==VALEUR) ui->listValeurSelect->addItem(newItem);
        else if (a.getType()==COMPETENCE) ui->listCompetenceSelect->addItem(newItem);
        else if (a.getType()==INFORMATION) ui->listInformationSelect->addItem(newItem);
        qDebug() << "taille" << ui->listInformationSelect->count();
    }
    Load();
}

void formModifierJeu::Load()
{
    // ajout des attributs non séléctionnés dans la liste des attributs dispnibles
    bool test=true;
    for(int i=0;i<listAttribut.size();i++)
    {
        listAttribut[i].afficher();
        test=true;
        QString titre;
        if(listAttribut[i].getType()==ATTRIBUT)
        {
            for(int j=0;j<ui->listAttributSelect->count();j++)
            {
                titre=ui->listAttributSelect->item(j)->data(Qt::UserRole).toString();
                // teste si l'attribut regardé de la liste est déja selectionné
                if(titre==listAttribut[i].getTitre())
                {
                    test=false;
                    break;
                }
            }
        }
        else if(listAttribut[i].getType()==VALEUR)
        {
            for(int j=0;j<ui->listValeurSelect->count();j++)
            {
                titre=ui->listValeurSelect->item(j)->data(Qt::UserRole).toString();
                // teste si l'attribut regardé de la liste est déja selectionné
                if(titre==listAttribut[i].getTitre())
                {
                    test=false;
                    break;
                }
            }
        }
        else if(listAttribut[i].getType()==COMPETENCE)
        {
            for(int j=0;j<ui->listCompetenceSelect->count();j++)
            {
                titre=ui->listCompetenceSelect->item(j)->data(Qt::UserRole).toString();
                // teste si l'attribut regardé de la liste est déja selectionné
                if(titre==listAttribut[i].getTitre())
                {
                    test=false;
                    break;
                }
            }
        }
        else if(listAttribut[i].getType()==INFORMATION)
        {
            for(int j=0;j<ui->listInformationSelect->count();j++)
            {
                titre=ui->listInformationSelect->item(j)->data(Qt::UserRole).toString();
                // teste si l'attribut regardé de la liste est déja selectionné
                if(titre==listAttribut[i].getTitre())
                {
                    test=false;
                    break;
                }
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
            else if(listAttribut[i].getType()==4)ui->listInformationDisp->addItem(newItem);
        }
    }
    qDebug() << "fin";
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
    ui->listInformationDisp->clear();

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
    for(int i=0;i<ui->listInformationSelect->count();i++)
    {
        QString titre=ui->listInformationSelect->item(i)->data(Qt::UserRole).toString();
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
    else if(ui->listInformationDisp->currentItem()!=NULL)
    {
        QListWidgetItem* item = ui->listInformationDisp->currentItem();
        QListWidgetItem *newItem = new QListWidgetItem;
        newItem->setData(Qt::UserRole,item->data(Qt::UserRole));
        newItem->setText(item->text());
        ui->listInformationSelect->addItem(newItem);
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
    else if(ui->listInformationSelect->currentItem()!=NULL)
    {
        QListWidgetItem* item = ui->listInformationSelect->currentItem();
        QListWidgetItem *newItem = new QListWidgetItem;
        newItem->setData(Qt::UserRole,item->data(Qt::UserRole));
        newItem->setText(item->text());
        ui->listInformationDisp->addItem(newItem);
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
    ui->listInformationSelect->clearSelection();
    ui->listInformationDisp->clearSelection();
}

void formModifierJeu::on_listAttributDisp_itemSelectionChanged()
{
    ui->listAttributSelect->clearSelection();
    ui->listValeurDisp->clearSelection();
    ui->listCompetenceDisp->clearSelection();
    ui->listValeurSelect->clearSelection();
    ui->listCompetenceSelect->clearSelection();
    ui->listInformationSelect->clearSelection();
    ui->listInformationDisp->clearSelection();
}

void formModifierJeu::on_listValeurSelect_itemSelectionChanged()
{
    ui->listAttributDisp->clearSelection();
    ui->listValeurDisp->clearSelection();
    ui->listCompetenceDisp->clearSelection();
    ui->listAttributSelect->clearSelection();
    ui->listCompetenceSelect->clearSelection();
    ui->listInformationSelect->clearSelection();
    ui->listInformationDisp->clearSelection();
}

void formModifierJeu::on_listValeurDisp_itemSelectionChanged()
{
    ui->listAttributDisp->clearSelection();
    ui->listAttributSelect->clearSelection();
    ui->listCompetenceDisp->clearSelection();
    ui->listValeurSelect->clearSelection();
    ui->listCompetenceSelect->clearSelection();
    ui->listInformationSelect->clearSelection();
    ui->listInformationDisp->clearSelection();
}

void formModifierJeu::on_listCompetenceSelect_itemSelectionChanged()
{
    ui->listAttributDisp->clearSelection();
    ui->listValeurDisp->clearSelection();
    ui->listCompetenceDisp->clearSelection();
    ui->listValeurSelect->clearSelection();
    ui->listAttributSelect->clearSelection();
    ui->listInformationSelect->clearSelection();
    ui->listInformationDisp->clearSelection();
}

void formModifierJeu::on_listCompetenceDisp_itemSelectionChanged()
{
    ui->listAttributDisp->clearSelection();
    ui->listValeurDisp->clearSelection();
    ui->listAttributSelect->clearSelection();
    ui->listValeurSelect->clearSelection();
    ui->listCompetenceSelect->clearSelection();
    ui->listInformationSelect->clearSelection();
    ui->listInformationDisp->clearSelection();
}

void formModifierJeu::on_listInformationSelect_itemSelectionChanged()
{
    ui->listAttributDisp->clearSelection();
    ui->listValeurDisp->clearSelection();
    ui->listAttributSelect->clearSelection();
    ui->listValeurSelect->clearSelection();
    ui->listCompetenceSelect->clearSelection();
    ui->listCompetenceDisp->clearSelection();
    ui->listCompetenceSelect->clearSelection();
}
