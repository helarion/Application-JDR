#ifndef FORMMODIFIERCAMPAGNE_H
#define FORMMODIFIERCAMPAGNE_H

#include <QDialog>

namespace Ui {
class formModifierCampagne;
}

class formModifierCampagne : public QDialog
{
    Q_OBJECT

public:
    explicit formModifierCampagne(QWidget *parent = 0);
    ~formModifierCampagne();

private:
    Ui::formModifierCampagne *ui;
};

#endif // FORMMODIFIERCAMPAGNE_H
