/********************************************************************************
** Form generated from reading UI file 'formModifierAttribut.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMMODIFIERATTRIBUT_H
#define UI_FORMMODIFIERATTRIBUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_formModifierAttribut
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *Nom;
    QComboBox *typeAttributCombo;
    QLabel *label_2;
    QCheckBox *presetCheck;
    QHBoxLayout *horizontalLayout;
    QPushButton *modifierAttributButton;
    QPushButton *supprimerButton;
    QPushButton *retourButton;

    void setupUi(QDialog *formModifierAttribut)
    {
        if (formModifierAttribut->objectName().isEmpty())
            formModifierAttribut->setObjectName(QStringLiteral("formModifierAttribut"));
        formModifierAttribut->resize(400, 300);
        verticalLayout = new QVBoxLayout(formModifierAttribut);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_3 = new QLabel(formModifierAttribut);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font;
        font.setPointSize(20);
        label_3->setFont(font);

        verticalLayout->addWidget(label_3, 0, Qt::AlignHCenter);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(formModifierAttribut);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        Nom = new QLineEdit(formModifierAttribut);
        Nom->setObjectName(QStringLiteral("Nom"));

        formLayout->setWidget(0, QFormLayout::FieldRole, Nom);

        typeAttributCombo = new QComboBox(formModifierAttribut);
        typeAttributCombo->setObjectName(QStringLiteral("typeAttributCombo"));

        formLayout->setWidget(1, QFormLayout::FieldRole, typeAttributCombo);

        label_2 = new QLabel(formModifierAttribut);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        presetCheck = new QCheckBox(formModifierAttribut);
        presetCheck->setObjectName(QStringLiteral("presetCheck"));

        formLayout->setWidget(2, QFormLayout::FieldRole, presetCheck);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, -1, 0);
        modifierAttributButton = new QPushButton(formModifierAttribut);
        modifierAttributButton->setObjectName(QStringLiteral("modifierAttributButton"));

        horizontalLayout->addWidget(modifierAttributButton);

        supprimerButton = new QPushButton(formModifierAttribut);
        supprimerButton->setObjectName(QStringLiteral("supprimerButton"));

        horizontalLayout->addWidget(supprimerButton);

        retourButton = new QPushButton(formModifierAttribut);
        retourButton->setObjectName(QStringLiteral("retourButton"));

        horizontalLayout->addWidget(retourButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(formModifierAttribut);
        QObject::connect(retourButton, SIGNAL(clicked()), formModifierAttribut, SLOT(close()));

        QMetaObject::connectSlotsByName(formModifierAttribut);
    } // setupUi

    void retranslateUi(QDialog *formModifierAttribut)
    {
        formModifierAttribut->setWindowTitle(QApplication::translate("formModifierAttribut", "Dialog", Q_NULLPTR));
        label_3->setText(QApplication::translate("formModifierAttribut", "Attributs", Q_NULLPTR));
        label->setText(QApplication::translate("formModifierAttribut", "Nom :", Q_NULLPTR));
        label_2->setText(QApplication::translate("formModifierAttribut", "Type d'attribut :", Q_NULLPTR));
        presetCheck->setText(QApplication::translate("formModifierAttribut", "Preset", Q_NULLPTR));
        modifierAttributButton->setText(QApplication::translate("formModifierAttribut", "Modifier", Q_NULLPTR));
        supprimerButton->setText(QApplication::translate("formModifierAttribut", "Supprimer", Q_NULLPTR));
        retourButton->setText(QApplication::translate("formModifierAttribut", "Annuler", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class formModifierAttribut: public Ui_formModifierAttribut {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMMODIFIERATTRIBUT_H
