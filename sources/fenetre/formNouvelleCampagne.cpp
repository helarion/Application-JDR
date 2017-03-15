#include "./headers/fenetre/formNouvelleCampagne.h"
#include "ui_formNouvelleCampagne.h"

NouvelleCampagne::NouvelleCampagne(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NouvelleCampagne)
{
    ui->setupUi(this);
}

NouvelleCampagne::~NouvelleCampagne()
{
    delete ui;
}
