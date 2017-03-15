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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_NouvelleCampagne
{
public:
    QLabel *label;
    QLabel *label_2;
    QListWidget *listWidget;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QTextEdit *textEdit;
    QLabel *label_5;
    QLineEdit *lineEdit_2;

    void setupUi(QDialog *NouvelleCampagne)
    {
        if (NouvelleCampagne->objectName().isEmpty())
            NouvelleCampagne->setObjectName(QStringLiteral("NouvelleCampagne"));
        NouvelleCampagne->resize(369, 300);
        label = new QLabel(NouvelleCampagne);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 10, 121, 41));
        label_2 = new QLabel(NouvelleCampagne);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 80, 81, 21));
        listWidget = new QListWidget(NouvelleCampagne);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(20, 110, 141, 161));
        label_3 = new QLabel(NouvelleCampagne);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(210, 90, 47, 13));
        lineEdit = new QLineEdit(NouvelleCampagne);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(210, 110, 113, 20));
        label_4 = new QLabel(NouvelleCampagne);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(200, 140, 71, 16));
        textEdit = new QTextEdit(NouvelleCampagne);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(200, 160, 141, 111));
        label_5 = new QLabel(NouvelleCampagne);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 60, 81, 16));
        lineEdit_2 = new QLineEdit(NouvelleCampagne);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(110, 60, 231, 20));

        retranslateUi(NouvelleCampagne);

        QMetaObject::connectSlotsByName(NouvelleCampagne);
    } // setupUi

    void retranslateUi(QDialog *NouvelleCampagne)
    {
        NouvelleCampagne->setWindowTitle(QApplication::translate("NouvelleCampagne", "Dialog", 0));
        label->setText(QApplication::translate("NouvelleCampagne", "Nouvelle campagne :", 0));
        label_2->setText(QApplication::translate("NouvelleCampagne", "Personnages :", 0));
        label_3->setText(QApplication::translate("NouvelleCampagne", "Nom :", 0));
        label_4->setText(QApplication::translate("NouvelleCampagne", "Description :", 0));
        label_5->setText(QApplication::translate("NouvelleCampagne", "Lieu de d\303\251part :", 0));
    } // retranslateUi

};

namespace Ui {
    class NouvelleCampagne: public Ui_NouvelleCampagne {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMNOUVELLECAMPAGNE_H
