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
    qDebug() << "test";
    QVector<Personnage> listPerso=p.getPersonnage();
    qDebug() << "taille:" << listPerso.size();
    ui->nomPartie->setText(p.getNom());
    ui->resumePartie->setText(p.getResume());
    for(int i=0;i<listPerso.size();i++)
    {
        QListWidgetItem *newItem = new QListWidgetItem;
        // on met le titre de l'objet comme donnée
        newItem->setData(Qt::UserRole,listPerso[i].getTitre());
        // le nom de l'objet comme text affiché
        newItem->setText(listPerso[i].getNom());
        ui->listPersonnage->addItem(newItem);
    }
}

formModifierPartie::~formModifierPartie()
{
    delete ui;
}

void formModifierPartie::on_ajouterPersonnageButton_clicked()
{
    formNouveauPersonnage formNouveauPersonnage;
    formNouveauPersonnage.setModal(true);
    QObject::connect(&formNouveauPersonnage, SIGNAL(listPersonnageChanged()),this, SLOT(changementPersonnage()));
    formNouveauPersonnage.exec();
}

void formModifierPartie::changementPersonnage()
{
    Partie p=listPartie[partieSelect];
    ui->listPersonnage->clear();
    for(int i=0;i<p.getPersonnage().size();i++)
    {
        QListWidgetItem *newItem = new QListWidgetItem;
        // on met le titre de l'objet comme donnée
        newItem->setData(Qt::UserRole,p.getPersonnage()[i].getTitre());
        // le nom de l'objet comme text affiché
        newItem->setText(p.getPersonnage()[i].getNom());
        ui->listPersonnage->addItem(newItem);
    }
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
    QString nom=ui->nomPartie->text();
    QString resume=ui->resumePartie->toPlainText();
    QVector<Personnage> list;
    for(int i=0; i<ui->listPersonnage->count(); i++)
    {
        Personnage p(ui->listPersonnage->item(i)->data(Qt::UserRole).toString());
    }
    listPartie[partieSelect].setResume(resume);
    listPartie[partieSelect].setPersonnages(list);
    listPartie[partieSelect].setNom(nom);
    emit listPartieChanged();
    this->close();
}

void formModifierPartie::on_modifierPersonnageButton_clicked()
{
    if(ui->listPersonnage->currentItem()!=NULL)
    {
        QString titre=ui->listPersonnage->currentItem()->data(Qt::UserRole).toString();
        int index=chercheTitrePersonnage(titre);
        personnageSelect=index;
        formModifierPersonnage formModifierPersonnage;
        QObject::connect(&formModifierPersonnage, SIGNAL(listPersonnageChanged()),this, SLOT(changementPersonnage()));
        formModifierPersonnage.setModal(true);
        formModifierPersonnage.exec();
    }
}
