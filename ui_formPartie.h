/********************************************************************************
** Form generated from reading UI file 'formPartie.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
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

class Ui_formPartie
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

    void setupUi(QDialog *formPartie)
    {
        if (formPartie->objectName().isEmpty())
            formPartie->setObjectName(QStringLiteral("formPartie"));
        formPartie->resize(394, 369);
        label = new QLabel(formPartie);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 10, 71, 21));
        listWidget = new QListWidget(formPartie);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(5, 80, 141, 192));
        label_2 = new QLabel(formPartie);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 60, 47, 13));
        label_3 = new QLabel(formPartie);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(190, 60, 81, 21));
        textEdit = new QTextEdit(formPartie);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(180, 90, 201, 181));
        pushButton = new QPushButton(formPartie);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(130, 300, 101, 41));
        pushButton_2 = new QPushButton(formPartie);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(250, 300, 75, 23));
        pushButton_3 = new QPushButton(formPartie);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(40, 300, 75, 23));
        pushButton_4 = new QPushButton(formPartie);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(40, 330, 75, 23));

        retranslateUi(formPartie);

        QMetaObject::connectSlotsByName(formPartie);
    } // setupUi

    void retranslateUi(QDialog *formPartie)
    {
        formPartie->setWindowTitle(QApplication::translate("formPartie", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("formPartie", "Parties :", Q_NULLPTR));
        label_2->setText(QApplication::translate("formPartie", "Liste :", Q_NULLPTR));
        label_3->setText(QApplication::translate("formPartie", "Desscription :", Q_NULLPTR));
        pushButton->setText(QApplication::translate("formPartie", "Selectionner", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("formPartie", "Supprimer", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("formPartie", "Ajouter", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("formPartie", "Editer", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class formPartie: public Ui_formPartie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMPARTIE_H
