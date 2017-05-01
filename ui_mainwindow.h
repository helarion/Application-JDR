/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_8;
    QStackedWidget *contentStack;
    QWidget *Jeux;
    QGridLayout *gridLayout_11;
    QWidget *Jeu;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QListWidget *listJeu;
    QVBoxLayout *verticalLayout_2;
    QLabel *themeJeu;
    QPushButton *selectionnerJeuButton;
    QPushButton *modifierJeuButton;
    QPushButton *nouveauJeuButton;
    QWidget *Campagnes;
    QGridLayout *gridLayout_10;
    QWidget *Campagne;
    QGridLayout *test;
    QListWidget *listCampagne;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_4;
    QPushButton *selectionnerCampagneButton;
    QPushButton *modifierCampagneButton;
    QPushButton *nouveauCampagneButton;
    QWidget *Parties;
    QGridLayout *gridLayout_13;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QListWidget *listPartie;
    QVBoxLayout *verticalLayout_3;
    QPushButton *selectionnerPartieButton;
    QPushButton *modifierPartieButton;
    QPushButton *ajouterPartieButton;
    QWidget *Personnages;
    QGridLayout *gridLayout_14;
    QLabel *label_7;
    QLabel *titreLabel;
    QTextEdit *resumeEdit;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_8;
    QListWidget *listPersonnage;
    QVBoxLayout *verticalLayout_7;
    QPushButton *ajouterPersonnageButton;
    QPushButton *modifierPersonnageButton;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *modiferResumeButton;
    QWidget *page_5;
    QHBoxLayout *horizontalLayout;
    QPushButton *playlistButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *retourButton;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(687, 595);
        QIcon icon;
        icon.addFile(QStringLiteral("d20.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_8 = new QVBoxLayout(centralWidget);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        contentStack = new QStackedWidget(centralWidget);
        contentStack->setObjectName(QStringLiteral("contentStack"));
        Jeux = new QWidget();
        Jeux->setObjectName(QStringLiteral("Jeux"));
        gridLayout_11 = new QGridLayout(Jeux);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        Jeu = new QWidget(Jeux);
        Jeu->setObjectName(QStringLiteral("Jeu"));
        verticalLayout_5 = new QVBoxLayout(Jeu);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_2 = new QLabel(Jeu);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setPointSize(20);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        listJeu = new QListWidget(Jeu);
        listJeu->setObjectName(QStringLiteral("listJeu"));
        listJeu->setMinimumSize(QSize(0, 200));
        listJeu->setMaximumSize(QSize(500, 16777215));

        horizontalLayout_3->addWidget(listJeu);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        themeJeu = new QLabel(Jeu);
        themeJeu->setObjectName(QStringLiteral("themeJeu"));
        themeJeu->setMinimumSize(QSize(300, 300));
        themeJeu->setMaximumSize(QSize(300, 300));

        verticalLayout_2->addWidget(themeJeu);

        selectionnerJeuButton = new QPushButton(Jeu);
        selectionnerJeuButton->setObjectName(QStringLiteral("selectionnerJeuButton"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        selectionnerJeuButton->setFont(font1);

        verticalLayout_2->addWidget(selectionnerJeuButton);

        modifierJeuButton = new QPushButton(Jeu);
        modifierJeuButton->setObjectName(QStringLiteral("modifierJeuButton"));

        verticalLayout_2->addWidget(modifierJeuButton);

        nouveauJeuButton = new QPushButton(Jeu);
        nouveauJeuButton->setObjectName(QStringLiteral("nouveauJeuButton"));

        verticalLayout_2->addWidget(nouveauJeuButton);


        horizontalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_5->addLayout(horizontalLayout_3);


        gridLayout_11->addWidget(Jeu, 0, 0, 1, 1);

        contentStack->addWidget(Jeux);
        Campagnes = new QWidget();
        Campagnes->setObjectName(QStringLiteral("Campagnes"));
        gridLayout_10 = new QGridLayout(Campagnes);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        Campagne = new QWidget(Campagnes);
        Campagne->setObjectName(QStringLiteral("Campagne"));
        test = new QGridLayout(Campagne);
        test->setSpacing(6);
        test->setContentsMargins(11, 11, 11, 11);
        test->setObjectName(QStringLiteral("test"));
        listCampagne = new QListWidget(Campagne);
        listCampagne->setObjectName(QStringLiteral("listCampagne"));
        listCampagne->setMaximumSize(QSize(500, 16777215));

        test->addWidget(listCampagne, 2, 0, 1, 1);

        label_3 = new QLabel(Campagne);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        test->addWidget(label_3, 1, 0, 1, 2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        selectionnerCampagneButton = new QPushButton(Campagne);
        selectionnerCampagneButton->setObjectName(QStringLiteral("selectionnerCampagneButton"));

        verticalLayout_4->addWidget(selectionnerCampagneButton);

        modifierCampagneButton = new QPushButton(Campagne);
        modifierCampagneButton->setObjectName(QStringLiteral("modifierCampagneButton"));

        verticalLayout_4->addWidget(modifierCampagneButton);

        nouveauCampagneButton = new QPushButton(Campagne);
        nouveauCampagneButton->setObjectName(QStringLiteral("nouveauCampagneButton"));

        verticalLayout_4->addWidget(nouveauCampagneButton);


        test->addLayout(verticalLayout_4, 2, 1, 1, 1);


        gridLayout_10->addWidget(Campagne, 0, 0, 1, 1);

        contentStack->addWidget(Campagnes);
        Parties = new QWidget();
        Parties->setObjectName(QStringLiteral("Parties"));
        gridLayout_13 = new QGridLayout(Parties);
        gridLayout_13->setSpacing(6);
        gridLayout_13->setContentsMargins(11, 11, 11, 11);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 0, -1, -1);
        label_4 = new QLabel(Parties);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        verticalLayout->addWidget(label_4, 0, Qt::AlignHCenter);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, -1, -1);
        label_6 = new QLabel(Parties);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_2->addWidget(label_6);

        listPartie = new QListWidget(Parties);
        listPartie->setObjectName(QStringLiteral("listPartie"));
        listPartie->setMinimumSize(QSize(0, 0));
        listPartie->setMaximumSize(QSize(400, 16777215));

        horizontalLayout_2->addWidget(listPartie);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, -1, -1, -1);
        selectionnerPartieButton = new QPushButton(Parties);
        selectionnerPartieButton->setObjectName(QStringLiteral("selectionnerPartieButton"));

        verticalLayout_3->addWidget(selectionnerPartieButton);

        modifierPartieButton = new QPushButton(Parties);
        modifierPartieButton->setObjectName(QStringLiteral("modifierPartieButton"));

        verticalLayout_3->addWidget(modifierPartieButton);

        ajouterPartieButton = new QPushButton(Parties);
        ajouterPartieButton->setObjectName(QStringLiteral("ajouterPartieButton"));

        verticalLayout_3->addWidget(ajouterPartieButton);


        horizontalLayout_2->addLayout(verticalLayout_3);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout_13->addLayout(verticalLayout, 1, 1, 1, 1);

        contentStack->addWidget(Parties);
        Personnages = new QWidget();
        Personnages->setObjectName(QStringLiteral("Personnages"));
        gridLayout_14 = new QGridLayout(Personnages);
        gridLayout_14->setSpacing(6);
        gridLayout_14->setContentsMargins(11, 11, 11, 11);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        label_7 = new QLabel(Personnages);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_14->addWidget(label_7, 1, 0, 1, 1);

        titreLabel = new QLabel(Personnages);
        titreLabel->setObjectName(QStringLiteral("titreLabel"));
        titreLabel->setFont(font);

        gridLayout_14->addWidget(titreLabel, 0, 0, 1, 1, Qt::AlignHCenter|Qt::AlignTop);

        resumeEdit = new QTextEdit(Personnages);
        resumeEdit->setObjectName(QStringLiteral("resumeEdit"));

        gridLayout_14->addWidget(resumeEdit, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, -1, 0, -1);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(-1, -1, 0, -1);
        label_8 = new QLabel(Personnages);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_6->addWidget(label_8);

        listPersonnage = new QListWidget(Personnages);
        listPersonnage->setObjectName(QStringLiteral("listPersonnage"));

        verticalLayout_6->addWidget(listPersonnage);


        horizontalLayout_4->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        ajouterPersonnageButton = new QPushButton(Personnages);
        ajouterPersonnageButton->setObjectName(QStringLiteral("ajouterPersonnageButton"));

        verticalLayout_7->addWidget(ajouterPersonnageButton);

        modifierPersonnageButton = new QPushButton(Personnages);
        modifierPersonnageButton->setObjectName(QStringLiteral("modifierPersonnageButton"));

        verticalLayout_7->addWidget(modifierPersonnageButton);


        horizontalLayout_4->addLayout(verticalLayout_7);


        gridLayout_14->addLayout(horizontalLayout_4, 4, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, -1, -1);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        modiferResumeButton = new QPushButton(Personnages);
        modiferResumeButton->setObjectName(QStringLiteral("modiferResumeButton"));

        horizontalLayout_5->addWidget(modiferResumeButton);


        gridLayout_14->addLayout(horizontalLayout_5, 3, 0, 1, 1);

        contentStack->addWidget(Personnages);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        contentStack->addWidget(page_5);

        verticalLayout_8->addWidget(contentStack);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        playlistButton = new QPushButton(centralWidget);
        playlistButton->setObjectName(QStringLiteral("playlistButton"));

        horizontalLayout->addWidget(playlistButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        retourButton = new QPushButton(centralWidget);
        retourButton->setObjectName(QStringLiteral("retourButton"));

        horizontalLayout->addWidget(retourButton);


        verticalLayout_8->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 687, 25));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        contentStack->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Jeu de role", 0));
        label_2->setText(QApplication::translate("MainWindow", "S\303\251lectionner un jeu existant :", 0));
        themeJeu->setText(QString());
        selectionnerJeuButton->setText(QApplication::translate("MainWindow", "Selectionner", 0));
        modifierJeuButton->setText(QApplication::translate("MainWindow", "Modifier", 0));
        nouveauJeuButton->setText(QApplication::translate("MainWindow", "Nouveau", 0));
        label_3->setText(QApplication::translate("MainWindow", "Campagne", 0));
        selectionnerCampagneButton->setText(QApplication::translate("MainWindow", "Selectionner", 0));
        modifierCampagneButton->setText(QApplication::translate("MainWindow", "Modifier", 0));
        nouveauCampagneButton->setText(QApplication::translate("MainWindow", "Nouveau", 0));
        label_4->setText(QApplication::translate("MainWindow", "Parties :", 0));
        label_6->setText(QApplication::translate("MainWindow", "Liste :", 0));
        selectionnerPartieButton->setText(QApplication::translate("MainWindow", "Selectionner", 0));
        modifierPartieButton->setText(QApplication::translate("MainWindow", "Modifier", 0));
        ajouterPartieButton->setText(QApplication::translate("MainWindow", "Ajouter", 0));
        label_7->setText(QApplication::translate("MainWindow", "R\303\251sum\303\251:", 0));
        titreLabel->setText(QApplication::translate("MainWindow", "Titre", 0));
        label_8->setText(QApplication::translate("MainWindow", "Personnages :", 0));
        ajouterPersonnageButton->setText(QApplication::translate("MainWindow", "Ajouter", 0));
        modifierPersonnageButton->setText(QApplication::translate("MainWindow", "Modifier", 0));
        modiferResumeButton->setText(QApplication::translate("MainWindow", "Sauvegarder", 0));
        playlistButton->setText(QApplication::translate("MainWindow", "Playlist", 0));
        retourButton->setText(QApplication::translate("MainWindow", "Retour", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
