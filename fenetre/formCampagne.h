#ifndef formCampagne_H
#define formCampagne_H

#include <QDialog>

namespace Ui {
class formCampagne;
}

class formCampagne : public QDialog
{
    Q_OBJECT

public:
    explicit formCampagne(QWidget *parent = 0);
    ~formCampagne();

private:
    Ui::formCampagne *ui;
};

#endif // formCampagne_H
