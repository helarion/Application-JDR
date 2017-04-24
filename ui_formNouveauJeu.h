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
    QLabel *themeImage;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *nomJeu;
    QLabel *label_2;
    QLineEdit *theme;
    QPushButton *parcourirButton;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout;
    QListWidget *listAttributSelect;
    QVBoxLayout *verticalLayout_2;
    QPushButton *ajouterButton;
    QPushButton *retirerButton;
    QListWidget *listAttributDisp;
    QVBoxLayout *verticalLayout;
    QPushButton *nouveauAttributButton;
    QPushButton *modifierAttributButton;

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

        themeImage = new QLabel(formNouveauJeu);
        themeImage->setObjectName(QStringLiteral("themeImage"));
        themeImage->setEnabled(true);
        themeImage->setMinimumSize(QSize(300, 300));
        themeImage->setMaximumSize(QSize(300, 300));

        gridLayout->addWidget(themeImage, 1, 1, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(formNouveauJeu);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        nomJeu = new QLineEdit(formNouveauJeu);
        nomJeu->setObjectName(QStringLiteral("nomJeu"));

        formLayout->setWidget(0, QFormLayout::FieldRole, nomJeu);

        label_2 = new QLabel(formNouveauJeu);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        theme = new QLineEdit(formNouveauJeu);
        theme->setObjectName(QStringLiteral("theme"));

        formLayout->setWidget(1, QFormLayout::FieldRole, theme);

        parcourirButton = new QPushButton(formNouveauJeu);
        parcourirButton->setObjectName(QStringLiteral("parcourirButton"));

        formLayout->setWidget(2, QFormLayout::FieldRole, parcourirButton);

        label_4 = new QLabel(formNouveauJeu);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, -1, 0);
        listAttributSelect = new QListWidget(formNouveauJeu);
        listAttributSelect->setObjectName(QStringLiteral("listAttributSelect"));

        horizontalLayout->addWidget(listAttributSelect);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, -1, 0, -1);
        ajouterButton = new QPushButton(formNouveauJeu);
        ajouterButton->setObjectName(QStringLiteral("ajouterButton"));

        verticalLayout_2->addWidget(ajouterButton);

        retirerButton = new QPushButton(formNouveauJeu);
        retirerButton->setObjectName(QStringLiteral("retirerButton"));

        verticalLayout_2->addWidget(retirerButton);


        horizontalLayout->addLayout(verticalLayout_2);

        listAttributDisp = new QListWidget(formNouveauJeu);
        listAttributDisp->setObjectName(QStringLiteral("listAttributDisp"));

        horizontalLayout->addWidget(listAttributDisp);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, 0, -1);
        nouveauAttributButton = new QPushButton(formNouveauJeu);
        nouveauAttributButton->setObjectName(QStringLiteral("nouveauAttributButton"));

        verticalLayout->addWidget(nouveauAttributButton);

        modifierAttributButton = new QPushButton(formNouveauJeu);
        modifierAttributButton->setObjectName(QStringLiteral("modifierAttributButton"));

        verticalLayout->addWidget(modifierAttributButton);


        horizontalLayout->addLayout(verticalLayout);


        formLayout->setLayout(4, QFormLayout::SpanningRole, horizontalLayout);


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
        themeImage->setText(QString());
        label->setText(QApplication::translate("formNouveauJeu", "Nom du nouveau Jeu :", 0));
        label_2->setText(QApplication::translate("formNouveauJeu", "Image th\303\250me :", 0));
        parcourirButton->setText(QApplication::translate("formNouveauJeu", "Parcourir", 0));
        label_4->setText(QApplication::translate("formNouveauJeu", "Attributs", 0));
        ajouterButton->setText(QApplication::translate("formNouveauJeu", "<--", 0));
        retirerButton->setText(QApplication::translate("formNouveauJeu", "-->", 0));
        nouveauAttributButton->setText(QApplication::translate("formNouveauJeu", "Nouveau", 0));
        modifierAttributButton->setText(QApplication::translate("formNouveauJeu", "Modifier", 0));
    } // retranslateUi

};

namespace Ui {
    class formNouveauJeu: public Ui_formNouveauJeu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMNOUVEAUJEU_H
