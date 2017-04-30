/********************************************************************************
** Form generated from reading UI file 'formLecteurMusique.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMLECTEURMUSIQUE_H
#define UI_FORMLECTEURMUSIQUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_formLecteurMusique
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QListWidget *listPlaylist;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *PlayButton;
    QPushButton *PauseButton;
    QPushButton *StopButton;
    QSlider *ProgressSlider;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *RandomCheckBox;
    QPushButton *PreviousButton;
    QPushButton *NextButton;
    QSlider *verticalSlider;
    QPushButton *ajouterPlaylistButton;

    void setupUi(QDialog *formLecteurMusique)
    {
        if (formLecteurMusique->objectName().isEmpty())
            formLecteurMusique->setObjectName(QStringLiteral("formLecteurMusique"));
        formLecteurMusique->resize(625, 321);
        verticalLayout = new QVBoxLayout(formLecteurMusique);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(formLecteurMusique);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        listPlaylist = new QListWidget(formLecteurMusique);
        listPlaylist->setObjectName(QStringLiteral("listPlaylist"));
        listPlaylist->setFont(font);

        verticalLayout->addWidget(listPlaylist);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 0, -1, -1);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        PlayButton = new QPushButton(formLecteurMusique);
        PlayButton->setObjectName(QStringLiteral("PlayButton"));

        horizontalLayout->addWidget(PlayButton);

        PauseButton = new QPushButton(formLecteurMusique);
        PauseButton->setObjectName(QStringLiteral("PauseButton"));

        horizontalLayout->addWidget(PauseButton);

        StopButton = new QPushButton(formLecteurMusique);
        StopButton->setObjectName(QStringLiteral("StopButton"));

        horizontalLayout->addWidget(StopButton);


        verticalLayout_2->addLayout(horizontalLayout);

        ProgressSlider = new QSlider(formLecteurMusique);
        ProgressSlider->setObjectName(QStringLiteral("ProgressSlider"));
        ProgressSlider->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(ProgressSlider);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        RandomCheckBox = new QCheckBox(formLecteurMusique);
        RandomCheckBox->setObjectName(QStringLiteral("RandomCheckBox"));

        horizontalLayout_2->addWidget(RandomCheckBox);

        PreviousButton = new QPushButton(formLecteurMusique);
        PreviousButton->setObjectName(QStringLiteral("PreviousButton"));

        horizontalLayout_2->addWidget(PreviousButton);

        NextButton = new QPushButton(formLecteurMusique);
        NextButton->setObjectName(QStringLiteral("NextButton"));

        horizontalLayout_2->addWidget(NextButton);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalSlider = new QSlider(formLecteurMusique);
        verticalSlider->setObjectName(QStringLiteral("verticalSlider"));
        verticalSlider->setValue(99);
        verticalSlider->setOrientation(Qt::Vertical);

        horizontalLayout_3->addWidget(verticalSlider);


        verticalLayout->addLayout(horizontalLayout_3);

        ajouterPlaylistButton = new QPushButton(formLecteurMusique);
        ajouterPlaylistButton->setObjectName(QStringLiteral("ajouterPlaylistButton"));

        verticalLayout->addWidget(ajouterPlaylistButton);


        retranslateUi(formLecteurMusique);

        QMetaObject::connectSlotsByName(formLecteurMusique);
    } // setupUi

    void retranslateUi(QDialog *formLecteurMusique)
    {
        formLecteurMusique->setWindowTitle(QApplication::translate("formLecteurMusique", "Lecteur playlist", 0));
        label->setText(QApplication::translate("formLecteurMusique", "Lecteur de son", 0));
        PlayButton->setText(QApplication::translate("formLecteurMusique", "Play", 0));
        PauseButton->setText(QApplication::translate("formLecteurMusique", "Pause", 0));
        StopButton->setText(QApplication::translate("formLecteurMusique", "Stop", 0));
        RandomCheckBox->setText(QApplication::translate("formLecteurMusique", "Al\303\251atoire", 0));
        PreviousButton->setText(QApplication::translate("formLecteurMusique", "<--", 0));
        NextButton->setText(QApplication::translate("formLecteurMusique", "-->", 0));
        ajouterPlaylistButton->setText(QApplication::translate("formLecteurMusique", "Ajouiter Playlist", 0));
    } // retranslateUi

};

namespace Ui {
    class formLecteurMusique: public Ui_formLecteurMusique {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMLECTEURMUSIQUE_H
