#ifndef FORMMODIFIERJEU_H
#define FORMMODIFIERJEU_H

#include <QDialog>

namespace Ui {
class formModifierJeu;
}

class formModifierJeu : public QDialog
{
    Q_OBJECT

public:
    explicit formModifierJeu(QWidget *parent = 0);
    ~formModifierJeu();

private slots:
    void on_supprimerJeuButton_clicked();

    void on_modifierJeuButton_clicked();

    void on_parcourirButton_clicked();

    void on_nouveauAttribut_clicked();

    void changementAttribut();

    void on_ajouterButton_clicked();

    void on_supprimerButton_clicked();

    void on_modifierAttribut_clicked();

    void on_listAttributSelect_itemSelectionChanged();

    void on_listAttributDisp_itemSelectionChanged();

    void on_listValeurSelect_itemSelectionChanged();

    void on_listValeurDisp_itemSelectionChanged();

    void on_listCompetenceSelect_itemSelectionChanged();

    void on_listCompetenceDisp_itemSelectionChanged();

    void on_listInformationSelect_itemSelectionChanged();

    void on_listInformationDisp_itemSelectionChanged();

signals:
    void listJeuChanged();

private:
    Ui::formModifierJeu *ui;

    void Load();
};

#endif // FORMMODIFIERJEU_H
