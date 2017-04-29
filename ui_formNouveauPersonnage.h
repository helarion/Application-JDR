/********************************************************************************
** Form generated from reading UI file 'formNouveauPersonnage.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
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

class Ui_formNouveauPersonnage
{
public:
    QVBoxLayout *verticalLayout_3;
    QStackedWidget *stackedWidget;
    QWidget *FeuillePersonnage;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *ImagePerosnnageLabel_3;
    QLabel *label_67;
    QLabel *label_71;
    QLineEdit *joueurEdit;
    QHBoxLayout *information1Layout;
    QLabel *label_68;
    QLineEdit *NomEdit_3;
    QLabel *label_69;
    QLineEdit *PrenomPersonnageEdit_3;
    QLabel *label_70;
    QLineEdit *AgeEdit_3;
    QLabel *label_72;
    QLineEdit *SexeEdit_3;
    QHBoxLayout *information2Layout;
    QLabel *label_73;
    QLineEdit *RaceEdit_3;
    QLabel *label_74;
    QLineEdit *NiveauEdit_3;
    QLabel *label_75;
    QLineEdit *ClasseEdit_3;
    QFrame *line_2;
    QLabel *label_76;
    QHBoxLayout *valeurLayout;
    QFrame *line;
    QLabel *label_77;
    QHBoxLayout *attributLayout;
    QFrame *line_3;
    QLabel *label_78;
    QHBoxLayout *competenceLayout;
    QFrame *line_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_79;
    QTextEdit *descirptionEdit;
    QPushButton *InventaireButton;
    QPushButton *retourButton;
    QWidget *Inventaire;
    QVBoxLayout *verticalLayout_4;
    QLabel *titre;
    QLabel *label_87;
    QTableView *ArmesTable;
    QLabel *label_92;
    QTableView *ArmureTable;
    QLabel *label_80;
    QTableView *ObjetTable;
    QPushButton *RetourButton;

    void setupUi(QDialog *formNouveauPersonnage)
    {
        if (formNouveauPersonnage->objectName().isEmpty())
            formNouveauPersonnage->setObjectName(QStringLiteral("formNouveauPersonnage"));
        formNouveauPersonnage->resize(756, 529);
        QIcon icon;
        icon.addFile(QStringLiteral("../d20.ico"), QSize(), QIcon::Normal, QIcon::Off);
        formNouveauPersonnage->setWindowIcon(icon);
        verticalLayout_3 = new QVBoxLayout(formNouveauPersonnage);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        stackedWidget = new QStackedWidget(formNouveauPersonnage);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        FeuillePersonnage = new QWidget();
        FeuillePersonnage->setObjectName(QStringLiteral("FeuillePersonnage"));
        verticalLayout = new QVBoxLayout(FeuillePersonnage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        ImagePerosnnageLabel_3 = new QLabel(FeuillePersonnage);
        ImagePerosnnageLabel_3->setObjectName(QStringLiteral("ImagePerosnnageLabel_3"));
        ImagePerosnnageLabel_3->setMinimumSize(QSize(100, 100));
        ImagePerosnnageLabel_3->setMaximumSize(QSize(300, 300));

        horizontalLayout->addWidget(ImagePerosnnageLabel_3);

        label_67 = new QLabel(FeuillePersonnage);
        label_67->setObjectName(QStringLiteral("label_67"));
        QFont font;
        font.setPointSize(18);
        label_67->setFont(font);
        label_67->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_67, 0, Qt::AlignHCenter);

        label_71 = new QLabel(FeuillePersonnage);
        label_71->setObjectName(QStringLiteral("label_71"));

        horizontalLayout->addWidget(label_71);

        joueurEdit = new QLineEdit(FeuillePersonnage);
        joueurEdit->setObjectName(QStringLiteral("joueurEdit"));

        horizontalLayout->addWidget(joueurEdit);


        verticalLayout->addLayout(horizontalLayout);

        information1Layout = new QHBoxLayout();
        information1Layout->setObjectName(QStringLiteral("information1Layout"));
        information1Layout->setContentsMargins(-1, 0, -1, -1);
        label_68 = new QLabel(FeuillePersonnage);
        label_68->setObjectName(QStringLiteral("label_68"));

        information1Layout->addWidget(label_68);

        NomEdit_3 = new QLineEdit(FeuillePersonnage);
        NomEdit_3->setObjectName(QStringLiteral("NomEdit_3"));

        information1Layout->addWidget(NomEdit_3);

        label_69 = new QLabel(FeuillePersonnage);
        label_69->setObjectName(QStringLiteral("label_69"));

        information1Layout->addWidget(label_69);

        PrenomPersonnageEdit_3 = new QLineEdit(FeuillePersonnage);
        PrenomPersonnageEdit_3->setObjectName(QStringLiteral("PrenomPersonnageEdit_3"));

        information1Layout->addWidget(PrenomPersonnageEdit_3);

        label_70 = new QLabel(FeuillePersonnage);
        label_70->setObjectName(QStringLiteral("label_70"));

        information1Layout->addWidget(label_70);

        AgeEdit_3 = new QLineEdit(FeuillePersonnage);
        AgeEdit_3->setObjectName(QStringLiteral("AgeEdit_3"));
        AgeEdit_3->setMaximumSize(QSize(50, 16777215));

        information1Layout->addWidget(AgeEdit_3);

        label_72 = new QLabel(FeuillePersonnage);
        label_72->setObjectName(QStringLiteral("label_72"));

        information1Layout->addWidget(label_72);

        SexeEdit_3 = new QLineEdit(FeuillePersonnage);
        SexeEdit_3->setObjectName(QStringLiteral("SexeEdit_3"));

        information1Layout->addWidget(SexeEdit_3);


        verticalLayout->addLayout(information1Layout);

        information2Layout = new QHBoxLayout();
        information2Layout->setObjectName(QStringLiteral("information2Layout"));
        information2Layout->setContentsMargins(-1, 0, -1, -1);
        label_73 = new QLabel(FeuillePersonnage);
        label_73->setObjectName(QStringLiteral("label_73"));

        information2Layout->addWidget(label_73);

        RaceEdit_3 = new QLineEdit(FeuillePersonnage);
        RaceEdit_3->setObjectName(QStringLiteral("RaceEdit_3"));

        information2Layout->addWidget(RaceEdit_3);

        label_74 = new QLabel(FeuillePersonnage);
        label_74->setObjectName(QStringLiteral("label_74"));

        information2Layout->addWidget(label_74);

        NiveauEdit_3 = new QLineEdit(FeuillePersonnage);
        NiveauEdit_3->setObjectName(QStringLiteral("NiveauEdit_3"));

        information2Layout->addWidget(NiveauEdit_3);

        label_75 = new QLabel(FeuillePersonnage);
        label_75->setObjectName(QStringLiteral("label_75"));

        information2Layout->addWidget(label_75);

        ClasseEdit_3 = new QLineEdit(FeuillePersonnage);
        ClasseEdit_3->setObjectName(QStringLiteral("ClasseEdit_3"));

        information2Layout->addWidget(ClasseEdit_3);


        verticalLayout->addLayout(information2Layout);

        line_2 = new QFrame(FeuillePersonnage);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        label_76 = new QLabel(FeuillePersonnage);
        label_76->setObjectName(QStringLiteral("label_76"));

        verticalLayout->addWidget(label_76);

        valeurLayout = new QHBoxLayout();
        valeurLayout->setObjectName(QStringLiteral("valeurLayout"));

        verticalLayout->addLayout(valeurLayout);

        line = new QFrame(FeuillePersonnage);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        label_77 = new QLabel(FeuillePersonnage);
        label_77->setObjectName(QStringLiteral("label_77"));

        verticalLayout->addWidget(label_77);

        attributLayout = new QHBoxLayout();
        attributLayout->setObjectName(QStringLiteral("attributLayout"));

        verticalLayout->addLayout(attributLayout);

        line_3 = new QFrame(FeuillePersonnage);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_3);

        label_78 = new QLabel(FeuillePersonnage);
        label_78->setObjectName(QStringLiteral("label_78"));

        verticalLayout->addWidget(label_78);

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
        label_79 = new QLabel(FeuillePersonnage);
        label_79->setObjectName(QStringLiteral("label_79"));

        verticalLayout_2->addWidget(label_79);

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
        verticalLayout_4 = new QVBoxLayout(Inventaire);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        titre = new QLabel(Inventaire);
        titre->setObjectName(QStringLiteral("titre"));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(false);
        font1.setWeight(50);
        titre->setFont(font1);
        titre->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(titre);

        label_87 = new QLabel(Inventaire);
        label_87->setObjectName(QStringLiteral("label_87"));

        verticalLayout_4->addWidget(label_87);

        ArmesTable = new QTableView(Inventaire);
        ArmesTable->setObjectName(QStringLiteral("ArmesTable"));

        verticalLayout_4->addWidget(ArmesTable);

        label_92 = new QLabel(Inventaire);
        label_92->setObjectName(QStringLiteral("label_92"));

        verticalLayout_4->addWidget(label_92);

        ArmureTable = new QTableView(Inventaire);
        ArmureTable->setObjectName(QStringLiteral("ArmureTable"));

        verticalLayout_4->addWidget(ArmureTable);

        label_80 = new QLabel(Inventaire);
        label_80->setObjectName(QStringLiteral("label_80"));

        verticalLayout_4->addWidget(label_80);

        ObjetTable = new QTableView(Inventaire);
        ObjetTable->setObjectName(QStringLiteral("ObjetTable"));

        verticalLayout_4->addWidget(ObjetTable);

        RetourButton = new QPushButton(Inventaire);
        RetourButton->setObjectName(QStringLiteral("RetourButton"));

        verticalLayout_4->addWidget(RetourButton);

        stackedWidget->addWidget(Inventaire);

        verticalLayout_3->addWidget(stackedWidget);


        retranslateUi(formNouveauPersonnage);
        QObject::connect(retourButton, SIGNAL(clicked()), formNouveauPersonnage, SLOT(close()));

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(formNouveauPersonnage);
    } // setupUi

    void retranslateUi(QDialog *formNouveauPersonnage)
    {
        formNouveauPersonnage->setWindowTitle(QApplication::translate("formNouveauPersonnage", "Cr\303\251ation de personnage", 0));
        ImagePerosnnageLabel_3->setText(QString());
        label_67->setText(QApplication::translate("formNouveauPersonnage", "Feuille de Personnage :", 0));
        label_71->setText(QApplication::translate("formNouveauPersonnage", "Joueur :", 0));
        label_68->setText(QApplication::translate("formNouveauPersonnage", "Nom :", 0));
        label_69->setText(QApplication::translate("formNouveauPersonnage", "Pr\303\251nom :", 0));
        label_70->setText(QApplication::translate("formNouveauPersonnage", "Age :", 0));
        label_72->setText(QApplication::translate("formNouveauPersonnage", "Sexe :", 0));
        label_73->setText(QApplication::translate("formNouveauPersonnage", "Race :", 0));
        label_74->setText(QApplication::translate("formNouveauPersonnage", "Niveau :", 0));
        label_75->setText(QApplication::translate("formNouveauPersonnage", "Classe :", 0));
        label_76->setText(QApplication::translate("formNouveauPersonnage", "Valeurs", 0));
        label_77->setText(QApplication::translate("formNouveauPersonnage", "Attributs", 0));
        label_78->setText(QApplication::translate("formNouveauPersonnage", "Comp\303\251tences :", 0));
        label_79->setText(QApplication::translate("formNouveauPersonnage", "Description / Background :", 0));
        InventaireButton->setText(QApplication::translate("formNouveauPersonnage", "Inventaire", 0));
        retourButton->setText(QApplication::translate("formNouveauPersonnage", "Retour", 0));
        titre->setText(QApplication::translate("formNouveauPersonnage", "Inventaire", 0));
        label_87->setText(QApplication::translate("formNouveauPersonnage", "Armes :", 0));
        label_92->setText(QApplication::translate("formNouveauPersonnage", "Armures :", 0));
        label_80->setText(QApplication::translate("formNouveauPersonnage", "Autres :", 0));
        RetourButton->setText(QApplication::translate("formNouveauPersonnage", "Retour", 0));
    } // retranslateUi

};

namespace Ui {
    class formNouveauPersonnage: public Ui_formNouveauPersonnage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMNOUVEAUPERSONNAGE_H
