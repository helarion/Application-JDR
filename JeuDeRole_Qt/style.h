#ifndef STYLE_H
#define STYLE_H

#include <QDialog>

namespace Ui {
class Style;
}

class Style : public QDialog
{
    Q_OBJECT

public:
    explicit Style(QWidget *parent = 0);
    ~Style();

private:
    Ui::Style *ui;
};

#endif // STYLE_H
