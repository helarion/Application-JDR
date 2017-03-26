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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_formNouveauAttribut
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *Nom;
    QComboBox *comboTypeAttribut;
    QLabel *label_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *formNouveauAttribut)
    {
        if (formNouveauAttribut->objectName().isEmpty())
            formNouveauAttribut->setObjectName(QStringLiteral("formNouveauAttribut"));
        formNouveauAttribut->resize(400, 300);
        gridLayout = new QGridLayout(formNouveauAttribut);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(formNouveauAttribut);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        Nom = new QLineEdit(formNouveauAttribut);
        Nom->setObjectName(QStringLiteral("Nom"));

        formLayout->setWidget(0, QFormLayout::FieldRole, Nom);

        comboTypeAttribut = new QComboBox(formNouveauAttribut);
        comboTypeAttribut->setObjectName(QStringLiteral("comboTypeAttribut"));

        formLayout->setWidget(1, QFormLayout::FieldRole, comboTypeAttribut);

        label_2 = new QLabel(formNouveauAttribut);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(formNouveauAttribut);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(formNouveauAttribut);
        QObject::connect(buttonBox, SIGNAL(accepted()), formNouveauAttribut, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), formNouveauAttribut, SLOT(reject()));

        QMetaObject::connectSlotsByName(formNouveauAttribut);
    } // setupUi

    void retranslateUi(QDialog *formNouveauAttribut)
    {
        formNouveauAttribut->setWindowTitle(QApplication::translate("formNouveauAttribut", "Dialog", 0));
        label->setText(QApplication::translate("formNouveauAttribut", "Nom :", 0));
        label_2->setText(QApplication::translate("formNouveauAttribut", "Type d'attribut :", 0));
    } // retranslateUi

};

namespace Ui {
    class formNouveauAttribut: public Ui_formNouveauAttribut {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMNOUVEAUATTRIBUT_H
