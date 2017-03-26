#include "headers/fenetre/formModifierAttribut.h"
#include "ui_formmodifierattribut.h"

formModifierAttribut::formModifierAttribut(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formModifierAttribut)
{
    ui->setupUi(this);
}

formModifierAttribut::~formModifierAttribut()
{
    delete ui;
}
