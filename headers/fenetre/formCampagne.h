#ifndef CAMPAGNE_H
#define CAMPAGNE_H

#include <QDialog>

namespace Ui {
class Campagne;
}

class Campagne : public QDialog
{
    Q_OBJECT

public:
    explicit Campagne(QWidget *parent = 0);
    ~Campagne();

private:
    Ui::Campagne *ui;
};

#endif // CAMPAGNE_H
