#ifndef formNouvelleCampagne_H
#define formNouvelleCampagne_H

#include <QDialog>

namespace Ui {
class formNouvelleCampagne;
}

class formNouvelleCampagne : public QDialog
{
    Q_OBJECT

public:
    explicit formNouvelleCampagne(QWidget *parent = 0);
    ~formNouvelleCampagne();

private:
    Ui::formNouvelleCampagne *ui;
};

#endif // formNouvelleCampagne_H
