#define ATTRIBUT 0
#define VALEUR 1
#define COMPETENCE 2
#define LISTE 3

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

    /*QScrollArea *scroll= new QScrollArea();
    scroll->setWidgetResizable(true);
    scroll->setWidget(ui->FeuillePersonnage);
    scroll->setLayout(ui->competenceLayout);
    scroll->show();*/

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
        }
        else if(attributs[i].getType()==VALEUR) // Valeur
        {
            QLineEdit *edit1= new QLineEdit;
            QLabel *label2 = new QLabel;
            label->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
            label->setWordWrap(true);
            label2->setText("/");
            QLineEdit *edit2= new QLineEdit;
            edit1->setMaximumWidth(50);
            edit2->setMaximumWidth(50);
            ui->valeurLayout->addWidget(label);
            ui->valeurLayout->addWidget(edit1);
            ui->valeurLayout->addWidget(label2);
            ui->valeurLayout->addWidget(edit2);
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
            indexCompetence++;
        }
    }
}

formNouveauPersonnage::~formNouveauPersonnage()
{
    delete ui;
}

void formNouveauPersonnage::on_InventaireButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void formNouveauPersonnage::on_RetourButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}
