#include "formjeu.h"
#include "ui_formjeu.h"
#include <QDir>

FormJeu::FormJeu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormJeu)
{
    ui->setupUi(this);

}

FormJeu::~FormJeu()
{
    delete ui;
}
