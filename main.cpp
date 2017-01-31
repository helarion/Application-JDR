#include "headers/mainwindow.h"

#include "headers/BD/jeu.h"

#include <QApplication>
#include <QDebug>

#include <QFile>
#include <QSettings>



int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow w;

    jeu j1("D&D","test");

    jeu j2();

    j1.Save();
    j2.Load();

    w.show();

    return app.exec();
}
