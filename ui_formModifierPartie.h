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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_formModifierPartie
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFormLayout *formLayout_2;
    QLabel *label_7;
    QLineEdit *nomPartie;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *modifierButton;
    QPushButton *supprimerButton;
    QPushButton *retourButton;

    void setupUi(QDialog *formModifierPartie)
    {
        if (formModifierPartie->objectName().isEmpty())
            formModifierPartie->setObjectName(QStringLiteral("formModifierPartie"));
        formModifierPartie->resize(400, 154);
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

        verticalLayout->addWidget(label, 0, Qt::AlignHCenter);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setContentsMargins(-1, 0, 0, -1);
        label_7 = new QLabel(formModifierPartie);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_7);

        nomPartie = new QLineEdit(formModifierPartie);
        nomPartie->setObjectName(QStringLiteral("nomPartie"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, nomPartie);


        verticalLayout->addLayout(formLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        modifierButton = new QPushButton(formModifierPartie);
        modifierButton->setObjectName(QStringLiteral("modifierButton"));

        horizontalLayout_3->addWidget(modifierButton);

        supprimerButton = new QPushButton(formModifierPartie);
        supprimerButton->setObjectName(QStringLiteral("supprimerButton"));

        horizontalLayout_3->addWidget(supprimerButton);

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
        modifierButton->setText(QApplication::translate("formModifierPartie", "Modifier", 0));
        supprimerButton->setText(QApplication::translate("formModifierPartie", "Supprimer", 0));
        retourButton->setText(QApplication::translate("formModifierPartie", "Annuler", 0));
    } // retranslateUi

};

namespace Ui {
    class formModifierPartie: public Ui_formModifierPartie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMMODIFIERPARTIE_H
