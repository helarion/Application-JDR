#ifndef FORMMODIFIERCAMPAGNE_H
#define FORMMODIFIERCAMPAGNE_H

#include <QDialog>

namespace Ui {
class formModifierCampagne;
}

class formModifierCampagne : public QDialog
{
    Q_OBJECT

public:
    explicit formModifierCampagne(QWidget *parent = 0);
    ~formModifierCampagne();

private slots:
    void on_supprimerButton_clicked();

    void on_modifierCampagneButton_clicked();

signals:
    void listCampagneChanged();

private:
    Ui::formModifierCampagne *ui;
};

#endif // FORMMODIFIERCAMPAGNE_H
