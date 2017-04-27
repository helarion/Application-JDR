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
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_formModifierPersonnage
{
public:
    QStackedWidget *stackedWidget;
    QWidget *FeuillePersonnage;
    QPushButton *InventaireButton;
    QLabel *Attribut_1Label;
    QLabel *label;
    QLabel *label_22;
    QLabel *label_24;
    QListWidget *CompetenceList;
    QLineEdit *PVmaxEdit;
    QLineEdit *Attribut_4Edit;
    QLabel *Attribut_4Label;
    QLabel *SanteLabel;
    QLabel *label_16;
    QLabel *ImagePerosnnageLabel;
    QLineEdit *ClasseEdit;
    QLineEdit *Attribut_2Edit;
    QLabel *label_12;
    QLineEdit *PrenomPersonnageEdit;
    QLabel *Attribut_2Label;
    QLabel *label_8;
    QLineEdit *PVactuelEdit;
    QLineEdit *Attribut_3Edit;
    QLabel *label_7;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_18;
    QLabel *label_11;
    QLabel *Attribut_3Label;
    QTextEdit *DescriptifEdit;
    QLineEdit *RaceEdit;
    QPushButton *retourButton;
    QLineEdit *NomEdit;
    QLineEdit *Attribut_6Edit;
    QLineEdit *Attribut_5Edit;
    QLineEdit *AgeEdit;
    QLineEdit *Attribut_1Edit;
    QLabel *label_9;
    QLabel *Attribut_6Label;
    QLabel *label_23;
    QLabel *Attribut_5Label;
    QLineEdit *SexeEdit;
    QLineEdit *NiveauEdit;
    QWidget *Inventaire;
    QLabel *label_2;
    QLabel *label_5;
    QLineEdit *ArgentLineEdit;
    QTableView *ObjetTable;
    QLineEdit *EncombrementValeurEdit;
    QLabel *label_27;
    QLabel *label_14;
    QLabel *label_32;
    QLineEdit *EncombrementSeuilEdit;
    QLabel *label_15;
    QLabel *label_26;
    QLabel *label_3;
    QLabel *label_13;
    QTableView *ArmesTable;
    QLabel *label_6;
    QLabel *label_25;
    QLabel *label_29;
    QLabel *label_10;
    QLabel *label_31;
    QLabel *label_4;
    QLabel *label_30;
    QLabel *label_21;
    QLabel *label_28;
    QLabel *label_17;
    QTableView *ArmureTable;
    QLabel *label_33;
    QPushButton *RetourButton;

    void setupUi(QDialog *formModifierPersonnage)
    {
        if (formModifierPersonnage->objectName().isEmpty())
            formModifierPersonnage->setObjectName(QStringLiteral("formModifierPersonnage"));
        formModifierPersonnage->resize(797, 435);
        stackedWidget = new QStackedWidget(formModifierPersonnage);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(-1, -1, 791, 431));
        FeuillePersonnage = new QWidget();
        FeuillePersonnage->setObjectName(QStringLiteral("FeuillePersonnage"));
        InventaireButton = new QPushButton(FeuillePersonnage);
        InventaireButton->setObjectName(QStringLiteral("InventaireButton"));
        InventaireButton->setGeometry(QRect(13, 290, 75, 23));
        Attribut_1Label = new QLabel(FeuillePersonnage);
        Attribut_1Label->setObjectName(QStringLiteral("Attribut_1Label"));
        Attribut_1Label->setGeometry(QRect(10, 162, 83, 20));
        label = new QLabel(FeuillePersonnage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(231, 10, 351, 31));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_22 = new QLabel(FeuillePersonnage);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(389, 66, 62, 20));
        label_24 = new QLabel(FeuillePersonnage);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(10, 117, 759, 13));
        label_24->setAlignment(Qt::AlignCenter);
        CompetenceList = new QListWidget(FeuillePersonnage);
        CompetenceList->setObjectName(QStringLiteral("CompetenceList"));
        CompetenceList->setGeometry(QRect(536, 162, 233, 73));
        PVmaxEdit = new QLineEdit(FeuillePersonnage);
        PVmaxEdit->setObjectName(QStringLiteral("PVmaxEdit"));
        PVmaxEdit->setGeometry(QRect(329, 136, 86, 20));
        Attribut_4Edit = new QLineEdit(FeuillePersonnage);
        Attribut_4Edit->setObjectName(QStringLiteral("Attribut_4Edit"));
        Attribut_4Edit->setGeometry(QRect(421, 162, 109, 20));
        Attribut_4Label = new QLabel(FeuillePersonnage);
        Attribut_4Label->setObjectName(QStringLiteral("Attribut_4Label"));
        Attribut_4Label->setGeometry(QRect(307, 162, 108, 20));
        SanteLabel = new QLabel(FeuillePersonnage);
        SanteLabel->setObjectName(QStringLiteral("SanteLabel"));
        SanteLabel->setGeometry(QRect(91, 136, 94, 20));
        label_16 = new QLabel(FeuillePersonnage);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(307, 136, 16, 20));
        ImagePerosnnageLabel = new QLabel(FeuillePersonnage);
        ImagePerosnnageLabel->setObjectName(QStringLiteral("ImagePerosnnageLabel"));
        ImagePerosnnageLabel->setGeometry(QRect(15, 18, 111, 111));
        ClasseEdit = new QLineEdit(FeuillePersonnage);
        ClasseEdit->setObjectName(QStringLiteral("ClasseEdit"));
        ClasseEdit->setGeometry(QRect(457, 92, 155, 20));
        Attribut_2Edit = new QLineEdit(FeuillePersonnage);
        Attribut_2Edit->setObjectName(QStringLiteral("Attribut_2Edit"));
        Attribut_2Edit->setGeometry(QRect(99, 188, 86, 20));
        label_12 = new QLabel(FeuillePersonnage);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(142, 92, 43, 20));
        PrenomPersonnageEdit = new QLineEdit(FeuillePersonnage);
        PrenomPersonnageEdit->setObjectName(QStringLiteral("PrenomPersonnageEdit"));
        PrenomPersonnageEdit->setGeometry(QRect(191, 66, 181, 20));
        Attribut_2Label = new QLabel(FeuillePersonnage);
        Attribut_2Label->setObjectName(QStringLiteral("Attribut_2Label"));
        Attribut_2Label->setGeometry(QRect(10, 188, 75, 20));
        label_8 = new QLabel(FeuillePersonnage);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(389, 92, 62, 20));
        PVactuelEdit = new QLineEdit(FeuillePersonnage);
        PVactuelEdit->setObjectName(QStringLiteral("PVactuelEdit"));
        PVactuelEdit->setGeometry(QRect(191, 136, 110, 20));
        Attribut_3Edit = new QLineEdit(FeuillePersonnage);
        Attribut_3Edit->setObjectName(QStringLiteral("Attribut_3Edit"));
        Attribut_3Edit->setGeometry(QRect(99, 214, 86, 20));
        label_7 = new QLabel(FeuillePersonnage);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(411, 40, 201, 20));
        label_19 = new QLabel(FeuillePersonnage);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(145, 238, 155, 13));
        label_20 = new QLabel(FeuillePersonnage);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(635, 68, 40, 20));
        label_18 = new QLabel(FeuillePersonnage);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(641, 96, 40, 20));
        label_11 = new QLabel(FeuillePersonnage);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(536, 136, 233, 20));
        Attribut_3Label = new QLabel(FeuillePersonnage);
        Attribut_3Label->setObjectName(QStringLiteral("Attribut_3Label"));
        Attribut_3Label->setGeometry(QRect(10, 214, 75, 21));
        DescriptifEdit = new QTextEdit(FeuillePersonnage);
        DescriptifEdit->setObjectName(QStringLiteral("DescriptifEdit"));
        DescriptifEdit->setGeometry(QRect(105, 268, 678, 131));
        RaceEdit = new QLineEdit(FeuillePersonnage);
        RaceEdit->setObjectName(QStringLiteral("RaceEdit"));
        RaceEdit->setGeometry(QRect(457, 66, 155, 20));
        retourButton = new QPushButton(FeuillePersonnage);
        retourButton->setObjectName(QStringLiteral("retourButton"));
        retourButton->setGeometry(QRect(705, 408, 75, 23));
        NomEdit = new QLineEdit(FeuillePersonnage);
        NomEdit->setObjectName(QStringLiteral("NomEdit"));
        NomEdit->setGeometry(QRect(191, 92, 181, 20));
        Attribut_6Edit = new QLineEdit(FeuillePersonnage);
        Attribut_6Edit->setObjectName(QStringLiteral("Attribut_6Edit"));
        Attribut_6Edit->setGeometry(QRect(421, 214, 109, 20));
        Attribut_5Edit = new QLineEdit(FeuillePersonnage);
        Attribut_5Edit->setObjectName(QStringLiteral("Attribut_5Edit"));
        Attribut_5Edit->setGeometry(QRect(421, 188, 109, 20));
        AgeEdit = new QLineEdit(FeuillePersonnage);
        AgeEdit->setObjectName(QStringLiteral("AgeEdit"));
        AgeEdit->setGeometry(QRect(687, 46, 91, 20));
        Attribut_1Edit = new QLineEdit(FeuillePersonnage);
        Attribut_1Edit->setObjectName(QStringLiteral("Attribut_1Edit"));
        Attribut_1Edit->setGeometry(QRect(99, 162, 86, 20));
        label_9 = new QLabel(FeuillePersonnage);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(142, 66, 43, 20));
        Attribut_6Label = new QLabel(FeuillePersonnage);
        Attribut_6Label->setObjectName(QStringLiteral("Attribut_6Label"));
        Attribut_6Label->setGeometry(QRect(307, 214, 108, 21));
        label_23 = new QLabel(FeuillePersonnage);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(641, 46, 40, 20));
        Attribut_5Label = new QLabel(FeuillePersonnage);
        Attribut_5Label->setObjectName(QStringLiteral("Attribut_5Label"));
        Attribut_5Label->setGeometry(QRect(307, 188, 108, 20));
        SexeEdit = new QLineEdit(FeuillePersonnage);
        SexeEdit->setObjectName(QStringLiteral("SexeEdit"));
        SexeEdit->setGeometry(QRect(687, 98, 91, 20));
        NiveauEdit = new QLineEdit(FeuillePersonnage);
        NiveauEdit->setObjectName(QStringLiteral("NiveauEdit"));
        NiveauEdit->setGeometry(QRect(687, 72, 91, 20));
        stackedWidget->addWidget(FeuillePersonnage);
        Inventaire = new QWidget();
        Inventaire->setObjectName(QStringLiteral("Inventaire"));
        label_2 = new QLabel(Inventaire);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(490, 40, 91, 21));
        label_5 = new QLabel(Inventaire);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(310, 10, 111, 31));
        ArgentLineEdit = new QLineEdit(Inventaire);
        ArgentLineEdit->setObjectName(QStringLiteral("ArgentLineEdit"));
        ArgentLineEdit->setGeometry(QRect(70, 20, 113, 20));
        ObjetTable = new QTableView(Inventaire);
        ObjetTable->setObjectName(QStringLiteral("ObjetTable"));
        ObjetTable->setGeometry(QRect(480, 90, 291, 291));
        EncombrementValeurEdit = new QLineEdit(Inventaire);
        EncombrementValeurEdit->setObjectName(QStringLiteral("EncombrementValeurEdit"));
        EncombrementValeurEdit->setGeometry(QRect(430, 20, 61, 20));
        label_27 = new QLabel(Inventaire);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(380, 240, 47, 13));
        label_14 = new QLabel(Inventaire);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(190, 70, 47, 13));
        label_32 = new QLabel(Inventaire);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(720, 70, 47, 13));
        EncombrementSeuilEdit = new QLineEdit(Inventaire);
        EncombrementSeuilEdit->setObjectName(QStringLiteral("EncombrementSeuilEdit"));
        EncombrementSeuilEdit->setGeometry(QRect(510, 20, 61, 20));
        label_15 = new QLabel(Inventaire);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(300, 70, 47, 13));
        label_26 = new QLabel(Inventaire);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(290, 240, 47, 13));
        label_3 = new QLabel(Inventaire);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 50, 71, 21));
        label_13 = new QLabel(Inventaire);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(10, 70, 47, 13));
        ArmesTable = new QTableView(Inventaire);
        ArmesTable->setObjectName(QStringLiteral("ArmesTable"));
        ArmesTable->setGeometry(QRect(10, 90, 451, 111));
        label_6 = new QLabel(Inventaire);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(500, 20, 16, 16));
        label_25 = new QLabel(Inventaire);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(180, 240, 61, 16));
        label_29 = new QLabel(Inventaire);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(550, 70, 47, 13));
        label_10 = new QLabel(Inventaire);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 210, 61, 21));
        label_31 = new QLabel(Inventaire);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(650, 70, 47, 13));
        label_4 = new QLabel(Inventaire);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 20, 71, 21));
        label_30 = new QLabel(Inventaire);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(600, 70, 47, 13));
        label_21 = new QLabel(Inventaire);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(10, 240, 47, 13));
        label_28 = new QLabel(Inventaire);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(490, 70, 47, 13));
        label_17 = new QLabel(Inventaire);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(390, 70, 47, 13));
        ArmureTable = new QTableView(Inventaire);
        ArmureTable->setObjectName(QStringLiteral("ArmureTable"));
        ArmureTable->setGeometry(QRect(10, 260, 451, 141));
        label_33 = new QLabel(Inventaire);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(630, 10, 131, 41));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(false);
        font1.setWeight(50);
        label_33->setFont(font1);
        label_33->setAlignment(Qt::AlignCenter);
        RetourButton = new QPushButton(Inventaire);
        RetourButton->setObjectName(QStringLiteral("RetourButton"));
        RetourButton->setGeometry(QRect(600, 390, 141, 31));
        stackedWidget->addWidget(Inventaire);

        retranslateUi(formModifierPersonnage);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(formModifierPersonnage);
    } // setupUi

    void retranslateUi(QDialog *formModifierPersonnage)
    {
        formModifierPersonnage->setWindowTitle(QApplication::translate("formModifierPersonnage", "Dialog", Q_NULLPTR));
        InventaireButton->setText(QApplication::translate("formModifierPersonnage", "Inventaire", Q_NULLPTR));
        Attribut_1Label->setText(QApplication::translate("formModifierPersonnage", "Attribut 1", Q_NULLPTR));
        label->setText(QApplication::translate("formModifierPersonnage", "Feuille de Personnage :", Q_NULLPTR));
        label_22->setText(QApplication::translate("formModifierPersonnage", "Race :", Q_NULLPTR));
        label_24->setText(QApplication::translate("formModifierPersonnage", "______________________________________________________________________________", Q_NULLPTR));
        Attribut_4Label->setText(QApplication::translate("formModifierPersonnage", "Attribut 4", Q_NULLPTR));
        SanteLabel->setText(QApplication::translate("formModifierPersonnage", "PV :", Q_NULLPTR));
        label_16->setText(QApplication::translate("formModifierPersonnage", "/", Q_NULLPTR));
        ImagePerosnnageLabel->setText(QString());
        label_12->setText(QApplication::translate("formModifierPersonnage", "Nom :", Q_NULLPTR));
        Attribut_2Label->setText(QApplication::translate("formModifierPersonnage", "Attribut 2 ", Q_NULLPTR));
        label_8->setText(QApplication::translate("formModifierPersonnage", "Classe :", Q_NULLPTR));
        label_7->setText(QApplication::translate("formModifierPersonnage", "Joueur :", Q_NULLPTR));
        label_19->setText(QApplication::translate("formModifierPersonnage", "Descriptif :", Q_NULLPTR));
        label_20->setText(QApplication::translate("formModifierPersonnage", "Niveau :", Q_NULLPTR));
        label_18->setText(QApplication::translate("formModifierPersonnage", "Sexe :", Q_NULLPTR));
        label_11->setText(QApplication::translate("formModifierPersonnage", "Comp\303\251tences :", Q_NULLPTR));
        Attribut_3Label->setText(QApplication::translate("formModifierPersonnage", "Attribut 3", Q_NULLPTR));
        retourButton->setText(QApplication::translate("formModifierPersonnage", "Retour", Q_NULLPTR));
        label_9->setText(QApplication::translate("formModifierPersonnage", "Pr\303\251nom :", Q_NULLPTR));
        Attribut_6Label->setText(QApplication::translate("formModifierPersonnage", "Attribut 6", Q_NULLPTR));
        label_23->setText(QApplication::translate("formModifierPersonnage", "Age :", Q_NULLPTR));
        Attribut_5Label->setText(QApplication::translate("formModifierPersonnage", "Attribut 5", Q_NULLPTR));
        label_2->setText(QApplication::translate("formModifierPersonnage", "Autres :", Q_NULLPTR));
        label_5->setText(QApplication::translate("formModifierPersonnage", "Encombrement :", Q_NULLPTR));
        label_27->setText(QApplication::translate("formModifierPersonnage", "Poids", Q_NULLPTR));
        label_14->setText(QApplication::translate("formModifierPersonnage", "D\303\251gats", Q_NULLPTR));
        label_32->setText(QApplication::translate("formModifierPersonnage", "Poids", Q_NULLPTR));
        label_15->setText(QApplication::translate("formModifierPersonnage", "Usure", Q_NULLPTR));
        label_26->setText(QApplication::translate("formModifierPersonnage", "Usure", Q_NULLPTR));
        label_3->setText(QApplication::translate("formModifierPersonnage", "Armes :", Q_NULLPTR));
        label_13->setText(QApplication::translate("formModifierPersonnage", "Nom", Q_NULLPTR));
        label_6->setText(QApplication::translate("formModifierPersonnage", "/", Q_NULLPTR));
        label_25->setText(QApplication::translate("formModifierPersonnage", "Protection", Q_NULLPTR));
        label_29->setText(QApplication::translate("formModifierPersonnage", "Qt\303\251", Q_NULLPTR));
        label_10->setText(QApplication::translate("formModifierPersonnage", "Armures :", Q_NULLPTR));
        label_31->setText(QApplication::translate("formModifierPersonnage", "Usage", Q_NULLPTR));
        label_4->setText(QApplication::translate("formModifierPersonnage", "Argent :", Q_NULLPTR));
        label_30->setText(QApplication::translate("formModifierPersonnage", "Valeur", Q_NULLPTR));
        label_21->setText(QApplication::translate("formModifierPersonnage", "Nom ", Q_NULLPTR));
        label_28->setText(QApplication::translate("formModifierPersonnage", "Nom", Q_NULLPTR));
        label_17->setText(QApplication::translate("formModifierPersonnage", "Poids", Q_NULLPTR));
        label_33->setText(QApplication::translate("formModifierPersonnage", "Inventaire", Q_NULLPTR));
        RetourButton->setText(QApplication::translate("formModifierPersonnage", "Retour", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class formModifierPersonnage: public Ui_formModifierPersonnage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMMODIFIERPERSONNAGE_H
