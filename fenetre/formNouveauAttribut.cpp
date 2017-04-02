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

    ui->typeAttributCombo->addItem("Nom=Valeur");
    ui->typeAttributCombo->addItem("Nom=Valeur/Valeur");
    ui->typeAttributCombo->addItem("Nom=Liste objets");
}

formNouveauAttribut::~formNouveauAttribut()
{
    delete ui;
}

void formNouveauAttribut::on_creerAttributButton_clicked()
{
    QString nom=ui->Nom->text();
    quint16 type=ui->typeAttributCombo->currentIndex();
    bool preset=ui->presetCheck;
    Attribut a(nom,type,preset);
    a.Save();
    // update la liste dans formJeu
}
