#ifndef formNouvellePartie_H
#define formNouvellePartie_H

#include <QDialog>

namespace Ui {
class formNouvellePartie;
}

class formNouvellePartie : public QDialog
{
    Q_OBJECT

public:
    explicit formNouvellePartie(QWidget *parent = 0);
    ~formNouvellePartie();

private:
    Ui::formNouvellePartie *ui;
};

#endif // formNouvellePartie_H
