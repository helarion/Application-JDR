/********************************************************************************
** Form generated from reading UI file 'formNouveauJeu.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMNOUVEAUJEU_H
#define UI_FORMNOUVEAUJEU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_formNouveauJeu
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *CentreV;
    QFormLayout *formulaire;
    QGridLayout *gridLayout;
    QListWidget *listInformationSelect;
    QLabel *label_7;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_3;
    QPushButton *ajouterButton;
    QPushButton *supprimerButton;
    QLabel *label_8;
    QListWidget *listValeurSelect;
    QListWidget *listAttributSelect;
    QListWidget *listAttributDisp;
    QListWidget *listValeurDisp;
    QLabel *label_5;
    QLabel *label_9;
    QLabel *label_4;
    QListWidget *listCompetenceSelect;
    QListWidget *listCompetenceDisp;
    QListWidget *listInformationDisp;
    QVBoxLayout *boutons;
    QPushButton *nouveauAttribut;
    QPushButton *modifierAttribut;
    QHBoxLayout *Attributs;
    QHBoxLayout *horizontalLayout_4;
    QFormLayout *formLayout;
    QLabel *label_3;
    QLabel *label_2;
    QLineEdit *nomJeu;
    QLineEdit *theme;
    QPushButton *parcourirButton;
    QLabel *themeImage;
    QHBoxLayout *horizontalLayout;
    QPushButton *ajouterJeuButton;
    QPushButton *retourButton;

    void setupUi(QDialog *formNouveauJeu)
    {
        if (formNouveauJeu->objectName().isEmpty())
            formNouveauJeu->setObjectName(QStringLiteral("formNouveauJeu"));
        formNouveauJeu->resize(725, 727);
        QIcon icon;
        icon.addFile(QStringLiteral("../d20.ico"), QSize(), QIcon::Normal, QIcon::Off);
        formNouveauJeu->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(formNouveauJeu);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(formNouveauJeu);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        CentreV = new QHBoxLayout();
        CentreV->setObjectName(QStringLiteral("CentreV"));
        CentreV->setContentsMargins(-1, 0, -1, -1);
        formulaire = new QFormLayout();
        formulaire->setObjectName(QStringLiteral("formulaire"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(-1, 0, -1, -1);
        listInformationSelect = new QListWidget(formNouveauJeu);
        listInformationSelect->setObjectName(QStringLiteral("listInformationSelect"));
        listInformationSelect->setMaximumSize(QSize(250, 400));

        gridLayout->addWidget(listInformationSelect, 10, 0, 1, 1);

        label_7 = new QLabel(formNouveauJeu);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 9, 0, 1, 1);

        label_6 = new QLabel(formNouveauJeu);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 6, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, -1, 0, -1);
        ajouterButton = new QPushButton(formNouveauJeu);
        ajouterButton->setObjectName(QStringLiteral("ajouterButton"));

        verticalLayout_3->addWidget(ajouterButton);

        supprimerButton = new QPushButton(formNouveauJeu);
        supprimerButton->setObjectName(QStringLiteral("supprimerButton"));

        verticalLayout_3->addWidget(supprimerButton);


        gridLayout->addLayout(verticalLayout_3, 5, 1, 1, 1);

        label_8 = new QLabel(formNouveauJeu);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 0, 0, 1, 1, Qt::AlignHCenter);

        listValeurSelect = new QListWidget(formNouveauJeu);
        listValeurSelect->setObjectName(QStringLiteral("listValeurSelect"));
        listValeurSelect->setMaximumSize(QSize(250, 400));

        gridLayout->addWidget(listValeurSelect, 4, 0, 1, 1);

        listAttributSelect = new QListWidget(formNouveauJeu);
        listAttributSelect->setObjectName(QStringLiteral("listAttributSelect"));
        listAttributSelect->setMinimumSize(QSize(50, 50));
        listAttributSelect->setMaximumSize(QSize(250, 400));

        gridLayout->addWidget(listAttributSelect, 2, 0, 1, 1);

        listAttributDisp = new QListWidget(formNouveauJeu);
        listAttributDisp->setObjectName(QStringLiteral("listAttributDisp"));
        listAttributDisp->setMaximumSize(QSize(250, 400));

        gridLayout->addWidget(listAttributDisp, 2, 2, 1, 1);

        listValeurDisp = new QListWidget(formNouveauJeu);
        listValeurDisp->setObjectName(QStringLiteral("listValeurDisp"));
        listValeurDisp->setMaximumSize(QSize(250, 400));

        gridLayout->addWidget(listValeurDisp, 4, 2, 1, 1);

        label_5 = new QLabel(formNouveauJeu);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        label_9 = new QLabel(formNouveauJeu);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 0, 2, 1, 1, Qt::AlignHCenter);

        label_4 = new QLabel(formNouveauJeu);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        listCompetenceSelect = new QListWidget(formNouveauJeu);
        listCompetenceSelect->setObjectName(QStringLiteral("listCompetenceSelect"));
        listCompetenceSelect->setMaximumSize(QSize(250, 400));

        gridLayout->addWidget(listCompetenceSelect, 7, 0, 1, 1);

        listCompetenceDisp = new QListWidget(formNouveauJeu);
        listCompetenceDisp->setObjectName(QStringLiteral("listCompetenceDisp"));
        listCompetenceDisp->setMaximumSize(QSize(250, 400));

        gridLayout->addWidget(listCompetenceDisp, 7, 2, 1, 1);

        listInformationDisp = new QListWidget(formNouveauJeu);
        listInformationDisp->setObjectName(QStringLiteral("listInformationDisp"));
        listInformationDisp->setMaximumSize(QSize(250, 400));

        gridLayout->addWidget(listInformationDisp, 10, 2, 1, 1);

        boutons = new QVBoxLayout();
        boutons->setObjectName(QStringLiteral("boutons"));
        nouveauAttribut = new QPushButton(formNouveauJeu);
        nouveauAttribut->setObjectName(QStringLiteral("nouveauAttribut"));

        boutons->addWidget(nouveauAttribut);

        modifierAttribut = new QPushButton(formNouveauJeu);
        modifierAttribut->setObjectName(QStringLiteral("modifierAttribut"));

        boutons->addWidget(modifierAttribut);


        gridLayout->addLayout(boutons, 5, 3, 1, 1);


        formulaire->setLayout(5, QFormLayout::FieldRole, gridLayout);

        Attributs = new QHBoxLayout();
        Attributs->setObjectName(QStringLiteral("Attributs"));
        Attributs->setContentsMargins(-1, -1, 0, 0);

        formulaire->setLayout(7, QFormLayout::FieldRole, Attributs);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 0, 0, -1);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(-1, 0, -1, -1);
        label_3 = new QLabel(formNouveauJeu);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        label_2 = new QLabel(formNouveauJeu);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        nomJeu = new QLineEdit(formNouveauJeu);
        nomJeu->setObjectName(QStringLiteral("nomJeu"));

        formLayout->setWidget(0, QFormLayout::FieldRole, nomJeu);

        theme = new QLineEdit(formNouveauJeu);
        theme->setObjectName(QStringLiteral("theme"));

        formLayout->setWidget(2, QFormLayout::FieldRole, theme);

        parcourirButton = new QPushButton(formNouveauJeu);
        parcourirButton->setObjectName(QStringLiteral("parcourirButton"));

        formLayout->setWidget(3, QFormLayout::FieldRole, parcourirButton);


        horizontalLayout_4->addLayout(formLayout);

        themeImage = new QLabel(formNouveauJeu);
        themeImage->setObjectName(QStringLiteral("themeImage"));
        themeImage->setMinimumSize(QSize(50, 50));
        themeImage->setMaximumSize(QSize(300, 300));

        horizontalLayout_4->addWidget(themeImage);


        formulaire->setLayout(0, QFormLayout::FieldRole, horizontalLayout_4);


        CentreV->addLayout(formulaire);


        verticalLayout->addLayout(CentreV);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        ajouterJeuButton = new QPushButton(formNouveauJeu);
        ajouterJeuButton->setObjectName(QStringLiteral("ajouterJeuButton"));

        horizontalLayout->addWidget(ajouterJeuButton);

        retourButton = new QPushButton(formNouveauJeu);
        retourButton->setObjectName(QStringLiteral("retourButton"));

        horizontalLayout->addWidget(retourButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(formNouveauJeu);
        QObject::connect(retourButton, SIGNAL(clicked()), formNouveauJeu, SLOT(close()));

        QMetaObject::connectSlotsByName(formNouveauJeu);
    } // setupUi

    void retranslateUi(QDialog *formNouveauJeu)
    {
        formNouveauJeu->setWindowTitle(QApplication::translate("formNouveauJeu", "Cr\303\251ation de jeu", 0));
        label->setText(QApplication::translate("formNouveauJeu", "Creation Jeu", 0));
        label_7->setText(QApplication::translate("formNouveauJeu", "Informations :", 0));
        label_6->setText(QApplication::translate("formNouveauJeu", "Comp\303\251tences :", 0));
        ajouterButton->setText(QApplication::translate("formNouveauJeu", "<--", 0));
        supprimerButton->setText(QApplication::translate("formNouveauJeu", "-->", 0));
        label_8->setText(QApplication::translate("formNouveauJeu", "Selectionn\303\251s", 0));
        label_5->setText(QApplication::translate("formNouveauJeu", "Valeurs :", 0));
        label_9->setText(QApplication::translate("formNouveauJeu", "Disponibles", 0));
        label_4->setText(QApplication::translate("formNouveauJeu", "Attributs ", 0));
        nouveauAttribut->setText(QApplication::translate("formNouveauJeu", "Nouveau", 0));
        modifierAttribut->setText(QApplication::translate("formNouveauJeu", "Modifier", 0));
        label_3->setText(QApplication::translate("formNouveauJeu", "Th\303\250me", 0));
        label_2->setText(QApplication::translate("formNouveauJeu", "Nom du jeu", 0));
        parcourirButton->setText(QApplication::translate("formNouveauJeu", "Parcourir", 0));
        themeImage->setText(QString());
        ajouterJeuButton->setText(QApplication::translate("formNouveauJeu", "Cr\303\251er", 0));
        retourButton->setText(QApplication::translate("formNouveauJeu", "Annuler", 0));
    } // retranslateUi

};

namespace Ui {
    class formNouveauJeu: public Ui_formNouveauJeu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMNOUVEAUJEU_H
