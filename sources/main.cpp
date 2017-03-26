#include "headers/mainwindow.h"
#include <QApplication>
#include <QDebug>
#include "headers/BD/jeu.h"

Jeu* sJ;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
