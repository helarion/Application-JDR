#include "headers/mainwindow.h"
#include <QApplication>
#include <QtSql>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    QSqlQuery selectJeu;

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");


    db.setDatabaseName("jdr");
    db.setUserName("root");
    db.setPassword("");
    db.setHostName("localhost");
    if(db.open())
    {
    //cout << "ouverture OK" <<endl;

    selectJeu=db.exec("SELECT * FROM 'jeu'");
    while (selectJeu.next()) {
          QString nomJeu = query.value(1).toString();
      }

    }

    w.show();

    return a.exec();
}
