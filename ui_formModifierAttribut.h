/********************************************************************************
** Form generated from reading UI file 'formModifierAttribut.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMMODIFIERATTRIBUT_H
#define UI_FORMMODIFIERATTRIBUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_formModifierAttribut
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *formModifierAttribut)
    {
        if (formModifierAttribut->objectName().isEmpty())
            formModifierAttribut->setObjectName(QStringLiteral("formModifierAttribut"));
        formModifierAttribut->resize(400, 300);
        buttonBox = new QDialogButtonBox(formModifierAttribut);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(formModifierAttribut);
        QObject::connect(buttonBox, SIGNAL(accepted()), formModifierAttribut, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), formModifierAttribut, SLOT(reject()));

        QMetaObject::connectSlotsByName(formModifierAttribut);
    } // setupUi

    void retranslateUi(QDialog *formModifierAttribut)
    {
        formModifierAttribut->setWindowTitle(QApplication::translate("formModifierAttribut", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class formModifierAttribut: public Ui_formModifierAttribut {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMMODIFIERATTRIBUT_H
