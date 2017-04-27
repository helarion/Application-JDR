#include "formModifierPartie.h"
#include "ui_formModifierPartie.h"
#include "fenetre/formNouveauPersonnage.h"

#include "BD/collections.h"

formModifierPartie::formModifierPartie(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formModifierPartie)
{
    ui->setupUi(this);
    ui->nomPartie->setText(listPartie[partieSelect].getNom());
    ui->resumePartie->setText(listPartie[partieSelect].getResume());
    for(int i=0;i<listPersonnage.size();i++)
    {
        //if(listPartie[partieSelect].getPersonnage().compare(listJeu[jeuSelect]))
        //{
            QListWidgetItem *newItem = new QListWidgetItem;
            // on met le titre de l'objet comme donnée
            newItem->setData(Qt::UserRole,listPersonnage[i].getTitre());
            // le nom de l'objet comme text affiché
            newItem->setText(listPersonnage[i].getNom());
            ui->listPersonnage->addItem(newItem);
        //}
    }
}

formModifierPartie::~formModifierPartie()
{
    delete ui;
}

void formModifierPartie::on_ajouterPersonnageButton_2_clicked()
{
    formNouveauPersonnage formNouveauPersonnage;
    formNouveauPersonnage.setModal(true);
    formNouveauPersonnage.exec();
}

void formModifierPartie::changementPersonnage()
{
    remplirListPersonnage();
    ui->listPersonnage->clear();
    for(int i=0;i<listPersonnage.size();i++)
    {
        QListWidgetItem *newItem = new QListWidgetItem;
        // on met le titre de l'objet comme donnée
        newItem->setData(Qt::UserRole,listPersonnage[i].getTitre());
        // le nom de l'objet comme text affiché
        newItem->setText(listPersonnage[i].getNom());
        ui->listPersonnage->addItem(newItem);
    }
}
