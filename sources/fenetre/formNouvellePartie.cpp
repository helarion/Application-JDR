#include "./headers/fenetre/formNouvellePartie.h"
#include "ui_formNouvellePartie.h"

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
