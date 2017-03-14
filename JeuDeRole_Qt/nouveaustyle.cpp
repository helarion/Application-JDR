#include "nouveaustyle.h"
#include "ui_nouveaustyle.h"

NouveauStyle::NouveauStyle(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NouveauStyle)
{
    ui->setupUi(this);
}

NouveauStyle::~NouveauStyle()
{
    delete ui;
}

