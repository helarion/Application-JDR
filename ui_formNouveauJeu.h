/********************************************************************************
** Form generated from reading UI file 'formNouveauJeu.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
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
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_formNouveauJeu
{
public:
    QLabel *label;
    QLineEdit *NomJeu;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *CreerJeu;
    QPushButton *AnnulerJeu;
    QLineEdit *AdrTheme;

    void setupUi(QDialog *formNouveauJeu)
    {
        if (formNouveauJeu->objectName().isEmpty())
            formNouveauJeu->setObjectName(QStringLiteral("formNouveauJeu"));
        formNouveauJeu->resize(435, 302);
        label = new QLabel(formNouveauJeu);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 70, 121, 21));
        NomJeu = new QLineEdit(formNouveauJeu);
        NomJeu->setObjectName(QStringLiteral("NomJeu"));
        NomJeu->setGeometry(QRect(170, 70, 113, 20));
        label_2 = new QLabel(formNouveauJeu);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 100, 121, 21));
        label_3 = new QLabel(formNouveauJeu);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 10, 341, 51));
        QFont font;
        font.setPointSize(14);
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);
        CreerJeu = new QPushButton(formNouveauJeu);
        CreerJeu->setObjectName(QStringLiteral("CreerJeu"));
        CreerJeu->setGeometry(QRect(50, 250, 75, 23));
        AnnulerJeu = new QPushButton(formNouveauJeu);
        AnnulerJeu->setObjectName(QStringLiteral("AnnulerJeu"));
        AnnulerJeu->setGeometry(QRect(190, 250, 75, 23));
        AdrTheme = new QLineEdit(formNouveauJeu);
        AdrTheme->setObjectName(QStringLiteral("AdrTheme"));
        AdrTheme->setGeometry(QRect(170, 100, 113, 20));

        retranslateUi(formNouveauJeu);
        QObject::connect(AnnulerJeu, SIGNAL(clicked()), formNouveauJeu, SLOT(close()));

        QMetaObject::connectSlotsByName(formNouveauJeu);
    } // setupUi

    void retranslateUi(QDialog *formNouveauJeu)
    {
        formNouveauJeu->setWindowTitle(QApplication::translate("formNouveauJeu", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("formNouveauJeu", "Nom du nouveau Jeu :", Q_NULLPTR));
        label_2->setText(QApplication::translate("formNouveauJeu", "Adresse du theme :", Q_NULLPTR));
        label_3->setText(QApplication::translate("formNouveauJeu", "Nouveau Jeu :", Q_NULLPTR));
        CreerJeu->setText(QApplication::translate("formNouveauJeu", "Creer", Q_NULLPTR));
        AnnulerJeu->setText(QApplication::translate("formNouveauJeu", "Annuler", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class formNouveauJeu: public Ui_formNouveauJeu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMNOUVEAUJEU_H
