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

    void on_ajouterButton_clicked();

    void on_retirerButton_clicked();

    void on_modifierAttributButton_clicked();

    void on_listAttributDisp_itemSelectionChanged();

    void on_listValeurDisp_itemSelectionChanged();

    void on_listCompetenceDisp_itemSelectionChanged();

    void on_listInformationDisp_itemSelectionChanged();

    void on_listInformationSelect_itemSelectionChanged();

    void on_listCompetenceSelect_itemSelectionChanged();

    void on_listValeurSelect_itemSelectionChanged();

    void on_listAttributSelect_itemSelectionChanged();

    void on_modifierAttribut_clicked();

    void on_nouveauAttribut_clicked();

    void on_ajouterJeuButton_clicked();

signals:

    void listJeuChanged();

private:
    Ui::formNouveauJeu *ui;
    void Load();
};

#endif // formNouveauJeu_H
