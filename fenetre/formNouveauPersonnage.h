#ifndef FORMNOUVEAUPERSONNAGE_H
#define FORMNOUVEAUPERSONNAGE_H

#include <QDialog>

namespace Ui {
class formNouveauPersonnage;
}

class formNouveauPersonnage : public QDialog
{
    Q_OBJECT

public:
    explicit formNouveauPersonnage(QWidget *parent = 0);
    ~formNouveauPersonnage();

private:
    Ui::formNouveauPersonnage *ui;
};

#endif // FORMNOUVEAUPERSONNAGE_H
