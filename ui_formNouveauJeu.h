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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_NouveauJeu
{
public:
    QLabel *label;
    QLineEdit *NomJeu;
    QTextEdit *DescriptionJeu;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *CreerJeu;
    QPushButton *AnnulerJeu;
    QListWidget *listWidget;
    QLabel *label_4;

    void setupUi(QDialog *NouveauJeu)
    {
        if (NouveauJeu->objectName().isEmpty())
            NouveauJeu->setObjectName(QStringLiteral("NouveauJeu"));
        NouveauJeu->resize(435, 302);
        label = new QLabel(NouveauJeu);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 70, 121, 21));
        NomJeu = new QLineEdit(NouveauJeu);
        NomJeu->setObjectName(QStringLiteral("NomJeu"));
        NomJeu->setGeometry(QRect(170, 70, 113, 20));
        DescriptionJeu = new QTextEdit(NouveauJeu);
        DescriptionJeu->setObjectName(QStringLiteral("DescriptionJeu"));
        DescriptionJeu->setGeometry(QRect(50, 110, 231, 121));
        label_2 = new QLabel(NouveauJeu);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 90, 121, 21));
        label_3 = new QLabel(NouveauJeu);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 10, 341, 51));
        QFont font;
        font.setPointSize(14);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);
        CreerJeu = new QPushButton(NouveauJeu);
        CreerJeu->setObjectName(QStringLiteral("CreerJeu"));
        CreerJeu->setGeometry(QRect(50, 250, 75, 23));
        AnnulerJeu = new QPushButton(NouveauJeu);
        AnnulerJeu->setObjectName(QStringLiteral("AnnulerJeu"));
        AnnulerJeu->setGeometry(QRect(190, 250, 75, 23));
        listWidget = new QListWidget(NouveauJeu);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(310, 110, 101, 151));
        label_4 = new QLabel(NouveauJeu);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(310, 90, 71, 16));

        retranslateUi(NouveauJeu);
        QObject::connect(AnnulerJeu, SIGNAL(clicked()), NouveauJeu, SLOT(close()));

        QMetaObject::connectSlotsByName(NouveauJeu);
    } // setupUi

    void retranslateUi(QDialog *NouveauJeu)
    {
        NouveauJeu->setWindowTitle(QApplication::translate("NouveauJeu", "Dialog", 0));
        label->setText(QApplication::translate("NouveauJeu", "Nom du nouveau Jeu :", 0));
        label_2->setText(QApplication::translate("NouveauJeu", "Description :", 0));
        label_3->setText(QApplication::translate("NouveauJeu", "Nouveau Jeu :", 0));
        CreerJeu->setText(QApplication::translate("NouveauJeu", "Creer", 0));
        AnnulerJeu->setText(QApplication::translate("NouveauJeu", "Annuler", 0));
        label_4->setText(QApplication::translate("NouveauJeu", "Attributs :", 0));
    } // retranslateUi

};

namespace Ui {
    class NouveauJeu: public Ui_NouveauJeu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMNOUVEAUJEU_H
