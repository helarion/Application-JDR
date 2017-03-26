/********************************************************************************
** Form generated from reading UI file 'formModifierJeu.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMMODIFIERJEU_H
#define UI_FORMMODIFIERJEU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_formModifierJeu
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label;

    void setupUi(QWidget *formModifierJeu)
    {
        if (formModifierJeu->objectName().isEmpty())
            formModifierJeu->setObjectName(QStringLiteral("formModifierJeu"));
        formModifierJeu->resize(660, 418);
        gridLayout = new QGridLayout(formModifierJeu);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_2 = new QLabel(formModifierJeu);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        lineEdit = new QLineEdit(formModifierJeu);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_3 = new QLabel(formModifierJeu);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        lineEdit_2 = new QLineEdit(formModifierJeu);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        pushButton = new QPushButton(formModifierJeu);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        formLayout->setWidget(2, QFormLayout::FieldRole, pushButton);


        gridLayout->addLayout(formLayout, 2, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        pushButton_2 = new QPushButton(formModifierJeu);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(formModifierJeu);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);


        gridLayout->addLayout(horizontalLayout, 3, 2, 1, 1);

        label = new QLabel(formModifierJeu);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 2, 1, 1, Qt::AlignHCenter);


        retranslateUi(formModifierJeu);

        QMetaObject::connectSlotsByName(formModifierJeu);
    } // setupUi

    void retranslateUi(QWidget *formModifierJeu)
    {
        formModifierJeu->setWindowTitle(QApplication::translate("formModifierJeu", "Form", 0));
        label_2->setText(QApplication::translate("formModifierJeu", "Nom du jeu", 0));
        label_3->setText(QApplication::translate("formModifierJeu", "Th\303\250me", 0));
        pushButton->setText(QApplication::translate("formModifierJeu", "Parcourir", 0));
        pushButton_2->setText(QApplication::translate("formModifierJeu", "Modifier", 0));
        pushButton_3->setText(QApplication::translate("formModifierJeu", "Annuler", 0));
        label->setText(QApplication::translate("formModifierJeu", "Modification Jeu", 0));
    } // retranslateUi

};

namespace Ui {
    class formModifierJeu: public Ui_formModifierJeu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMMODIFIERJEU_H
