#include "formNouveauPersonnage.h"
#include "ui_formNouveauPersonnage.h"

formNouveauPersonnage::formNouveauPersonnage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formNouveauPersonnage)
{
    ui->setupUi(this);
}

formNouveauPersonnage::~formNouveauPersonnage()
{
    delete ui;
}
