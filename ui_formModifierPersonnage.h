/********************************************************************************
** Form generated from reading UI file 'formModifierPersonnage.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMMODIFIERPERSONNAGE_H
#define UI_FORMMODIFIERPERSONNAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_formModifierPersonnage
{
public:
    QLabel *label_22;
    QLineEdit *ClasseEdit;
    QLabel *label_24;
    QLineEdit *PrenomPersonnageEdit;
    QLabel *Attribut_4Label;
    QLabel *label_20;
    QLineEdit *AgeEdit;
    QPushButton *retourButton;
    QLabel *label_12;
    QLineEdit *SexeEdit;
    QLabel *Attribut_2Label;
    QLineEdit *Attribut_5Edit;
    QLineEdit *NomEdit;
    QLabel *label;
    QLineEdit *PVmaxEdit;
    QLabel *label_23;
    QLineEdit *Attribut_3Edit;
    QLineEdit *NiveauEdit;
    QLabel *Attribut_5Label;
    QPushButton *InventaireButton;
    QLineEdit *Attribut_2Edit;
    QListWidget *CompetenceList;
    QLineEdit *RaceEdit;
    QLabel *label_9;
    QLabel *SanteLabel;
    QLabel *label_19;
    QLabel *label_11;
    QLineEdit *PVactuelEdit;
    QLabel *Attribut_1Label;
    QLineEdit *Attribut_4Edit;
    QTextEdit *DescriptifEdit;
    QLabel *label_7;
    QLineEdit *Attribut_1Edit;
    QLabel *label_8;
    QLabel *label_18;
    QLabel *ImagePerosnnageLabel;
    QLineEdit *Attribut_6Edit;
    QLabel *label_16;
    QLabel *Attribut_6Label;
    QLabel *Attribut_3Label;

    void setupUi(QDialog *formModifierPersonnage)
    {
        if (formModifierPersonnage->objectName().isEmpty())
            formModifierPersonnage->setObjectName(QStringLiteral("formModifierPersonnage"));
        formModifierPersonnage->resize(797, 435);
        label_22 = new QLabel(formModifierPersonnage);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(389, 56, 62, 20));
        ClasseEdit = new QLineEdit(formModifierPersonnage);
        ClasseEdit->setObjectName(QStringLiteral("ClasseEdit"));
        ClasseEdit->setGeometry(QRect(457, 82, 155, 20));
        label_24 = new QLabel(formModifierPersonnage);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(10, 107, 759, 13));
        label_24->setAlignment(Qt::AlignCenter);
        PrenomPersonnageEdit = new QLineEdit(formModifierPersonnage);
        PrenomPersonnageEdit->setObjectName(QStringLiteral("PrenomPersonnageEdit"));
        PrenomPersonnageEdit->setGeometry(QRect(191, 56, 181, 20));
        Attribut_4Label = new QLabel(formModifierPersonnage);
        Attribut_4Label->setObjectName(QStringLiteral("Attribut_4Label"));
        Attribut_4Label->setGeometry(QRect(307, 152, 108, 20));
        label_20 = new QLabel(formModifierPersonnage);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(635, 58, 40, 20));
        AgeEdit = new QLineEdit(formModifierPersonnage);
        AgeEdit->setObjectName(QStringLiteral("AgeEdit"));
        AgeEdit->setGeometry(QRect(687, 36, 91, 20));
        retourButton = new QPushButton(formModifierPersonnage);
        retourButton->setObjectName(QStringLiteral("retourButton"));
        retourButton->setGeometry(QRect(705, 398, 75, 23));
        label_12 = new QLabel(formModifierPersonnage);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(142, 82, 43, 20));
        SexeEdit = new QLineEdit(formModifierPersonnage);
        SexeEdit->setObjectName(QStringLiteral("SexeEdit"));
        SexeEdit->setGeometry(QRect(687, 88, 91, 20));
        Attribut_2Label = new QLabel(formModifierPersonnage);
        Attribut_2Label->setObjectName(QStringLiteral("Attribut_2Label"));
        Attribut_2Label->setGeometry(QRect(10, 178, 75, 20));
        Attribut_5Edit = new QLineEdit(formModifierPersonnage);
        Attribut_5Edit->setObjectName(QStringLiteral("Attribut_5Edit"));
        Attribut_5Edit->setGeometry(QRect(421, 178, 109, 20));
        NomEdit = new QLineEdit(formModifierPersonnage);
        NomEdit->setObjectName(QStringLiteral("NomEdit"));
        NomEdit->setGeometry(QRect(191, 82, 181, 20));
        label = new QLabel(formModifierPersonnage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(231, 0, 351, 31));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        PVmaxEdit = new QLineEdit(formModifierPersonnage);
        PVmaxEdit->setObjectName(QStringLiteral("PVmaxEdit"));
        PVmaxEdit->setGeometry(QRect(329, 126, 86, 20));
        label_23 = new QLabel(formModifierPersonnage);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(641, 36, 40, 20));
        Attribut_3Edit = new QLineEdit(formModifierPersonnage);
        Attribut_3Edit->setObjectName(QStringLiteral("Attribut_3Edit"));
        Attribut_3Edit->setGeometry(QRect(99, 204, 86, 20));
        NiveauEdit = new QLineEdit(formModifierPersonnage);
        NiveauEdit->setObjectName(QStringLiteral("NiveauEdit"));
        NiveauEdit->setGeometry(QRect(687, 62, 91, 20));
        Attribut_5Label = new QLabel(formModifierPersonnage);
        Attribut_5Label->setObjectName(QStringLiteral("Attribut_5Label"));
        Attribut_5Label->setGeometry(QRect(307, 178, 108, 20));
        InventaireButton = new QPushButton(formModifierPersonnage);
        InventaireButton->setObjectName(QStringLiteral("InventaireButton"));
        InventaireButton->setGeometry(QRect(13, 280, 75, 23));
        Attribut_2Edit = new QLineEdit(formModifierPersonnage);
        Attribut_2Edit->setObjectName(QStringLiteral("Attribut_2Edit"));
        Attribut_2Edit->setGeometry(QRect(99, 178, 86, 20));
        CompetenceList = new QListWidget(formModifierPersonnage);
        CompetenceList->setObjectName(QStringLiteral("CompetenceList"));
        CompetenceList->setGeometry(QRect(536, 152, 233, 73));
        RaceEdit = new QLineEdit(formModifierPersonnage);
        RaceEdit->setObjectName(QStringLiteral("RaceEdit"));
        RaceEdit->setGeometry(QRect(457, 56, 155, 20));
        label_9 = new QLabel(formModifierPersonnage);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(142, 56, 43, 20));
        SanteLabel = new QLabel(formModifierPersonnage);
        SanteLabel->setObjectName(QStringLiteral("SanteLabel"));
        SanteLabel->setGeometry(QRect(91, 126, 94, 20));
        label_19 = new QLabel(formModifierPersonnage);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(145, 228, 155, 13));
        label_11 = new QLabel(formModifierPersonnage);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(536, 126, 233, 20));
        PVactuelEdit = new QLineEdit(formModifierPersonnage);
        PVactuelEdit->setObjectName(QStringLiteral("PVactuelEdit"));
        PVactuelEdit->setGeometry(QRect(191, 126, 110, 20));
        Attribut_1Label = new QLabel(formModifierPersonnage);
        Attribut_1Label->setObjectName(QStringLiteral("Attribut_1Label"));
        Attribut_1Label->setGeometry(QRect(10, 152, 83, 20));
        Attribut_4Edit = new QLineEdit(formModifierPersonnage);
        Attribut_4Edit->setObjectName(QStringLiteral("Attribut_4Edit"));
        Attribut_4Edit->setGeometry(QRect(421, 152, 109, 20));
        DescriptifEdit = new QTextEdit(formModifierPersonnage);
        DescriptifEdit->setObjectName(QStringLiteral("DescriptifEdit"));
        DescriptifEdit->setGeometry(QRect(105, 258, 678, 131));
        label_7 = new QLabel(formModifierPersonnage);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(411, 30, 201, 20));
        Attribut_1Edit = new QLineEdit(formModifierPersonnage);
        Attribut_1Edit->setObjectName(QStringLiteral("Attribut_1Edit"));
        Attribut_1Edit->setGeometry(QRect(99, 152, 86, 20));
        label_8 = new QLabel(formModifierPersonnage);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(389, 82, 62, 20));
        label_18 = new QLabel(formModifierPersonnage);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(641, 86, 40, 20));
        ImagePerosnnageLabel = new QLabel(formModifierPersonnage);
        ImagePerosnnageLabel->setObjectName(QStringLiteral("ImagePerosnnageLabel"));
        ImagePerosnnageLabel->setGeometry(QRect(15, 8, 111, 111));
        Attribut_6Edit = new QLineEdit(formModifierPersonnage);
        Attribut_6Edit->setObjectName(QStringLiteral("Attribut_6Edit"));
        Attribut_6Edit->setGeometry(QRect(421, 204, 109, 20));
        label_16 = new QLabel(formModifierPersonnage);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(307, 126, 16, 20));
        Attribut_6Label = new QLabel(formModifierPersonnage);
        Attribut_6Label->setObjectName(QStringLiteral("Attribut_6Label"));
        Attribut_6Label->setGeometry(QRect(307, 204, 108, 21));
        Attribut_3Label = new QLabel(formModifierPersonnage);
        Attribut_3Label->setObjectName(QStringLiteral("Attribut_3Label"));
        Attribut_3Label->setGeometry(QRect(10, 204, 75, 21));

        retranslateUi(formModifierPersonnage);
        QObject::connect(retourButton, SIGNAL(clicked()), formModifierPersonnage, SLOT(close()));

        QMetaObject::connectSlotsByName(formModifierPersonnage);
    } // setupUi

    void retranslateUi(QDialog *formModifierPersonnage)
    {
        formModifierPersonnage->setWindowTitle(QApplication::translate("formModifierPersonnage", "Dialog", Q_NULLPTR));
        label_22->setText(QApplication::translate("formModifierPersonnage", "Race :", Q_NULLPTR));
        label_24->setText(QApplication::translate("formModifierPersonnage", "______________________________________________________________________________", Q_NULLPTR));
        Attribut_4Label->setText(QApplication::translate("formModifierPersonnage", "Attribut 4", Q_NULLPTR));
        label_20->setText(QApplication::translate("formModifierPersonnage", "Niveau :", Q_NULLPTR));
        retourButton->setText(QApplication::translate("formModifierPersonnage", "Retour", Q_NULLPTR));
        label_12->setText(QApplication::translate("formModifierPersonnage", "Nom :", Q_NULLPTR));
        Attribut_2Label->setText(QApplication::translate("formModifierPersonnage", "Attribut 2 ", Q_NULLPTR));
        label->setText(QApplication::translate("formModifierPersonnage", "Feuille de Personnage :", Q_NULLPTR));
        label_23->setText(QApplication::translate("formModifierPersonnage", "Age :", Q_NULLPTR));
        Attribut_5Label->setText(QApplication::translate("formModifierPersonnage", "Attribut 5", Q_NULLPTR));
        InventaireButton->setText(QApplication::translate("formModifierPersonnage", "Inventaire", Q_NULLPTR));
        label_9->setText(QApplication::translate("formModifierPersonnage", "Pr\303\251nom :", Q_NULLPTR));
        SanteLabel->setText(QApplication::translate("formModifierPersonnage", "PV :", Q_NULLPTR));
        label_19->setText(QApplication::translate("formModifierPersonnage", "Descriptif :", Q_NULLPTR));
        label_11->setText(QApplication::translate("formModifierPersonnage", "Comp\303\251tences :", Q_NULLPTR));
        Attribut_1Label->setText(QApplication::translate("formModifierPersonnage", "Attribut 1", Q_NULLPTR));
        label_7->setText(QApplication::translate("formModifierPersonnage", "Joueur :", Q_NULLPTR));
        label_8->setText(QApplication::translate("formModifierPersonnage", "Classe :", Q_NULLPTR));
        label_18->setText(QApplication::translate("formModifierPersonnage", "Sexe :", Q_NULLPTR));
        ImagePerosnnageLabel->setText(QString());
        label_16->setText(QApplication::translate("formModifierPersonnage", "/", Q_NULLPTR));
        Attribut_6Label->setText(QApplication::translate("formModifierPersonnage", "Attribut 6", Q_NULLPTR));
        Attribut_3Label->setText(QApplication::translate("formModifierPersonnage", "Attribut 3", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class formModifierPersonnage: public Ui_formModifierPersonnage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMMODIFIERPERSONNAGE_H
