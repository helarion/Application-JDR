/********************************************************************************
** Form generated from reading UI file 'formNouveauPersonnage.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMNOUVEAUPERSONNAGE_H
#define UI_FORMNOUVEAUPERSONNAGE_H

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

class Ui_formNouveauPersonnage
{
public:
    QLineEdit *Attribut_5Edit;
    QLineEdit *RaceEdit;
    QLineEdit *NomEdit;
    QLineEdit *Attribut_4Edit;
    QLabel *Attribut_3Label;
    QLabel *label_8;
    QLabel *Attribut_6Label;
    QLabel *label_24;
    QLineEdit *AgeEdit;
    QLabel *ImagePerosnnageLabel;
    QLabel *Attribut_1Label;
    QLabel *label_11;
    QLabel *label_16;
    QLabel *label_20;
    QLabel *label_9;
    QLineEdit *PVactuelEdit;
    QLabel *label_23;
    QListWidget *CompetenceList;
    QLineEdit *NiveauEdit;
    QLineEdit *PVmaxEdit;
    QLabel *label_18;
    QPushButton *InventaireButton;
    QTextEdit *DescriptifEdit;
    QLabel *Attribut_4Label;
    QLabel *SanteLabel;
    QLabel *label_7;
    QLineEdit *Attribut_3Edit;
    QLineEdit *ClasseEdit;
    QLabel *Attribut_2Label;
    QLineEdit *PrenomPersonnageEdit;
    QLineEdit *SexeEdit;
    QLabel *label;
    QPushButton *retourButton;
    QLabel *label_12;
    QLabel *label_19;
    QLineEdit *Attribut_1Edit;
    QLineEdit *Attribut_2Edit;
    QLabel *Attribut_5Label;
    QLineEdit *Attribut_6Edit;
    QLabel *label_22;

    void setupUi(QDialog *formNouveauPersonnage)
    {
        if (formNouveauPersonnage->objectName().isEmpty())
            formNouveauPersonnage->setObjectName(QStringLiteral("formNouveauPersonnage"));
        formNouveauPersonnage->resize(796, 434);
        Attribut_5Edit = new QLineEdit(formNouveauPersonnage);
        Attribut_5Edit->setObjectName(QStringLiteral("Attribut_5Edit"));
        Attribut_5Edit->setGeometry(QRect(421, 178, 109, 20));
        RaceEdit = new QLineEdit(formNouveauPersonnage);
        RaceEdit->setObjectName(QStringLiteral("RaceEdit"));
        RaceEdit->setGeometry(QRect(457, 56, 155, 20));
        NomEdit = new QLineEdit(formNouveauPersonnage);
        NomEdit->setObjectName(QStringLiteral("NomEdit"));
        NomEdit->setGeometry(QRect(191, 82, 181, 20));
        Attribut_4Edit = new QLineEdit(formNouveauPersonnage);
        Attribut_4Edit->setObjectName(QStringLiteral("Attribut_4Edit"));
        Attribut_4Edit->setGeometry(QRect(421, 152, 109, 20));
        Attribut_3Label = new QLabel(formNouveauPersonnage);
        Attribut_3Label->setObjectName(QStringLiteral("Attribut_3Label"));
        Attribut_3Label->setGeometry(QRect(10, 204, 75, 21));
        label_8 = new QLabel(formNouveauPersonnage);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(389, 82, 62, 20));
        Attribut_6Label = new QLabel(formNouveauPersonnage);
        Attribut_6Label->setObjectName(QStringLiteral("Attribut_6Label"));
        Attribut_6Label->setGeometry(QRect(307, 204, 108, 21));
        label_24 = new QLabel(formNouveauPersonnage);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(10, 107, 759, 13));
        label_24->setAlignment(Qt::AlignCenter);
        AgeEdit = new QLineEdit(formNouveauPersonnage);
        AgeEdit->setObjectName(QStringLiteral("AgeEdit"));
        AgeEdit->setGeometry(QRect(687, 36, 91, 20));
        ImagePerosnnageLabel = new QLabel(formNouveauPersonnage);
        ImagePerosnnageLabel->setObjectName(QStringLiteral("ImagePerosnnageLabel"));
        ImagePerosnnageLabel->setGeometry(QRect(15, 8, 111, 111));
        Attribut_1Label = new QLabel(formNouveauPersonnage);
        Attribut_1Label->setObjectName(QStringLiteral("Attribut_1Label"));
        Attribut_1Label->setGeometry(QRect(10, 152, 83, 20));
        label_11 = new QLabel(formNouveauPersonnage);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(536, 126, 233, 20));
        label_16 = new QLabel(formNouveauPersonnage);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(307, 126, 16, 20));
        label_20 = new QLabel(formNouveauPersonnage);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(635, 58, 40, 20));
        label_9 = new QLabel(formNouveauPersonnage);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(142, 56, 43, 20));
        PVactuelEdit = new QLineEdit(formNouveauPersonnage);
        PVactuelEdit->setObjectName(QStringLiteral("PVactuelEdit"));
        PVactuelEdit->setGeometry(QRect(191, 126, 110, 20));
        label_23 = new QLabel(formNouveauPersonnage);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(641, 36, 40, 20));
        CompetenceList = new QListWidget(formNouveauPersonnage);
        CompetenceList->setObjectName(QStringLiteral("CompetenceList"));
        CompetenceList->setGeometry(QRect(536, 152, 233, 73));
        NiveauEdit = new QLineEdit(formNouveauPersonnage);
        NiveauEdit->setObjectName(QStringLiteral("NiveauEdit"));
        NiveauEdit->setGeometry(QRect(687, 62, 91, 20));
        PVmaxEdit = new QLineEdit(formNouveauPersonnage);
        PVmaxEdit->setObjectName(QStringLiteral("PVmaxEdit"));
        PVmaxEdit->setGeometry(QRect(329, 126, 86, 20));
        label_18 = new QLabel(formNouveauPersonnage);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(641, 86, 40, 20));
        InventaireButton = new QPushButton(formNouveauPersonnage);
        InventaireButton->setObjectName(QStringLiteral("InventaireButton"));
        InventaireButton->setGeometry(QRect(13, 280, 75, 23));
        DescriptifEdit = new QTextEdit(formNouveauPersonnage);
        DescriptifEdit->setObjectName(QStringLiteral("DescriptifEdit"));
        DescriptifEdit->setGeometry(QRect(105, 258, 678, 131));
        Attribut_4Label = new QLabel(formNouveauPersonnage);
        Attribut_4Label->setObjectName(QStringLiteral("Attribut_4Label"));
        Attribut_4Label->setGeometry(QRect(307, 152, 108, 20));
        SanteLabel = new QLabel(formNouveauPersonnage);
        SanteLabel->setObjectName(QStringLiteral("SanteLabel"));
        SanteLabel->setGeometry(QRect(91, 126, 94, 20));
        label_7 = new QLabel(formNouveauPersonnage);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(411, 30, 201, 20));
        Attribut_3Edit = new QLineEdit(formNouveauPersonnage);
        Attribut_3Edit->setObjectName(QStringLiteral("Attribut_3Edit"));
        Attribut_3Edit->setGeometry(QRect(99, 204, 86, 20));
        ClasseEdit = new QLineEdit(formNouveauPersonnage);
        ClasseEdit->setObjectName(QStringLiteral("ClasseEdit"));
        ClasseEdit->setGeometry(QRect(457, 82, 155, 20));
        Attribut_2Label = new QLabel(formNouveauPersonnage);
        Attribut_2Label->setObjectName(QStringLiteral("Attribut_2Label"));
        Attribut_2Label->setGeometry(QRect(10, 178, 75, 20));
        PrenomPersonnageEdit = new QLineEdit(formNouveauPersonnage);
        PrenomPersonnageEdit->setObjectName(QStringLiteral("PrenomPersonnageEdit"));
        PrenomPersonnageEdit->setGeometry(QRect(191, 56, 181, 20));
        SexeEdit = new QLineEdit(formNouveauPersonnage);
        SexeEdit->setObjectName(QStringLiteral("SexeEdit"));
        SexeEdit->setGeometry(QRect(687, 88, 91, 20));
        label = new QLabel(formNouveauPersonnage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(231, 0, 351, 31));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        retourButton = new QPushButton(formNouveauPersonnage);
        retourButton->setObjectName(QStringLiteral("retourButton"));
        retourButton->setGeometry(QRect(705, 398, 75, 23));
        label_12 = new QLabel(formNouveauPersonnage);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(142, 82, 43, 20));
        label_19 = new QLabel(formNouveauPersonnage);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(145, 228, 155, 13));
        Attribut_1Edit = new QLineEdit(formNouveauPersonnage);
        Attribut_1Edit->setObjectName(QStringLiteral("Attribut_1Edit"));
        Attribut_1Edit->setGeometry(QRect(99, 152, 86, 20));
        Attribut_2Edit = new QLineEdit(formNouveauPersonnage);
        Attribut_2Edit->setObjectName(QStringLiteral("Attribut_2Edit"));
        Attribut_2Edit->setGeometry(QRect(99, 178, 86, 20));
        Attribut_5Label = new QLabel(formNouveauPersonnage);
        Attribut_5Label->setObjectName(QStringLiteral("Attribut_5Label"));
        Attribut_5Label->setGeometry(QRect(307, 178, 108, 20));
        Attribut_6Edit = new QLineEdit(formNouveauPersonnage);
        Attribut_6Edit->setObjectName(QStringLiteral("Attribut_6Edit"));
        Attribut_6Edit->setGeometry(QRect(421, 204, 109, 20));
        label_22 = new QLabel(formNouveauPersonnage);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(389, 56, 62, 20));

        retranslateUi(formNouveauPersonnage);
        QObject::connect(retourButton, SIGNAL(clicked()), formNouveauPersonnage, SLOT(close()));

        QMetaObject::connectSlotsByName(formNouveauPersonnage);
    } // setupUi

    void retranslateUi(QDialog *formNouveauPersonnage)
    {
        formNouveauPersonnage->setWindowTitle(QApplication::translate("formNouveauPersonnage", "Dialog", Q_NULLPTR));
        Attribut_3Label->setText(QApplication::translate("formNouveauPersonnage", "Attribut 3", Q_NULLPTR));
        label_8->setText(QApplication::translate("formNouveauPersonnage", "Classe :", Q_NULLPTR));
        Attribut_6Label->setText(QApplication::translate("formNouveauPersonnage", "Attribut 6", Q_NULLPTR));
        label_24->setText(QApplication::translate("formNouveauPersonnage", "______________________________________________________________________________", Q_NULLPTR));
        ImagePerosnnageLabel->setText(QString());
        Attribut_1Label->setText(QApplication::translate("formNouveauPersonnage", "Attribut 1", Q_NULLPTR));
        label_11->setText(QApplication::translate("formNouveauPersonnage", "Comp\303\251tences :", Q_NULLPTR));
        label_16->setText(QApplication::translate("formNouveauPersonnage", "/", Q_NULLPTR));
        label_20->setText(QApplication::translate("formNouveauPersonnage", "Niveau :", Q_NULLPTR));
        label_9->setText(QApplication::translate("formNouveauPersonnage", "Pr\303\251nom :", Q_NULLPTR));
        label_23->setText(QApplication::translate("formNouveauPersonnage", "Age :", Q_NULLPTR));
        label_18->setText(QApplication::translate("formNouveauPersonnage", "Sexe :", Q_NULLPTR));
        InventaireButton->setText(QApplication::translate("formNouveauPersonnage", "Inventaire", Q_NULLPTR));
        Attribut_4Label->setText(QApplication::translate("formNouveauPersonnage", "Attribut 4", Q_NULLPTR));
        SanteLabel->setText(QApplication::translate("formNouveauPersonnage", "PV :", Q_NULLPTR));
        label_7->setText(QApplication::translate("formNouveauPersonnage", "Joueur :", Q_NULLPTR));
        Attribut_2Label->setText(QApplication::translate("formNouveauPersonnage", "Attribut 2 ", Q_NULLPTR));
        label->setText(QApplication::translate("formNouveauPersonnage", "Feuille de Personnage :", Q_NULLPTR));
        retourButton->setText(QApplication::translate("formNouveauPersonnage", "Retour", Q_NULLPTR));
        label_12->setText(QApplication::translate("formNouveauPersonnage", "Nom :", Q_NULLPTR));
        label_19->setText(QApplication::translate("formNouveauPersonnage", "Descriptif :", Q_NULLPTR));
        Attribut_5Label->setText(QApplication::translate("formNouveauPersonnage", "Attribut 5", Q_NULLPTR));
        label_22->setText(QApplication::translate("formNouveauPersonnage", "Race :", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class formNouveauPersonnage: public Ui_formNouveauPersonnage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMNOUVEAUPERSONNAGE_H
