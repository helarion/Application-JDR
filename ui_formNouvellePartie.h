/********************************************************************************
** Form generated from reading UI file 'formNouvellePartie.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMNOUVELLEPARTIE_H
#define UI_FORMNOUVELLEPARTIE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_formNouvellePartie
{
public:
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QFormLayout *formLayout;
    QLineEdit *nomPartie;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_2;
    QLineEdit *date;
    QTextEdit *resumePartie;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_5;
    QListWidget *listPersonnages;
    QVBoxLayout *verticalLayout;
    QPushButton *ajouterPersonnageButton;
    QPushButton *modifierPersonnageButton;
    QPushButton *supprimerPersonnageButton;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *validerButton;
    QPushButton *retourButton;

    void setupUi(QDialog *formNouvellePartie)
    {
        if (formNouvellePartie->objectName().isEmpty())
            formNouvellePartie->setObjectName(QStringLiteral("formNouvellePartie"));
        formNouvellePartie->resize(400, 444);
        verticalLayout_3 = new QVBoxLayout(formNouvellePartie);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label = new QLabel(formNouvellePartie);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);

        verticalLayout_3->addWidget(label, 0, Qt::AlignHCenter);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(-1, 0, 0, -1);
        nomPartie = new QLineEdit(formNouvellePartie);
        nomPartie->setObjectName(QStringLiteral("nomPartie"));

        formLayout->setWidget(0, QFormLayout::FieldRole, nomPartie);

        label_3 = new QLabel(formNouvellePartie);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(formNouvellePartie);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        label_2 = new QLabel(formNouvellePartie);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_2);

        date = new QLineEdit(formNouvellePartie);
        date->setObjectName(QStringLiteral("date"));

        formLayout->setWidget(4, QFormLayout::FieldRole, date);

        resumePartie = new QTextEdit(formNouvellePartie);
        resumePartie->setObjectName(QStringLiteral("resumePartie"));

        formLayout->setWidget(3, QFormLayout::SpanningRole, resumePartie);


        verticalLayout_3->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, 0, -1);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, -1, 0, -1);
        label_5 = new QLabel(formNouvellePartie);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_2->addWidget(label_5);

        listPersonnages = new QListWidget(formNouvellePartie);
        listPersonnages->setObjectName(QStringLiteral("listPersonnages"));

        verticalLayout_2->addWidget(listPersonnages);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        ajouterPersonnageButton = new QPushButton(formNouvellePartie);
        ajouterPersonnageButton->setObjectName(QStringLiteral("ajouterPersonnageButton"));

        verticalLayout->addWidget(ajouterPersonnageButton);

        modifierPersonnageButton = new QPushButton(formNouvellePartie);
        modifierPersonnageButton->setObjectName(QStringLiteral("modifierPersonnageButton"));

        verticalLayout->addWidget(modifierPersonnageButton);

        supprimerPersonnageButton = new QPushButton(formNouvellePartie);
        supprimerPersonnageButton->setObjectName(QStringLiteral("supprimerPersonnageButton"));

        verticalLayout->addWidget(supprimerPersonnageButton);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        validerButton = new QPushButton(formNouvellePartie);
        validerButton->setObjectName(QStringLiteral("validerButton"));

        horizontalLayout_2->addWidget(validerButton);

        retourButton = new QPushButton(formNouvellePartie);
        retourButton->setObjectName(QStringLiteral("retourButton"));

        horizontalLayout_2->addWidget(retourButton);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(formNouvellePartie);
        QObject::connect(retourButton, SIGNAL(clicked()), formNouvellePartie, SLOT(close()));

        QMetaObject::connectSlotsByName(formNouvellePartie);
    } // setupUi

    void retranslateUi(QDialog *formNouvellePartie)
    {
        formNouvellePartie->setWindowTitle(QApplication::translate("formNouvellePartie", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("formNouvellePartie", "Nouvelle Partie :", Q_NULLPTR));
        label_3->setText(QApplication::translate("formNouvellePartie", "Nom :", Q_NULLPTR));
        label_4->setText(QApplication::translate("formNouvellePartie", "Description :", Q_NULLPTR));
        label_2->setText(QApplication::translate("formNouvellePartie", "Date :", Q_NULLPTR));
        label_5->setText(QApplication::translate("formNouvellePartie", "Personnages :", Q_NULLPTR));
        ajouterPersonnageButton->setText(QApplication::translate("formNouvellePartie", "Ajouter", Q_NULLPTR));
        modifierPersonnageButton->setText(QApplication::translate("formNouvellePartie", "Modifier", Q_NULLPTR));
        supprimerPersonnageButton->setText(QApplication::translate("formNouvellePartie", "Supprimer", Q_NULLPTR));
        validerButton->setText(QApplication::translate("formNouvellePartie", "Valider", Q_NULLPTR));
        retourButton->setText(QApplication::translate("formNouvellePartie", "Annuler", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class formNouvellePartie: public Ui_formNouvellePartie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMNOUVELLEPARTIE_H
