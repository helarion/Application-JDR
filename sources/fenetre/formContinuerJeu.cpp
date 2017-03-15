#include "./headers/fenetre/formContinuerJeu.h"
#include "ui_formContinuerJeu.h"

ContinuerJeu::ContinuerJeu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ContinuerJeu)
{
    ui->setupUi(this);
}

ContinuerJeu::~ContinuerJeu()
{
    delete ui;
}

void ContinuerJeu::on_pushButton_clicked()
{

}
