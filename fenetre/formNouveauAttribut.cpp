#include "fenetre/formNouveauAttribut.h"
#include "ui_formNouveauAttribut.h"

#include "BD/attribut.h"

#include <QDir>
#include <QVector>
#include <QDebug>

formNouveauAttribut::formNouveauAttribut(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formNouveauAttribut)
{
    ui->setupUi(this);

    ui->typeAttributCombo->addItem("Attribut (Exemple:Force)"); //type 0
    ui->typeAttributCombo->addItem("Valeur/Valeur (Exemple: Points de vie)"); //type 1
    ui->typeAttributCombo->addItem("Compétence (Exemple:Epée longue)"); //type 2
    ui->typeAttributCombo->addItem("Information (Exemple: classe, race...)"); //type 3
}

formNouveauAttribut::~formNouveauAttribut()
{
    delete ui;
}

void formNouveauAttribut::on_creerAttributButton_clicked()
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
