#ifndef INVENTAIRE_H
#define INVENTAIRE_H

#include <QDialog>

namespace Ui {
class Inventaire;
}

class Inventaire : public QDialog
{
    Q_OBJECT

public:
    explicit Inventaire(QWidget *parent = 0);
    ~Inventaire();

private:
    Ui::Inventaire *ui;
};

#endif // INVENTAIRE_H
