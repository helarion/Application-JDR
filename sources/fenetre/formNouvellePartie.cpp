#include "./headers/fenetre/formNouvellePartie.h"
#include "ui_formNouvellepartie.h"

NouvellePartie::NouvellePartie(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NouvellePartie)
{
    ui->setupUi(this);
}

NouvellePartie::~NouvellePartie()
{
    delete ui;
}
