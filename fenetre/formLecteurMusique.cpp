#include "formLecteurMusique.h"
#include "ui_formLecteurMusique.h"
#include <QSound>
#include <QMediaPlayer.h>
#include <QFileDialog>
#include <QMessageBox>


formLecteurMusique::formLecteurMusique(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::formLecteurMusique)
{
    ui->setupUi(this);
    player = new QMediaPlayer(this);
    connect(player,&QMediaPlayer::positionChanged,this, &formLecteurMusique::on_positionChanged);
    connect(player,&QMediaPlayer::positionChanged,this, &formLecteurMusique::on_DurationChanged);


}

formLecteurMusique::~formLecteurMusique()
{
    delete ui;
}

void formLecteurMusique::on_PauseButton_clicked()
{
    player->pause();
}

void formLecteurMusique::on_PlayButton_clicked()
{
    player->play();
}



void formLecteurMusique::on_OuvrirButton_clicked()
{
    QString fichier = QFileDialog::getOpenFileName(this,"Selectionner la musique :");
    qDebug() << player->errorString();
    player->setMedia(QUrl::fromLocalFile(fichier));
}

void formLecteurMusique::on_StopButton_clicked()
{
    player->stop();
}

void formLecteurMusique::on_ProgressSlider_sliderMoved(int position)
{
    player->setPosition(position);
}

void formLecteurMusique::on_DurationChanged()
{
  ui->ProgressSlider->setMaximum(player->duration());
}

void formLecteurMusique::on_positionChanged(qint64 position)
{
    ui->ProgressSlider->setValue(position);
}



void formLecteurMusique::on_verticalSlider_sliderMoved(int position)
{
    player->setVolume(position);
}
