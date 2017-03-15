#include "./headers/fenetre/formInventaire.h"
#include "ui_formInventaire.h"

Inventaire::Inventaire(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Inventaire)
{
    ui->setupUi(this);
}

Inventaire::~Inventaire()
{
    delete ui;
}
