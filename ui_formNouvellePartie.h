/********************************************************************************
** Form generated from reading UI file 'formNouvellePartie.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
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

class Ui_formNouvellePartie
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

    void setupUi(QDialog *formNouvellePartie)
    {
        if (formNouvellePartie->objectName().isEmpty())
            formNouvellePartie->setObjectName(QStringLiteral("formNouvellePartie"));
        formNouvellePartie->resize(312, 300);
        label = new QLabel(formNouvellePartie);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 20, 101, 31));
        label_2 = new QLabel(formNouvellePartie);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 60, 47, 13));
        label_3 = new QLabel(formNouvellePartie);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 90, 47, 13));
        lineEdit = new QLineEdit(formNouvellePartie);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(60, 60, 113, 20));
        lineEdit_2 = new QLineEdit(formNouvellePartie);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(60, 90, 113, 20));
        label_4 = new QLabel(formNouvellePartie);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 110, 71, 16));
        textEdit = new QTextEdit(formNouvellePartie);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(20, 130, 261, 101));
        pushButton = new QPushButton(formNouvellePartie);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(120, 250, 75, 23));

        retranslateUi(formNouvellePartie);

        QMetaObject::connectSlotsByName(formNouvellePartie);
    } // setupUi

    void retranslateUi(QDialog *formNouvellePartie)
    {
        formNouvellePartie->setWindowTitle(QApplication::translate("formNouvellePartie", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("formNouvellePartie", "Nouvelle Partie :", Q_NULLPTR));
        label_2->setText(QApplication::translate("formNouvellePartie", "Date :", Q_NULLPTR));
        label_3->setText(QApplication::translate("formNouvellePartie", "Nom :", Q_NULLPTR));
        label_4->setText(QApplication::translate("formNouvellePartie", "Description :", Q_NULLPTR));
        pushButton->setText(QApplication::translate("formNouvellePartie", "Valider", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class formNouvellePartie: public Ui_formNouvellePartie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMNOUVELLEPARTIE_H
