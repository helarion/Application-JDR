#include "formModifierPartie.h"
#include "ui_formModifierPartie.h"
#include "fenetre/formNouveauPersonnage.h"
#include "fenetre/formModifierPersonnage.h"

#include "BD/collections.h"

#include <QDebug>
#include <QMessageBox>

formModifierPartie::formModifierPartie(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formModifierPartie)
{
    ui->setupUi(this);
    Partie p=listPartie[partieSelect];
    ui->nomPartie->setText(p.getNom());
}

formModifierPartie::~formModifierPartie()
{
    delete ui;
}

void formModifierPartie::on_supprimerButton_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Suppression", "Etes vous sur de vouloir supprimer cette partie ?",
                                    QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
      deletePartie(partieSelect);
          emit listPartieChanged();
          this->close();
    }
}

void formModifierPartie::on_modifierButton_clicked()
{
    remplirListPersonnage();
    Partie prec=listPartie[partieSelect];
    Partie p=listPartie[partieSelect];
    QString nom=ui->nomPartie->text();
    p.setNom(nom);
    deletePartie(partieSelect);
    p.Save();
    //remplirListPartie();
    updatePartie(prec,p);
    emit listPartieChanged();
    this->close();
}
