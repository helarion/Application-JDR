/********************************************************************************
** Form generated from reading UI file 'formInventaire.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMINVENTAIRE_H
#define UI_FORMINVENTAIRE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_formInventaire
{
public:
    QLabel *label;
    QListWidget *listWidget;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QLabel *label_5;
    QTextEdit *textEdit;

    void setupUi(QDialog *formInventaire)
    {
        if (formInventaire->objectName().isEmpty())
            formInventaire->setObjectName(QStringLiteral("formInventaire"));
        formInventaire->resize(400, 300);
        label = new QLabel(formInventaire);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 10, 71, 31));
        listWidget = new QListWidget(formInventaire);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(30, 80, 151, 192));
        label_2 = new QLabel(formInventaire);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 60, 47, 13));
        label_3 = new QLabel(formInventaire);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(250, 50, 47, 13));
        lineEdit = new QLineEdit(formInventaire);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(300, 50, 51, 20));
        label_4 = new QLabel(formInventaire);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(230, 100, 47, 13));
        lineEdit_2 = new QLineEdit(formInventaire);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(270, 100, 71, 20));
        label_5 = new QLabel(formInventaire);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(210, 140, 71, 16));
        textEdit = new QTextEdit(formInventaire);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(200, 170, 181, 101));

        retranslateUi(formInventaire);

        QMetaObject::connectSlotsByName(formInventaire);
    } // setupUi

    void retranslateUi(QDialog *formInventaire)
    {
        formInventaire->setWindowTitle(QApplication::translate("formInventaire", "Dialog", 0));
        label->setText(QApplication::translate("formInventaire", "Inventaire :", 0));
        label_2->setText(QApplication::translate("formInventaire", "Objets :", 0));
        label_3->setText(QApplication::translate("formInventaire", "Argent :", 0));
        label_4->setText(QApplication::translate("formInventaire", "Usure :", 0));
        label_5->setText(QApplication::translate("formInventaire", "Description :", 0));
    } // retranslateUi

};

namespace Ui {
    class formInventaire: public Ui_formInventaire {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMINVENTAIRE_H
