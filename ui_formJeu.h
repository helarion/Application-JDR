/********************************************************************************
** Form generated from reading UI file 'formJeu.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
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

QT_BEGIN_NAMESPACE

class Ui_Jeu
{
public:

    void setupUi(QDialog *Jeu)
    {
        if (Jeu->objectName().isEmpty())
            Jeu->setObjectName(QStringLiteral("Jeu"));
        Jeu->resize(400, 300);

        retranslateUi(Jeu);

        QMetaObject::connectSlotsByName(Jeu);
    } // setupUi

    void retranslateUi(QDialog *Jeu)
    {
        Jeu->setWindowTitle(QApplication::translate("Jeu", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class Jeu: public Ui_Jeu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMJEU_H
