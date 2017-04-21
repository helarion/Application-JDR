/********************************************************************************
** Form generated from reading UI file 'formNouveauAttribut.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMNOUVEAUATTRIBUT_H
#define UI_FORMNOUVEAUATTRIBUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_formNouveauAttribut
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *creerAttributButton;
    QPushButton *retourButton;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *Nom;
    QComboBox *typeAttributCombo;
    QLabel *label_2;
    QCheckBox *presetCheck;
    QLabel *label_3;

    void setupUi(QDialog *formNouveauAttribut)
    {
        if (formNouveauAttribut->objectName().isEmpty())
            formNouveauAttribut->setObjectName(QStringLiteral("formNouveauAttribut"));
        formNouveauAttribut->resize(400, 300);
        gridLayout = new QGridLayout(formNouveauAttribut);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, -1, 0);
        creerAttributButton = new QPushButton(formNouveauAttribut);
        creerAttributButton->setObjectName(QStringLiteral("creerAttributButton"));

        horizontalLayout->addWidget(creerAttributButton);

        retourButton = new QPushButton(formNouveauAttribut);
        retourButton->setObjectName(QStringLiteral("retourButton"));

        horizontalLayout->addWidget(retourButton);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(formNouveauAttribut);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        Nom = new QLineEdit(formNouveauAttribut);
        Nom->setObjectName(QStringLiteral("Nom"));

        formLayout->setWidget(0, QFormLayout::FieldRole, Nom);

        typeAttributCombo = new QComboBox(formNouveauAttribut);
        typeAttributCombo->setObjectName(QStringLiteral("typeAttributCombo"));

        formLayout->setWidget(1, QFormLayout::FieldRole, typeAttributCombo);

        label_2 = new QLabel(formNouveauAttribut);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        presetCheck = new QCheckBox(formNouveauAttribut);
        presetCheck->setObjectName(QStringLiteral("presetCheck"));

        formLayout->setWidget(2, QFormLayout::FieldRole, presetCheck);


        gridLayout->addLayout(formLayout, 1, 0, 1, 1);

        label_3 = new QLabel(formNouveauAttribut);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font;
        font.setPointSize(20);
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 0, 0, 1, 1, Qt::AlignHCenter);


        retranslateUi(formNouveauAttribut);
        QObject::connect(retourButton, SIGNAL(clicked()), formNouveauAttribut, SLOT(close()));

        QMetaObject::connectSlotsByName(formNouveauAttribut);
    } // setupUi

    void retranslateUi(QDialog *formNouveauAttribut)
    {
        formNouveauAttribut->setWindowTitle(QApplication::translate("formNouveauAttribut", "Dialog", 0));
        creerAttributButton->setText(QApplication::translate("formNouveauAttribut", "Valider", 0));
        retourButton->setText(QApplication::translate("formNouveauAttribut", "Annuler", 0));
        label->setText(QApplication::translate("formNouveauAttribut", "Nom :", 0));
        label_2->setText(QApplication::translate("formNouveauAttribut", "Type d'attribut :", 0));
        presetCheck->setText(QApplication::translate("formNouveauAttribut", "Preset", 0));
        label_3->setText(QApplication::translate("formNouveauAttribut", "Attributs", 0));
    } // retranslateUi

};

namespace Ui {
    class formNouveauAttribut: public Ui_formNouveauAttribut {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMNOUVEAUATTRIBUT_H
