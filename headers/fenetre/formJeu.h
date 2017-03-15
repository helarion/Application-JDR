#ifndef Jeu_H
#define Jeu_H

#include <QDialog>

namespace Ui {
class Jeu;
}

class Jeu : public QDialog
{
    Q_OBJECT

public:
    explicit Jeu(QWidget *parent = 0);
    ~Jeu();

private:
    Ui::Jeu *ui;
};

#endif // Jeu_H
