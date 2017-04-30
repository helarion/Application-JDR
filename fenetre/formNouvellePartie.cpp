#include "fenetre/formNouvellePartie.h"
#include "ui_formNouvellePartie.h"
#include "fenetre/formNouveauPersonnage.h"
#include "fenetre/formModifierPersonnage.h"

#include "BD/personnage.h"
#include "BD/campagne.h"
#include "BD/partie.h"
#include "BD/collections.h"

formNouvellePartie::formNouvellePartie(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formNouvellePartie)
{
    ui->setupUi(this);
}

formNouvellePartie::~formNouvellePartie()
{
    delete ui;
}

void formNouvellePartie::on_validerButton_clicked()
{
    // récupération des valeurs du formulaire
    QString nom = ui->nomPartie->text();
    QString resume = ui->resumePartie->toPlainText();
    QVector<Personnage> personnages;

    // récupération des attributs selectionnés
    for(int i=0;i<ui->listPersonnage->count();i++)
    {
        int index=ui->listPersonnage->item(i)->data(Qt::UserRole).toInt();
        personnages.append(listPersonnage[index]);
    }
    Partie p(nom,resume,listCampagne[campagneSelect],personnages);
    p.afficher();
    p.Save();
    emit listPartieChanged();
    this->close();
}

void formNouvellePartie::changementPersonnage()
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

void formNouvellePartie::on_ajouterPersonnageButton_clicked()
{
    formNouveauPersonnage formNouveauPersonnage;
    formNouveauPersonnage.setModal(true);
    QObject::connect(&formNouveauPersonnage, SIGNAL(listPersonnageChanged()),this, SLOT(changementPersonnage()));
    formNouveauPersonnage.exec();
}

void formNouvellePartie::on_modifierPersonnageButton_clicked()
{
    formModifierPersonnage formModifierPersonnage;
    formModifierPersonnage.setModal(true);
    QObject::connect(&formModifierPersonnage, SIGNAL(listPersonnageChanged()),this, SLOT(changementPersonnage()));
    formModifierPersonnage.exec();
}
