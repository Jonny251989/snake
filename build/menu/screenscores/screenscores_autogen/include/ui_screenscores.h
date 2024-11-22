/********************************************************************************
** Form generated from reading UI file 'screenscores.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCREENSCORES_H
#define UI_SCREENSCORES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ScreenScores
{
public:
    QTableWidget *scoreTable;
    QPushButton *menu;

    void setupUi(QWidget *ScreenScores)
    {
        if (ScreenScores->objectName().isEmpty())
            ScreenScores->setObjectName(QString::fromUtf8("ScreenScores"));
        ScreenScores->resize(435, 240);
        scoreTable = new QTableWidget(ScreenScores);
        if (scoreTable->columnCount() < 4)
            scoreTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        scoreTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        scoreTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        scoreTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        scoreTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        scoreTable->setObjectName(QString::fromUtf8("scoreTable"));
        scoreTable->setGeometry(QRect(10, 10, 411, 192));
        menu = new QPushButton(ScreenScores);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu->setGeometry(QRect(170, 210, 75, 23));

        retranslateUi(ScreenScores);

        QMetaObject::connectSlotsByName(ScreenScores);
    } // setupUi

    void retranslateUi(QWidget *ScreenScores)
    {
        ScreenScores->setWindowTitle(QCoreApplication::translate("ScreenScores", "Form", nullptr));
        QTableWidgetItem *___qtablewidgetitem = scoreTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ScreenScores", "\320\230\320\274\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = scoreTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ScreenScores", "\320\241\321\207\321\221\321\202", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = scoreTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("ScreenScores", "\320\242\320\270\320\277 \320\233\320\260\320\261\320\270\321\200\320\270\320\275\321\202\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = scoreTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("ScreenScores", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214 \320\267\320\274\320\265\320\271\320\272\320\270", nullptr));
        menu->setText(QCoreApplication::translate("ScreenScores", "\320\234\320\265\320\275\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ScreenScores: public Ui_ScreenScores {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCREENSCORES_H
