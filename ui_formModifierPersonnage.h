/********************************************************************************
** Form generated from reading UI file 'formModifierPersonnage.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_formModifierPersonnage
{
public:
    QVBoxLayout *verticalLayout_3;
    QStackedWidget *stackedWidget;
    QWidget *FeuillePersonnage;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *ImagePerosnnageLabel;
    QLabel *label;
    QHBoxLayout *information1Layout;
    QLabel *label_12;
    QLineEdit *NomEdit;
    QLabel *label_9;
    QLineEdit *PrenomPersonnageEdit;
    QLabel *label_23;
    QLineEdit *AgeEdit;
    QLabel *label_7;
    QLabel *label_18;
    QLineEdit *SexeEdit;
    QHBoxLayout *information2Layout;
    QLabel *label_22;
    QLineEdit *RaceEdit;
    QLabel *label_20;
    QLineEdit *NiveauEdit;
    QLabel *label_8;
    QLineEdit *ClasseEdit;
    QFrame *line_2;
    QLabel *label_19;
    QHBoxLayout *valeurLayout;
    QFrame *line;
    QLabel *label_24;
    QHBoxLayout *attributLayout;
    QFrame *line_3;
    QLabel *label_11;
    QHBoxLayout *competenceLayout;
    QFrame *line_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_16;
    QTextEdit *descirptionEdit;
    QPushButton *InventaireButton;
    QPushButton *retourButton;
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
        formModifierPersonnage->resize(919, 548);
        verticalLayout_3 = new QVBoxLayout(formModifierPersonnage);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        stackedWidget = new QStackedWidget(formModifierPersonnage);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        FeuillePersonnage = new QWidget();
        FeuillePersonnage->setObjectName(QStringLiteral("FeuillePersonnage"));
        verticalLayout = new QVBoxLayout(FeuillePersonnage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        ImagePerosnnageLabel = new QLabel(FeuillePersonnage);
        ImagePerosnnageLabel->setObjectName(QStringLiteral("ImagePerosnnageLabel"));

        horizontalLayout->addWidget(ImagePerosnnageLabel);

        label = new QLabel(FeuillePersonnage);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);


        verticalLayout->addLayout(horizontalLayout);

        information1Layout = new QHBoxLayout();
        information1Layout->setObjectName(QStringLiteral("information1Layout"));
        information1Layout->setContentsMargins(-1, 0, -1, -1);
        label_12 = new QLabel(FeuillePersonnage);
        label_12->setObjectName(QStringLiteral("label_12"));

        information1Layout->addWidget(label_12);

        NomEdit = new QLineEdit(FeuillePersonnage);
        NomEdit->setObjectName(QStringLiteral("NomEdit"));

        information1Layout->addWidget(NomEdit);

        label_9 = new QLabel(FeuillePersonnage);
        label_9->setObjectName(QStringLiteral("label_9"));

        information1Layout->addWidget(label_9);

        PrenomPersonnageEdit = new QLineEdit(FeuillePersonnage);
        PrenomPersonnageEdit->setObjectName(QStringLiteral("PrenomPersonnageEdit"));

        information1Layout->addWidget(PrenomPersonnageEdit);

        label_23 = new QLabel(FeuillePersonnage);
        label_23->setObjectName(QStringLiteral("label_23"));

        information1Layout->addWidget(label_23);

        AgeEdit = new QLineEdit(FeuillePersonnage);
        AgeEdit->setObjectName(QStringLiteral("AgeEdit"));

        information1Layout->addWidget(AgeEdit);

        label_7 = new QLabel(FeuillePersonnage);
        label_7->setObjectName(QStringLiteral("label_7"));

        information1Layout->addWidget(label_7);

        label_18 = new QLabel(FeuillePersonnage);
        label_18->setObjectName(QStringLiteral("label_18"));

        information1Layout->addWidget(label_18);

        SexeEdit = new QLineEdit(FeuillePersonnage);
        SexeEdit->setObjectName(QStringLiteral("SexeEdit"));

        information1Layout->addWidget(SexeEdit);


        verticalLayout->addLayout(information1Layout);

        information2Layout = new QHBoxLayout();
        information2Layout->setObjectName(QStringLiteral("information2Layout"));
        information2Layout->setContentsMargins(-1, 0, -1, -1);
        label_22 = new QLabel(FeuillePersonnage);
        label_22->setObjectName(QStringLiteral("label_22"));

        information2Layout->addWidget(label_22);

        RaceEdit = new QLineEdit(FeuillePersonnage);
        RaceEdit->setObjectName(QStringLiteral("RaceEdit"));

        information2Layout->addWidget(RaceEdit);

        label_20 = new QLabel(FeuillePersonnage);
        label_20->setObjectName(QStringLiteral("label_20"));

        information2Layout->addWidget(label_20);

        NiveauEdit = new QLineEdit(FeuillePersonnage);
        NiveauEdit->setObjectName(QStringLiteral("NiveauEdit"));

        information2Layout->addWidget(NiveauEdit);

        label_8 = new QLabel(FeuillePersonnage);
        label_8->setObjectName(QStringLiteral("label_8"));

        information2Layout->addWidget(label_8);

        ClasseEdit = new QLineEdit(FeuillePersonnage);
        ClasseEdit->setObjectName(QStringLiteral("ClasseEdit"));

        information2Layout->addWidget(ClasseEdit);


        verticalLayout->addLayout(information2Layout);

        line_2 = new QFrame(FeuillePersonnage);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        label_19 = new QLabel(FeuillePersonnage);
        label_19->setObjectName(QStringLiteral("label_19"));

        verticalLayout->addWidget(label_19);

        valeurLayout = new QHBoxLayout();
        valeurLayout->setObjectName(QStringLiteral("valeurLayout"));

        verticalLayout->addLayout(valeurLayout);

        line = new QFrame(FeuillePersonnage);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        label_24 = new QLabel(FeuillePersonnage);
        label_24->setObjectName(QStringLiteral("label_24"));

        verticalLayout->addWidget(label_24);

        attributLayout = new QHBoxLayout();
        attributLayout->setObjectName(QStringLiteral("attributLayout"));

        verticalLayout->addLayout(attributLayout);

        line_3 = new QFrame(FeuillePersonnage);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_3);

        label_11 = new QLabel(FeuillePersonnage);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout->addWidget(label_11);

        competenceLayout = new QHBoxLayout();
        competenceLayout->setObjectName(QStringLiteral("competenceLayout"));

        verticalLayout->addLayout(competenceLayout);

        line_4 = new QFrame(FeuillePersonnage);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 0, -1, -1);
        label_16 = new QLabel(FeuillePersonnage);
        label_16->setObjectName(QStringLiteral("label_16"));

        verticalLayout_2->addWidget(label_16);

        descirptionEdit = new QTextEdit(FeuillePersonnage);
        descirptionEdit->setObjectName(QStringLiteral("descirptionEdit"));

        verticalLayout_2->addWidget(descirptionEdit);


        verticalLayout->addLayout(verticalLayout_2);

        InventaireButton = new QPushButton(FeuillePersonnage);
        InventaireButton->setObjectName(QStringLiteral("InventaireButton"));

        verticalLayout->addWidget(InventaireButton);

        retourButton = new QPushButton(FeuillePersonnage);
        retourButton->setObjectName(QStringLiteral("retourButton"));

        verticalLayout->addWidget(retourButton);

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

        verticalLayout_3->addWidget(stackedWidget);


        retranslateUi(formModifierPersonnage);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(formModifierPersonnage);
    } // setupUi

    void retranslateUi(QDialog *formModifierPersonnage)
    {
        formModifierPersonnage->setWindowTitle(QApplication::translate("formModifierPersonnage", "Dialog", 0));
        ImagePerosnnageLabel->setText(QString());
        label->setText(QApplication::translate("formModifierPersonnage", "Feuille de Personnage :", 0));
        label_12->setText(QApplication::translate("formModifierPersonnage", "Nom :", 0));
        label_9->setText(QApplication::translate("formModifierPersonnage", "Pr\303\251nom :", 0));
        label_23->setText(QApplication::translate("formModifierPersonnage", "Age :", 0));
        label_7->setText(QApplication::translate("formModifierPersonnage", "Joueur :", 0));
        label_18->setText(QApplication::translate("formModifierPersonnage", "Sexe :", 0));
        label_22->setText(QApplication::translate("formModifierPersonnage", "Race :", 0));
        label_20->setText(QApplication::translate("formModifierPersonnage", "Niveau :", 0));
        label_8->setText(QApplication::translate("formModifierPersonnage", "Classe :", 0));
        label_19->setText(QApplication::translate("formModifierPersonnage", "Valeurs", 0));
        label_24->setText(QApplication::translate("formModifierPersonnage", "Attributs", 0));
        label_11->setText(QApplication::translate("formModifierPersonnage", "Comp\303\251tences :", 0));
        label_16->setText(QApplication::translate("formModifierPersonnage", "Description / Background :", 0));
        InventaireButton->setText(QApplication::translate("formModifierPersonnage", "Inventaire", 0));
        retourButton->setText(QApplication::translate("formModifierPersonnage", "Retour", 0));
        label_2->setText(QApplication::translate("formModifierPersonnage", "Autres :", 0));
        label_5->setText(QApplication::translate("formModifierPersonnage", "Encombrement :", 0));
        label_27->setText(QApplication::translate("formModifierPersonnage", "Poids", 0));
        label_14->setText(QApplication::translate("formModifierPersonnage", "D\303\251gats", 0));
        label_32->setText(QApplication::translate("formModifierPersonnage", "Poids", 0));
        label_15->setText(QApplication::translate("formModifierPersonnage", "Usure", 0));
        label_26->setText(QApplication::translate("formModifierPersonnage", "Usure", 0));
        label_3->setText(QApplication::translate("formModifierPersonnage", "Armes :", 0));
        label_13->setText(QApplication::translate("formModifierPersonnage", "Nom", 0));
        label_6->setText(QApplication::translate("formModifierPersonnage", "/", 0));
        label_25->setText(QApplication::translate("formModifierPersonnage", "Protection", 0));
        label_29->setText(QApplication::translate("formModifierPersonnage", "Qt\303\251", 0));
        label_10->setText(QApplication::translate("formModifierPersonnage", "Armures :", 0));
        label_31->setText(QApplication::translate("formModifierPersonnage", "Usage", 0));
        label_4->setText(QApplication::translate("formModifierPersonnage", "Argent :", 0));
        label_30->setText(QApplication::translate("formModifierPersonnage", "Valeur", 0));
        label_21->setText(QApplication::translate("formModifierPersonnage", "Nom ", 0));
        label_28->setText(QApplication::translate("formModifierPersonnage", "Nom", 0));
        label_17->setText(QApplication::translate("formModifierPersonnage", "Poids", 0));
        label_33->setText(QApplication::translate("formModifierPersonnage", "Inventaire", 0));
        RetourButton->setText(QApplication::translate("formModifierPersonnage", "Retour", 0));
    } // retranslateUi

};

namespace Ui {
    class formModifierPersonnage: public Ui_formModifierPersonnage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMMODIFIERPERSONNAGE_H
