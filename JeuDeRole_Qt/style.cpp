#include "style.h"
#include "ui_style.h"

Style::Style(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Style)
{
    ui->setupUi(this);
}

Style::~Style()
{
    delete ui;
}
