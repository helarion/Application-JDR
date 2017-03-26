#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_jeuButton_clicked();

    void on_retourButton_clicked();

    void on_nouveauJeuButton_clicked();

    void on_modifierJeuButton_clicked();

    void on_selectionnerJeuButton_clicked();

    void on_nouveauCampagneButton_clicked();

    void on_modifierCampagneButton_clicked();

    void on_selectionnerCampagneButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
