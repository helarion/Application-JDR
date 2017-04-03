/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
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
    QLabel *label_2;
    QListWidget *listJeu;
    QLabel *themeJeu;
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
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_5;
    QListWidget *listWidget_2;
    QTextEdit *textEdit;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QWidget *Personnages;
    QGridLayout *gridLayout_14;
    QLabel *label_7;
    QLabel *label_23;
    QLineEdit *lineEdit_15;
    QLabel *label_9;
    QLineEdit *lineEdit;
    QLabel *label_22;
    QLineEdit *lineEdit_3;
    QLabel *label_20;
    QLineEdit *lineEdit_14;
    QLabel *label_12;
    QLineEdit *lineEdit_2;
    QLabel *label_8;
    QLineEdit *lineEdit_4;
    QLabel *label_18;
    QLineEdit *lineEdit_5;
    QLabel *label_24;
    QLabel *label_15;
    QLineEdit *lineEdit_12;
    QLabel *label_16;
    QLineEdit *lineEdit_13;
    QLabel *label_11;
    QLabel *label_21;
    QLineEdit *lineEdit_6;
    QLabel *label_25;
    QLineEdit *lineEdit_9;
    QListWidget *listWidget_3;
    QLabel *label_10;
    QLineEdit *lineEdit_7;
    QLabel *label_13;
    QLineEdit *lineEdit_10;
    QLabel *label_17;
    QLineEdit *lineEdit_8;
    QLabel *label_14;
    QLineEdit *lineEdit_11;
    QLabel *label_19;
    QPushButton *pushButton_5;
    QTextEdit *textEdit_2;
    QWidget *page_5;
    QPushButton *retourButton;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(666, 471);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_12 = new QGridLayout(centralWidget);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
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

        label_2 = new QLabel(Jeu);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font3;
        font3.setPointSize(20);
        label_2->setFont(font3);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_2, 1, 0, 1, 1);

        listJeu = new QListWidget(Jeu);
        listJeu->setObjectName(QStringLiteral("listJeu"));

        gridLayout_4->addWidget(listJeu, 2, 0, 1, 1);

        themeJeu = new QLabel(Jeu);
        themeJeu->setObjectName(QStringLiteral("themeJeu"));

        gridLayout_4->addWidget(themeJeu, 2, 2, 1, 1);


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
        label_4 = new QLabel(Parties);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_13->addWidget(label_4, 0, 1, 1, 2);

        label_6 = new QLabel(Parties);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_13->addWidget(label_6, 1, 0, 1, 1);

        label_5 = new QLabel(Parties);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_13->addWidget(label_5, 1, 2, 1, 2);

        listWidget_2 = new QListWidget(Parties);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));

        gridLayout_13->addWidget(listWidget_2, 2, 0, 1, 2);

        textEdit = new QTextEdit(Parties);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        gridLayout_13->addWidget(textEdit, 2, 2, 1, 2);

        pushButton_3 = new QPushButton(Parties);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout_13->addWidget(pushButton_3, 3, 0, 1, 1);

        pushButton = new QPushButton(Parties);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout_13->addWidget(pushButton, 3, 1, 2, 2);

        pushButton_2 = new QPushButton(Parties);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout_13->addWidget(pushButton_2, 3, 3, 1, 1);

        pushButton_4 = new QPushButton(Parties);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        gridLayout_13->addWidget(pushButton_4, 4, 0, 1, 1);

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

        lineEdit_15 = new QLineEdit(Personnages);
        lineEdit_15->setObjectName(QStringLiteral("lineEdit_15"));

        gridLayout_14->addWidget(lineEdit_15, 0, 11, 1, 1);

        label_9 = new QLabel(Personnages);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_14->addWidget(label_9, 1, 0, 1, 1);

        lineEdit = new QLineEdit(Personnages);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout_14->addWidget(lineEdit, 1, 1, 1, 5);

        label_22 = new QLabel(Personnages);
        label_22->setObjectName(QStringLiteral("label_22"));

        gridLayout_14->addWidget(label_22, 1, 6, 1, 2);

        lineEdit_3 = new QLineEdit(Personnages);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        gridLayout_14->addWidget(lineEdit_3, 1, 8, 1, 2);

        label_20 = new QLabel(Personnages);
        label_20->setObjectName(QStringLiteral("label_20"));

        gridLayout_14->addWidget(label_20, 1, 10, 1, 1);

        lineEdit_14 = new QLineEdit(Personnages);
        lineEdit_14->setObjectName(QStringLiteral("lineEdit_14"));

        gridLayout_14->addWidget(lineEdit_14, 1, 11, 1, 1);

        label_12 = new QLabel(Personnages);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_14->addWidget(label_12, 2, 0, 1, 1);

        lineEdit_2 = new QLineEdit(Personnages);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout_14->addWidget(lineEdit_2, 2, 1, 1, 5);

        label_8 = new QLabel(Personnages);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_14->addWidget(label_8, 2, 6, 1, 2);

        lineEdit_4 = new QLineEdit(Personnages);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        gridLayout_14->addWidget(lineEdit_4, 2, 8, 1, 2);

        label_18 = new QLabel(Personnages);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout_14->addWidget(label_18, 2, 10, 1, 1);

        lineEdit_5 = new QLineEdit(Personnages);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        gridLayout_14->addWidget(lineEdit_5, 2, 11, 1, 1);

        label_24 = new QLabel(Personnages);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setAlignment(Qt::AlignCenter);

        gridLayout_14->addWidget(label_24, 3, 0, 1, 12);

        label_15 = new QLabel(Personnages);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_14->addWidget(label_15, 4, 2, 1, 3);

        lineEdit_12 = new QLineEdit(Personnages);
        lineEdit_12->setObjectName(QStringLiteral("lineEdit_12"));

        gridLayout_14->addWidget(lineEdit_12, 4, 5, 1, 1);

        label_16 = new QLabel(Personnages);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_14->addWidget(label_16, 4, 6, 1, 1);

        lineEdit_13 = new QLineEdit(Personnages);
        lineEdit_13->setObjectName(QStringLiteral("lineEdit_13"));

        gridLayout_14->addWidget(lineEdit_13, 4, 7, 1, 2);

        label_11 = new QLabel(Personnages);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_14->addWidget(label_11, 4, 10, 1, 2);

        label_21 = new QLabel(Personnages);
        label_21->setObjectName(QStringLiteral("label_21"));

        gridLayout_14->addWidget(label_21, 5, 0, 1, 3);

        lineEdit_6 = new QLineEdit(Personnages);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        gridLayout_14->addWidget(lineEdit_6, 5, 3, 1, 2);

        label_25 = new QLabel(Personnages);
        label_25->setObjectName(QStringLiteral("label_25"));

        gridLayout_14->addWidget(label_25, 5, 6, 1, 3);

        lineEdit_9 = new QLineEdit(Personnages);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));

        gridLayout_14->addWidget(lineEdit_9, 5, 9, 1, 1);

        listWidget_3 = new QListWidget(Personnages);
        listWidget_3->setObjectName(QStringLiteral("listWidget_3"));

        gridLayout_14->addWidget(listWidget_3, 5, 10, 3, 2);

        label_10 = new QLabel(Personnages);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_14->addWidget(label_10, 6, 0, 1, 2);

        lineEdit_7 = new QLineEdit(Personnages);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));

        gridLayout_14->addWidget(lineEdit_7, 6, 3, 1, 2);

        label_13 = new QLabel(Personnages);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_14->addWidget(label_13, 6, 6, 1, 3);

        lineEdit_10 = new QLineEdit(Personnages);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));

        gridLayout_14->addWidget(lineEdit_10, 6, 9, 1, 1);

        label_17 = new QLabel(Personnages);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout_14->addWidget(label_17, 7, 0, 1, 2);

        lineEdit_8 = new QLineEdit(Personnages);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));

        gridLayout_14->addWidget(lineEdit_8, 7, 3, 1, 2);

        label_14 = new QLabel(Personnages);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_14->addWidget(label_14, 7, 6, 1, 3);

        lineEdit_11 = new QLineEdit(Personnages);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));

        gridLayout_14->addWidget(lineEdit_11, 7, 9, 1, 1);

        label_19 = new QLabel(Personnages);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout_14->addWidget(label_19, 8, 4, 1, 2);

        pushButton_5 = new QPushButton(Personnages);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        gridLayout_14->addWidget(pushButton_5, 9, 0, 1, 2);

        textEdit_2 = new QTextEdit(Personnages);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));

        gridLayout_14->addWidget(textEdit_2, 9, 2, 1, 10);

        contentStack->addWidget(Personnages);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        contentStack->addWidget(page_5);

        gridLayout_12->addWidget(contentStack, 0, 0, 1, 1);

        retourButton = new QPushButton(centralWidget);
        retourButton->setObjectName(QStringLiteral("retourButton"));

        gridLayout_12->addWidget(retourButton, 1, 0, 1, 1, Qt::AlignRight);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 666, 25));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        contentStack->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        jeuButton->setText(QApplication::translate("MainWindow", "Jeux", Q_NULLPTR));
        autreButton->setText(QApplication::translate("MainWindow", "Autre", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Gestionnaire de jeu de r\303\264le ", Q_NULLPTR));
        selectionnerJeuButton->setText(QApplication::translate("MainWindow", "Selectionner", Q_NULLPTR));
        modifierJeuButton->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        nouveauJeuButton->setText(QApplication::translate("MainWindow", "Nouveau", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "S\303\251lectionner un jeu existant :", Q_NULLPTR));
        themeJeu->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "Campagne", Q_NULLPTR));
        selectionnerCampagneButton->setText(QApplication::translate("MainWindow", "Selectionner", Q_NULLPTR));
        modifierCampagneButton->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        nouveauCampagneButton->setText(QApplication::translate("MainWindow", "Nouveau", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Parties :", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Liste :", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Desscription :", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Selectionner", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "Editer", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Joueur :", Q_NULLPTR));
        label_23->setText(QApplication::translate("MainWindow", "Age :", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Pr\303\251nom :", Q_NULLPTR));
        label_22->setText(QApplication::translate("MainWindow", "Race :", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainWindow", "Niveau :", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "Nom :", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Classe :", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "Sexe :", Q_NULLPTR));
        label_24->setText(QApplication::translate("MainWindow", "______________________________________________________________________________", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "PV :", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "/", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Comp\303\251tences :", Q_NULLPTR));
        label_21->setText(QApplication::translate("MainWindow", "Attribut 1", Q_NULLPTR));
        label_25->setText(QApplication::translate("MainWindow", "Attribut 4", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Attribut 2 ", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "Attribut 5", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "Attribut 3", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "Attribut 6", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", "Descriptif :", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "Inventaire", Q_NULLPTR));
        retourButton->setText(QApplication::translate("MainWindow", "Retour", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
