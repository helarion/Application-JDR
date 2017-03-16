/********************************************************************************
** Form generated from reading UI file 'formCampagne.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMCAMPAGNE_H
#define UI_FORMCAMPAGNE_H

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

class Ui_formCampagne
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QListWidget *listWidget;

    void setupUi(QDialog *formCampagne)
    {
        if (formCampagne->objectName().isEmpty())
            formCampagne->setObjectName(QStringLiteral("formCampagne"));
        formCampagne->resize(226, 352);
        label = new QLabel(formCampagne);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 10, 151, 41));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(formCampagne);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(60, 100, 111, 31));
        pushButton_2 = new QPushButton(formCampagne);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 60, 211, 31));
        listWidget = new QListWidget(formCampagne);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(20, 140, 171, 181));

        retranslateUi(formCampagne);

        QMetaObject::connectSlotsByName(formCampagne);
    } // setupUi

    void retranslateUi(QDialog *formCampagne)
    {
        formCampagne->setWindowTitle(QApplication::translate("formCampagne", "Dialog", 0));
        label->setText(QApplication::translate("formCampagne", "Campagne", 0));
        pushButton->setText(QApplication::translate("formCampagne", "Nouvelle Campagne", 0));
        pushButton_2->setText(QApplication::translate("formCampagne", "Continuer une la campagne selection\303\251e", 0));
    } // retranslateUi

};

namespace Ui {
    class formCampagne: public Ui_formCampagne {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMCAMPAGNE_H
