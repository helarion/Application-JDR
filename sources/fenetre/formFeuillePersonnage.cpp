#include "./headers/fenetre/formFeuillePersonnage.h"
#include "ui_formFeuillePersonnage.h"

formFeuillePersonnage::formFeuillePersonnage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formFeuillePersonnage)
{
    ui->setupUi(this);
}

formFeuillePersonnage::~formFeuillePersonnage()
{
    delete ui;
}
