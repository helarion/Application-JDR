/********************************************************************************
** Form generated from reading UI file 'formModifierCampagne.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMMODIFIERCAMPAGNE_H
#define UI_FORMMODIFIERCAMPAGNE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_formModifierCampagne
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QGridLayout *gridLayout_2;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QTextEdit *textEdit;
    QLabel *label_2;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *modifierCampagneButton;
    QPushButton *retourButton;

    void setupUi(QDialog *formModifierCampagne)
    {
        if (formModifierCampagne->objectName().isEmpty())
            formModifierCampagne->setObjectName(QStringLiteral("formModifierCampagne"));
        formModifierCampagne->resize(502, 397);
        verticalLayout_2 = new QVBoxLayout(formModifierCampagne);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(formModifierCampagne);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_4 = new QLabel(formModifierCampagne);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 6, 0, 1, 1);

        lineEdit = new QLineEdit(formModifierCampagne);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout_2->addWidget(lineEdit, 1, 0, 1, 1);

        label_3 = new QLabel(formModifierCampagne);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        lineEdit_2 = new QLineEdit(formModifierCampagne);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout_2->addWidget(lineEdit_2, 3, 0, 1, 1);

        textEdit = new QTextEdit(formModifierCampagne);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        gridLayout_2->addWidget(textEdit, 7, 0, 1, 1);

        label_2 = new QLabel(formModifierCampagne);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        listWidget = new QListWidget(formModifierCampagne);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        gridLayout_2->addWidget(listWidget, 3, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        modifierCampagneButton = new QPushButton(formModifierCampagne);
        modifierCampagneButton->setObjectName(QStringLiteral("modifierCampagneButton"));

        horizontalLayout->addWidget(modifierCampagneButton);

        retourButton = new QPushButton(formModifierCampagne);
        retourButton->setObjectName(QStringLiteral("retourButton"));

        horizontalLayout->addWidget(retourButton);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(formModifierCampagne);
        QObject::connect(retourButton, SIGNAL(clicked()), formModifierCampagne, SLOT(close()));

        QMetaObject::connectSlotsByName(formModifierCampagne);
    } // setupUi

    void retranslateUi(QDialog *formModifierCampagne)
    {
        formModifierCampagne->setWindowTitle(QApplication::translate("formModifierCampagne", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("formModifierCampagne", "Modifier Campagne:", Q_NULLPTR));
        label_4->setText(QApplication::translate("formModifierCampagne", "Description :", Q_NULLPTR));
        label_3->setText(QApplication::translate("formModifierCampagne", "Nom :", Q_NULLPTR));
        label_2->setText(QApplication::translate("formModifierCampagne", "Personnages :", Q_NULLPTR));
        modifierCampagneButton->setText(QApplication::translate("formModifierCampagne", "Valider", Q_NULLPTR));
        retourButton->setText(QApplication::translate("formModifierCampagne", "Annuler", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class formModifierCampagne: public Ui_formModifierCampagne {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMMODIFIERCAMPAGNE_H
