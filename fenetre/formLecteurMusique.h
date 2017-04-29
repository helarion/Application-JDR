#ifndef FORMLECTEURMUSIQUE_H
#define FORMLECTEURMUSIQUE_H

#include <QDialog>
#include <QMediaPlayer>
#include <QListWidgetItem>

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

    void on_StopButton_clicked();

    void Load();

    void on_ProgressSlider_sliderMoved(int position);

    void on_DurationChanged();

    void on_positionChanged(qint64 position);

    void on_SongChanged();

    void on_verticalSlider_sliderMoved(int position);

    void on_PreviousButton_clicked();

    void on_NextButton_clicked();

    void on_listPlaylist_itemDoubleClicked(QListWidgetItem *item);

    void on_ajouterPlaylistButton_clicked();

private:
    Ui::formLecteurMusique *ui;
    QMediaPlayer* player;
    QMediaPlaylist* playlist;
    int compteur;
};

#endif // FORMLECTEURMUSIQUE_H
