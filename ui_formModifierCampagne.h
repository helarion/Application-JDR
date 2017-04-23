/********************************************************************************
** Form generated from reading UI file 'formModifierCampagne.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMMODIFIERCAMPAGNE_H
#define UI_FORMMODIFIERCAMPAGNE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_formModifierCampagne
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QGridLayout *gridLayout_2;
    QLineEdit *nomCampagne;
    QLabel *label_4;
    QTextEdit *scenarioCampagne;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *modifierCampagneButton;
    QPushButton *supprimerButton;
    QPushButton *retourButton;

    void setupUi(QDialog *formModifierCampagne)
    {
        if (formModifierCampagne->objectName().isEmpty())
            formModifierCampagne->setObjectName(QStringLiteral("formModifierCampagne"));
        formModifierCampagne->resize(502, 397);
        verticalLayout_2 = new QVBoxLayout(formModifierCampagne);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(formModifierCampagne);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);

        verticalLayout_2->addWidget(label, 0, Qt::AlignHCenter);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        nomCampagne = new QLineEdit(formModifierCampagne);
        nomCampagne->setObjectName(QStringLiteral("nomCampagne"));

        gridLayout_2->addWidget(nomCampagne, 1, 0, 1, 1);

        label_4 = new QLabel(formModifierCampagne);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 4, 0, 1, 1);

        scenarioCampagne = new QTextEdit(formModifierCampagne);
        scenarioCampagne->setObjectName(QStringLiteral("scenarioCampagne"));

        gridLayout_2->addWidget(scenarioCampagne, 5, 0, 1, 1);

        label_3 = new QLabel(formModifierCampagne);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        modifierCampagneButton = new QPushButton(formModifierCampagne);
        modifierCampagneButton->setObjectName(QStringLiteral("modifierCampagneButton"));

        horizontalLayout->addWidget(modifierCampagneButton);

        supprimerButton = new QPushButton(formModifierCampagne);
        supprimerButton->setObjectName(QStringLiteral("supprimerButton"));

        horizontalLayout->addWidget(supprimerButton);

        retourButton = new QPushButton(formModifierCampagne);
        retourButton->setObjectName(QStringLiteral("retourButton"));

        horizontalLayout->addWidget(retourButton);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(formModifierCampagne);
        QObject::connect(retourButton, SIGNAL(clicked()), formModifierCampagne, SLOT(close()));

        QMetaObject::connectSlotsByName(formModifierCampagne);
    } // setupUi

    void retranslateUi(QDialog *formModifierCampagne)
    {
        formModifierCampagne->setWindowTitle(QApplication::translate("formModifierCampagne", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("formModifierCampagne", "Modifier Campagne:", Q_NULLPTR));
        label_4->setText(QApplication::translate("formModifierCampagne", "Scenario:", Q_NULLPTR));
        label_3->setText(QApplication::translate("formModifierCampagne", "Nom :", Q_NULLPTR));
        modifierCampagneButton->setText(QApplication::translate("formModifierCampagne", "Valider", Q_NULLPTR));
        supprimerButton->setText(QApplication::translate("formModifierCampagne", "Supprimer", Q_NULLPTR));
        retourButton->setText(QApplication::translate("formModifierCampagne", "Annuler", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class formModifierCampagne: public Ui_formModifierCampagne {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMMODIFIERCAMPAGNE_H
