#include "./headers/fenetre/formFeuillePersonnage.h"
#include "ui_formFeuillePersonnage.h"

FeuillePersonnage::FeuillePersonnage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FeuillePersonnage)
{
    ui->setupUi(this);
}

FeuillePersonnage::~FeuillePersonnage()
{
    delete ui;
}
