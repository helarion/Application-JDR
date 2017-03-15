#ifndef FEUILLEPERSONNAGE_H
#define FEUILLEPERSONNAGE_H

#include <QDialog>

namespace Ui {
class FeuillePersonnage;
}

class FeuillePersonnage : public QDialog
{
    Q_OBJECT

public:
    explicit FeuillePersonnage(QWidget *parent = 0);
    ~FeuillePersonnage();

private:
    Ui::FeuillePersonnage *ui;
};

#endif // FEUILLEPERSONNAGE_H
