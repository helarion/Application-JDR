#include "./headers/fenetre/formNouvelleCampagne.h"
#include "ui_formNouvelleCampagne.h"

formNouvelleCampagne::formNouvelleCampagne(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formNouvelleCampagne)
{
    ui->setupUi(this);
}

formNouvelleCampagne::~formNouvelleCampagne()
{
    delete ui;
}

void formNouvelleCampagne::on_creerButton_clicked()
{

}
