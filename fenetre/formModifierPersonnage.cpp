#include "formModifierPersonnage.h"
#include "ui_formModifierPersonnage.h"

formModifierPersonnage::formModifierPersonnage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formModifierPersonnage)
{
    ui->setupUi(this);
}

formModifierPersonnage::~formModifierPersonnage()
{
    delete ui;
}
