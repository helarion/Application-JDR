#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidget>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    Ui::MainWindow getUI();

private slots:

    void on_retourButton_clicked();

    void on_nouveauJeuButton_clicked();

    void on_modifierJeuButton_clicked();

    void on_selectionnerJeuButton_clicked();

    void on_nouveauCampagneButton_clicked();

    void on_modifierCampagneButton_clicked();

    void on_selectionnerCampagneButton_clicked();

    void on_listJeu_itemSelectionChanged();

    void on_listCampagne_itemSelectionChanged();

    void on_ajouterPartieButton_clicked();

    void on_modifierPartieButton_clicked();

    void on_selectionnerPartieButton_clicked();

    void on_listJeu_itemDoubleClicked(QListWidgetItem *item);

    void on_listCampagne_itemDoubleClicked(QListWidgetItem *item);

    void on_listPartie_itemDoubleClicked(QListWidgetItem *item);

    void on_ajouterPersonnageButton_clicked();

    void on_modifierPersonnageButton_clicked();

    void on_listPersonnage_itemDoubleClicked(QListWidgetItem *item);

    void on_playlistButton_clicked();

private:
    Ui::MainWindow *ui;
public slots:
    void changementJeu();
    void changementCampagne();
    void changementPartie();
    void changementPersonnage();
};

#endif // MAINWINDOW_H
