/********************************************************************************
** Form generated from reading UI file 'formNouvelleCampagne.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMNOUVELLECAMPAGNE_H
#define UI_FORMNOUVELLECAMPAGNE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_formNouvelleCampagne
{
public:
    QGridLayout *gridLayout;
    QListWidget *personnagesList;
    QLabel *label_2;
    QLineEdit *nomCampagne;
    QPushButton *creerButton;
    QLabel *label;
    QLabel *label_3;
    QPushButton *annulerButton;
    QLabel *label_4;
    QTextEdit *scenarioCampagne;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *formNouvelleCampagne)
    {
        if (formNouvelleCampagne->objectName().isEmpty())
            formNouvelleCampagne->setObjectName(QStringLiteral("formNouvelleCampagne"));
        formNouvelleCampagne->resize(369, 328);
        gridLayout = new QGridLayout(formNouvelleCampagne);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        personnagesList = new QListWidget(formNouvelleCampagne);
        personnagesList->setObjectName(QStringLiteral("personnagesList"));

        gridLayout->addWidget(personnagesList, 5, 0, 3, 2);

        label_2 = new QLabel(formNouvelleCampagne);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 4, 0, 1, 1);

        nomCampagne = new QLineEdit(formNouvelleCampagne);
        nomCampagne->setObjectName(QStringLiteral("nomCampagne"));

        gridLayout->addWidget(nomCampagne, 2, 1, 1, 2);

        creerButton = new QPushButton(formNouvelleCampagne);
        creerButton->setObjectName(QStringLiteral("creerButton"));

        gridLayout->addWidget(creerButton, 8, 0, 1, 2);

        label = new QLabel(formNouvelleCampagne);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 1, 1, 2);

        label_3 = new QLabel(formNouvelleCampagne);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        annulerButton = new QPushButton(formNouvelleCampagne);
        annulerButton->setObjectName(QStringLiteral("annulerButton"));

        gridLayout->addWidget(annulerButton, 8, 2, 1, 1);

        label_4 = new QLabel(formNouvelleCampagne);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        scenarioCampagne = new QTextEdit(formNouvelleCampagne);
        scenarioCampagne->setObjectName(QStringLiteral("scenarioCampagne"));

        gridLayout->addWidget(scenarioCampagne, 3, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton = new QPushButton(formNouvelleCampagne);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(formNouvelleCampagne);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(formNouvelleCampagne);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);


        gridLayout->addLayout(verticalLayout, 5, 2, 1, 1);


        retranslateUi(formNouvelleCampagne);

        QMetaObject::connectSlotsByName(formNouvelleCampagne);
    } // setupUi

    void retranslateUi(QDialog *formNouvelleCampagne)
    {
        formNouvelleCampagne->setWindowTitle(QApplication::translate("formNouvelleCampagne", "Dialog", Q_NULLPTR));
        label_2->setText(QApplication::translate("formNouvelleCampagne", "Personnages :", Q_NULLPTR));
        creerButton->setText(QApplication::translate("formNouvelleCampagne", "Cr\303\251er", Q_NULLPTR));
        label->setText(QApplication::translate("formNouvelleCampagne", "Nouvelle campagne :", Q_NULLPTR));
        label_3->setText(QApplication::translate("formNouvelleCampagne", "Nom :", Q_NULLPTR));
        annulerButton->setText(QApplication::translate("formNouvelleCampagne", "Annuler", Q_NULLPTR));
        label_4->setText(QApplication::translate("formNouvelleCampagne", "Scenario:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("formNouvelleCampagne", "Ajouter", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("formNouvelleCampagne", "Modifier", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("formNouvelleCampagne", "Supprimer", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class formNouvelleCampagne: public Ui_formNouvelleCampagne {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMNOUVELLECAMPAGNE_H
