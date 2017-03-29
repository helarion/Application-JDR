#include "headers/fenetre/formnouveauattribut.h"
#include "ui_formnouveauattribut.h"

#include "headers/BD/attribut.h"

#include <QDir>
#include <QVector>
#include <QDebug>

formNouveauAttribut::formNouveauAttribut(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formNouveauAttribut)
{
    ui->setupUi(this);

    ui->comboTypeAttribut->addItem("Nom=Valeur");
    ui->comboTypeAttribut->addItem("Nom=Valeur/Valeur");
    ui->comboTypeAttribut->addItem("Nom=Liste objets");
}

formNouveauAttribut::~formNouveauAttribut()
{
    delete ui;
}
