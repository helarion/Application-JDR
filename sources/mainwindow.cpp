#include "headers/mainwindow.h"
#include "ui_mainwindow.h"
#include "headers/fenetre/formNouveauJeu.h"
#include "headers/fenetre/formJeu.h"
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
    formNouveauJeu formNouveauJeu;
    formNouveauJeu.setModal(true);
    formNouveauJeu.exec();
}

void MainWindow::on_Continue_clicked()
{
    formJeu formJeu;
    formJeu.setModal(true);
    formJeu.exec();
}
