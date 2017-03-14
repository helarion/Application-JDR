#include "partie.h"
#include "ui_partie.h"

Partie::Partie(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Partie)
{
    ui->setupUi(this);
}

Partie::~Partie()
{
    delete ui;
}
