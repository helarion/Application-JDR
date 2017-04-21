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

signals:
    void listJeuChanged();

private:
    Ui::formModifierJeu *ui;
};

#endif // FORMMODIFIERJEU_H
