#ifndef NOUVELLECAMPAGNE_H
#define NOUVELLECAMPAGNE_H

#include <QDialog>

namespace Ui {
class NouvelleCampagne;
}

class NouvelleCampagne : public QDialog
{
    Q_OBJECT

public:
    explicit NouvelleCampagne(QWidget *parent = 0);
    ~NouvelleCampagne();

private:
    Ui::NouvelleCampagne *ui;
};

#endif // NOUVELLECAMPAGNE_H
