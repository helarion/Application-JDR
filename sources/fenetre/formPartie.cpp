#include "./headers/fenetre/formPartie.h"
#include "ui_formPartie.h"

formPartie::formPartie(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formPartie)
{
    ui->setupUi(this);
}

formPartie::~formPartie()
{
    delete ui;
}
