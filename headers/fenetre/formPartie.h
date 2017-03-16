#ifndef formPartie_H
#define formPartie_H

#include <QDialog>

namespace Ui {
class formPartie;
}

class formPartie : public QDialog
{
    Q_OBJECT

public:
    explicit formPartie(QWidget *parent = 0);
    ~formPartie();

private:
    Ui::formPartie *ui;
};

#endif // formPartie_H
