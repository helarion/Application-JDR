#include "headers/fenetre/formModifierJeu.h"
#include "ui_formmodifierjeu.h"

formModifierJeu::formModifierJeu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formModifierJeu)
{
    ui->setupUi(this);
}

formModifierJeu::~formModifierJeu()
{
    delete ui;
}
