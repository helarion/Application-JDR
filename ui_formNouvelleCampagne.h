/********************************************************************************
** Form generated from reading UI file 'formNouvelleCampagne.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMNOUVELLECAMPAGNE_H
#define UI_FORMNOUVELLECAMPAGNE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_formNouvelleCampagne
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_3;
    QLineEdit *nomCampagne;
    QLabel *label_4;
    QTextEdit *scenarioCampagne;
    QHBoxLayout *horizontalLayout;
    QPushButton *creerButton;
    QPushButton *annulerButton;

    void setupUi(QDialog *formNouvelleCampagne)
    {
        if (formNouvelleCampagne->objectName().isEmpty())
            formNouvelleCampagne->setObjectName(QStringLiteral("formNouvelleCampagne"));
        formNouvelleCampagne->resize(369, 328);
        QIcon icon;
        icon.addFile(QStringLiteral("../d20.ico"), QSize(), QIcon::Normal, QIcon::Off);
        formNouvelleCampagne->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(formNouvelleCampagne);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(formNouvelleCampagne);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);

        verticalLayout->addWidget(label, 0, Qt::AlignHCenter);

        label_3 = new QLabel(formNouvelleCampagne);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        nomCampagne = new QLineEdit(formNouvelleCampagne);
        nomCampagne->setObjectName(QStringLiteral("nomCampagne"));

        verticalLayout->addWidget(nomCampagne);

        label_4 = new QLabel(formNouvelleCampagne);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        scenarioCampagne = new QTextEdit(formNouvelleCampagne);
        scenarioCampagne->setObjectName(QStringLiteral("scenarioCampagne"));

        verticalLayout->addWidget(scenarioCampagne);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        creerButton = new QPushButton(formNouvelleCampagne);
        creerButton->setObjectName(QStringLiteral("creerButton"));

        horizontalLayout->addWidget(creerButton);

        annulerButton = new QPushButton(formNouvelleCampagne);
        annulerButton->setObjectName(QStringLiteral("annulerButton"));

        horizontalLayout->addWidget(annulerButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(formNouvelleCampagne);
        QObject::connect(annulerButton, SIGNAL(clicked()), formNouvelleCampagne, SLOT(close()));

        QMetaObject::connectSlotsByName(formNouvelleCampagne);
    } // setupUi

    void retranslateUi(QDialog *formNouvelleCampagne)
    {
        formNouvelleCampagne->setWindowTitle(QApplication::translate("formNouvelleCampagne", "Cr\303\251ation de campagne", 0));
        label->setText(QApplication::translate("formNouvelleCampagne", "Nouvelle campagne :", 0));
        label_3->setText(QApplication::translate("formNouvelleCampagne", "Nom :", 0));
        label_4->setText(QApplication::translate("formNouvelleCampagne", "Scenario:", 0));
        creerButton->setText(QApplication::translate("formNouvelleCampagne", "Cr\303\251er", 0));
        annulerButton->setText(QApplication::translate("formNouvelleCampagne", "Annuler", 0));
    } // retranslateUi

};

namespace Ui {
    class formNouvelleCampagne: public Ui_formNouvelleCampagne {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMNOUVELLECAMPAGNE_H
