#ifndef FORMMODIFIERPERSONNAGE_H
#define FORMMODIFIERPERSONNAGE_H

#include <QDialog>

namespace Ui {
class formModifierPersonnage;
}

class formModifierPersonnage : public QDialog
{
    Q_OBJECT

public:
    explicit formModifierPersonnage(QWidget *parent = 0);
    ~formModifierPersonnage();

private:
    Ui::formModifierPersonnage *ui;
};

#endif // FORMMODIFIERPERSONNAGE_H
