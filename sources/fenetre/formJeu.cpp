#include "./headers/fenetre/formJeu.h"
#include "ui_formJeu.h"

Jeu::Jeu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Jeu)
{
    ui->setupUi(this);
}

Jeu::~Jeu()
{
    delete ui;
}
