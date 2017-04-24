#include <QMessageBox>

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

void formModifierAttribut::on_supprimerButton_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Suppression", "Etes vous sur de vouloir supprimer cet attribut ?",
                                    QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        deleteAttribut(attributSelect);
        emit listAttributChanged();
        this->close();
    }
}

void formModifierAttribut::on_modifierAttributButton_clicked()
{
    QString nom=ui->Nom->text();
    int type=ui->typeAttributCombo->currentIndex();
    bool preset=ui->presetCheck->isChecked();
    listAttribut[attributSelect].setType(type);
    listAttribut[attributSelect].setPreset(preset);
    listAttribut[attributSelect].setNom(nom);
    // update la liste dans formJeu
    emit listAttributChanged();
    this->close();
}
