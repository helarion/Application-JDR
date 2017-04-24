#ifndef formNouvelleCampagne_H
#define formNouvelleCampagne_H

#include <QDialog>

namespace Ui {
class formNouvelleCampagne;
}

class formNouvelleCampagne : public QDialog
{
    Q_OBJECT

public:
    explicit formNouvelleCampagne(QWidget *parent = 0);
    ~formNouvelleCampagne();

private slots:
    void on_creerButton_clicked();

    void on_supprimerButton_clicked();

    void on_annulerButton_clicked();

private:
    Ui::formNouvelleCampagne *ui;
};

#endif // formNouvelleCampagne_H
