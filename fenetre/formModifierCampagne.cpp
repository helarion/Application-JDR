#include "fenetre/formmodifiercampagne.h"
#include "ui_formModifierCampagne.h"

formModifierCampagne::formModifierCampagne(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formModifierCampagne)
{
    ui->setupUi(this);
}

formModifierCampagne::~formModifierCampagne()
{
    delete ui;
}
