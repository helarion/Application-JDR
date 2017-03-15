/********************************************************************************
** Form generated from reading UI file 'formPartie.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMPARTIE_H
#define UI_FORMPARTIE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Partie
{
public:
    QLabel *label;
    QListWidget *listWidget;
    QLabel *label_2;
    QLabel *label_3;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *Partie)
    {
        if (Partie->objectName().isEmpty())
            Partie->setObjectName(QStringLiteral("Partie"));
        Partie->resize(394, 369);
        label = new QLabel(Partie);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 10, 71, 21));
        listWidget = new QListWidget(Partie);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(5, 80, 141, 192));
        label_2 = new QLabel(Partie);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 60, 47, 13));
        label_3 = new QLabel(Partie);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(190, 60, 81, 21));
        textEdit = new QTextEdit(Partie);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(180, 90, 201, 181));
        pushButton = new QPushButton(Partie);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(130, 300, 101, 41));
        pushButton_2 = new QPushButton(Partie);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(250, 300, 75, 23));
        pushButton_3 = new QPushButton(Partie);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(40, 300, 75, 23));
        pushButton_4 = new QPushButton(Partie);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(40, 330, 75, 23));

        retranslateUi(Partie);

        QMetaObject::connectSlotsByName(Partie);
    } // setupUi

    void retranslateUi(QDialog *Partie)
    {
        Partie->setWindowTitle(QApplication::translate("Partie", "Dialog", 0));
        label->setText(QApplication::translate("Partie", "Parties :", 0));
        label_2->setText(QApplication::translate("Partie", "Liste :", 0));
        label_3->setText(QApplication::translate("Partie", "Desscription :", 0));
        pushButton->setText(QApplication::translate("Partie", "Selectionner", 0));
        pushButton_2->setText(QApplication::translate("Partie", "Supprimer", 0));
        pushButton_3->setText(QApplication::translate("Partie", "Ajouter", 0));
        pushButton_4->setText(QApplication::translate("Partie", "Editer", 0));
    } // retranslateUi

};

namespace Ui {
    class Partie: public Ui_Partie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMPARTIE_H
