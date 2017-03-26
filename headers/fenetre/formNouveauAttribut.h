#ifndef FORMNOUVEAUATTRIBUT_H
#define FORMNOUVEAUATTRIBUT_H

#include <QDialog>

namespace Ui {
class formNouveauAttribut;
}

class formNouveauAttribut : public QDialog
{
    Q_OBJECT

public:
    explicit formNouveauAttribut(QWidget *parent = 0);
    ~formNouveauAttribut();

private:
    Ui::formNouveauAttribut *ui;
};

#endif // FORMNOUVEAUATTRIBUT_H
