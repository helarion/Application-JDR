#include "./headers/fenetre/formInventaire.h"
#include "ui_formInventaire.h"

formInventaire::formInventaire(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formInventaire)
{
    ui->setupUi(this);
}

formInventaire::~formInventaire()
{
    delete ui;
}
