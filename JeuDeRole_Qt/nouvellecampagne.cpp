#include "nouvellecampagne.h"
#include "ui_nouvellecampagne.h"

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
