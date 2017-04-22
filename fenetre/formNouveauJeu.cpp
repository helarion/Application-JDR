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
    remplirListAttribut();
    ui->listAttributDisp->clear();
    ui->listAttributSelect->clear();

    for(int i=0;i<listAttribut.size();i++)
    {
        QListWidgetItem *newItem = new QListWidgetItem;
        newItem->setData(Qt::UserRole,i); // on met l'index de l'objet dans la liste comme donnée
        newItem->setText(listAttribut[i].getNom()); // le nom de l'objet comme text affiché
        if(listAttribut[i].getPreset()) ui->listAttributSelect->addItem(newItem);
        else ui->listAttributDisp->addItem(newItem);
    }
}

formNouveauJeu::~formNouveauJeu()
{
    delete ui;
}


void formNouveauJeu::on_CreerJeu_clicked()
{
    // récupération des valeurs du formulaire
    QString nom = ui->nomJeu->text();
    QString theme = ui->theme->text();
    // récupération des attributs selectionnés
    QVector<Attribut> list;
    for(int i=0;i<ui->listAttributSelect->count();i++)
    {
        int index=ui->listAttributSelect->item(i)->data(Qt::UserRole).toInt();
        list.append(listAttribut[index]);
    }
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
