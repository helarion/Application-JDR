#include "formModifierPersonnage.h"
#include "ui_formModifierPersonnage.h"

#include "BD/personnage.h"
#include "BD/collections.h"

formModifierPersonnage::formModifierPersonnage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formModifierPersonnage)
{
    ui->setupUi(this);
    Personnage p=listPersonnage[personnageSelect];
    QString nom=p.getNom();
    QString prenom=p.getPrenom();
    int age=p.getAge();
    QString description=p.getDescription();
    QString sexe=p.getSexe();

    ui->NomEdit->setText(nom);
    ui->PrenomPersonnageEdit->setText(prenom);
    ui->AgeEdit->setText(QString(age));
    ui->descirptionEdit->setText(description);
    ui->SexeEdit->setText(sexe);
}

formModifierPersonnage::~formModifierPersonnage()
{
    delete ui;
}
