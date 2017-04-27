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
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_formNouveauPersonnage
{
public:
    QStackedWidget *stackedWidget;
    QWidget *FeuillePersonnage;
    QLineEdit *Attribut_3Edit;
    QLineEdit *Attribut_6Edit;
    QLabel *Attribut_2Label;
    QLineEdit *Attribut_4Edit;
    QLineEdit *NiveauEdit;
    QLineEdit *PrenomPersonnageEdit;
    QLabel *Attribut_4Label;
    QLabel *label_22;
    QLabel *label_16;
    QLineEdit *Attribut_2Edit;
    QLineEdit *PVactuelEdit;
    QLabel *label_20;
    QLabel *label_11;
    QTextEdit *DescriptifEdit;
    QPushButton *retourButton;
    QLineEdit *Attribut_5Edit;
    QLineEdit *RaceEdit;
    QLineEdit *Attribut_1Edit;
    QLabel *label_19;
    QLabel *label_23;
    QLabel *Attribut_5Label;
    QLabel *Attribut_6Label;
    QLineEdit *PVmaxEdit;
    QLineEdit *ClasseEdit;
    QLabel *label_12;
    QLabel *label_9;
    QLabel *ImagePerosnnageLabel;
    QLabel *Attribut_3Label;
    QLabel *SanteLabel;
    QLineEdit *NomEdit;
    QLabel *label_8;
    QPushButton *InventaireButton;
    QLabel *label_18;
    QLabel *label;
    QLabel *label_24;
    QListWidget *CompetenceList;
    QLineEdit *SexeEdit;
    QLabel *label_7;
    QLabel *Attribut_1Label;
    QLineEdit *AgeEdit;
    QWidget *Inventaire;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *ArgentEdit;
    QLabel *label_5;
    QLineEdit *EncombrementValeurEdit;
    QLabel *label_6;
    QLineEdit *EncombrementSeuilEdit;
    QLabel *label_10;
    QTableView *ArmeTable;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_17;
    QTableView *ArmureTable;
    QLabel *label_21;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QTableView *ObjetTable;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_33;
    QPushButton *RetourButton;

    void setupUi(QDialog *formNouveauPersonnage)
    {
        if (formNouveauPersonnage->objectName().isEmpty())
            formNouveauPersonnage->setObjectName(QStringLiteral("formNouveauPersonnage"));
        formNouveauPersonnage->resize(796, 434);
        stackedWidget = new QStackedWidget(formNouveauPersonnage);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 0, 781, 431));
        FeuillePersonnage = new QWidget();
        FeuillePersonnage->setObjectName(QStringLiteral("FeuillePersonnage"));
        Attribut_3Edit = new QLineEdit(FeuillePersonnage);
        Attribut_3Edit->setObjectName(QStringLiteral("Attribut_3Edit"));
        Attribut_3Edit->setGeometry(QRect(88, 212, 86, 20));
        Attribut_6Edit = new QLineEdit(FeuillePersonnage);
        Attribut_6Edit->setObjectName(QStringLiteral("Attribut_6Edit"));
        Attribut_6Edit->setGeometry(QRect(410, 212, 109, 20));
        Attribut_2Label = new QLabel(FeuillePersonnage);
        Attribut_2Label->setObjectName(QStringLiteral("Attribut_2Label"));
        Attribut_2Label->setGeometry(QRect(-1, 186, 75, 20));
        Attribut_4Edit = new QLineEdit(FeuillePersonnage);
        Attribut_4Edit->setObjectName(QStringLiteral("Attribut_4Edit"));
        Attribut_4Edit->setGeometry(QRect(410, 160, 109, 20));
        NiveauEdit = new QLineEdit(FeuillePersonnage);
        NiveauEdit->setObjectName(QStringLiteral("NiveauEdit"));
        NiveauEdit->setGeometry(QRect(676, 70, 91, 20));
        PrenomPersonnageEdit = new QLineEdit(FeuillePersonnage);
        PrenomPersonnageEdit->setObjectName(QStringLiteral("PrenomPersonnageEdit"));
        PrenomPersonnageEdit->setGeometry(QRect(180, 64, 181, 20));
        Attribut_4Label = new QLabel(FeuillePersonnage);
        Attribut_4Label->setObjectName(QStringLiteral("Attribut_4Label"));
        Attribut_4Label->setGeometry(QRect(296, 160, 108, 20));
        label_22 = new QLabel(FeuillePersonnage);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(378, 64, 62, 20));
        label_16 = new QLabel(FeuillePersonnage);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(296, 134, 16, 20));
        Attribut_2Edit = new QLineEdit(FeuillePersonnage);
        Attribut_2Edit->setObjectName(QStringLiteral("Attribut_2Edit"));
        Attribut_2Edit->setGeometry(QRect(88, 186, 86, 20));
        PVactuelEdit = new QLineEdit(FeuillePersonnage);
        PVactuelEdit->setObjectName(QStringLiteral("PVactuelEdit"));
        PVactuelEdit->setGeometry(QRect(180, 134, 110, 20));
        label_20 = new QLabel(FeuillePersonnage);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(624, 66, 40, 20));
        label_11 = new QLabel(FeuillePersonnage);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(525, 134, 233, 20));
        DescriptifEdit = new QTextEdit(FeuillePersonnage);
        DescriptifEdit->setObjectName(QStringLiteral("DescriptifEdit"));
        DescriptifEdit->setGeometry(QRect(94, 266, 678, 131));
        retourButton = new QPushButton(FeuillePersonnage);
        retourButton->setObjectName(QStringLiteral("retourButton"));
        retourButton->setGeometry(QRect(694, 406, 75, 23));
        Attribut_5Edit = new QLineEdit(FeuillePersonnage);
        Attribut_5Edit->setObjectName(QStringLiteral("Attribut_5Edit"));
        Attribut_5Edit->setGeometry(QRect(410, 186, 109, 20));
        RaceEdit = new QLineEdit(FeuillePersonnage);
        RaceEdit->setObjectName(QStringLiteral("RaceEdit"));
        RaceEdit->setGeometry(QRect(446, 64, 155, 20));
        Attribut_1Edit = new QLineEdit(FeuillePersonnage);
        Attribut_1Edit->setObjectName(QStringLiteral("Attribut_1Edit"));
        Attribut_1Edit->setGeometry(QRect(88, 160, 86, 20));
        label_19 = new QLabel(FeuillePersonnage);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(134, 236, 155, 13));
        label_23 = new QLabel(FeuillePersonnage);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(630, 44, 40, 20));
        Attribut_5Label = new QLabel(FeuillePersonnage);
        Attribut_5Label->setObjectName(QStringLiteral("Attribut_5Label"));
        Attribut_5Label->setGeometry(QRect(296, 186, 108, 20));
        Attribut_6Label = new QLabel(FeuillePersonnage);
        Attribut_6Label->setObjectName(QStringLiteral("Attribut_6Label"));
        Attribut_6Label->setGeometry(QRect(296, 212, 108, 21));
        PVmaxEdit = new QLineEdit(FeuillePersonnage);
        PVmaxEdit->setObjectName(QStringLiteral("PVmaxEdit"));
        PVmaxEdit->setGeometry(QRect(318, 134, 86, 20));
        ClasseEdit = new QLineEdit(FeuillePersonnage);
        ClasseEdit->setObjectName(QStringLiteral("ClasseEdit"));
        ClasseEdit->setGeometry(QRect(446, 90, 155, 20));
        label_12 = new QLabel(FeuillePersonnage);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(131, 90, 43, 20));
        label_9 = new QLabel(FeuillePersonnage);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(131, 64, 43, 20));
        ImagePerosnnageLabel = new QLabel(FeuillePersonnage);
        ImagePerosnnageLabel->setObjectName(QStringLiteral("ImagePerosnnageLabel"));
        ImagePerosnnageLabel->setGeometry(QRect(4, 16, 111, 111));
        Attribut_3Label = new QLabel(FeuillePersonnage);
        Attribut_3Label->setObjectName(QStringLiteral("Attribut_3Label"));
        Attribut_3Label->setGeometry(QRect(-1, 212, 75, 21));
        SanteLabel = new QLabel(FeuillePersonnage);
        SanteLabel->setObjectName(QStringLiteral("SanteLabel"));
        SanteLabel->setGeometry(QRect(80, 134, 94, 20));
        NomEdit = new QLineEdit(FeuillePersonnage);
        NomEdit->setObjectName(QStringLiteral("NomEdit"));
        NomEdit->setGeometry(QRect(180, 90, 181, 20));
        label_8 = new QLabel(FeuillePersonnage);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(378, 90, 62, 20));
        InventaireButton = new QPushButton(FeuillePersonnage);
        InventaireButton->setObjectName(QStringLiteral("InventaireButton"));
        InventaireButton->setGeometry(QRect(2, 288, 75, 23));
        label_18 = new QLabel(FeuillePersonnage);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(630, 94, 40, 20));
        label = new QLabel(FeuillePersonnage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(220, 8, 351, 31));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_24 = new QLabel(FeuillePersonnage);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(-1, 115, 759, 13));
        label_24->setAlignment(Qt::AlignCenter);
        CompetenceList = new QListWidget(FeuillePersonnage);
        CompetenceList->setObjectName(QStringLiteral("CompetenceList"));
        CompetenceList->setGeometry(QRect(525, 160, 233, 73));
        SexeEdit = new QLineEdit(FeuillePersonnage);
        SexeEdit->setObjectName(QStringLiteral("SexeEdit"));
        SexeEdit->setGeometry(QRect(676, 96, 91, 20));
        label_7 = new QLabel(FeuillePersonnage);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(400, 38, 201, 20));
        Attribut_1Label = new QLabel(FeuillePersonnage);
        Attribut_1Label->setObjectName(QStringLiteral("Attribut_1Label"));
        Attribut_1Label->setGeometry(QRect(-1, 160, 83, 20));
        AgeEdit = new QLineEdit(FeuillePersonnage);
        AgeEdit->setObjectName(QStringLiteral("AgeEdit"));
        AgeEdit->setGeometry(QRect(676, 44, 91, 20));
        stackedWidget->addWidget(FeuillePersonnage);
        Inventaire = new QWidget();
        Inventaire->setObjectName(QStringLiteral("Inventaire"));
        label_2 = new QLabel(Inventaire);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(480, 50, 91, 21));
        label_3 = new QLabel(Inventaire);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 50, 71, 21));
        label_4 = new QLabel(Inventaire);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 20, 71, 21));
        ArgentEdit = new QLineEdit(Inventaire);
        ArgentEdit->setObjectName(QStringLiteral("ArgentEdit"));
        ArgentEdit->setGeometry(QRect(70, 20, 113, 20));
        label_5 = new QLabel(Inventaire);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(310, 10, 111, 31));
        EncombrementValeurEdit = new QLineEdit(Inventaire);
        EncombrementValeurEdit->setObjectName(QStringLiteral("EncombrementValeurEdit"));
        EncombrementValeurEdit->setGeometry(QRect(430, 20, 61, 20));
        label_6 = new QLabel(Inventaire);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(500, 20, 16, 16));
        EncombrementSeuilEdit = new QLineEdit(Inventaire);
        EncombrementSeuilEdit->setObjectName(QStringLiteral("EncombrementSeuilEdit"));
        EncombrementSeuilEdit->setGeometry(QRect(510, 20, 61, 20));
        label_10 = new QLabel(Inventaire);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 210, 61, 21));
        ArmeTable = new QTableView(Inventaire);
        ArmeTable->setObjectName(QStringLiteral("ArmeTable"));
        ArmeTable->setGeometry(QRect(10, 90, 451, 111));
        label_13 = new QLabel(Inventaire);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(10, 70, 47, 13));
        label_14 = new QLabel(Inventaire);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(190, 70, 47, 13));
        label_15 = new QLabel(Inventaire);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(300, 70, 47, 13));
        label_17 = new QLabel(Inventaire);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(390, 70, 47, 13));
        ArmureTable = new QTableView(Inventaire);
        ArmureTable->setObjectName(QStringLiteral("ArmureTable"));
        ArmureTable->setGeometry(QRect(10, 260, 451, 141));
        label_21 = new QLabel(Inventaire);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(10, 240, 47, 13));
        label_25 = new QLabel(Inventaire);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(180, 240, 61, 16));
        label_26 = new QLabel(Inventaire);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(290, 240, 47, 13));
        label_27 = new QLabel(Inventaire);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(380, 240, 47, 13));
        ObjetTable = new QTableView(Inventaire);
        ObjetTable->setObjectName(QStringLiteral("ObjetTable"));
        ObjetTable->setGeometry(QRect(480, 90, 291, 291));
        label_28 = new QLabel(Inventaire);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(490, 70, 47, 13));
        label_29 = new QLabel(Inventaire);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(550, 70, 47, 13));
        label_30 = new QLabel(Inventaire);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(600, 70, 47, 13));
        label_31 = new QLabel(Inventaire);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(650, 70, 47, 13));
        label_32 = new QLabel(Inventaire);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(720, 70, 47, 13));
        label_33 = new QLabel(Inventaire);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(620, 20, 131, 41));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(false);
        font1.setWeight(50);
        label_33->setFont(font1);
        label_33->setAlignment(Qt::AlignCenter);
        RetourButton = new QPushButton(Inventaire);
        RetourButton->setObjectName(QStringLiteral("RetourButton"));
        RetourButton->setGeometry(QRect(560, 390, 141, 31));
        stackedWidget->addWidget(Inventaire);

        retranslateUi(formNouveauPersonnage);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(formNouveauPersonnage);
    } // setupUi

    void retranslateUi(QDialog *formNouveauPersonnage)
    {
        formNouveauPersonnage->setWindowTitle(QApplication::translate("formNouveauPersonnage", "Dialog", Q_NULLPTR));
        Attribut_2Label->setText(QApplication::translate("formNouveauPersonnage", "Attribut 2 ", Q_NULLPTR));
        Attribut_4Label->setText(QApplication::translate("formNouveauPersonnage", "Attribut 4", Q_NULLPTR));
        label_22->setText(QApplication::translate("formNouveauPersonnage", "Race :", Q_NULLPTR));
        label_16->setText(QApplication::translate("formNouveauPersonnage", "/", Q_NULLPTR));
        label_20->setText(QApplication::translate("formNouveauPersonnage", "Niveau :", Q_NULLPTR));
        label_11->setText(QApplication::translate("formNouveauPersonnage", "Comp\303\251tences :", Q_NULLPTR));
        retourButton->setText(QApplication::translate("formNouveauPersonnage", "Retour", Q_NULLPTR));
        label_19->setText(QApplication::translate("formNouveauPersonnage", "Descriptif :", Q_NULLPTR));
        label_23->setText(QApplication::translate("formNouveauPersonnage", "Age :", Q_NULLPTR));
        Attribut_5Label->setText(QApplication::translate("formNouveauPersonnage", "Attribut 5", Q_NULLPTR));
        Attribut_6Label->setText(QApplication::translate("formNouveauPersonnage", "Attribut 6", Q_NULLPTR));
        label_12->setText(QApplication::translate("formNouveauPersonnage", "Nom :", Q_NULLPTR));
        label_9->setText(QApplication::translate("formNouveauPersonnage", "Pr\303\251nom :", Q_NULLPTR));
        ImagePerosnnageLabel->setText(QString());
        Attribut_3Label->setText(QApplication::translate("formNouveauPersonnage", "Attribut 3", Q_NULLPTR));
        SanteLabel->setText(QApplication::translate("formNouveauPersonnage", "PV :", Q_NULLPTR));
        label_8->setText(QApplication::translate("formNouveauPersonnage", "Classe :", Q_NULLPTR));
        InventaireButton->setText(QApplication::translate("formNouveauPersonnage", "Inventaire", Q_NULLPTR));
        label_18->setText(QApplication::translate("formNouveauPersonnage", "Sexe :", Q_NULLPTR));
        label->setText(QApplication::translate("formNouveauPersonnage", "Feuille de Personnage :", Q_NULLPTR));
        label_24->setText(QApplication::translate("formNouveauPersonnage", "______________________________________________________________________________", Q_NULLPTR));
        label_7->setText(QApplication::translate("formNouveauPersonnage", "Joueur :", Q_NULLPTR));
        Attribut_1Label->setText(QApplication::translate("formNouveauPersonnage", "Attribut 1", Q_NULLPTR));
        label_2->setText(QApplication::translate("formNouveauPersonnage", "Autres :", Q_NULLPTR));
        label_3->setText(QApplication::translate("formNouveauPersonnage", "Armes :", Q_NULLPTR));
        label_4->setText(QApplication::translate("formNouveauPersonnage", "Argent :", Q_NULLPTR));
        label_5->setText(QApplication::translate("formNouveauPersonnage", "Encombrement :", Q_NULLPTR));
        label_6->setText(QApplication::translate("formNouveauPersonnage", "/", Q_NULLPTR));
        label_10->setText(QApplication::translate("formNouveauPersonnage", "Armures :", Q_NULLPTR));
        label_13->setText(QApplication::translate("formNouveauPersonnage", "Nom", Q_NULLPTR));
        label_14->setText(QApplication::translate("formNouveauPersonnage", "D\303\251gats", Q_NULLPTR));
        label_15->setText(QApplication::translate("formNouveauPersonnage", "Usure", Q_NULLPTR));
        label_17->setText(QApplication::translate("formNouveauPersonnage", "Poids", Q_NULLPTR));
        label_21->setText(QApplication::translate("formNouveauPersonnage", "Nom ", Q_NULLPTR));
        label_25->setText(QApplication::translate("formNouveauPersonnage", "Protection", Q_NULLPTR));
        label_26->setText(QApplication::translate("formNouveauPersonnage", "Usure", Q_NULLPTR));
        label_27->setText(QApplication::translate("formNouveauPersonnage", "Poids", Q_NULLPTR));
        label_28->setText(QApplication::translate("formNouveauPersonnage", "Nom", Q_NULLPTR));
        label_29->setText(QApplication::translate("formNouveauPersonnage", "Qt\303\251", Q_NULLPTR));
        label_30->setText(QApplication::translate("formNouveauPersonnage", "Valeur", Q_NULLPTR));
        label_31->setText(QApplication::translate("formNouveauPersonnage", "Usage", Q_NULLPTR));
        label_32->setText(QApplication::translate("formNouveauPersonnage", "Poids", Q_NULLPTR));
        label_33->setText(QApplication::translate("formNouveauPersonnage", "Inventaire", Q_NULLPTR));
        RetourButton->setText(QApplication::translate("formNouveauPersonnage", "Retour", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class formNouveauPersonnage: public Ui_formNouveauPersonnage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMNOUVEAUPERSONNAGE_H
