/********************************************************************************
** Form generated from reading UI file 'formNouveauAttribut.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMNOUVEAUATTRIBUT_H
#define UI_FORMNOUVEAUATTRIBUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_formNouveauAttribut
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *formNouveauAttribut)
    {
        if (formNouveauAttribut->objectName().isEmpty())
            formNouveauAttribut->setObjectName(QStringLiteral("formNouveauAttribut"));
        formNouveauAttribut->resize(400, 300);
        buttonBox = new QDialogButtonBox(formNouveauAttribut);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(formNouveauAttribut);
        QObject::connect(buttonBox, SIGNAL(accepted()), formNouveauAttribut, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), formNouveauAttribut, SLOT(reject()));

        QMetaObject::connectSlotsByName(formNouveauAttribut);
    } // setupUi

    void retranslateUi(QDialog *formNouveauAttribut)
    {
        formNouveauAttribut->setWindowTitle(QApplication::translate("formNouveauAttribut", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class formNouveauAttribut: public Ui_formNouveauAttribut {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMNOUVEAUATTRIBUT_H
