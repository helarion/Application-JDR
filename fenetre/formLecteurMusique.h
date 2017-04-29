#ifndef FORMLECTEURMUSIQUE_H
#define FORMLECTEURMUSIQUE_H

#include <QDialog>
#include <QMediaPlayer>

namespace Ui {
class formLecteurMusique;
}

class formLecteurMusique : public QDialog
{
    Q_OBJECT

public:
    explicit formLecteurMusique(QWidget *parent = 0);
    ~formLecteurMusique();

private slots:

    void on_PauseButton_clicked();

    void on_PlayButton_clicked();

    void on_OuvrirButton_clicked();

    void on_StopButton_clicked();

    void on_ProgressSlider_sliderMoved(int position);

    void on_DurationChanged();

    void on_positionChanged(qint64 position);



    void on_verticalSlider_sliderMoved(int position);

    void on_PreviousButton_clicked();

    void on_NextButton_clicked();

private:
    Ui::formLecteurMusique *ui;
    QMediaPlayer* player;
    QMediaPlaylist* playlist;
    const int timer=0;
};

#endif // FORMLECTEURMUSIQUE_H
