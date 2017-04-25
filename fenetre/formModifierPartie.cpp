#include "formModifierPartie.h"
#include "ui_formModifierPartie.h"
#include "fenetre/formNouveauPersonnage.h"

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

void formModifierPartie::on_ajouterPersonnageButton_2_clicked()
{
    formNouveauPersonnage formNouveauPersonnage;
    formNouveauPersonnage.setModal(true);
    formNouveauPersonnage.exec();
}
