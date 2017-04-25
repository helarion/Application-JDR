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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
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
    QGridLayout *gridLayout_12;
    QPushButton *retourButton;
    QStackedWidget *contentStack;
    QWidget *MenuPrincipal;
    QGridLayout *gridLayout_9;
    QWidget *Menu;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *jeuButton;
    QPushButton *autreButton;
    QLabel *label;
    QWidget *Jeux;
    QGridLayout *gridLayout_11;
    QWidget *Jeu;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_2;
    QPushButton *selectionnerJeuButton;
    QPushButton *modifierJeuButton;
    QPushButton *nouveauJeuButton;
    QListWidget *listJeu;
    QLabel *themeJeu;
    QLabel *label_2;
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
    QLabel *label_5;
    QTextEdit *resumePartie;
    QWidget *Personnages;
    QGridLayout *gridLayout_14;
    QLabel *label_7;
    QLabel *label_23;
    QLineEdit *AgeEdit;
    QLabel *label_9;
    QLineEdit *PrenomPersonnageEdit;
    QLabel *label_22;
    QLineEdit *RaceEdit;
    QLabel *label_20;
    QLineEdit *NiveauEdit;
    QLabel *label_12;
    QLineEdit *NomEdit;
    QLabel *label_8;
    QLineEdit *ClasseEdit;
    QLabel *label_18;
    QLineEdit *SexeEdit;
    QLabel *label_24;
    QLabel *SanteLabel;
    QLineEdit *PVactuelEdit;
    QLabel *label_16;
    QLineEdit *PVmaxEdit;
    QLabel *label_11;
    QLabel *Attribut_1Label;
    QLineEdit *Attribut_1Edit;
    QLabel *Attribut_4Label;
    QLineEdit *Attribut_4Edit;
    QListWidget *CompetenceList;
    QLabel *Attribut_2Label;
    QLineEdit *Attribut_2Edit;
    QLabel *Attribut_5Label;
    QLineEdit *Attribut_5Edit;
    QLabel *Attribut_3Label;
    QLineEdit *Attribut_3Edit;
    QLabel *Attribut_6Label;
    QLineEdit *Attribut_6Edit;
    QLabel *label_19;
    QPushButton *InventaireButton;
    QTextEdit *DescriptifEdit;
    QWidget *page_5;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(795, 492);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_12 = new QGridLayout(centralWidget);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        retourButton = new QPushButton(centralWidget);
        retourButton->setObjectName(QStringLiteral("retourButton"));

        gridLayout_12->addWidget(retourButton, 1, 0, 1, 1, Qt::AlignRight);

        contentStack = new QStackedWidget(centralWidget);
        contentStack->setObjectName(QStringLiteral("contentStack"));
        MenuPrincipal = new QWidget();
        MenuPrincipal->setObjectName(QStringLiteral("MenuPrincipal"));
        gridLayout_9 = new QGridLayout(MenuPrincipal);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        Menu = new QWidget(MenuPrincipal);
        Menu->setObjectName(QStringLiteral("Menu"));
        gridLayout = new QGridLayout(Menu);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        jeuButton = new QPushButton(Menu);
        jeuButton->setObjectName(QStringLiteral("jeuButton"));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        jeuButton->setFont(font);

        horizontalLayout->addWidget(jeuButton);

        autreButton = new QPushButton(Menu);
        autreButton->setObjectName(QStringLiteral("autreButton"));

        horizontalLayout->addWidget(autreButton);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        label = new QLabel(Menu);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(17);
        font1.setItalic(false);
        label->setFont(font1);
        label->setTextFormat(Qt::AutoText);
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);


        gridLayout_9->addWidget(Menu, 0, 0, 1, 1);

        contentStack->addWidget(MenuPrincipal);
        Jeux = new QWidget();
        Jeux->setObjectName(QStringLiteral("Jeux"));
        gridLayout_11 = new QGridLayout(Jeux);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        Jeu = new QWidget(Jeux);
        Jeu->setObjectName(QStringLiteral("Jeu"));
        gridLayout_4 = new QGridLayout(Jeu);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        selectionnerJeuButton = new QPushButton(Jeu);
        selectionnerJeuButton->setObjectName(QStringLiteral("selectionnerJeuButton"));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        selectionnerJeuButton->setFont(font2);

        verticalLayout_2->addWidget(selectionnerJeuButton);

        modifierJeuButton = new QPushButton(Jeu);
        modifierJeuButton->setObjectName(QStringLiteral("modifierJeuButton"));

        verticalLayout_2->addWidget(modifierJeuButton);

        nouveauJeuButton = new QPushButton(Jeu);
        nouveauJeuButton->setObjectName(QStringLiteral("nouveauJeuButton"));

        verticalLayout_2->addWidget(nouveauJeuButton);


        gridLayout_4->addLayout(verticalLayout_2, 2, 1, 1, 1);

        listJeu = new QListWidget(Jeu);
        listJeu->setObjectName(QStringLiteral("listJeu"));

        gridLayout_4->addWidget(listJeu, 2, 0, 1, 1);

        themeJeu = new QLabel(Jeu);
        themeJeu->setObjectName(QStringLiteral("themeJeu"));
        themeJeu->setMinimumSize(QSize(300, 300));
        themeJeu->setMaximumSize(QSize(300, 300));

        gridLayout_4->addWidget(themeJeu, 2, 2, 1, 1);

        label_2 = new QLabel(Jeu);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font3;
        font3.setPointSize(20);
        label_2->setFont(font3);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_2, 0, 0, 1, 2);


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

        test->addWidget(listCampagne, 2, 0, 1, 1);

        label_3 = new QLabel(Campagne);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font4;
        font4.setPointSize(14);
        label_3->setFont(font4);
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
        label_4->setFont(font3);

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

        label_5 = new QLabel(Parties);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout->addWidget(label_5);

        resumePartie = new QTextEdit(Parties);
        resumePartie->setObjectName(QStringLiteral("resumePartie"));

        verticalLayout->addWidget(resumePartie);


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

        gridLayout_14->addWidget(label_7, 0, 7, 1, 3);

        label_23 = new QLabel(Personnages);
        label_23->setObjectName(QStringLiteral("label_23"));

        gridLayout_14->addWidget(label_23, 0, 10, 1, 1);

        AgeEdit = new QLineEdit(Personnages);
        AgeEdit->setObjectName(QStringLiteral("AgeEdit"));

        gridLayout_14->addWidget(AgeEdit, 0, 11, 1, 1);

        label_9 = new QLabel(Personnages);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_14->addWidget(label_9, 1, 0, 1, 1);

        PrenomPersonnageEdit = new QLineEdit(Personnages);
        PrenomPersonnageEdit->setObjectName(QStringLiteral("PrenomPersonnageEdit"));

        gridLayout_14->addWidget(PrenomPersonnageEdit, 1, 1, 1, 5);

        label_22 = new QLabel(Personnages);
        label_22->setObjectName(QStringLiteral("label_22"));

        gridLayout_14->addWidget(label_22, 1, 6, 1, 2);

        RaceEdit = new QLineEdit(Personnages);
        RaceEdit->setObjectName(QStringLiteral("RaceEdit"));

        gridLayout_14->addWidget(RaceEdit, 1, 8, 1, 2);

        label_20 = new QLabel(Personnages);
        label_20->setObjectName(QStringLiteral("label_20"));

        gridLayout_14->addWidget(label_20, 1, 10, 1, 1);

        NiveauEdit = new QLineEdit(Personnages);
        NiveauEdit->setObjectName(QStringLiteral("NiveauEdit"));

        gridLayout_14->addWidget(NiveauEdit, 1, 11, 1, 1);

        label_12 = new QLabel(Personnages);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_14->addWidget(label_12, 2, 0, 1, 1);

        NomEdit = new QLineEdit(Personnages);
        NomEdit->setObjectName(QStringLiteral("NomEdit"));

        gridLayout_14->addWidget(NomEdit, 2, 1, 1, 5);

        label_8 = new QLabel(Personnages);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_14->addWidget(label_8, 2, 6, 1, 2);

        ClasseEdit = new QLineEdit(Personnages);
        ClasseEdit->setObjectName(QStringLiteral("ClasseEdit"));

        gridLayout_14->addWidget(ClasseEdit, 2, 8, 1, 2);

        label_18 = new QLabel(Personnages);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout_14->addWidget(label_18, 2, 10, 1, 1);

        SexeEdit = new QLineEdit(Personnages);
        SexeEdit->setObjectName(QStringLiteral("SexeEdit"));

        gridLayout_14->addWidget(SexeEdit, 2, 11, 1, 1);

        label_24 = new QLabel(Personnages);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setAlignment(Qt::AlignCenter);

        gridLayout_14->addWidget(label_24, 3, 0, 1, 12);

        SanteLabel = new QLabel(Personnages);
        SanteLabel->setObjectName(QStringLiteral("SanteLabel"));

        gridLayout_14->addWidget(SanteLabel, 4, 2, 1, 3);

        PVactuelEdit = new QLineEdit(Personnages);
        PVactuelEdit->setObjectName(QStringLiteral("PVactuelEdit"));

        gridLayout_14->addWidget(PVactuelEdit, 4, 5, 1, 1);

        label_16 = new QLabel(Personnages);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_14->addWidget(label_16, 4, 6, 1, 1);

        PVmaxEdit = new QLineEdit(Personnages);
        PVmaxEdit->setObjectName(QStringLiteral("PVmaxEdit"));

        gridLayout_14->addWidget(PVmaxEdit, 4, 7, 1, 2);

        label_11 = new QLabel(Personnages);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_14->addWidget(label_11, 4, 10, 1, 2);

        Attribut_1Label = new QLabel(Personnages);
        Attribut_1Label->setObjectName(QStringLiteral("Attribut_1Label"));

        gridLayout_14->addWidget(Attribut_1Label, 5, 0, 1, 3);

        Attribut_1Edit = new QLineEdit(Personnages);
        Attribut_1Edit->setObjectName(QStringLiteral("Attribut_1Edit"));

        gridLayout_14->addWidget(Attribut_1Edit, 5, 3, 1, 2);

        Attribut_4Label = new QLabel(Personnages);
        Attribut_4Label->setObjectName(QStringLiteral("Attribut_4Label"));

        gridLayout_14->addWidget(Attribut_4Label, 5, 6, 1, 3);

        Attribut_4Edit = new QLineEdit(Personnages);
        Attribut_4Edit->setObjectName(QStringLiteral("Attribut_4Edit"));

        gridLayout_14->addWidget(Attribut_4Edit, 5, 9, 1, 1);

        CompetenceList = new QListWidget(Personnages);
        CompetenceList->setObjectName(QStringLiteral("CompetenceList"));

        gridLayout_14->addWidget(CompetenceList, 5, 10, 3, 2);

        Attribut_2Label = new QLabel(Personnages);
        Attribut_2Label->setObjectName(QStringLiteral("Attribut_2Label"));

        gridLayout_14->addWidget(Attribut_2Label, 6, 0, 1, 2);

        Attribut_2Edit = new QLineEdit(Personnages);
        Attribut_2Edit->setObjectName(QStringLiteral("Attribut_2Edit"));

        gridLayout_14->addWidget(Attribut_2Edit, 6, 3, 1, 2);

        Attribut_5Label = new QLabel(Personnages);
        Attribut_5Label->setObjectName(QStringLiteral("Attribut_5Label"));

        gridLayout_14->addWidget(Attribut_5Label, 6, 6, 1, 3);

        Attribut_5Edit = new QLineEdit(Personnages);
        Attribut_5Edit->setObjectName(QStringLiteral("Attribut_5Edit"));

        gridLayout_14->addWidget(Attribut_5Edit, 6, 9, 1, 1);

        Attribut_3Label = new QLabel(Personnages);
        Attribut_3Label->setObjectName(QStringLiteral("Attribut_3Label"));

        gridLayout_14->addWidget(Attribut_3Label, 7, 0, 1, 2);

        Attribut_3Edit = new QLineEdit(Personnages);
        Attribut_3Edit->setObjectName(QStringLiteral("Attribut_3Edit"));

        gridLayout_14->addWidget(Attribut_3Edit, 7, 3, 1, 2);

        Attribut_6Label = new QLabel(Personnages);
        Attribut_6Label->setObjectName(QStringLiteral("Attribut_6Label"));

        gridLayout_14->addWidget(Attribut_6Label, 7, 6, 1, 3);

        Attribut_6Edit = new QLineEdit(Personnages);
        Attribut_6Edit->setObjectName(QStringLiteral("Attribut_6Edit"));

        gridLayout_14->addWidget(Attribut_6Edit, 7, 9, 1, 1);

        label_19 = new QLabel(Personnages);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout_14->addWidget(label_19, 8, 4, 1, 2);

        InventaireButton = new QPushButton(Personnages);
        InventaireButton->setObjectName(QStringLiteral("InventaireButton"));

        gridLayout_14->addWidget(InventaireButton, 9, 0, 1, 2);

        DescriptifEdit = new QTextEdit(Personnages);
        DescriptifEdit->setObjectName(QStringLiteral("DescriptifEdit"));

        gridLayout_14->addWidget(DescriptifEdit, 9, 2, 1, 10);

        contentStack->addWidget(Personnages);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        contentStack->addWidget(page_5);

        gridLayout_12->addWidget(contentStack, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 795, 25));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        contentStack->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        retourButton->setText(QApplication::translate("MainWindow", "Retour", 0));
        jeuButton->setText(QApplication::translate("MainWindow", "Jeux", 0));
        autreButton->setText(QApplication::translate("MainWindow", "Autre", 0));
        label->setText(QApplication::translate("MainWindow", "Gestionnaire de jeu de r\303\264le ", 0));
        selectionnerJeuButton->setText(QApplication::translate("MainWindow", "Selectionner", 0));
        modifierJeuButton->setText(QApplication::translate("MainWindow", "Modifier", 0));
        nouveauJeuButton->setText(QApplication::translate("MainWindow", "Nouveau", 0));
        themeJeu->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "S\303\251lectionner un jeu existant :", 0));
        label_3->setText(QApplication::translate("MainWindow", "Campagne", 0));
        selectionnerCampagneButton->setText(QApplication::translate("MainWindow", "Selectionner", 0));
        modifierCampagneButton->setText(QApplication::translate("MainWindow", "Modifier", 0));
        nouveauCampagneButton->setText(QApplication::translate("MainWindow", "Nouveau", 0));
        label_4->setText(QApplication::translate("MainWindow", "Parties :", 0));
        label_6->setText(QApplication::translate("MainWindow", "Liste :", 0));
        selectionnerPartieButton->setText(QApplication::translate("MainWindow", "Selectionner", 0));
        modifierPartieButton->setText(QApplication::translate("MainWindow", "Modifier", 0));
        ajouterPartieButton->setText(QApplication::translate("MainWindow", "Ajouter", 0));
        label_5->setText(QApplication::translate("MainWindow", "Resum\303\251 :", 0));
        label_7->setText(QApplication::translate("MainWindow", "Joueur :", 0));
        label_23->setText(QApplication::translate("MainWindow", "Age :", 0));
        label_9->setText(QApplication::translate("MainWindow", "Pr\303\251nom :", 0));
        label_22->setText(QApplication::translate("MainWindow", "Race :", 0));
        label_20->setText(QApplication::translate("MainWindow", "Niveau :", 0));
        label_12->setText(QApplication::translate("MainWindow", "Nom :", 0));
        label_8->setText(QApplication::translate("MainWindow", "Classe :", 0));
        label_18->setText(QApplication::translate("MainWindow", "Sexe :", 0));
        label_24->setText(QApplication::translate("MainWindow", "______________________________________________________________________________", 0));
        SanteLabel->setText(QApplication::translate("MainWindow", "PV :", 0));
        label_16->setText(QApplication::translate("MainWindow", "/", 0));
        label_11->setText(QApplication::translate("MainWindow", "Comp\303\251tences :", 0));
        Attribut_1Label->setText(QApplication::translate("MainWindow", "Attribut 1", 0));
        Attribut_4Label->setText(QApplication::translate("MainWindow", "Attribut 4", 0));
        Attribut_2Label->setText(QApplication::translate("MainWindow", "Attribut 2 ", 0));
        Attribut_5Label->setText(QApplication::translate("MainWindow", "Attribut 5", 0));
        Attribut_3Label->setText(QApplication::translate("MainWindow", "Attribut 3", 0));
        Attribut_6Label->setText(QApplication::translate("MainWindow", "Attribut 6", 0));
        label_19->setText(QApplication::translate("MainWindow", "Descriptif :", 0));
        InventaireButton->setText(QApplication::translate("MainWindow", "Inventaire", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
