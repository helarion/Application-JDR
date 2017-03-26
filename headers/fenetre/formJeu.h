#ifndef formJeu_H
#define formJeu_H

#include <QDialog>

namespace Ui {
class formJeu;
}

class formJeu : public QWidget
{
    Q_OBJECT

public:
    explicit formJeu(QWidget *parent = 0);
    ~formJeu();

private slots:
    void on_nouveauJeuButton_clicked();

private:
    Ui::formJeu *ui;
};

#endif // formJeu_H
