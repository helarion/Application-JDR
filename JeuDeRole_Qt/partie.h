#ifndef PARTIE_H
#define PARTIE_H

#include <QDialog>

namespace Ui {
class Partie;
}

class Partie : public QDialog
{
    Q_OBJECT

public:
    explicit Partie(QWidget *parent = 0);
    ~Partie();

private:
    Ui::Partie *ui;
};

#endif // PARTIE_H
