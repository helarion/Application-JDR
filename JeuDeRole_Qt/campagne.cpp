#include "campagne.h"
#include "ui_campagne.h"

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
