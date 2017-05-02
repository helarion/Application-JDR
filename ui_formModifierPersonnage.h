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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_formModifierPersonnage
{
public:
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *FeuillePersonnage;
    QVBoxLayout *verticalLayout;
    QLabel *titre_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_71;
    QLineEdit *joueurEdit;
    QHBoxLayout *information1Layout;
    QLabel *label_68;
    QLineEdit *NomEdit;
    QLabel *label_69;
    QLineEdit *PrenomPersonnageEdit;
    QLabel *label_70;
    QLineEdit *AgeEdit;
    QLabel *label_72;
    QLineEdit *SexeEdit;
    QLabel *label;
    QHBoxLayout *informationLayout;
    QFrame *line_2;
    QLabel *label_76;
    QHBoxLayout *valeurLayout;
    QFrame *line;
    QLabel *label_77;
    QHBoxLayout *attributLayout;
    QFrame *line_3;
    QLabel *label_78;
    QHBoxLayout *competenceLayout;
    QWidget *Inventaire;
    QVBoxLayout *verticalLayout_4;
    QLabel *titre;
    QLabel *label_87;
    QTextEdit *invArme;
    QLabel *label_92;
    QTextEdit *invArmure;
    QLabel *label_80;
    QTextEdit *invObjet;
    QWidget *page;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_2;
    QLabel *label_79;
    QTextEdit *descirptionEdit;
    QLabel *label_3;
    QTextEdit *background;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pagePrecedenteButton;
    QPushButton *pageSuivanteButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *modifierButton;
    QPushButton *retourButton;

    void setupUi(QDialog *formModifierPersonnage)
    {
        if (formModifierPersonnage->objectName().isEmpty())
            formModifierPersonnage->setObjectName(QStringLiteral("formModifierPersonnage"));
        formModifierPersonnage->resize(919, 548);
        QIcon icon;
        icon.addFile(QStringLiteral("../d20.ico"), QSize(), QIcon::Normal, QIcon::Off);
        formModifierPersonnage->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(formModifierPersonnage);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        stackedWidget = new QStackedWidget(formModifierPersonnage);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        FeuillePersonnage = new QWidget();
        FeuillePersonnage->setObjectName(QStringLiteral("FeuillePersonnage"));
        verticalLayout = new QVBoxLayout(FeuillePersonnage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        titre_2 = new QLabel(FeuillePersonnage);
        titre_2->setObjectName(QStringLiteral("titre_2"));
        QFont font;
        font.setPointSize(18);
        titre_2->setFont(font);
        titre_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(titre_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_71 = new QLabel(FeuillePersonnage);
        label_71->setObjectName(QStringLiteral("label_71"));

        horizontalLayout->addWidget(label_71, 0, Qt::AlignRight);

        joueurEdit = new QLineEdit(FeuillePersonnage);
        joueurEdit->setObjectName(QStringLiteral("joueurEdit"));
        joueurEdit->setMinimumSize(QSize(50, 15));
        joueurEdit->setMaximumSize(QSize(150, 25));

        horizontalLayout->addWidget(joueurEdit, 0, Qt::AlignRight);


        verticalLayout->addLayout(horizontalLayout);

        information1Layout = new QHBoxLayout();
        information1Layout->setObjectName(QStringLiteral("information1Layout"));
        information1Layout->setContentsMargins(-1, 0, -1, -1);
        label_68 = new QLabel(FeuillePersonnage);
        label_68->setObjectName(QStringLiteral("label_68"));

        information1Layout->addWidget(label_68);

        NomEdit = new QLineEdit(FeuillePersonnage);
        NomEdit->setObjectName(QStringLiteral("NomEdit"));

        information1Layout->addWidget(NomEdit);

        label_69 = new QLabel(FeuillePersonnage);
        label_69->setObjectName(QStringLiteral("label_69"));

        information1Layout->addWidget(label_69);

        PrenomPersonnageEdit = new QLineEdit(FeuillePersonnage);
        PrenomPersonnageEdit->setObjectName(QStringLiteral("PrenomPersonnageEdit"));

        information1Layout->addWidget(PrenomPersonnageEdit);

        label_70 = new QLabel(FeuillePersonnage);
        label_70->setObjectName(QStringLiteral("label_70"));

        information1Layout->addWidget(label_70);

        AgeEdit = new QLineEdit(FeuillePersonnage);
        AgeEdit->setObjectName(QStringLiteral("AgeEdit"));
        AgeEdit->setMaximumSize(QSize(50, 16777215));

        information1Layout->addWidget(AgeEdit);

        label_72 = new QLabel(FeuillePersonnage);
        label_72->setObjectName(QStringLiteral("label_72"));

        information1Layout->addWidget(label_72);

        SexeEdit = new QLineEdit(FeuillePersonnage);
        SexeEdit->setObjectName(QStringLiteral("SexeEdit"));

        information1Layout->addWidget(SexeEdit);


        verticalLayout->addLayout(information1Layout);

        label = new QLabel(FeuillePersonnage);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        informationLayout = new QHBoxLayout();
        informationLayout->setObjectName(QStringLiteral("informationLayout"));
        informationLayout->setContentsMargins(-1, 0, -1, -1);

        verticalLayout->addLayout(informationLayout);

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

        invArme = new QTextEdit(Inventaire);
        invArme->setObjectName(QStringLiteral("invArme"));

        verticalLayout_4->addWidget(invArme);

        label_92 = new QLabel(Inventaire);
        label_92->setObjectName(QStringLiteral("label_92"));

        verticalLayout_4->addWidget(label_92);

        invArmure = new QTextEdit(Inventaire);
        invArmure->setObjectName(QStringLiteral("invArmure"));

        verticalLayout_4->addWidget(invArmure);

        label_80 = new QLabel(Inventaire);
        label_80->setObjectName(QStringLiteral("label_80"));

        verticalLayout_4->addWidget(label_80);

        invObjet = new QTextEdit(Inventaire);
        invObjet->setObjectName(QStringLiteral("invObjet"));

        verticalLayout_4->addWidget(invObjet);

        stackedWidget->addWidget(Inventaire);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout_5 = new QVBoxLayout(page);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_2 = new QLabel(page);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font2;
        font2.setPointSize(20);
        label_2->setFont(font2);

        verticalLayout_5->addWidget(label_2, 0, Qt::AlignHCenter);

        label_79 = new QLabel(page);
        label_79->setObjectName(QStringLiteral("label_79"));

        verticalLayout_5->addWidget(label_79);

        descirptionEdit = new QTextEdit(page);
        descirptionEdit->setObjectName(QStringLiteral("descirptionEdit"));

        verticalLayout_5->addWidget(descirptionEdit);

        label_3 = new QLabel(page);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_5->addWidget(label_3);

        background = new QTextEdit(page);
        background->setObjectName(QStringLiteral("background"));

        verticalLayout_5->addWidget(background);

        stackedWidget->addWidget(page);

        verticalLayout_2->addWidget(stackedWidget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        pagePrecedenteButton = new QPushButton(formModifierPersonnage);
        pagePrecedenteButton->setObjectName(QStringLiteral("pagePrecedenteButton"));

        horizontalLayout_3->addWidget(pagePrecedenteButton);

        pageSuivanteButton = new QPushButton(formModifierPersonnage);
        pageSuivanteButton->setObjectName(QStringLiteral("pageSuivanteButton"));

        horizontalLayout_3->addWidget(pageSuivanteButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        modifierButton = new QPushButton(formModifierPersonnage);
        modifierButton->setObjectName(QStringLiteral("modifierButton"));

        horizontalLayout_3->addWidget(modifierButton);

        retourButton = new QPushButton(formModifierPersonnage);
        retourButton->setObjectName(QStringLiteral("retourButton"));

        horizontalLayout_3->addWidget(retourButton);


        verticalLayout_2->addLayout(horizontalLayout_3);


        retranslateUi(formModifierPersonnage);
        QObject::connect(retourButton, SIGNAL(clicked()), formModifierPersonnage, SLOT(close()));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(formModifierPersonnage);
    } // setupUi

    void retranslateUi(QDialog *formModifierPersonnage)
    {
        formModifierPersonnage->setWindowTitle(QApplication::translate("formModifierPersonnage", "Modification de personnage", 0));
        titre_2->setText(QApplication::translate("formModifierPersonnage", "Feuille de Personnage :", 0));
        label_71->setText(QApplication::translate("formModifierPersonnage", "Joueur :", 0));
        label_68->setText(QApplication::translate("formModifierPersonnage", "Nom :", 0));
        label_69->setText(QApplication::translate("formModifierPersonnage", "Pr\303\251nom :", 0));
        label_70->setText(QApplication::translate("formModifierPersonnage", "Age :", 0));
        label_72->setText(QApplication::translate("formModifierPersonnage", "Sexe :", 0));
        label->setText(QApplication::translate("formModifierPersonnage", "Informations :", 0));
        label_76->setText(QApplication::translate("formModifierPersonnage", "Valeurs :", 0));
        label_77->setText(QApplication::translate("formModifierPersonnage", "Attributs :", 0));
        label_78->setText(QApplication::translate("formModifierPersonnage", "Comp\303\251tences :", 0));
        titre->setText(QApplication::translate("formModifierPersonnage", "Inventaire", 0));
        label_87->setText(QApplication::translate("formModifierPersonnage", "Armes :", 0));
        label_92->setText(QApplication::translate("formModifierPersonnage", "Armures :", 0));
        label_80->setText(QApplication::translate("formModifierPersonnage", "Objets :", 0));
        label_2->setText(QApplication::translate("formModifierPersonnage", "Backstory", 0));
        label_79->setText(QApplication::translate("formModifierPersonnage", "Description :", 0));
        label_3->setText(QApplication::translate("formModifierPersonnage", "Background :", 0));
        pagePrecedenteButton->setText(QApplication::translate("formModifierPersonnage", "<--", 0));
        pageSuivanteButton->setText(QApplication::translate("formModifierPersonnage", "-->", 0));
        modifierButton->setText(QApplication::translate("formModifierPersonnage", "Modifier", 0));
        retourButton->setText(QApplication::translate("formModifierPersonnage", "Annuler", 0));
    } // retranslateUi

};

namespace Ui {
    class formModifierPersonnage: public Ui_formModifierPersonnage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMMODIFIERPERSONNAGE_H
