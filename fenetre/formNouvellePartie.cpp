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
    Partie p(nom,listCampagne[campagneSelect]);
    p.afficher();
    p.Save();
    emit listPartieChanged();
    this->close();
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
