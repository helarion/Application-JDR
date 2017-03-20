/********************************************************************************
** Form generated from reading UI file 'formJeu.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMJEU_H
#define UI_FORMJEU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_formJeu
{
public:
    QLabel *label;
    QListWidget *listJeu;
    QPushButton *pushButton;

    void setupUi(QDialog *formJeu)
    {
        if (formJeu->objectName().isEmpty())
            formJeu->setObjectName(QStringLiteral("formJeu"));
        formJeu->resize(400, 300);
        label = new QLabel(formJeu);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 20, 151, 31));
        listJeu = new QListWidget(formJeu);
        listJeu->setObjectName(QStringLiteral("listJeu"));
        listJeu->setGeometry(QRect(120, 50, 151, 171));
        pushButton = new QPushButton(formJeu);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 250, 101, 31));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);

        retranslateUi(formJeu);

        QMetaObject::connectSlotsByName(formJeu);
    } // setupUi

    void retranslateUi(QDialog *formJeu)
    {
        formJeu->setWindowTitle(QApplication::translate("formJeu", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("formJeu", "S\303\251lectionner un jeu existant :", Q_NULLPTR));
        pushButton->setText(QApplication::translate("formJeu", "Valider", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class formJeu: public Ui_formJeu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMJEU_H
