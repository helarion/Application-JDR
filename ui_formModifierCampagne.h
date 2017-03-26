/********************************************************************************
** Form generated from reading UI file 'formModifierCampagne.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
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
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_formModifierCampagne
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_5;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLabel *label_3;
    QListWidget *listWidget;
    QLineEdit *lineEdit;
    QLabel *label_4;
    QTextEdit *textEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *formModifierCampagne)
    {
        if (formModifierCampagne->objectName().isEmpty())
            formModifierCampagne->setObjectName(QStringLiteral("formModifierCampagne"));
        formModifierCampagne->resize(400, 300);
        gridLayout = new QGridLayout(formModifierCampagne);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(formModifierCampagne);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 1, 1, 2);

        label_5 = new QLabel(formModifierCampagne);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        lineEdit_2 = new QLineEdit(formModifierCampagne);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 2);

        label_2 = new QLabel(formModifierCampagne);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label_3 = new QLabel(formModifierCampagne);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 2, 1, 1);

        listWidget = new QListWidget(formModifierCampagne);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        gridLayout->addWidget(listWidget, 3, 0, 3, 2);

        lineEdit = new QLineEdit(formModifierCampagne);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 3, 2, 1, 1);

        label_4 = new QLabel(formModifierCampagne);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 4, 2, 1, 1);

        textEdit = new QTextEdit(formModifierCampagne);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        gridLayout->addWidget(textEdit, 5, 2, 1, 1);

        buttonBox = new QDialogButtonBox(formModifierCampagne);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 6, 0, 1, 3);


        retranslateUi(formModifierCampagne);
        QObject::connect(buttonBox, SIGNAL(accepted()), formModifierCampagne, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), formModifierCampagne, SLOT(reject()));

        QMetaObject::connectSlotsByName(formModifierCampagne);
    } // setupUi

    void retranslateUi(QDialog *formModifierCampagne)
    {
        formModifierCampagne->setWindowTitle(QApplication::translate("formModifierCampagne", "Dialog", 0));
        label->setText(QApplication::translate("formModifierCampagne", "Modifier Campagne:", 0));
        label_5->setText(QApplication::translate("formModifierCampagne", "Lieu de d\303\251part :", 0));
        label_2->setText(QApplication::translate("formModifierCampagne", "Personnages :", 0));
        label_3->setText(QApplication::translate("formModifierCampagne", "Nom :", 0));
        label_4->setText(QApplication::translate("formModifierCampagne", "Description :", 0));
    } // retranslateUi

};

namespace Ui {
    class formModifierCampagne: public Ui_formModifierCampagne {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMMODIFIERCAMPAGNE_H
