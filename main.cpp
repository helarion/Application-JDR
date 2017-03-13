#include "headers/mainwindow.h"

#include "headers/BD/jeu.h"
#include "headers/BD/campagne.h"

#include <QApplication>
#include <QDebug>

#include <QSettings>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow w;
    Jeu j1("D&D");
    j1.afficher();
    w.show();

    return app.exec();
}
