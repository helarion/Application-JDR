#ifndef FORMMODIFIERATTRIBUT_H
#define FORMMODIFIERATTRIBUT_H

#include <QDialog>

namespace Ui {
class formModifierAttribut;
}

class formModifierAttribut : public QDialog
{
    Q_OBJECT

public:
    explicit formModifierAttribut(QWidget *parent = 0);
    ~formModifierAttribut();

signals:
    void listAttributChanged();

private slots:
    void on_supprimerButton_clicked();

    void on_modifierAttributButton_clicked();

private:
    Ui::formModifierAttribut *ui;
};

#endif // FORMMODIFIERATTRIBUT_H
