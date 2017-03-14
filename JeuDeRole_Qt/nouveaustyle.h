#ifndef NOUVEAUSTYLE_H
#define NOUVEAUSTYLE_H

#include <QDialog>

namespace Ui {
class NouveauStyle;
}

class NouveauStyle : public QDialog
{
    Q_OBJECT

public:
    explicit NouveauStyle(QWidget *parent = 0);
    ~NouveauStyle();

private slots:

private:
    Ui::NouveauStyle *ui;
};

#endif // NOUVEAUSTYLE_H
