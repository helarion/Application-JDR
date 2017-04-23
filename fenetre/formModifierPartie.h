#ifndef FORMMODIFIERPARTIE_H
#define FORMMODIFIERPARTIE_H

#include <QDialog>

namespace Ui {
class formModifierPartie;
}

class formModifierPartie : public QDialog
{
    Q_OBJECT

public:
    explicit formModifierPartie(QWidget *parent = 0);
    ~formModifierPartie();

private:
    Ui::formModifierPartie *ui;
};

#endif // FORMMODIFIERPARTIE_H
