#include "./headers/fenetre/formCampagne.h"
#include "ui_formCampagne.h"

formCampagne::formCampagne(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formCampagne)
{
    ui->setupUi(this);
}

formCampagne::~formCampagne()
{
    delete ui;
}
