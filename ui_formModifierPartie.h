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

QT_BEGIN_NAMESPACE

class Ui_formModifierPartie
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFormLayout *formLayout_2;
    QLineEdit *nomPartie;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *date_2;
    QTextEdit *resumePartie;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_6;
    QListWidget *listPersonnage;
    QVBoxLayout *verticalLayout_4;
    QPushButton *ajouterPersonnageButton;
    QPushButton *modifierPersonnageButton;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *modifierButton;
    QPushButton *retourButton;

    void setupUi(QDialog *formModifierPartie)
    {
        if (formModifierPartie->objectName().isEmpty())
            formModifierPartie->setObjectName(QStringLiteral("formModifierPartie"));
        formModifierPartie->resize(400, 444);
        QIcon icon;
        icon.addFile(QStringLiteral("../d20.ico"), QSize(), QIcon::Normal, QIcon::Off);
        formModifierPartie->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(formModifierPartie);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(formModifierPartie);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);

        verticalLayout->addWidget(label);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setContentsMargins(-1, 0, 0, -1);
        nomPartie = new QLineEdit(formModifierPartie);
        nomPartie->setObjectName(QStringLiteral("nomPartie"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, nomPartie);

        label_7 = new QLabel(formModifierPartie);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_7);

        label_8 = new QLabel(formModifierPartie);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_8);

        label_9 = new QLabel(formModifierPartie);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_9);

        date_2 = new QLineEdit(formModifierPartie);
        date_2->setObjectName(QStringLiteral("date_2"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, date_2);

        resumePartie = new QTextEdit(formModifierPartie);
        resumePartie->setObjectName(QStringLiteral("resumePartie"));

        formLayout_2->setWidget(3, QFormLayout::SpanningRole, resumePartie);


        verticalLayout->addLayout(formLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, -1, 0, -1);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, -1, 0, -1);
        label_6 = new QLabel(formModifierPartie);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_3->addWidget(label_6);

        listPersonnage = new QListWidget(formModifierPartie);
        listPersonnage->setObjectName(QStringLiteral("listPersonnage"));

        verticalLayout_3->addWidget(listPersonnage);


        horizontalLayout_4->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        ajouterPersonnageButton = new QPushButton(formModifierPartie);
        ajouterPersonnageButton->setObjectName(QStringLiteral("ajouterPersonnageButton"));

        verticalLayout_4->addWidget(ajouterPersonnageButton);

        modifierPersonnageButton = new QPushButton(formModifierPartie);
        modifierPersonnageButton->setObjectName(QStringLiteral("modifierPersonnageButton"));

        verticalLayout_4->addWidget(modifierPersonnageButton);


        horizontalLayout_4->addLayout(verticalLayout_4);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        modifierButton = new QPushButton(formModifierPartie);
        modifierButton->setObjectName(QStringLiteral("modifierButton"));

        horizontalLayout_3->addWidget(modifierButton);

        retourButton = new QPushButton(formModifierPartie);
        retourButton->setObjectName(QStringLiteral("retourButton"));

        horizontalLayout_3->addWidget(retourButton);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(formModifierPartie);
        QObject::connect(retourButton, SIGNAL(clicked()), formModifierPartie, SLOT(close()));

        QMetaObject::connectSlotsByName(formModifierPartie);
    } // setupUi

    void retranslateUi(QDialog *formModifierPartie)
    {
        formModifierPartie->setWindowTitle(QApplication::translate("formModifierPartie", "Modification partie", 0));
        label->setText(QApplication::translate("formModifierPartie", "Modifier Partie :", 0));
        label_7->setText(QApplication::translate("formModifierPartie", "Nom :", 0));
        label_8->setText(QApplication::translate("formModifierPartie", "Description :", 0));
        label_9->setText(QApplication::translate("formModifierPartie", "Date :", 0));
        label_6->setText(QApplication::translate("formModifierPartie", "Personnages :", 0));
        ajouterPersonnageButton->setText(QApplication::translate("formModifierPartie", "Ajouter", 0));
        modifierPersonnageButton->setText(QApplication::translate("formModifierPartie", "Modifier", 0));
        modifierButton->setText(QApplication::translate("formModifierPartie", "Modifier", 0));
        retourButton->setText(QApplication::translate("formModifierPartie", "Annuler", 0));
    } // retranslateUi

};

namespace Ui {
    class formModifierPartie: public Ui_formModifierPartie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMMODIFIERPARTIE_H
