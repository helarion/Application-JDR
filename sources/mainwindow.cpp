#include "headers/mainwindow.h"
#include "ui_mainwindow.h"
#include "headers/fenetre/formNouveauJeu.h"
#include "headers/fenetre/formContinuerJeu.h"
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
    NouveauJeu nouveauJeu;
    nouveauJeu.setModal(true);
    nouveauJeu.exec();
}

void MainWindow::on_Continue_clicked()
{
    ContinuerJeu continuerJeu;
    continuerJeu.setModal(true);
    continuerJeu.exec();
}
