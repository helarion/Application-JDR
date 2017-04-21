#include <qDebug>
#include <QFile>
#include <QFileInfo>
#include <QFileDialog>
#include <QPixMap>

#include "fenetre/formModifierJeu.h"
#include "ui_formModifierJeu.h"
#include "fenetre/formNouveauAttribut.h"

#include "BD/collections.h"

formModifierJeu::formModifierJeu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formModifierJeu)
{
    ui->setupUi(this);
    remplirListAttribut();
    afficherAttribut();
    ui->nomJeu->setText(listJeu[jeuSelect].getNom());
    ui->theme->setText(listJeu[jeuSelect].getTheme());
    ui->listAttributDisp->clear();
    ui->listAttributSelect->clear();
    bool test=true;
    for(int i=0;i<listAttribut.size();i++)
    {
        for(int i=0;i<ui->listAttributSelect->size().height();i++)
        {
            if(ui->listAttributSelect->item(i)->text()==listAttribut[i].getNom())
            {
                test=false;
                break;
            }
        }
        if(test==true) ui->listAttributDisp->addItem(listAttribut[i].getNom());
    }
}

formModifierJeu::~formModifierJeu()
{
    delete ui;
}

void formModifierJeu::changementAttribut()
{
    remplirListAttribut();
    ui->listAttributDisp->clear();
    for(int i=0;i<listAttribut.size();i++)
    {
        ui->listAttributDisp->addItem(listAttribut[i].getNom());
    }
}

void formModifierJeu::on_supprimerJeuButton_clicked()
{
    // yes no
    deleteJeu(listJeu[jeuSelect]);
    emit listJeuChanged();
    this->close();
}

void formModifierJeu::on_modifierJeuButton_clicked()
{
    listJeu[jeuSelect].setNom(ui->nomJeu->text());
    QString fileName=ui->theme->text();
    qDebug() << "fileName:" << fileName;
    listJeu[jeuSelect].setTheme(fileName);
    emit listJeuChanged();
    this->close();
}

void formModifierJeu::on_parcourirButton_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),"",tr("Images (*.png *.bmp *.jpg)"));
    ui->theme->setText(fileName);
    ui->themeImage->setPixmap(fileName);
    ui->themeImage->adjustSize();
    ui->themeImage->setScaledContents(true);
}

void formModifierJeu::on_nouveauAttribut_clicked()
{
    formNouveauAttribut formNouveauAttribut;
    formNouveauAttribut.setModal(true);
    QObject::connect(&formNouveauAttribut, SIGNAL(listAttributChanged()),this, SLOT(changementAttribut()));
    formNouveauAttribut.exec();
}
