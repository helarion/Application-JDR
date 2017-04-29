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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_formModifierJeu
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QHBoxLayout *CentreV;
    QFormLayout *formulaire;
    QGridLayout *gridLayout;
    QListWidget *listAttributDisp;
    QListWidget *listValeurSelect;
    QLabel *label_6;
    QListWidget *listAttributSelect;
    QListWidget *listValeurDisp;
    QLabel *label_4;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *ajouterButton;
    QPushButton *supprimerButton;
    QHBoxLayout *horizontalLayout_3;
    QListWidget *listCompetenceSelect;
    QListWidget *listCompetenceDisp;
    QHBoxLayout *Attributs;
    QVBoxLayout *boutons;
    QPushButton *nouveauAttribut;
    QPushButton *modifierAttribut;
    QHBoxLayout *horizontalLayout_4;
    QFormLayout *formLayout;
    QLabel *label_3;
    QLabel *label_2;
    QLineEdit *nomJeu;
    QLineEdit *theme;
    QPushButton *parcourirButton;
    QLabel *themeImage;
    QHBoxLayout *horizontalLayout;
    QPushButton *supprimerJeuButton;
    QPushButton *modifierJeuButton;
    QPushButton *retourButton;

    void setupUi(QWidget *formModifierJeu)
    {
        if (formModifierJeu->objectName().isEmpty())
            formModifierJeu->setObjectName(QStringLiteral("formModifierJeu"));
        formModifierJeu->resize(831, 580);
        QIcon icon;
        icon.addFile(QStringLiteral("../d20.ico"), QSize(), QIcon::Normal, QIcon::Off);
        formModifierJeu->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(formModifierJeu);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(formModifierJeu);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        CentreV = new QHBoxLayout();
        CentreV->setObjectName(QStringLiteral("CentreV"));
        CentreV->setContentsMargins(-1, 0, -1, -1);
        formulaire = new QFormLayout();
        formulaire->setObjectName(QStringLiteral("formulaire"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(-1, 0, -1, -1);
        listAttributDisp = new QListWidget(formModifierJeu);
        listAttributDisp->setObjectName(QStringLiteral("listAttributDisp"));
        listAttributDisp->setMaximumSize(QSize(250, 400));

        gridLayout->addWidget(listAttributDisp, 1, 2, 1, 1);

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

        gridLayout->addWidget(listAttributSelect, 1, 0, 1, 1);

        listValeurDisp = new QListWidget(formModifierJeu);
        listValeurDisp->setObjectName(QStringLiteral("listValeurDisp"));
        listValeurDisp->setMaximumSize(QSize(250, 400));

        gridLayout->addWidget(listValeurDisp, 4, 2, 1, 1);

        label_4 = new QLabel(formModifierJeu);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        label_5 = new QLabel(formModifierJeu);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, 0, -1);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, -1, 0, -1);
        ajouterButton = new QPushButton(formModifierJeu);
        ajouterButton->setObjectName(QStringLiteral("ajouterButton"));

        verticalLayout_3->addWidget(ajouterButton);

        supprimerButton = new QPushButton(formModifierJeu);
        supprimerButton->setObjectName(QStringLiteral("supprimerButton"));

        verticalLayout_3->addWidget(supprimerButton);


        horizontalLayout_2->addLayout(verticalLayout_3);


        gridLayout->addLayout(horizontalLayout_2, 1, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);

        gridLayout->addLayout(horizontalLayout_3, 7, 0, 1, 1);

        listCompetenceSelect = new QListWidget(formModifierJeu);
        listCompetenceSelect->setObjectName(QStringLiteral("listCompetenceSelect"));
        listCompetenceSelect->setMaximumSize(QSize(250, 400));

        gridLayout->addWidget(listCompetenceSelect, 6, 0, 1, 1);

        listCompetenceDisp = new QListWidget(formModifierJeu);
        listCompetenceDisp->setObjectName(QStringLiteral("listCompetenceDisp"));
        listCompetenceDisp->setMaximumSize(QSize(250, 400));

        gridLayout->addWidget(listCompetenceDisp, 6, 2, 1, 1);


        formulaire->setLayout(5, QFormLayout::FieldRole, gridLayout);

        Attributs = new QHBoxLayout();
        Attributs->setObjectName(QStringLiteral("Attributs"));
        Attributs->setContentsMargins(-1, -1, 0, 0);

        formulaire->setLayout(6, QFormLayout::FieldRole, Attributs);

        boutons = new QVBoxLayout();
        boutons->setObjectName(QStringLiteral("boutons"));
        nouveauAttribut = new QPushButton(formModifierJeu);
        nouveauAttribut->setObjectName(QStringLiteral("nouveauAttribut"));

        boutons->addWidget(nouveauAttribut);

        modifierAttribut = new QPushButton(formModifierJeu);
        modifierAttribut->setObjectName(QStringLiteral("modifierAttribut"));

        boutons->addWidget(modifierAttribut);


        formulaire->setLayout(5, QFormLayout::LabelRole, boutons);

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


        CentreV->addLayout(formulaire);


        verticalLayout_2->addLayout(CentreV);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        supprimerJeuButton = new QPushButton(formModifierJeu);
        supprimerJeuButton->setObjectName(QStringLiteral("supprimerJeuButton"));

        horizontalLayout->addWidget(supprimerJeuButton);

        modifierJeuButton = new QPushButton(formModifierJeu);
        modifierJeuButton->setObjectName(QStringLiteral("modifierJeuButton"));

        horizontalLayout->addWidget(modifierJeuButton);

        retourButton = new QPushButton(formModifierJeu);
        retourButton->setObjectName(QStringLiteral("retourButton"));

        horizontalLayout->addWidget(retourButton);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(formModifierJeu);
        QObject::connect(retourButton, SIGNAL(clicked()), formModifierJeu, SLOT(close()));

        QMetaObject::connectSlotsByName(formModifierJeu);
    } // setupUi

    void retranslateUi(QWidget *formModifierJeu)
    {
        formModifierJeu->setWindowTitle(QApplication::translate("formModifierJeu", "Modification Jeu", 0));
        label->setText(QApplication::translate("formModifierJeu", "Modification Jeu", 0));
        label_6->setText(QApplication::translate("formModifierJeu", "Comp\303\251tences", 0));
        label_4->setText(QApplication::translate("formModifierJeu", "Attributs:", 0));
        label_5->setText(QApplication::translate("formModifierJeu", "Valeurs:", 0));
        ajouterButton->setText(QApplication::translate("formModifierJeu", "<--", 0));
        supprimerButton->setText(QApplication::translate("formModifierJeu", "-->", 0));
        nouveauAttribut->setText(QApplication::translate("formModifierJeu", "Nouveau", 0));
        modifierAttribut->setText(QApplication::translate("formModifierJeu", "Modifier", 0));
        label_3->setText(QApplication::translate("formModifierJeu", "Th\303\250me", 0));
        label_2->setText(QApplication::translate("formModifierJeu", "Nom du jeu", 0));
        parcourirButton->setText(QApplication::translate("formModifierJeu", "Parcourir", 0));
        themeImage->setText(QString());
        supprimerJeuButton->setText(QApplication::translate("formModifierJeu", "Supprimer", 0));
        modifierJeuButton->setText(QApplication::translate("formModifierJeu", "Modifier", 0));
        retourButton->setText(QApplication::translate("formModifierJeu", "Annuler", 0));
    } // retranslateUi

};

namespace Ui {
    class formModifierJeu: public Ui_formModifierJeu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMMODIFIERJEU_H
