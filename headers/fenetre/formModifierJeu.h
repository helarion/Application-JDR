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

private:
    Ui::formModifierJeu *ui;
};

#endif // FORMMODIFIERJEU_H
