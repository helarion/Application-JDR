#include "fenetre/formNouvelleCampagne.h"
#include "ui_formNouvelleCampagne.h"
#include "BD/collections.h"
#include "BD/campagne.h"

formNouvelleCampagne::formNouvelleCampagne(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formNouvelleCampagne)
{
    ui->setupUi(this);
}

formNouvelleCampagne::~formNouvelleCampagne()
{
    delete ui;
}

void formNouvelleCampagne::on_creerButton_clicked()
{
    QString nom=ui->nomCampagne->text();
    QString scenario=ui->scenarioCampagne->toPlainText();
    QString titreJeu=listJeu[jeuSelect].getTitre();
    Campagne c(nom,scenario,titreJeu);
    c.Save();
    this->close();
}

void formNouvelleCampagne::on_supprimerButton_clicked()
{

}
