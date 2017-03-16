#ifndef formFeuillePersonnage_H
#define formFeuillePersonnage_H

#include <QDialog>

namespace Ui {
class formFeuillePersonnage;
}

class formFeuillePersonnage : public QDialog
{
    Q_OBJECT

public:
    explicit formFeuillePersonnage(QWidget *parent = 0);
    ~formFeuillePersonnage();

private:
    Ui::formFeuillePersonnage *ui;
};

#endif // formFeuillePersonnage_H
