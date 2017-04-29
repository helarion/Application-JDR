#define ATTRIBUT 0
#define VALEUR 1
#define COMPETENCE 2
#define LISTE 3

#include <QDebug>
#include <Qlabel>
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
    QScrollArea *scroll= new QScrollArea();
    scroll->setWidget(this);
    scroll->show();
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
            ui->valeurLayout->addWidget(label);
            ui->valeurLayout->addWidget(edit1);
            ui->valeurLayout->addWidget(label2);
            ui->valeurLayout->addWidget(edit2);
        }
        else if(attributs[i].getType()==COMPETENCE) // Compétence
        {
            int hauteur=height();
            qDebug() << "hauteur" << hauteur;
            QLineEdit *edit= new QLineEdit;
            edit->setMaximumWidth(50);
            ui->competenceLayout->addWidget(label);
            ui->competenceLayout->addWidget(edit);
        }
    }
}

formNouveauPersonnage::~formNouveauPersonnage()
{
    delete ui;
}
