#include "./headers/fenetre/formCampagne.h"
#include "ui_formCampagne.h"

Campagne::Campagne(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Campagne)
{
    ui->setupUi(this);
}

Campagne::~Campagne()
{
    delete ui;
}
