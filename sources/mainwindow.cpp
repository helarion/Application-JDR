#include "../headers/mainwindow.h"
#include "../headers/ui_mainwindow.h"
#include "formjeu.h"

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

void MainWindow::on_pushButton_clicked()
{
    //FormJeu jeu;
    //jeu.setModal(true);
    //jeu.exec();
}
