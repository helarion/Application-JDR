#include "fenetre/formModifierAttribut.h"
#include "ui_formModifierAttribut.h"

#include "BD/attribut.h"
#include "BD/collections.h"

formModifierAttribut::formModifierAttribut(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formModifierAttribut)
{
    ui->setupUi(this);

    Attribut a(listAttribut[attributSelect]);

    ui->Nom->setText(a.getNom());
    if(a.getPreset())  ui->presetCheck->setChecked(true);
    ui->typeAttributCombo->addItem("Nom=Valeur");
    ui->typeAttributCombo->addItem("Nom=Valeur/Valeur");
    ui->typeAttributCombo->addItem("Nom=Liste objets");
}

formModifierAttribut::~formModifierAttribut()
{
    delete ui;
}

void formModifierAttribut::on_creerAttributButton_clicked()
{
    QString nom=ui->Nom->text();
    int type=ui->typeAttributCombo->currentIndex();
    bool preset=ui->presetCheck->isChecked();
    Attribut a(nom,type,preset);
    a.Save();
    // update la liste dans formJeu
    emit listAttributChanged();
    this->close();
}
