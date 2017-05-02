#include <QFileDialog>
#include <QDebug>

#include "fenetre/formNouveauJeu.h"
#include "ui_formNouveauJeu.h"
#include "fenetre/formNouveauAttribut.h"
#include "fenetre/formModifierAttribut.h"
#include "mainwindow.h"

#include "BD/jeu.h"
#include "BD/attribut.h"
#include "BD/collections.h"

#define ATTRIBUT 0
#define VALEUR 1
#define COMPETENCE 2
#define INFORMATION 3

formNouveauJeu::formNouveauJeu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formNouveauJeu)
{
    ui->setupUi(this);

    ui->listAttributDisp->clear();
    ui->listAttributSelect->clear();
    ui->listCompetenceDisp->clear();
    ui->listCompetenceSelect->clear();
    ui->listValeurDisp->clear();
    ui->listValeurSelect->clear();
    ui->listInformationDisp->clear();
    ui->listInformationSelect->clear();

    remplirListAttribut();

    Load();
}

formNouveauJeu::~formNouveauJeu()
{
    delete ui;
}

void formNouveauJeu::Load()
{
    // ajout des attributs non séléctionnés dans la liste des attributs dispnibles
    for(int i=0;i<listAttribut.size();i++)
    {
        QListWidgetItem *newItem = new QListWidgetItem;
        // on met le titre de l'objet comme donnée
        newItem->setData(Qt::UserRole,listAttribut[i].getTitre());
        // le nom de l'objet comme text affiché
        newItem->setText(listAttribut[i].getNom());
        if(listAttribut[i].getType()==ATTRIBUT)
        {
            if(listAttribut[i].getPreset()) ui->listAttributSelect->addItem(newItem);
            else ui->listAttributDisp->addItem(newItem);
        }
        else if(listAttribut[i].getType()==VALEUR)
        {
            if(listAttribut[i].getPreset()) ui->listValeurSelect->addItem(newItem);
            else ui->listValeurDisp->addItem(newItem);
        }
        else if(listAttribut[i].getType()==COMPETENCE)
        {
            if(listAttribut[i].getPreset()) ui->listCompetenceSelect->addItem(newItem);
            else ui->listCompetenceDisp->addItem(newItem);
        }
        else if(listAttribut[i].getType()==INFORMATION)
        {
            if(listAttribut[i].getPreset()) ui->listInformationSelect->addItem(newItem);
            else ui->listInformationDisp->addItem(newItem);
        }
    }
}

void formNouveauJeu::changementAttribut()
{
    ui->listAttributDisp->clear();
    ui->listCompetenceDisp->clear();
    ui->listValeurDisp->clear();
    ui->listInformationDisp->clear();

    remplirListAttribut();

    Load();
}

void formNouveauJeu::on_parcourirButton_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),"",tr("Images (*.png *.bmp *.jpg)"));
    ui->theme->setText(fileName);

    QPixmap p(fileName);
    int w = ui->themeImage->width();
    int h = ui->themeImage->height();
    ui->themeImage->setPixmap(p.scaled(w,h,Qt::KeepAspectRatio));
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

void formNouveauJeu::on_modifierAttributButton_clicked()
{
    formModifierAttribut formModifierAttribut;
    formModifierAttribut.setModal(true);
    formModifierAttribut.exec();
}

void formNouveauJeu::on_listAttributSelect_itemSelectionChanged()
{
    ui->listAttributDisp->clearSelection();
    ui->listValeurDisp->clearSelection();
    ui->listCompetenceDisp->clearSelection();
    ui->listValeurSelect->clearSelection();
    ui->listCompetenceSelect->clearSelection();
    ui->listInformationSelect->clearSelection();
    ui->listInformationDisp->clearSelection();
}

void formNouveauJeu::on_listAttributDisp_itemSelectionChanged()
{
    ui->listAttributSelect->clearSelection();
    ui->listValeurDisp->clearSelection();
    ui->listCompetenceDisp->clearSelection();
    ui->listValeurSelect->clearSelection();
    ui->listCompetenceSelect->clearSelection();
    ui->listInformationSelect->clearSelection();
    ui->listInformationDisp->clearSelection();
}

void formNouveauJeu::on_listValeurSelect_itemSelectionChanged()
{
    ui->listAttributDisp->clearSelection();
    ui->listValeurDisp->clearSelection();
    ui->listCompetenceDisp->clearSelection();
    ui->listAttributSelect->clearSelection();
    ui->listCompetenceSelect->clearSelection();
    ui->listInformationSelect->clearSelection();
    ui->listInformationDisp->clearSelection();
}

void formNouveauJeu::on_listValeurDisp_itemSelectionChanged()
{
    ui->listAttributDisp->clearSelection();
    ui->listAttributSelect->clearSelection();
    ui->listCompetenceDisp->clearSelection();
    ui->listValeurSelect->clearSelection();
    ui->listCompetenceSelect->clearSelection();
    ui->listInformationSelect->clearSelection();
    ui->listInformationDisp->clearSelection();
}

void formNouveauJeu::on_listCompetenceSelect_itemSelectionChanged()
{
    ui->listAttributDisp->clearSelection();
    ui->listValeurDisp->clearSelection();
    ui->listCompetenceDisp->clearSelection();
    ui->listValeurSelect->clearSelection();
    ui->listAttributSelect->clearSelection();
    ui->listInformationSelect->clearSelection();
    ui->listInformationDisp->clearSelection();
}

void formNouveauJeu::on_listCompetenceDisp_itemSelectionChanged()
{
    ui->listAttributDisp->clearSelection();
    ui->listValeurDisp->clearSelection();
    ui->listAttributSelect->clearSelection();
    ui->listValeurSelect->clearSelection();
    ui->listCompetenceSelect->clearSelection();
    ui->listInformationSelect->clearSelection();
    ui->listInformationDisp->clearSelection();
}

void formNouveauJeu::on_listInformationSelect_itemSelectionChanged()
{
    ui->listAttributDisp->clearSelection();
    ui->listValeurDisp->clearSelection();
    ui->listAttributSelect->clearSelection();
    ui->listValeurSelect->clearSelection();
    ui->listCompetenceSelect->clearSelection();
    ui->listCompetenceDisp->clearSelection();
    ui->listInformationDisp->clearSelection();
}

void formNouveauJeu::on_listInformationDisp_itemSelectionChanged()
{
    ui->listAttributDisp->clearSelection();
    ui->listValeurDisp->clearSelection();
    ui->listAttributSelect->clearSelection();
    ui->listValeurSelect->clearSelection();
    ui->listCompetenceSelect->clearSelection();
    ui->listCompetenceDisp->clearSelection();
    ui->listInformationSelect->clearSelection();
}

void formNouveauJeu::on_modifierAttribut_clicked()
{
    bool test=false;
    if(ui->listAttributDisp->currentItem()->isSelected()==true)
    {
        attributSelect=chercheTitreAttribut(ui->listAttributDisp->currentItem()->data(Qt::UserRole).toString());
        test=true;
    }
    else if(ui->listValeurDisp->currentItem()->isSelected()==true)
    {
        attributSelect=chercheTitreAttribut(ui->listValeurDisp->currentItem()->data(Qt::UserRole).toString());
        test=true;
    }
    else if(ui->listCompetenceDisp->currentItem()->isSelected()==true)
    {
        attributSelect=chercheTitreAttribut(ui->listCompetenceDisp->currentItem()->data(Qt::UserRole).toString());
        test=true;
    }
    else if(ui->listInformationDisp->currentItem()->isSelected()==true)
    {
        attributSelect=chercheTitreAttribut(ui->listInformationDisp->currentItem()->data(Qt::UserRole).toString());
        test=true;
    }
    qDebug() << "attributSelect:" << attributSelect;
    if(test==true)
    {
        formModifierAttribut formModifierAttribut;
        formModifierAttribut.setModal(true);
        QObject::connect(&formModifierAttribut, SIGNAL(listAttributChanged()),this, SLOT(changementAttribut()));
        formModifierAttribut.exec();
    }
}

void formNouveauJeu::on_nouveauAttribut_clicked()
{
    formNouveauAttribut formNouveauAttribut;
    formNouveauAttribut.setModal(true);
    QObject::connect(&formNouveauAttribut, SIGNAL(listAttributChanged()),this, SLOT(changementAttribut()));
    formNouveauAttribut.exec();
}

void formNouveauJeu::on_ajouterJeuButton_clicked()
{
    // récupération des valeurs du formulaire
    QString nom = ui->nomJeu->text();
    QString theme = ui->theme->text();
    // récupération des attributs selectionnés
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
    Jeu j(nom,theme,list);
    j.Save();
    emit listJeuChanged();
    this->close();
}
