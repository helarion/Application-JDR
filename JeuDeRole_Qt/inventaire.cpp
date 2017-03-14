#include "inventaire.h"
#include "ui_inventaire.h"

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
