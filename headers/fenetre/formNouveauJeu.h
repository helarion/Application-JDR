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

private:
    Ui::formNouveauJeu *ui;
};

#endif // formNouveauJeu_H
