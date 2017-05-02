/********************************************************************************
** Form generated from reading UI file 'formModifierJeu.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMMODIFIERJEU_H
#define UI_FORMMODIFIERJEU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_formModifierJeu
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *CentreV;
    QFormLayout *formulaire;
    QHBoxLayout *horizontalLayout_4;
    QFormLayout *formLayout;
    QLabel *label_3;
    QLabel *label_2;
    QLineEdit *nomJeu;
    QLineEdit *theme;
    QPushButton *parcourirButton;
    QLabel *themeImage;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_7;
    QPushButton *ajouterCompetenceButton;
    QPushButton *supprimerCompetenceButton;
    QVBoxLayout *verticalLayout_8;
    QPushButton *ajouterInformationButton;
    QPushButton *supprimerInformationButton;
    QVBoxLayout *verticalLayout_2;
    QPushButton *ajouterAttributButton;
    QPushButton *supprimerAttributButton;
    QVBoxLayout *verticalLayout_3;
    QPushButton *ajouterValeurButton;
    QPushButton *supprimerValeurButton;
    QListWidget *listValeurDisp;
    QLabel *label_4;
    QListWidget *listValeurSelect;
    QLabel *label_6;
    QListWidget *listAttributSelect;
    QLabel *label_8;
    QLabel *label_9;
    QListWidget *listAttributDisp;
    QLabel *label_5;
    QListWidget *listCompetenceDisp;
    QListWidget *listInformationSelect;
    QLabel *label_7;
    QListWidget *listCompetenceSelect;
    QListWidget *listInformationDisp;
    QPushButton *modifierAttributButton;
    QPushButton *modifierValeurButton;
    QPushButton *modifierCompetenceButton;
    QPushButton *modifierInformationButton;
    QHBoxLayout *Attributs;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer;
    QPushButton *nouveauAttribut;
    QHBoxLayout *horizontalLayout;
    QPushButton *modifierJeuButton;
    QPushButton *supprimerJeuButton;
    QPushButton *retourButton;

    void setupUi(QWidget *formModifierJeu)
    {
        if (formModifierJeu->objectName().isEmpty())
            formModifierJeu->setObjectName(QStringLiteral("formModifierJeu"));
        formModifierJeu->resize(831, 793);
        QIcon icon;
        icon.addFile(QStringLiteral("../d20.ico"), QSize(), QIcon::Normal, QIcon::Off);
        formModifierJeu->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(formModifierJeu);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(formModifierJeu);
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
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 0, 0, -1);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(-1, 0, -1, -1);
        label_3 = new QLabel(formModifierJeu);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        label_2 = new QLabel(formModifierJeu);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        nomJeu = new QLineEdit(formModifierJeu);
        nomJeu->setObjectName(QStringLiteral("nomJeu"));

        formLayout->setWidget(0, QFormLayout::FieldRole, nomJeu);

        theme = new QLineEdit(formModifierJeu);
        theme->setObjectName(QStringLiteral("theme"));

        formLayout->setWidget(2, QFormLayout::FieldRole, theme);

        parcourirButton = new QPushButton(formModifierJeu);
        parcourirButton->setObjectName(QStringLiteral("parcourirButton"));

        formLayout->setWidget(3, QFormLayout::FieldRole, parcourirButton);


        horizontalLayout_4->addLayout(formLayout);

        themeImage = new QLabel(formModifierJeu);
        themeImage->setObjectName(QStringLiteral("themeImage"));
        themeImage->setMinimumSize(QSize(50, 50));
        themeImage->setMaximumSize(QSize(300, 300));

        horizontalLayout_4->addWidget(themeImage);


        formulaire->setLayout(0, QFormLayout::FieldRole, horizontalLayout_4);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(-1, 0, -1, -1);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        ajouterCompetenceButton = new QPushButton(formModifierJeu);
        ajouterCompetenceButton->setObjectName(QStringLiteral("ajouterCompetenceButton"));

        verticalLayout_7->addWidget(ajouterCompetenceButton);

        supprimerCompetenceButton = new QPushButton(formModifierJeu);
        supprimerCompetenceButton->setObjectName(QStringLiteral("supprimerCompetenceButton"));

        verticalLayout_7->addWidget(supprimerCompetenceButton);


        gridLayout->addLayout(verticalLayout_7, 6, 1, 1, 1);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        ajouterInformationButton = new QPushButton(formModifierJeu);
        ajouterInformationButton->setObjectName(QStringLiteral("ajouterInformationButton"));

        verticalLayout_8->addWidget(ajouterInformationButton);

        supprimerInformationButton = new QPushButton(formModifierJeu);
        supprimerInformationButton->setObjectName(QStringLiteral("supprimerInformationButton"));

        verticalLayout_8->addWidget(supprimerInformationButton);


        gridLayout->addLayout(verticalLayout_8, 9, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        ajouterAttributButton = new QPushButton(formModifierJeu);
        ajouterAttributButton->setObjectName(QStringLiteral("ajouterAttributButton"));

        verticalLayout_2->addWidget(ajouterAttributButton);

        supprimerAttributButton = new QPushButton(formModifierJeu);
        supprimerAttributButton->setObjectName(QStringLiteral("supprimerAttributButton"));

        verticalLayout_2->addWidget(supprimerAttributButton);


        gridLayout->addLayout(verticalLayout_2, 2, 1, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, -1, 0, -1);
        ajouterValeurButton = new QPushButton(formModifierJeu);
        ajouterValeurButton->setObjectName(QStringLiteral("ajouterValeurButton"));

        verticalLayout_3->addWidget(ajouterValeurButton);

        supprimerValeurButton = new QPushButton(formModifierJeu);
        supprimerValeurButton->setObjectName(QStringLiteral("supprimerValeurButton"));

        verticalLayout_3->addWidget(supprimerValeurButton);


        gridLayout->addLayout(verticalLayout_3, 4, 1, 1, 1);

        listValeurDisp = new QListWidget(formModifierJeu);
        listValeurDisp->setObjectName(QStringLiteral("listValeurDisp"));
        listValeurDisp->setMaximumSize(QSize(250, 400));

        gridLayout->addWidget(listValeurDisp, 4, 2, 1, 1);

        label_4 = new QLabel(formModifierJeu);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        listValeurSelect = new QListWidget(formModifierJeu);
        listValeurSelect->setObjectName(QStringLiteral("listValeurSelect"));
        listValeurSelect->setMaximumSize(QSize(250, 400));

        gridLayout->addWidget(listValeurSelect, 4, 0, 1, 1);

        label_6 = new QLabel(formModifierJeu);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        listAttributSelect = new QListWidget(formModifierJeu);
        listAttributSelect->setObjectName(QStringLiteral("listAttributSelect"));
        listAttributSelect->setMinimumSize(QSize(50, 50));
        listAttributSelect->setMaximumSize(QSize(250, 400));

        gridLayout->addWidget(listAttributSelect, 2, 0, 1, 1);

        label_8 = new QLabel(formModifierJeu);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 0, 0, 1, 1, Qt::AlignHCenter);

        label_9 = new QLabel(formModifierJeu);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 0, 2, 1, 1, Qt::AlignHCenter);

        listAttributDisp = new QListWidget(formModifierJeu);
        listAttributDisp->setObjectName(QStringLiteral("listAttributDisp"));
        listAttributDisp->setMaximumSize(QSize(250, 400));

        gridLayout->addWidget(listAttributDisp, 2, 2, 1, 1);

        label_5 = new QLabel(formModifierJeu);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        listCompetenceDisp = new QListWidget(formModifierJeu);
        listCompetenceDisp->setObjectName(QStringLiteral("listCompetenceDisp"));
        listCompetenceDisp->setMaximumSize(QSize(250, 400));

        gridLayout->addWidget(listCompetenceDisp, 6, 2, 1, 1);

        listInformationSelect = new QListWidget(formModifierJeu);
        listInformationSelect->setObjectName(QStringLiteral("listInformationSelect"));
        listInformationSelect->setMaximumSize(QSize(250, 400));

        gridLayout->addWidget(listInformationSelect, 9, 0, 1, 1);

        label_7 = new QLabel(formModifierJeu);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 8, 0, 1, 1);

        listCompetenceSelect = new QListWidget(formModifierJeu);
        listCompetenceSelect->setObjectName(QStringLiteral("listCompetenceSelect"));
        listCompetenceSelect->setMaximumSize(QSize(250, 400));

        gridLayout->addWidget(listCompetenceSelect, 6, 0, 1, 1);

        listInformationDisp = new QListWidget(formModifierJeu);
        listInformationDisp->setObjectName(QStringLiteral("listInformationDisp"));
        listInformationDisp->setMaximumSize(QSize(250, 400));

        gridLayout->addWidget(listInformationDisp, 9, 2, 1, 1);

        modifierAttributButton = new QPushButton(formModifierJeu);
        modifierAttributButton->setObjectName(QStringLiteral("modifierAttributButton"));

        gridLayout->addWidget(modifierAttributButton, 2, 3, 1, 1);

        modifierValeurButton = new QPushButton(formModifierJeu);
        modifierValeurButton->setObjectName(QStringLiteral("modifierValeurButton"));

        gridLayout->addWidget(modifierValeurButton, 4, 3, 1, 1);

        modifierCompetenceButton = new QPushButton(formModifierJeu);
        modifierCompetenceButton->setObjectName(QStringLiteral("modifierCompetenceButton"));

        gridLayout->addWidget(modifierCompetenceButton, 6, 3, 1, 1);

        modifierInformationButton = new QPushButton(formModifierJeu);
        modifierInformationButton->setObjectName(QStringLiteral("modifierInformationButton"));

        gridLayout->addWidget(modifierInformationButton, 9, 3, 1, 1);


        formulaire->setLayout(5, QFormLayout::FieldRole, gridLayout);

        Attributs = new QHBoxLayout();
        Attributs->setObjectName(QStringLiteral("Attributs"));
        Attributs->setContentsMargins(-1, -1, 0, 0);

        formulaire->setLayout(7, QFormLayout::FieldRole, Attributs);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        label_10 = new QLabel(formModifierJeu);
        label_10->setObjectName(QStringLiteral("label_10"));
        QFont font1;
        font1.setPointSize(12);
        label_10->setFont(font1);

        horizontalLayout_2->addWidget(label_10);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        nouveauAttribut = new QPushButton(formModifierJeu);
        nouveauAttribut->setObjectName(QStringLiteral("nouveauAttribut"));

        horizontalLayout_2->addWidget(nouveauAttribut);


        formulaire->setLayout(1, QFormLayout::FieldRole, horizontalLayout_2);


        CentreV->addLayout(formulaire);


        verticalLayout->addLayout(CentreV);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        modifierJeuButton = new QPushButton(formModifierJeu);
        modifierJeuButton->setObjectName(QStringLiteral("modifierJeuButton"));

        horizontalLayout->addWidget(modifierJeuButton);

        supprimerJeuButton = new QPushButton(formModifierJeu);
        supprimerJeuButton->setObjectName(QStringLiteral("supprimerJeuButton"));

        horizontalLayout->addWidget(supprimerJeuButton);

        retourButton = new QPushButton(formModifierJeu);
        retourButton->setObjectName(QStringLiteral("retourButton"));

        horizontalLayout->addWidget(retourButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(formModifierJeu);
        QObject::connect(retourButton, SIGNAL(clicked()), formModifierJeu, SLOT(close()));

        QMetaObject::connectSlotsByName(formModifierJeu);
    } // setupUi

    void retranslateUi(QWidget *formModifierJeu)
    {
        formModifierJeu->setWindowTitle(QApplication::translate("formModifierJeu", "Modification Jeu", 0));
        label->setText(QApplication::translate("formModifierJeu", "Modification Jeu", 0));
        label_3->setText(QApplication::translate("formModifierJeu", "Th\303\250me", 0));
        label_2->setText(QApplication::translate("formModifierJeu", "Nom du jeu", 0));
        parcourirButton->setText(QApplication::translate("formModifierJeu", "Parcourir", 0));
        themeImage->setText(QString());
        ajouterCompetenceButton->setText(QApplication::translate("formModifierJeu", "<--", 0));
        supprimerCompetenceButton->setText(QApplication::translate("formModifierJeu", "-->", 0));
        ajouterInformationButton->setText(QApplication::translate("formModifierJeu", "<--", 0));
        supprimerInformationButton->setText(QApplication::translate("formModifierJeu", "-->", 0));
        ajouterAttributButton->setText(QApplication::translate("formModifierJeu", "<--", 0));
        supprimerAttributButton->setText(QApplication::translate("formModifierJeu", "-->", 0));
        ajouterValeurButton->setText(QApplication::translate("formModifierJeu", "<--", 0));
        supprimerValeurButton->setText(QApplication::translate("formModifierJeu", "-->", 0));
        label_4->setText(QApplication::translate("formModifierJeu", "Attributs ", 0));
        label_6->setText(QApplication::translate("formModifierJeu", "Comp\303\251tences :", 0));
        label_8->setText(QApplication::translate("formModifierJeu", "Selectionn\303\251s", 0));
        label_9->setText(QApplication::translate("formModifierJeu", "Disponibles", 0));
        label_5->setText(QApplication::translate("formModifierJeu", "Valeurs :", 0));
        label_7->setText(QApplication::translate("formModifierJeu", "Informations :", 0));
        modifierAttributButton->setText(QApplication::translate("formModifierJeu", "Modifier", 0));
        modifierValeurButton->setText(QApplication::translate("formModifierJeu", "Modifier", 0));
        modifierCompetenceButton->setText(QApplication::translate("formModifierJeu", "Modifier", 0));
        modifierInformationButton->setText(QApplication::translate("formModifierJeu", "Modifier", 0));
        label_10->setText(QApplication::translate("formModifierJeu", "Attributs :", 0));
        nouveauAttribut->setText(QApplication::translate("formModifierJeu", "Nouveau", 0));
        modifierJeuButton->setText(QApplication::translate("formModifierJeu", "Modifier", 0));
        supprimerJeuButton->setText(QApplication::translate("formModifierJeu", "Supprimer", 0));
        retourButton->setText(QApplication::translate("formModifierJeu", "Annuler", 0));
    } // retranslateUi

};

namespace Ui {
    class formModifierJeu: public Ui_formModifierJeu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMMODIFIERJEU_H
