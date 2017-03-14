#include "feuillepersonnage.h"
#include "ui_feuillepersonnage.h"

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
