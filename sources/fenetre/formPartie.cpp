#include "./headers/fenetre/formPartie.h"
#include "ui_formPartie.h"

Partie::Partie(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Partie)
{
    ui->setupUi(this);
}

Partie::~Partie()
{
    delete ui;
}
