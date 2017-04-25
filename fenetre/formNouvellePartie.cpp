#include "fenetre/formNouvellePartie.h"
#include "ui_formNouvellePartie.h"
#include "fenetre/formNouveauPersonnage.h"

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
    for(int i=0;i<ui->listPersonnages->count();i++)
    {
        int index=ui->listPersonnages->item(i)->data(Qt::UserRole).toInt();
        personnages.append(listPersonnage[index]);
    }
    Partie p(nom,resume,listCampagne[campagneSelect],personnages);
    p.Save();
    emit listPartieChanged();
    this->close();
}

void formNouvellePartie::on_ajouterPersonnageButton_clicked()
{
    formNouveauPersonnage formNouveauPersonnage;
    formNouveauPersonnage.setModal(true);
    formNouveauPersonnage.exec();
}

void formNouvellePartie::on_modifierPersonnageButton_clicked()
{

}

void formNouvellePartie::on_supprimerPersonnageButton_clicked()
{

}
