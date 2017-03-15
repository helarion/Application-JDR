#ifndef CONTINUERJeu_H
#define CONTINUERJeu_H

#include <QDialog>

namespace Ui {
class ContinuerJeu;
}

class ContinuerJeu : public QDialog
{
    Q_OBJECT

public:
    explicit ContinuerJeu(QWidget *parent = 0);
    ~ContinuerJeu();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ContinuerJeu *ui;
};

#endif // CONTINUERJeu_H
