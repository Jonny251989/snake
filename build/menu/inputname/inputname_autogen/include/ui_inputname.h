/********************************************************************************
** Form generated from reading UI file 'inputname.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTNAME_H
#define UI_INPUTNAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InputName
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *ok_but;

    void setupUi(QWidget *InputName)
    {
        if (InputName->objectName().isEmpty())
            InputName->setObjectName(QString::fromUtf8("InputName"));
        InputName->setEnabled(true);
        InputName->resize(232, 94);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(InputName->sizePolicy().hasHeightForWidth());
        InputName->setSizePolicy(sizePolicy);
        InputName->setMinimumSize(QSize(232, 94));
        InputName->setMaximumSize(QSize(240, 100));
        gridLayout = new QGridLayout(InputName);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(InputName);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(InputName);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 0, 1, 1);

        ok_but = new QPushButton(InputName);
        ok_but->setObjectName(QString::fromUtf8("ok_but"));

        gridLayout->addWidget(ok_but, 2, 0, 1, 1);


        retranslateUi(InputName);

        QMetaObject::connectSlotsByName(InputName);
    } // setupUi

    void retranslateUi(QWidget *InputName)
    {
        InputName->setWindowTitle(QCoreApplication::translate("InputName", "Form", nullptr));
        label->setText(QCoreApplication::translate("InputName", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\262\320\260\321\210\320\265 \320\270\320\274\321\217:", nullptr));
        ok_but->setText(QCoreApplication::translate("InputName", "\320\237\321\200\320\276\320\264\320\276\320\273\320\266\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InputName: public Ui_InputName {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTNAME_H
