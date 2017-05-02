#ifndef formNouveauJeu_H
#define formNouveauJeu_H

#include <QDialog>

namespace Ui {
class formNouveauJeu;
}

class formNouveauJeu : public QDialog
{
    Q_OBJECT

public:
    explicit formNouveauJeu(QWidget *parent = 0);
    ~formNouveauJeu();

private slots:

    void on_parcourirButton_clicked();

    void on_nouveauAttributButton_clicked();

    void changementAttribut();

    /*void on_listAttributDisp_itemSelectionChanged();

    void on_listValeurDisp_itemSelectionChanged();

    void on_listCompetenceDisp_itemSelectionChanged();

    void on_listInformationDisp_itemSelectionChanged();

    void on_listInformationSelect_itemSelectionChanged();

    void on_listCompetenceSelect_itemSelectionChanged();

    void on_listValeurSelect_itemSelectionChanged();

    void on_listAttributSelect_itemSelectionChanged();*/

    void on_nouveauAttribut_clicked();

    void on_ajouterAttributButton_clicked();

    void on_supprimerAttributButton_clicked();

    void on_ajouterValeurButton_clicked();

    void on_supprimerValeurButton_clicked();

    void on_ajouterCompetenceButton_clicked();

    void on_supprimerCompetenceButton_clicked();

    void on_ajouterInformationButton_clicked();

    void on_supprimerInformationButton_clicked();

    void on_ajouterJeuButton_clicked();

    void on_modifierInformationButton_clicked();

    void on_modifierCompetenceButton_clicked();

    void on_modifierValeurButton_clicked();

    void on_modifierAttributButton_clicked();

signals:

    void listJeuChanged();

private:
    Ui::formNouveauJeu *ui;
    void Load();
};

#endif // formNouveauJeu_H
