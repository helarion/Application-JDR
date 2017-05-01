#ifndef FORMMODIFIERPERSONNAGE_H
#define FORMMODIFIERPERSONNAGE_H

#include <QDialog>

namespace Ui {
class formModifierPersonnage;
}

class formModifierPersonnage : public QDialog
{
    Q_OBJECT

public:
    explicit formModifierPersonnage(QWidget *parent = 0);
    ~formModifierPersonnage();

signals:
    void listPersonnageChanged();

private slots:
    void on_pagePrecedenteButton_clicked();

    void on_pageSuivanteButton_clicked();

    void on_modifierButton_clicked();

private:
    Ui::formModifierPersonnage *ui;
    QVector<QWidget*> listEdit;
};

#endif // FORMMODIFIERPERSONNAGE_H
