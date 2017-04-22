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

    void on_CreerJeu_clicked();

    void on_parcourirButton_clicked();

    void on_nouveauAttributButton_clicked();

    void changementAttribut();

    void on_ajouterButton_clicked();

    void on_retirerButton_clicked();

    void on_supprimerAttributButton_clicked();

signals:

    void listJeuChanged();

private:
    Ui::formNouveauJeu *ui;
};

#endif // formNouveauJeu_H
