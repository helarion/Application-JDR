#ifndef CONTINUERSTYLE_H
#define CONTINUERSTYLE_H

#include <QDialog>

namespace Ui {
class ContinuerStyle;
}

class ContinuerStyle : public QDialog
{
    Q_OBJECT

public:
    explicit ContinuerStyle(QWidget *parent = 0);
    ~ContinuerStyle();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ContinuerStyle *ui;
};

#endif // CONTINUERSTYLE_H
