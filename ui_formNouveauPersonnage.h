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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_formNouveauPersonnage
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *informationsLayout;
    QLabel *label_9;
    QLineEdit *prenom;
    QLabel *label_12;
    QLineEdit *nom;
    QLabel *label_23;
    QLineEdit *age;
    QLabel *label_18;
    QLineEdit *sexe;
    QFrame *line;
    QHBoxLayout *valeurLayout;
    QFrame *line_2;
    QHBoxLayout *attributLayout;
    QFrame *line_3;
    QGridLayout *competenceLayout;
    QVBoxLayout *textLayout;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *creerButton;
    QPushButton *retourButton;

    void setupUi(QDialog *formNouveauPersonnage)
    {
        if (formNouveauPersonnage->objectName().isEmpty())
            formNouveauPersonnage->setObjectName(QStringLiteral("formNouveauPersonnage"));
        formNouveauPersonnage->resize(756, 459);
        verticalLayout = new QVBoxLayout(formNouveauPersonnage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(formNouveauPersonnage);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(400, 50));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 0, -1, -1);
        informationsLayout = new QHBoxLayout();
        informationsLayout->setObjectName(QStringLiteral("informationsLayout"));
        informationsLayout->setContentsMargins(-1, 0, 0, -1);
        label_9 = new QLabel(formNouveauPersonnage);
        label_9->setObjectName(QStringLiteral("label_9"));

        informationsLayout->addWidget(label_9);

        prenom = new QLineEdit(formNouveauPersonnage);
        prenom->setObjectName(QStringLiteral("prenom"));

        informationsLayout->addWidget(prenom);

        label_12 = new QLabel(formNouveauPersonnage);
        label_12->setObjectName(QStringLiteral("label_12"));

        informationsLayout->addWidget(label_12);

        nom = new QLineEdit(formNouveauPersonnage);
        nom->setObjectName(QStringLiteral("nom"));

        informationsLayout->addWidget(nom);

        label_23 = new QLabel(formNouveauPersonnage);
        label_23->setObjectName(QStringLiteral("label_23"));

        informationsLayout->addWidget(label_23);

        age = new QLineEdit(formNouveauPersonnage);
        age->setObjectName(QStringLiteral("age"));
        age->setMaximumSize(QSize(50, 16777215));

        informationsLayout->addWidget(age);

        label_18 = new QLabel(formNouveauPersonnage);
        label_18->setObjectName(QStringLiteral("label_18"));

        informationsLayout->addWidget(label_18);

        sexe = new QLineEdit(formNouveauPersonnage);
        sexe->setObjectName(QStringLiteral("sexe"));

        informationsLayout->addWidget(sexe);


        verticalLayout_2->addLayout(informationsLayout);

        line = new QFrame(formNouveauPersonnage);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        valeurLayout = new QHBoxLayout();
        valeurLayout->setObjectName(QStringLiteral("valeurLayout"));

        verticalLayout_2->addLayout(valeurLayout);

        line_2 = new QFrame(formNouveauPersonnage);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_2);

        attributLayout = new QHBoxLayout();
        attributLayout->setObjectName(QStringLiteral("attributLayout"));
        attributLayout->setContentsMargins(-1, 0, -1, -1);

        verticalLayout_2->addLayout(attributLayout);


        verticalLayout->addLayout(verticalLayout_2);

        line_3 = new QFrame(formNouveauPersonnage);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_3);

        competenceLayout = new QGridLayout();
        competenceLayout->setObjectName(QStringLiteral("competenceLayout"));

        verticalLayout->addLayout(competenceLayout);

        textLayout = new QVBoxLayout();
        textLayout->setObjectName(QStringLiteral("textLayout"));

        verticalLayout->addLayout(textLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        creerButton = new QPushButton(formNouveauPersonnage);
        creerButton->setObjectName(QStringLiteral("creerButton"));

        horizontalLayout_3->addWidget(creerButton);

        retourButton = new QPushButton(formNouveauPersonnage);
        retourButton->setObjectName(QStringLiteral("retourButton"));

        horizontalLayout_3->addWidget(retourButton);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(formNouveauPersonnage);
        QObject::connect(retourButton, SIGNAL(clicked()), formNouveauPersonnage, SLOT(close()));

        QMetaObject::connectSlotsByName(formNouveauPersonnage);
    } // setupUi

    void retranslateUi(QDialog *formNouveauPersonnage)
    {
        formNouveauPersonnage->setWindowTitle(QApplication::translate("formNouveauPersonnage", "Dialog", 0));
        label->setText(QApplication::translate("formNouveauPersonnage", "Feuille de Personnage :", 0));
        label_9->setText(QApplication::translate("formNouveauPersonnage", "Pr\303\251nom :", 0));
        label_12->setText(QApplication::translate("formNouveauPersonnage", "Nom :", 0));
        label_23->setText(QApplication::translate("formNouveauPersonnage", "Age :", 0));
        label_18->setText(QApplication::translate("formNouveauPersonnage", "Sexe :", 0));
        creerButton->setText(QApplication::translate("formNouveauPersonnage", "Valider", 0));
        retourButton->setText(QApplication::translate("formNouveauPersonnage", "Retour", 0));
    } // retranslateUi

};

namespace Ui {
    class formNouveauPersonnage: public Ui_formNouveauPersonnage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMNOUVEAUPERSONNAGE_H
