#define ATTRIBUT 0
#define VALEUR 1
#define COMPETENCE 2
#define INFORMATION 3

#include <QDebug>

#include "formModifierPersonnage.h"
#include "ui_formModifierPersonnage.h"

#include "BD/personnage.h"
#include "BD/collections.h"

formModifierPersonnage::formModifierPersonnage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formModifierPersonnage)
{
    ui->setupUi(this);
    Personnage p=listPersonnage[personnageSelect];
    Jeu je=listJeu[jeuSelect];
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
    QSpacerItem *spacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
    ui->valeurLayout->addItem(spacer);
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
            edit1->setAlignment(Qt::AlignLeft);
            edit2->setAlignment(Qt::AlignLeft);
            label2->setAlignment(Qt::AlignLeft);
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
            //edit->setMaximumWidth(50);
            ui->informationLayout->addWidget(label);
            ui->informationLayout->addWidget(edit);
            listEdit.append(edit);
        }
    }
    ui->valeurLayout->addItem(spacer);
    QVector<QString> valAtt=p.getValeurAttribut();
    for(int i=0;i<listEdit.size();i++)
    {
        if( QLineEdit* lineEdit = dynamic_cast<QLineEdit*>(listEdit[i]) )
        {
            lineEdit->setText(valAtt[i]);
        }
        else if( QTextEdit* textEdit = dynamic_cast<QTextEdit*>(listEdit[i]) )
        {
            textEdit->setText(valAtt[i]);
        }
    }

    QString nom=p.getNom();
    QString prenom=p.getPrenom();
    QString description=p.getDescription();
    QString sexe=p.getSexe();
    QString joueur=p.getJoueur();
    QString background=p.getBackground();
    QString invArme=p.getInvArme();
    QString invArmure=p.getInvArmure();
    QString invObjet=p.getInvObjet();

    ui->joueurEdit->setText(joueur);
    ui->background->setText(background);
    ui->invArme->setText(invArme);
    ui->invArmure->setText(invArmure);
    ui->invObjet->setText(invObjet);
    ui->NomEdit->setText(nom);
    ui->PrenomPersonnageEdit->setText(prenom);
    QString age=QString::number(p.getAge());
    ui->AgeEdit->setText(age);
    ui->descirptionEdit->setText(description);
    ui->SexeEdit->setText(sexe);
}

formModifierPersonnage::~formModifierPersonnage()
{
    delete ui;
}

void formModifierPersonnage::on_pagePrecedenteButton_clicked()
{
    int index=ui->stackedWidget->currentIndex();
    if(index>0)ui->stackedWidget->setCurrentIndex(index-1);
}

void formModifierPersonnage::on_pageSuivanteButton_clicked()
{
    int index=ui->stackedWidget->currentIndex();
    if(index<2)ui->stackedWidget->setCurrentIndex(index+1);
}

void formModifierPersonnage::on_modifierButton_clicked()
{
    QString joueur=ui->joueurEdit->text();
    QString nom=ui->NomEdit->text();
    QString prenom=ui->PrenomPersonnageEdit->text();
    QString textAge=ui->AgeEdit->text();
    qDebug() << "string"<< textAge;
    int age=textAge.toInt();
    qDebug() << "age:"<< age;
    QString description=ui->descirptionEdit->toPlainText();
    QString background=ui->background->toPlainText();
    QString invArme=ui->invArme->toPlainText();
    QString invArmure=ui->invArmure->toPlainText();
    QString invObjet=ui->invObjet->toPlainText();
    QString sexe=ui->SexeEdit->text();
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
    listPersonnage[personnageSelect].setAge(age);
    listPersonnage[personnageSelect].setDescription(description);
    listPersonnage[personnageSelect].setSexe(sexe);
    listPersonnage[personnageSelect].setJoueur(joueur);
    listPersonnage[personnageSelect].setValeurAttribut(valeurA);
    listPersonnage[personnageSelect].setBackground(background);
    listPersonnage[personnageSelect].setInvArme(invArme);
    listPersonnage[personnageSelect].setInvObjet(invObjet);
    listPersonnage[personnageSelect].setInvArmure(invArmure);
    listPersonnage[personnageSelect].setPrenom(prenom);
    listPersonnage[personnageSelect].setNom(nom);
    emit listPersonnageChanged();
    this->close();
}
