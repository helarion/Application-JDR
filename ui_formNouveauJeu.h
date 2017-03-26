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
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *CreerJeu;
    QPushButton *AnnulerJeu;
    QLabel *label_3;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *NomJeu;
    QLabel *label_2;
    QLineEdit *AdrTheme;
    QPushButton *parcourirButton;
    QHBoxLayout *horizontalLayout;
    QListWidget *listWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *nouveauAttributBUtton;
    QPushButton *modifierAttributButton;
    QPushButton *supprimerAttributButton;
    QLabel *label_4;

    void setupUi(QDialog *formNouveauJeu)
    {
        if (formNouveauJeu->objectName().isEmpty())
            formNouveauJeu->setObjectName(QStringLiteral("formNouveauJeu"));
        formNouveauJeu->resize(704, 475);
        gridLayout = new QGridLayout(formNouveauJeu);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        CreerJeu = new QPushButton(formNouveauJeu);
        CreerJeu->setObjectName(QStringLiteral("CreerJeu"));

        horizontalLayout_3->addWidget(CreerJeu);

        AnnulerJeu = new QPushButton(formNouveauJeu);
        AnnulerJeu->setObjectName(QStringLiteral("AnnulerJeu"));

        horizontalLayout_3->addWidget(AnnulerJeu);


        gridLayout->addLayout(horizontalLayout_3, 6, 0, 1, 1);

        label_3 = new QLabel(formNouveauJeu);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font;
        font.setPointSize(14);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 0, 0, 1, 2);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(formNouveauJeu);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        NomJeu = new QLineEdit(formNouveauJeu);
        NomJeu->setObjectName(QStringLiteral("NomJeu"));

        formLayout->setWidget(0, QFormLayout::FieldRole, NomJeu);

        label_2 = new QLabel(formNouveauJeu);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        AdrTheme = new QLineEdit(formNouveauJeu);
        AdrTheme->setObjectName(QStringLiteral("AdrTheme"));

        formLayout->setWidget(1, QFormLayout::FieldRole, AdrTheme);

        parcourirButton = new QPushButton(formNouveauJeu);
        parcourirButton->setObjectName(QStringLiteral("parcourirButton"));

        formLayout->setWidget(2, QFormLayout::FieldRole, parcourirButton);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, -1, 0);
        listWidget = new QListWidget(formNouveauJeu);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        horizontalLayout->addWidget(listWidget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, 0, -1);
        nouveauAttributBUtton = new QPushButton(formNouveauJeu);
        nouveauAttributBUtton->setObjectName(QStringLiteral("nouveauAttributBUtton"));

        verticalLayout->addWidget(nouveauAttributBUtton);

        modifierAttributButton = new QPushButton(formNouveauJeu);
        modifierAttributButton->setObjectName(QStringLiteral("modifierAttributButton"));

        verticalLayout->addWidget(modifierAttributButton);

        supprimerAttributButton = new QPushButton(formNouveauJeu);
        supprimerAttributButton->setObjectName(QStringLiteral("supprimerAttributButton"));

        verticalLayout->addWidget(supprimerAttributButton);


        horizontalLayout->addLayout(verticalLayout);


        formLayout->setLayout(4, QFormLayout::SpanningRole, horizontalLayout);

        label_4 = new QLabel(formNouveauJeu);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);


        gridLayout->addLayout(formLayout, 1, 0, 1, 1);


        retranslateUi(formNouveauJeu);
        QObject::connect(AnnulerJeu, SIGNAL(clicked()), formNouveauJeu, SLOT(close()));

        QMetaObject::connectSlotsByName(formNouveauJeu);
    } // setupUi

    void retranslateUi(QDialog *formNouveauJeu)
    {
        formNouveauJeu->setWindowTitle(QApplication::translate("formNouveauJeu", "Dialog", 0));
        CreerJeu->setText(QApplication::translate("formNouveauJeu", "Creer", 0));
        AnnulerJeu->setText(QApplication::translate("formNouveauJeu", "Annuler", 0));
        label_3->setText(QApplication::translate("formNouveauJeu", "Nouveau Jeu :", 0));
        label->setText(QApplication::translate("formNouveauJeu", "Nom du nouveau Jeu :", 0));
        label_2->setText(QApplication::translate("formNouveauJeu", "Image th\303\250me :", 0));
        parcourirButton->setText(QApplication::translate("formNouveauJeu", "Parcourir", 0));
        nouveauAttributBUtton->setText(QApplication::translate("formNouveauJeu", "Nouveau", 0));
        modifierAttributButton->setText(QApplication::translate("formNouveauJeu", "Modifier", 0));
        supprimerAttributButton->setText(QApplication::translate("formNouveauJeu", "Supprimer", 0));
        label_4->setText(QApplication::translate("formNouveauJeu", "Attributs", 0));
    } // retranslateUi

};

namespace Ui {
    class formNouveauJeu: public Ui_formNouveauJeu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMNOUVEAUJEU_H
