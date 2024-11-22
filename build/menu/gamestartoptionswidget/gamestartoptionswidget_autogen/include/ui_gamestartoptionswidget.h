/********************************************************************************
** Form generated from reading UI file 'gamestartoptionswidget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMESTARTOPTIONSWIDGET_H
#define UI_GAMESTARTOPTIONSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameStartOptionsWidget
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QComboBox *type;
    QLabel *label;
    QSlider *speed_slider;
    QLCDNumber *speed_lcd;
    QPushButton *game_button;
    QPushButton *backbut;

    void setupUi(QWidget *GameStartOptionsWidget)
    {
        if (GameStartOptionsWidget->objectName().isEmpty())
            GameStartOptionsWidget->setObjectName(QString::fromUtf8("GameStartOptionsWidget"));
        GameStartOptionsWidget->resize(300, 190);
        GameStartOptionsWidget->setMinimumSize(QSize(300, 160));
        GameStartOptionsWidget->setMaximumSize(QSize(300, 190));
        gridLayout = new QGridLayout(GameStartOptionsWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(GameStartOptionsWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        type = new QComboBox(groupBox);
        type->addItem(QString());
        type->addItem(QString());
        type->addItem(QString());
        type->addItem(QString());
        type->addItem(QString());
        type->addItem(QString());
        type->addItem(QString());
        type->addItem(QString());
        type->setObjectName(QString::fromUtf8("type"));

        gridLayout_2->addWidget(type, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 2);

        label = new QLabel(GameStartOptionsWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        speed_slider = new QSlider(GameStartOptionsWidget);
        speed_slider->setObjectName(QString::fromUtf8("speed_slider"));
        speed_slider->setMinimum(50);
        speed_slider->setMaximum(500);
        speed_slider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(speed_slider, 1, 1, 1, 1);

        speed_lcd = new QLCDNumber(GameStartOptionsWidget);
        speed_lcd->setObjectName(QString::fromUtf8("speed_lcd"));

        gridLayout->addWidget(speed_lcd, 1, 2, 1, 1);

        game_button = new QPushButton(GameStartOptionsWidget);
        game_button->setObjectName(QString::fromUtf8("game_button"));

        gridLayout->addWidget(game_button, 2, 1, 1, 1);

        backbut = new QPushButton(GameStartOptionsWidget);
        backbut->setObjectName(QString::fromUtf8("backbut"));

        gridLayout->addWidget(backbut, 3, 1, 1, 1);


        retranslateUi(GameStartOptionsWidget);

        QMetaObject::connectSlotsByName(GameStartOptionsWidget);
    } // setupUi

    void retranslateUi(QWidget *GameStartOptionsWidget)
    {
        GameStartOptionsWidget->setWindowTitle(QCoreApplication::translate("GameStartOptionsWidget", "Widget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("GameStartOptionsWidget", "\320\233\320\260\320\261\320\270\321\200\320\270\320\275\321\202", nullptr));
        type->setItemText(0, QCoreApplication::translate("GameStartOptionsWidget", "\320\221\320\265\320\267 \320\273\320\260\320\261\320\270\321\200\320\270\320\275\321\202\320\260", nullptr));
        type->setItemText(1, QCoreApplication::translate("GameStartOptionsWidget", "\320\241 \320\261\320\276\321\200\321\202\320\260\320\274\320\270", nullptr));
        type->setItemText(2, QCoreApplication::translate("GameStartOptionsWidget", "\320\242\320\270\320\277 1", nullptr));
        type->setItemText(3, QCoreApplication::translate("GameStartOptionsWidget", "\320\242\320\270\320\277 2", nullptr));
        type->setItemText(4, QCoreApplication::translate("GameStartOptionsWidget", "\320\242\320\270\320\277 3", nullptr));
        type->setItemText(5, QCoreApplication::translate("GameStartOptionsWidget", "\320\242\320\270\320\277 4", nullptr));
        type->setItemText(6, QCoreApplication::translate("GameStartOptionsWidget", "\320\242\320\270\320\277 5", nullptr));
        type->setItemText(7, QCoreApplication::translate("GameStartOptionsWidget", "\320\242\320\270\320\277 6", nullptr));

        label->setText(QCoreApplication::translate("GameStartOptionsWidget", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214", nullptr));
        game_button->setText(QCoreApplication::translate("GameStartOptionsWidget", "\320\230\320\263\321\200\320\260\321\202\321\214", nullptr));
        backbut->setText(QCoreApplication::translate("GameStartOptionsWidget", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GameStartOptionsWidget: public Ui_GameStartOptionsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMESTARTOPTIONSWIDGET_H
