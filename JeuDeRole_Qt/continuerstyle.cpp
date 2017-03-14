#include "continuerstyle.h"
#include "ui_continuerstyle.h"

ContinuerStyle::ContinuerStyle(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ContinuerStyle)
{
    ui->setupUi(this);
}

ContinuerStyle::~ContinuerStyle()
{
    delete ui;
}

void ContinuerStyle::on_pushButton_clicked()
{

}
