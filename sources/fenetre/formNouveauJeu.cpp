#include <QFileDialog>

#include "headers/fenetre/formNouveauJeu.h"
#include "ui_formNouveauJeu.h"
#include "headers/fenetre/formNouveauAttribut.h"

#include "headers/BD/jeu.h"

formNouveauJeu::formNouveauJeu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formNouveauJeu)
{
    ui->setupUi(this);
}

formNouveauJeu::~formNouveauJeu()
{
    delete ui;
}


void formNouveauJeu::on_CreerJeu_clicked()
{
    QString nom = ui->NomJeu->text();
    QString theme = "ui->AdrTheme->text()";
    Jeu j(nom,theme);
    j.Save();
}

void formNouveauJeu::on_parcourirButton_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),"",tr("Images (*.png *.bmp *.jpg)"));
    ui->AdrTheme->setText(fileName);
}

void formNouveauJeu::on_nouveauAttributBUtton_clicked()
{
    formNouveauAttribut formNouveauAttribut;
    formNouveauAttribut.setModal(true);
    formNouveauAttribut.exec();
}
