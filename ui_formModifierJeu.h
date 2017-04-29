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
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *theme;
    QLineEdit *nomJeu;
    QHBoxLayout *Attributs;
    QListWidget *listAttributSelect;
    QVBoxLayout *verticalLayout_3;
    QPushButton *ajouterButton;
    QPushButton *supprimerButton;
    QListWidget *listAttributDisp;
    QVBoxLayout *boutons;
    QPushButton *nouveauAttribut;
    QPushButton *modifierAttribut;
    QPushButton *parcourirButton;
    QLabel *label_4;
    QLabel *themeImage;
    QHBoxLayout *horizontalLayout;
    QPushButton *supprimerJeuButton;
    QPushButton *modifierJeuButton;
    QPushButton *retourButton;

    void setupUi(QWidget *formModifierJeu)
    {
        if (formModifierJeu->objectName().isEmpty())
            formModifierJeu->setObjectName(QStringLiteral("formModifierJeu"));
        formModifierJeu->resize(763, 418);
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
        label_2 = new QLabel(formModifierJeu);
        label_2->setObjectName(QStringLiteral("label_2"));

        formulaire->setWidget(0, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(formModifierJeu);
        label_3->setObjectName(QStringLiteral("label_3"));

        formulaire->setWidget(1, QFormLayout::LabelRole, label_3);

        theme = new QLineEdit(formModifierJeu);
        theme->setObjectName(QStringLiteral("theme"));

        formulaire->setWidget(1, QFormLayout::FieldRole, theme);

        nomJeu = new QLineEdit(formModifierJeu);
        nomJeu->setObjectName(QStringLiteral("nomJeu"));

        formulaire->setWidget(0, QFormLayout::FieldRole, nomJeu);

        Attributs = new QHBoxLayout();
        Attributs->setObjectName(QStringLiteral("Attributs"));
        Attributs->setContentsMargins(-1, -1, 0, 0);
        listAttributSelect = new QListWidget(formModifierJeu);
        listAttributSelect->setObjectName(QStringLiteral("listAttributSelect"));

        Attributs->addWidget(listAttributSelect);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, -1, 0, -1);
        ajouterButton = new QPushButton(formModifierJeu);
        ajouterButton->setObjectName(QStringLiteral("ajouterButton"));

        verticalLayout_3->addWidget(ajouterButton);

        supprimerButton = new QPushButton(formModifierJeu);
        supprimerButton->setObjectName(QStringLiteral("supprimerButton"));

        verticalLayout_3->addWidget(supprimerButton);


        Attributs->addLayout(verticalLayout_3);

        listAttributDisp = new QListWidget(formModifierJeu);
        listAttributDisp->setObjectName(QStringLiteral("listAttributDisp"));

        Attributs->addWidget(listAttributDisp);

        boutons = new QVBoxLayout();
        boutons->setObjectName(QStringLiteral("boutons"));
        nouveauAttribut = new QPushButton(formModifierJeu);
        nouveauAttribut->setObjectName(QStringLiteral("nouveauAttribut"));

        boutons->addWidget(nouveauAttribut);

        modifierAttribut = new QPushButton(formModifierJeu);
        modifierAttribut->setObjectName(QStringLiteral("modifierAttribut"));

        boutons->addWidget(modifierAttribut);


        Attributs->addLayout(boutons);


        formulaire->setLayout(4, QFormLayout::FieldRole, Attributs);

        parcourirButton = new QPushButton(formModifierJeu);
        parcourirButton->setObjectName(QStringLiteral("parcourirButton"));

        formulaire->setWidget(2, QFormLayout::FieldRole, parcourirButton);

        label_4 = new QLabel(formModifierJeu);
        label_4->setObjectName(QStringLiteral("label_4"));

        formulaire->setWidget(3, QFormLayout::FieldRole, label_4);


        CentreV->addLayout(formulaire);

        themeImage = new QLabel(formModifierJeu);
        themeImage->setObjectName(QStringLiteral("themeImage"));
        themeImage->setMinimumSize(QSize(300, 300));
        themeImage->setMaximumSize(QSize(300, 300));

        CentreV->addWidget(themeImage);


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
        label_2->setText(QApplication::translate("formModifierJeu", "Nom du jeu", 0));
        label_3->setText(QApplication::translate("formModifierJeu", "Th\303\250me", 0));
        ajouterButton->setText(QApplication::translate("formModifierJeu", "<--", 0));
        supprimerButton->setText(QApplication::translate("formModifierJeu", "-->", 0));
        nouveauAttribut->setText(QApplication::translate("formModifierJeu", "Nouveau", 0));
        modifierAttribut->setText(QApplication::translate("formModifierJeu", "Modifier", 0));
        parcourirButton->setText(QApplication::translate("formModifierJeu", "Parcourir", 0));
        label_4->setText(QApplication::translate("formModifierJeu", "Attributs", 0));
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
