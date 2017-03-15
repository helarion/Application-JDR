#include "headers/fenetre/formNouveauJeu.h"
#include "ui_formNouveauJeu.h"

NouveauJeu::NouveauJeu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NouveauJeu)
{
    ui->setupUi(this);
}

NouveauJeu::~NouveauJeu()
{
    delete ui;
}

