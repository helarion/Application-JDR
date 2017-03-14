#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "nouveaustyle.h"
#include "continuerstyle.h"
#include <QtWidgets>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_New_clicked()
{
    NouveauStyle nouveaustyle;
    nouveaustyle.setModal(true);
    nouveaustyle.exec();
}

void MainWindow::on_Continue_clicked()
{
    ContinuerStyle continuerstyle;
    continuerstyle.setModal(true);
    continuerstyle.exec();
}
