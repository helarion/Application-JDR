#include "headers/fenetre/formnouveauattribut.h"
#include "ui_formnouveauattribut.h"

formNouveauAttribut::formNouveauAttribut(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formNouveauAttribut)
{
    ui->setupUi(this);

    ui->comboTypeAttribut->addItem("Nom=Valeur");
    ui->comboTypeAttribut->addItem("Nom=Valeur/Valeur");
    ui->comboTypeAttribut->addItem("Nom=Liste objets");

    QString nom;
    QStringList list;
    QString path="data/Campagne";
    QDir dir(path);
    QFileInfoList files = dir.entryInfoList();
    foreach (QFileInfo file, files){
        if (!file.isDir()){
            list=file.fileName().split(".data");
            nom=list.at(0);
            Campagne c(nom);
            listCampagne.append(c);
            ui->listCampagne->addItem(nom);
            qDebug() << "FILE: " <<nom;
        }
    }
}

formNouveauAttribut::~formNouveauAttribut()
{
    delete ui;
}
