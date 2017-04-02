#include <QFileDialog>

#include "fenetre/formNouveauJeu.h"
#include "ui_formNouveauJeu.h"
#include "fenetre/formNouveauAttribut.h"
#include "mainwindow.h"

#include "BD/jeu.h"
#include "BD/attribut.h"
#include "BD/collections.h"

formNouveauJeu::formNouveauJeu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formNouveauJeu)
{
    ui->setupUi(this);
    for(int i=0;i<listAttribut.size();i++)
    {
        ui->listAttribut->addItem(listAttribut[i].getNom());
    }
}

formNouveauJeu::~formNouveauJeu()
{
    delete ui;
}


void formNouveauJeu::on_CreerJeu_clicked()
{
    QString nom = ui->nomJeu->text();
    QString theme = ui->theme->text();
    QVector<Attribut*> list(100);
    Jeu j(nom,theme,list);
    j.Save();
    emit listJeuChanged();
    this->close();
}

void formNouveauJeu::on_parcourirButton_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),"",tr("Images (*.png *.bmp *.jpg)"));
    ui->theme->setText(fileName);
    ui->themeImage->setPixmap(fileName);
    ui->themeImage->adjustSize();
    ui->themeImage->setScaledContents(true);
}

void formNouveauJeu::on_nouveauAttributButton_clicked()
{
    formNouveauAttribut formNouveauAttribut;
    formNouveauAttribut.setModal(true);
    formNouveauAttribut.exec();
}
