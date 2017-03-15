#ifndef NOUVEAUJeu_H
#define NOUVEAUJeu_H

#include <QDialog>

namespace Ui {
class NouveauJeu;
}

class NouveauJeu : public QDialog
{
    Q_OBJECT

public:
    explicit NouveauJeu(QWidget *parent = 0);
    ~NouveauJeu();

private slots:

private:
    Ui::NouveauJeu *ui;
};

#endif // NOUVEAUJeu_H
