#ifndef FORMJEU_H
#define FORMJEU_H

#include <QWidget>

namespace Ui {
class FormJeu;
}

class FormJeu : public QWidget
{
    Q_OBJECT

public:
    explicit FormJeu(QWidget *parent = 0);
    ~FormJeu();

private:
    Ui::FormJeu *ui;
};

#endif // FORMJEU_H
