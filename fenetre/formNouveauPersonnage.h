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

private slots:
    void on_ajouterButton_clicked();

    void on_pagePrecedenteButton_clicked();

    void on_pageSuivanteButton_clicked();

signals:
    void listPersonnageChanged();

private:
    Ui::formNouveauPersonnage *ui;
    QVector<QWidget*> listEdit;
};

#endif // FORMNOUVEAUPERSONNAGE_H
