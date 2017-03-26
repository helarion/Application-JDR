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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_formNouvelleCampagne
{
public:
    QGridLayout *gridLayout;
    QListWidget *listWidget;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *creerButton;
    QLabel *label;
    QLabel *label_3;
    QPushButton *annulerButton;
    QLabel *label_4;
    QTextEdit *textEdit;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *formNouvelleCampagne)
    {
        if (formNouvelleCampagne->objectName().isEmpty())
            formNouvelleCampagne->setObjectName(QStringLiteral("formNouvelleCampagne"));
        formNouvelleCampagne->resize(369, 300);
        gridLayout = new QGridLayout(formNouvelleCampagne);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        listWidget = new QListWidget(formNouvelleCampagne);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        gridLayout->addWidget(listWidget, 5, 0, 3, 2);

        label_2 = new QLabel(formNouvelleCampagne);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 4, 0, 1, 1);

        lineEdit = new QLineEdit(formNouvelleCampagne);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 2, 1, 1, 2);

        creerButton = new QPushButton(formNouvelleCampagne);
        creerButton->setObjectName(QStringLiteral("creerButton"));

        gridLayout->addWidget(creerButton, 8, 0, 1, 2);

        label = new QLabel(formNouvelleCampagne);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 1, 1, 2);

        label_3 = new QLabel(formNouvelleCampagne);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        annulerButton = new QPushButton(formNouvelleCampagne);
        annulerButton->setObjectName(QStringLiteral("annulerButton"));

        gridLayout->addWidget(annulerButton, 8, 2, 1, 1);

        label_4 = new QLabel(formNouvelleCampagne);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        textEdit = new QTextEdit(formNouvelleCampagne);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        gridLayout->addWidget(textEdit, 3, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton = new QPushButton(formNouvelleCampagne);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(formNouvelleCampagne);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(formNouvelleCampagne);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);


        gridLayout->addLayout(verticalLayout, 5, 2, 1, 1);


        retranslateUi(formNouvelleCampagne);

        QMetaObject::connectSlotsByName(formNouvelleCampagne);
    } // setupUi

    void retranslateUi(QDialog *formNouvelleCampagne)
    {
        formNouvelleCampagne->setWindowTitle(QApplication::translate("formNouvelleCampagne", "Dialog", 0));
        label_2->setText(QApplication::translate("formNouvelleCampagne", "Personnages :", 0));
        creerButton->setText(QApplication::translate("formNouvelleCampagne", "Cr\303\251er", 0));
        label->setText(QApplication::translate("formNouvelleCampagne", "Nouvelle campagne :", 0));
        label_3->setText(QApplication::translate("formNouvelleCampagne", "Nom :", 0));
        annulerButton->setText(QApplication::translate("formNouvelleCampagne", "Annuler", 0));
        label_4->setText(QApplication::translate("formNouvelleCampagne", "Scenario:", 0));
        pushButton->setText(QApplication::translate("formNouvelleCampagne", "Ajouter", 0));
        pushButton_2->setText(QApplication::translate("formNouvelleCampagne", "Modifier", 0));
        pushButton_3->setText(QApplication::translate("formNouvelleCampagne", "Supprimer", 0));
    } // retranslateUi

};

namespace Ui {
    class formNouvelleCampagne: public Ui_formNouvelleCampagne {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMNOUVELLECAMPAGNE_H
