#include "fenetre/formModifierCampagne.h"
#include "ui_formModifierCampagne.h"

#include "BD/collections.h"

formModifierCampagne::formModifierCampagne(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formModifierCampagne)
{
    ui->setupUi(this);
    QString nom=listCampagne[campagneSelect].getNom();
    QString scenario=listCampagne[campagneSelect].getScenario();
    ui->nomCampagne->setText(nom);
    ui->scenarioCampagne->setText(scenario);
}

formModifierCampagne::~formModifierCampagne()
{
    delete ui;
}
