/********************************************************************************
** Form generated from reading UI file 'continuerJeu.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTINUERJeu_H
#define UI_CONTINUERJeu_H

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

class Ui_ContinuerJeu
{
public:
    QListWidget *listWidget;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *ContinuerJeu)
    {
        if (ContinuerJeu->objectName().isEmpty())
            ContinuerJeu->setObjectName(QStringLiteral("ContinuerJeu"));
        ContinuerJeu->resize(194, 300);
        listWidget = new QListWidget(ContinuerJeu);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(20, 40, 151, 171));
        label = new QLabel(ContinuerJeu);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 151, 31));
        pushButton = new QPushButton(ContinuerJeu);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(50, 240, 101, 31));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);

        retranslateUi(ContinuerJeu);

        QMetaObject::connectSlotsByName(ContinuerJeu);
    } // setupUi

    void retranslateUi(QDialog *ContinuerJeu)
    {
        ContinuerJeu->setWindowTitle(QApplication::translate("ContinuerJeu", "Dialog", 0));
        label->setText(QApplication::translate("ContinuerJeu", "S\303\251lectionner un Jeu existant :", 0));
        pushButton->setText(QApplication::translate("ContinuerJeu", "Valider", 0));
    } // retranslateUi

};

namespace Ui {
    class ContinuerJeu: public Ui_ContinuerJeu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTINUERJeu_H
