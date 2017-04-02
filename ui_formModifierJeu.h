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
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *supprimerJeuButton;
    QPushButton *modifierJeuButton;
    QPushButton *retourButton;
    QLabel *label;
    QLabel *themeImage;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *theme;
    QPushButton *parcourirButton;
    QVBoxLayout *verticalLayout;
    QPushButton *nouveauAttribut;
    QPushButton *modifierAttribut;
    QPushButton *supprimerAttribut;
    QListWidget *listAttribut;
    QLineEdit *nomJeu;

    void setupUi(QWidget *formModifierJeu)
    {
        if (formModifierJeu->objectName().isEmpty())
            formModifierJeu->setObjectName(QStringLiteral("formModifierJeu"));
        formModifierJeu->resize(660, 418);
        gridLayout = new QGridLayout(formModifierJeu);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
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


        gridLayout->addLayout(horizontalLayout, 3, 2, 1, 1);

        label = new QLabel(formModifierJeu);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 2, 1, 1, Qt::AlignHCenter);

        themeImage = new QLabel(formModifierJeu);
        themeImage->setObjectName(QStringLiteral("themeImage"));
        themeImage->setMinimumSize(QSize(300, 300));
        themeImage->setMaximumSize(QSize(300, 300));

        gridLayout->addWidget(themeImage, 2, 3, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_2 = new QLabel(formModifierJeu);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(formModifierJeu);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        theme = new QLineEdit(formModifierJeu);
        theme->setObjectName(QStringLiteral("theme"));

        formLayout->setWidget(1, QFormLayout::FieldRole, theme);

        parcourirButton = new QPushButton(formModifierJeu);
        parcourirButton->setObjectName(QStringLiteral("parcourirButton"));

        formLayout->setWidget(2, QFormLayout::FieldRole, parcourirButton);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        nouveauAttribut = new QPushButton(formModifierJeu);
        nouveauAttribut->setObjectName(QStringLiteral("nouveauAttribut"));

        verticalLayout->addWidget(nouveauAttribut);

        modifierAttribut = new QPushButton(formModifierJeu);
        modifierAttribut->setObjectName(QStringLiteral("modifierAttribut"));

        verticalLayout->addWidget(modifierAttribut);

        supprimerAttribut = new QPushButton(formModifierJeu);
        supprimerAttribut->setObjectName(QStringLiteral("supprimerAttribut"));

        verticalLayout->addWidget(supprimerAttribut);


        formLayout->setLayout(3, QFormLayout::FieldRole, verticalLayout);

        listAttribut = new QListWidget(formModifierJeu);
        listAttribut->setObjectName(QStringLiteral("listAttribut"));

        formLayout->setWidget(3, QFormLayout::LabelRole, listAttribut);

        nomJeu = new QLineEdit(formModifierJeu);
        nomJeu->setObjectName(QStringLiteral("nomJeu"));

        formLayout->setWidget(0, QFormLayout::FieldRole, nomJeu);


        gridLayout->addLayout(formLayout, 2, 2, 1, 1);


        retranslateUi(formModifierJeu);

        QMetaObject::connectSlotsByName(formModifierJeu);
    } // setupUi

    void retranslateUi(QWidget *formModifierJeu)
    {
        formModifierJeu->setWindowTitle(QApplication::translate("formModifierJeu", "Form", 0));
        supprimerJeuButton->setText(QApplication::translate("formModifierJeu", "Supprimer", 0));
        modifierJeuButton->setText(QApplication::translate("formModifierJeu", "Modifier", 0));
        retourButton->setText(QApplication::translate("formModifierJeu", "Annuler", 0));
        label->setText(QApplication::translate("formModifierJeu", "Modification Jeu", 0));
        themeImage->setText(QString());
        label_2->setText(QApplication::translate("formModifierJeu", "Nom du jeu", 0));
        label_3->setText(QApplication::translate("formModifierJeu", "Th\303\250me", 0));
        parcourirButton->setText(QApplication::translate("formModifierJeu", "Parcourir", 0));
        nouveauAttribut->setText(QApplication::translate("formModifierJeu", "Ajouter", 0));
        modifierAttribut->setText(QApplication::translate("formModifierJeu", "Modifier", 0));
        supprimerAttribut->setText(QApplication::translate("formModifierJeu", "Supprimer", 0));
    } // retranslateUi

};

namespace Ui {
    class formModifierJeu: public Ui_formModifierJeu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMMODIFIERJEU_H
