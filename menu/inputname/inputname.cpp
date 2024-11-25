#include "inputname.h"
#include "ui_inputname.h"
InputName::InputName(QWidget *parent): QWidget(parent), ui(new Ui::InputName)
{
    ui->setupUi(this);

}



QString InputName::getName(){
    return ui->lineEdit->text();
}

InputName::~InputName()
{
    delete ui;
}

void InputName::on_ok_but_clicked()
{
    QString str = (ui->lineEdit->text());
    emit closeWindow(str);
}

