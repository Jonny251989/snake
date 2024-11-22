/********************************************************************************
** Form generated from reading UI file 'startwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTWIDGET_H
#define UI_STARTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StartWidget
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *game;
    QPushButton *score;
    QPushButton *quitbut;

    void setupUi(QWidget *StartWidget)
    {
        if (StartWidget->objectName().isEmpty())
            StartWidget->setObjectName(QString::fromUtf8("StartWidget"));
        StartWidget->resize(134, 153);
        verticalLayout = new QVBoxLayout(StartWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        game = new QPushButton(StartWidget);
        game->setObjectName(QString::fromUtf8("game"));

        verticalLayout->addWidget(game);

        score = new QPushButton(StartWidget);
        score->setObjectName(QString::fromUtf8("score"));

        verticalLayout->addWidget(score);

        quitbut = new QPushButton(StartWidget);
        quitbut->setObjectName(QString::fromUtf8("quitbut"));

        verticalLayout->addWidget(quitbut);


        retranslateUi(StartWidget);

        QMetaObject::connectSlotsByName(StartWidget);
    } // setupUi

    void retranslateUi(QWidget *StartWidget)
    {
        StartWidget->setWindowTitle(QCoreApplication::translate("StartWidget", "Form", nullptr));
        game->setText(QCoreApplication::translate("StartWidget", "Game", nullptr));
        score->setText(QCoreApplication::translate("StartWidget", "Score", nullptr));
        quitbut->setText(QCoreApplication::translate("StartWidget", "Quit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StartWidget: public Ui_StartWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTWIDGET_H
