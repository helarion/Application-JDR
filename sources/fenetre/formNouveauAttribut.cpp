#include "headers/fenetre/formnouveauattribut.h"
#include "ui_formnouveauattribut.h"

formNouveauAttribut::formNouveauAttribut(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formNouveauAttribut)
{
    ui->setupUi(this);
}

formNouveauAttribut::~formNouveauAttribut()
{
    delete ui;
}
