#include <QMessageBox>

#include "fenetre/formModifierCampagne.h"
#include "ui_formModifierCampagne.h"

#include "BD/collections.h"

formModifierCampagne::formModifierCampagne(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formModifierCampagne)
{
    ui->setupUi(this);
    QString nom=listCampagne[campagneSelect].getNom();
    QString scenario=listCampagne[campagneSelect].getScenario();
    ui->nomCampagne->setText(nom);
    ui->scenarioCampagne->setText(scenario);
}

formModifierCampagne::~formModifierCampagne()
{
    delete ui;
}

void formModifierCampagne::on_supprimerButton_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Suppression", "Etes vous sur de vouloir supprimer cette campagne ?",
                                    QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
      deleteCampagne(campagneSelect);
          emit listCampagneChanged();
          this->close();
    }
}

void formModifierCampagne::on_modifierCampagneButton_clicked()
{
    // on récupère les données
    QString scenario=ui->scenarioCampagne->toPlainText();
    listCampagne[campagneSelect].setScenario(scenario);
    listCampagne[campagneSelect].setNom(ui->nomCampagne->text());
    // on signale une modification
    emit listCampagneChanged();
    // on ferme le formulaire
    this->close();
}
