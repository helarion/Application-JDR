/********************************************************************************
** Form generated from reading UI file 'formLecteurMusique.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMLECTEURMUSIQUE_H
#define UI_FORMLECTEURMUSIQUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *OuvrirButton;
    QPushButton *PlayButton;
    QPushButton *PauseButton;
    QPushButton *StopButton;

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
        widget = new QWidget(formLecteurMusique);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(50, 70, 320, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        OuvrirButton = new QPushButton(widget);
        OuvrirButton->setObjectName(QStringLiteral("OuvrirButton"));

        horizontalLayout->addWidget(OuvrirButton);

        PlayButton = new QPushButton(widget);
        PlayButton->setObjectName(QStringLiteral("PlayButton"));

        horizontalLayout->addWidget(PlayButton);

        PauseButton = new QPushButton(widget);
        PauseButton->setObjectName(QStringLiteral("PauseButton"));

        horizontalLayout->addWidget(PauseButton);

        StopButton = new QPushButton(widget);
        StopButton->setObjectName(QStringLiteral("StopButton"));

        horizontalLayout->addWidget(StopButton);


        retranslateUi(formLecteurMusique);

        QMetaObject::connectSlotsByName(formLecteurMusique);
    } // setupUi

    void retranslateUi(QDialog *formLecteurMusique)
    {
        formLecteurMusique->setWindowTitle(QApplication::translate("formLecteurMusique", "Dialog", 0));
        label->setText(QApplication::translate("formLecteurMusique", "Lecteur de son", 0));
        OuvrirButton->setText(QApplication::translate("formLecteurMusique", "Ouvrir", 0));
        PlayButton->setText(QApplication::translate("formLecteurMusique", "Play", 0));
        PauseButton->setText(QApplication::translate("formLecteurMusique", "Pause", 0));
        StopButton->setText(QApplication::translate("formLecteurMusique", "Stop", 0));
    } // retranslateUi

};

namespace Ui {
    class formLecteurMusique: public Ui_formLecteurMusique {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMLECTEURMUSIQUE_H
