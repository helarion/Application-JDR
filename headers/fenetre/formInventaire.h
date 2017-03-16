#ifndef formInventaire_H
#define formInventaire_H

#include <QDialog>

namespace Ui {
class formInventaire;
}

class formInventaire : public QDialog
{
    Q_OBJECT

public:
    explicit formInventaire(QWidget *parent = 0);
    ~formInventaire();

private:
    Ui::formInventaire *ui;
};

#endif // formInventaire_H
