#include "formModifierPartie.h"
#include "ui_formModifierPartie.h"

formModifierPartie::formModifierPartie(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formModifierPartie)
{
    ui->setupUi(this);
}

formModifierPartie::~formModifierPartie()
{
    delete ui;
}
