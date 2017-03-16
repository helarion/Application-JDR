#ifndef formJeu_H
#define formJeu_H

#include <QDialog>

namespace Ui {
class formJeu;
}

class formJeu : public QDialog
{
    Q_OBJECT

public:
    explicit formJeu(QWidget *parent = 0);
    ~formJeu();

private:
    Ui::formJeu *ui;
};

#endif // formJeu_H
