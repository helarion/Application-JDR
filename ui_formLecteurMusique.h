/********************************************************************************
** Form generated from reading UI file 'formLecteurMusique.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMLECTEURMUSIQUE_H
#define UI_FORMLECTEURMUSIQUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_formLecteurMusique
{
public:
    QLabel *label;
    QSlider *ProgressSlider;
    QSlider *verticalSlider;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *OuvrirButton;
    QPushButton *PlayButton;
    QPushButton *PauseButton;
    QPushButton *StopButton;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *PreviousButton;
    QPushButton *NextButton;
    QCheckBox *RandomCheckBox;

    void setupUi(QDialog *formLecteurMusique)
    {
        if (formLecteurMusique->objectName().isEmpty())
            formLecteurMusique->setObjectName(QStringLiteral("formLecteurMusique"));
        formLecteurMusique->resize(441, 173);
        label = new QLabel(formLecteurMusique);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 10, 161, 41));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        ProgressSlider = new QSlider(formLecteurMusique);
        ProgressSlider->setObjectName(QStringLiteral("ProgressSlider"));
        ProgressSlider->setGeometry(QRect(50, 110, 321, 22));
        ProgressSlider->setOrientation(Qt::Horizontal);
        verticalSlider = new QSlider(formLecteurMusique);
        verticalSlider->setObjectName(QStringLiteral("verticalSlider"));
        verticalSlider->setGeometry(QRect(390, 40, 22, 81));
        verticalSlider->setValue(99);
        verticalSlider->setOrientation(Qt::Vertical);
        layoutWidget = new QWidget(formLecteurMusique);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 70, 320, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        OuvrirButton = new QPushButton(layoutWidget);
        OuvrirButton->setObjectName(QStringLiteral("OuvrirButton"));

        horizontalLayout->addWidget(OuvrirButton);

        PlayButton = new QPushButton(layoutWidget);
        PlayButton->setObjectName(QStringLiteral("PlayButton"));

        horizontalLayout->addWidget(PlayButton);

        PauseButton = new QPushButton(layoutWidget);
        PauseButton->setObjectName(QStringLiteral("PauseButton"));

        horizontalLayout->addWidget(PauseButton);

        StopButton = new QPushButton(layoutWidget);
        StopButton->setObjectName(QStringLiteral("StopButton"));

        horizontalLayout->addWidget(StopButton);

        layoutWidget1 = new QWidget(formLecteurMusique);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(140, 130, 158, 25));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        PreviousButton = new QPushButton(layoutWidget1);
        PreviousButton->setObjectName(QStringLiteral("PreviousButton"));

        horizontalLayout_2->addWidget(PreviousButton);

        NextButton = new QPushButton(layoutWidget1);
        NextButton->setObjectName(QStringLiteral("NextButton"));

        horizontalLayout_2->addWidget(NextButton);

        RandomCheckBox = new QCheckBox(formLecteurMusique);
        RandomCheckBox->setObjectName(QStringLiteral("RandomCheckBox"));
        RandomCheckBox->setGeometry(QRect(340, 140, 70, 17));

        retranslateUi(formLecteurMusique);

        QMetaObject::connectSlotsByName(formLecteurMusique);
    } // setupUi

    void retranslateUi(QDialog *formLecteurMusique)
    {
        formLecteurMusique->setWindowTitle(QApplication::translate("formLecteurMusique", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("formLecteurMusique", "Lecteur de son", Q_NULLPTR));
        OuvrirButton->setText(QApplication::translate("formLecteurMusique", "Ouvrir", Q_NULLPTR));
        PlayButton->setText(QApplication::translate("formLecteurMusique", "Play", Q_NULLPTR));
        PauseButton->setText(QApplication::translate("formLecteurMusique", "Pause", Q_NULLPTR));
        StopButton->setText(QApplication::translate("formLecteurMusique", "Stop", Q_NULLPTR));
        PreviousButton->setText(QApplication::translate("formLecteurMusique", "<--", Q_NULLPTR));
        NextButton->setText(QApplication::translate("formLecteurMusique", "-->", Q_NULLPTR));
        RandomCheckBox->setText(QApplication::translate("formLecteurMusique", "Al\303\251atoire", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class formLecteurMusique: public Ui_formLecteurMusique {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMLECTEURMUSIQUE_H
