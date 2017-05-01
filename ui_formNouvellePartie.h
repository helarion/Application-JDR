/********************************************************************************
** Form generated from reading UI file 'formNouvellePartie.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_formNouvellePartie
{
public:
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QFormLayout *formLayout;
    QLabel *label_3;
    QLineEdit *nomPartie;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *validerButton;
    QPushButton *retourButton;

    void setupUi(QDialog *formNouvellePartie)
    {
        if (formNouvellePartie->objectName().isEmpty())
            formNouvellePartie->setObjectName(QStringLiteral("formNouvellePartie"));
        formNouvellePartie->resize(400, 158);
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
        label_3 = new QLabel(formNouvellePartie);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        nomPartie = new QLineEdit(formNouvellePartie);
        nomPartie->setObjectName(QStringLiteral("nomPartie"));

        formLayout->setWidget(0, QFormLayout::FieldRole, nomPartie);


        verticalLayout_3->addLayout(formLayout);

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
        formNouvellePartie->setWindowTitle(QApplication::translate("formNouvellePartie", "Cr\303\251ation de partie", 0));
        label->setText(QApplication::translate("formNouvellePartie", "Nouvelle Partie :", 0));
        label_3->setText(QApplication::translate("formNouvellePartie", "Nom :", 0));
        validerButton->setText(QApplication::translate("formNouvellePartie", "Valider", 0));
        retourButton->setText(QApplication::translate("formNouvellePartie", "Annuler", 0));
    } // retranslateUi

};

namespace Ui {
    class formNouvellePartie: public Ui_formNouvellePartie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMNOUVELLEPARTIE_H
