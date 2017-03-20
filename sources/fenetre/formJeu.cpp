#include "./headers/fenetre/formJeu.h"
#include "ui_formJeu.h"
#include "./headers/BD/Jeu.h"

#include <QDir>
#include <QDebug>
#include <QVector>

formJeu::formJeu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formJeu)
{
    ui->setupUi(this);
    qDebug() << "test";
    //QVector<Jeu> listJeu(100);
    QString nom;
    QStringList list;
    QString path="data/Jeu";
    QDir dir(path);
    QFileInfoList files = dir.entryInfoList();
    foreach (QFileInfo file, files){
        if (!file.isDir()){
            list=file.fileName().split(".data");
            nom=list.at(0);
            Jeu j(nom);
            //listJeu.append(j);
            ui->listJeu->addItem(nom);
            qDebug() << "FILE: " <<nom;
        }
    }
}

formJeu::~formJeu()
{
    delete ui;
}
