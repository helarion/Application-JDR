#define ATTRIBUT 0
#define VALEUR 1
#define COMPETENCE 2
#define INFORMATION 3

#include <QDebug>
#include <Qlabel>
#include <QScrollArea>
#include <QLineEdit>

#include "formNouveauPersonnage.h"
#include "ui_formNouveauPersonnage.h"

#include "BD/collections.h"
#include "BD/personnage.h"
#include "BD/campagne.h"
#include "BD/partie.h"
#include "BD/jeu.h"
#include "BD/attribut.h"

formNouveauPersonnage::formNouveauPersonnage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formNouveauPersonnage)
{
    ui->setupUi(this);
    Campagne ca=listCampagne[campagneSelect];
    Jeu je=ca.getJeu();
    QVector<Attribut> attributs=je.getListAttribut();

    //comptage
    int nbAttribut=0;
    int nbValeur=0;
    int nbCompetence=0;
    for(int i=0;i<attributs.size();i++)
    {
        if(attributs[i].getType()==ATTRIBUT) // Attribut
        {
            nbAttribut++;
        }
        else if(attributs[i].getType()==VALEUR) // Valeur
        {
            nbValeur++;
        }
        else if(attributs[i].getType()==COMPETENCE) // Compétence
        {
            nbCompetence++;
        }
    }

    QVBoxLayout *layout1 = new QVBoxLayout;
    QVBoxLayout *layout2 = new QVBoxLayout;
    QVBoxLayout *layout3 = new QVBoxLayout;
    QVBoxLayout *layout4 = new QVBoxLayout;

    int modulo = nbCompetence/4;

    ui->competenceLayout->addLayout(layout1);
    ui->competenceLayout->addLayout(layout2);
    ui->competenceLayout->addLayout(layout3);
    ui->competenceLayout->addLayout(layout4);

    int indexCompetence=0;
    for(int i=0;i<attributs.size();i++)
    {
        QLabel *label = new QLabel;
        label->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        label->setWordWrap(true);
        label->setText(attributs[i].getNom());

        if(attributs[i].getType()==ATTRIBUT) // Attribut
        {
            QLineEdit *edit= new QLineEdit;
            ui->attributLayout->addWidget(label);
            ui->attributLayout->addWidget(edit);
            listEdit.append(edit);
        }
        else if(attributs[i].getType()==VALEUR) // Valeur
        {
            QLineEdit *edit1= new QLineEdit;
            QLabel *label2 = new QLabel;
            label2->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
            label2->setWordWrap(true);
            label2->setText("/");
            QLineEdit *edit2= new QLineEdit;
            edit1->setMaximumWidth(50);
            edit2->setMaximumWidth(50);
            ui->valeurLayout->addWidget(label);
            ui->valeurLayout->addWidget(edit1);
            ui->valeurLayout->addWidget(label2);
            ui->valeurLayout->addWidget(edit2);
            listEdit.append(edit1);
            listEdit.append(edit2);
        }
        else if(attributs[i].getType()==COMPETENCE) // Compétence
        {
            QLineEdit *edit= new QLineEdit;
            edit->setMaximumWidth(50);
            if(indexCompetence <= modulo*1)
            {
                layout1->addWidget(label);
                layout1->addWidget(edit);
            }
            else if(indexCompetence > modulo*1 && indexCompetence <= modulo*2)
            {
                layout2->addWidget(label);
                layout2->addWidget(edit);
            }
            else if(indexCompetence > modulo*2 && indexCompetence <= modulo*3)
            {
                layout3->addWidget(label);
                layout3->addWidget(edit);
            }
            else if(indexCompetence > modulo*3 && indexCompetence <=  modulo*4)
            {
                layout4->addWidget(label);
                layout4->addWidget(edit);
            }
            listEdit.append(edit);
            indexCompetence++;
        }
        else if(attributs[i].getType()==INFORMATION) // Valeur
        {
            QLineEdit *edit= new QLineEdit;
            label->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
            label->setWordWrap(true);
            ui->informationLayout->addWidget(label);
            ui->informationLayout->addWidget(edit);
            listEdit.append(edit);
        }
    }
    QSpacerItem *spacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
    ui->valeurLayout->addItem(spacer);
}

formNouveauPersonnage::~formNouveauPersonnage()
{
    delete ui;
}

void formNouveauPersonnage::on_ajouterButton_clicked()
{
    QString joueur=ui->joueurEdit->text();
    QString background=ui->background->toPlainText();
    QString invArme=ui->invArme->toPlainText();
    QString invArmure=ui->invArmure->toPlainText();
    QString invObjet=ui->invObjet->toPlainText();
    QString nom=ui->NomEdit->text();
    QString prenom=ui->PrenomPersonnageEdit->text();
    int age=ui->AgeEdit->text().toInt();
    QString description=ui->descirptionEdit->toPlainText();
    QString sexe=ui->SexeEdit->text();
    Partie partie=listPartie[partieSelect];
    QVector<QString> valeurA;
    for(int i=0;i<listEdit.size();i++)
    {
        if( QLineEdit* lineEdit = dynamic_cast<QLineEdit*>(listEdit[i]) )
        {
            valeurA.append(lineEdit->text());
        }
        else if( QTextEdit* textEdit = dynamic_cast<QTextEdit*>(listEdit[i]) )
        {
            valeurA.append(textEdit->toPlainText());
        }
    }
    Personnage p(joueur,nom,prenom,age,description,background,invArmure,
                 invArme,invObjet,sexe,partie,valeurA);

    p.Save();
    emit listPersonnageChanged();
    this->close();
}

void formNouveauPersonnage::on_pagePrecedenteButton_clicked()
{
    int index=ui->stackedWidget->currentIndex();
    if(index>0)ui->stackedWidget->setCurrentIndex(index-1);
}

void formNouveauPersonnage::on_pageSuivanteButton_clicked()
{
    int index=ui->stackedWidget->currentIndex();
    if(index<2)ui->stackedWidget->setCurrentIndex(index+1);
}
