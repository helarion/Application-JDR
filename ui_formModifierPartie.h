/********************************************************************************
** Form generated from reading UI file 'formModifierPartie.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMMODIFIERPARTIE_H
#define UI_FORMMODIFIERPARTIE_H

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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_formModifierPartie
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *validerButton_2;
    QPushButton *retourButton_2;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_6;
    QListWidget *listPersonnages_2;
    QVBoxLayout *verticalLayout_4;
    QPushButton *ajouterPersonnageButton_2;
    QPushButton *modifierPersonnageButton_2;
    QPushButton *supprimerPersonnageButton_2;
    QWidget *layoutWidget_3;
    QFormLayout *formLayout_2;
    QLineEdit *nomPartie_2;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *date_2;
    QTextEdit *resumePartie_2;

    void setupUi(QDialog *formModifierPartie)
    {
        if (formModifierPartie->objectName().isEmpty())
            formModifierPartie->setObjectName(QStringLiteral("formModifierPartie"));
        formModifierPartie->resize(400, 444);
        label = new QLabel(formModifierPartie);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 20, 195, 33));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        layoutWidget = new QWidget(formModifierPartie);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(17, 410, 371, 25));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        validerButton_2 = new QPushButton(layoutWidget);
        validerButton_2->setObjectName(QStringLiteral("validerButton_2"));

        horizontalLayout_3->addWidget(validerButton_2);

        retourButton_2 = new QPushButton(layoutWidget);
        retourButton_2->setObjectName(QStringLiteral("retourButton_2"));

        horizontalLayout_3->addWidget(retourButton_2);

        layoutWidget_2 = new QWidget(formModifierPartie);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 260, 371, 141));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, -1, 0, -1);
        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_3->addWidget(label_6);

        listPersonnages_2 = new QListWidget(layoutWidget_2);
        listPersonnages_2->setObjectName(QStringLiteral("listPersonnages_2"));

        verticalLayout_3->addWidget(listPersonnages_2);


        horizontalLayout_4->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        ajouterPersonnageButton_2 = new QPushButton(layoutWidget_2);
        ajouterPersonnageButton_2->setObjectName(QStringLiteral("ajouterPersonnageButton_2"));

        verticalLayout_4->addWidget(ajouterPersonnageButton_2);

        modifierPersonnageButton_2 = new QPushButton(layoutWidget_2);
        modifierPersonnageButton_2->setObjectName(QStringLiteral("modifierPersonnageButton_2"));

        verticalLayout_4->addWidget(modifierPersonnageButton_2);

        supprimerPersonnageButton_2 = new QPushButton(layoutWidget_2);
        supprimerPersonnageButton_2->setObjectName(QStringLiteral("supprimerPersonnageButton_2"));

        verticalLayout_4->addWidget(supprimerPersonnageButton_2);


        horizontalLayout_4->addLayout(verticalLayout_4);

        layoutWidget_3 = new QWidget(formModifierPartie);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(10, 60, 371, 191));
        formLayout_2 = new QFormLayout(layoutWidget_3);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        nomPartie_2 = new QLineEdit(layoutWidget_3);
        nomPartie_2->setObjectName(QStringLiteral("nomPartie_2"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, nomPartie_2);

        label_7 = new QLabel(layoutWidget_3);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_7);

        label_8 = new QLabel(layoutWidget_3);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_8);

        label_9 = new QLabel(layoutWidget_3);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_9);

        date_2 = new QLineEdit(layoutWidget_3);
        date_2->setObjectName(QStringLiteral("date_2"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, date_2);

        resumePartie_2 = new QTextEdit(layoutWidget_3);
        resumePartie_2->setObjectName(QStringLiteral("resumePartie_2"));

        formLayout_2->setWidget(3, QFormLayout::SpanningRole, resumePartie_2);

        label->raise();
        layoutWidget->raise();
        layoutWidget_2->raise();
        layoutWidget_3->raise();

        retranslateUi(formModifierPartie);

        QMetaObject::connectSlotsByName(formModifierPartie);
    } // setupUi

    void retranslateUi(QDialog *formModifierPartie)
    {
        formModifierPartie->setWindowTitle(QApplication::translate("formModifierPartie", "Dialog", 0));
        label->setText(QApplication::translate("formModifierPartie", "Modifier Partie :", 0));
        validerButton_2->setText(QApplication::translate("formModifierPartie", "Valider", 0));
        retourButton_2->setText(QApplication::translate("formModifierPartie", "Annuler", 0));
        label_6->setText(QApplication::translate("formModifierPartie", "Personnages :", 0));
        ajouterPersonnageButton_2->setText(QApplication::translate("formModifierPartie", "Ajouter", 0));
        modifierPersonnageButton_2->setText(QApplication::translate("formModifierPartie", "Modifier", 0));
        supprimerPersonnageButton_2->setText(QApplication::translate("formModifierPartie", "Supprimer", 0));
        label_7->setText(QApplication::translate("formModifierPartie", "Nom :", 0));
        label_8->setText(QApplication::translate("formModifierPartie", "Description :", 0));
        label_9->setText(QApplication::translate("formModifierPartie", "Date :", 0));
    } // retranslateUi

};

namespace Ui {
    class formModifierPartie: public Ui_formModifierPartie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMMODIFIERPARTIE_H
