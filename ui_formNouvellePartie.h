/********************************************************************************
** Form generated from reading UI file 'formNouvellePartie.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMNOUVELLEPARTIE_H
#define UI_FORMNOUVELLEPARTIE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_NouvellePartie
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QTextEdit *textEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *NouvellePartie)
    {
        if (NouvellePartie->objectName().isEmpty())
            NouvellePartie->setObjectName(QStringLiteral("NouvellePartie"));
        NouvellePartie->resize(312, 300);
        label = new QLabel(NouvellePartie);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 20, 101, 31));
        label_2 = new QLabel(NouvellePartie);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 60, 47, 13));
        label_3 = new QLabel(NouvellePartie);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 90, 47, 13));
        lineEdit = new QLineEdit(NouvellePartie);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(60, 60, 113, 20));
        lineEdit_2 = new QLineEdit(NouvellePartie);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(60, 90, 113, 20));
        label_4 = new QLabel(NouvellePartie);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 110, 71, 16));
        textEdit = new QTextEdit(NouvellePartie);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(20, 130, 261, 101));
        pushButton = new QPushButton(NouvellePartie);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(120, 250, 75, 23));

        retranslateUi(NouvellePartie);

        QMetaObject::connectSlotsByName(NouvellePartie);
    } // setupUi

    void retranslateUi(QDialog *NouvellePartie)
    {
        NouvellePartie->setWindowTitle(QApplication::translate("NouvellePartie", "Dialog", 0));
        label->setText(QApplication::translate("NouvellePartie", "Nouvelle Partie :", 0));
        label_2->setText(QApplication::translate("NouvellePartie", "Date :", 0));
        label_3->setText(QApplication::translate("NouvellePartie", "Nom :", 0));
        label_4->setText(QApplication::translate("NouvellePartie", "Description :", 0));
        pushButton->setText(QApplication::translate("NouvellePartie", "Valider", 0));
    } // retranslateUi

};

namespace Ui {
    class NouvellePartie: public Ui_NouvellePartie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMNOUVELLEPARTIE_H
