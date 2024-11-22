#include "gamestartoptionswidget.h"
#include "ui_gamestartoptionswidget.h"

GameStartOptionsWidget::GameStartOptionsWidget(QWidget *parent)
    : QWidget(parent), ui(new Ui::GameStartOptionsWidget)
{
    ui->setupUi(this);

    connect(ui->speed_slider, SIGNAL(valueChanged(int)), ui->speed_lcd, SLOT(display(int)));

    ui->speed_slider->setMinimum(1);
    ui->speed_slider->setMaximum(10);
    ui->speed_slider->setSingleStep(1);
    ui->speed_slider->setValue(5);
}

void GameStartOptionsWidget::on_game_button_clicked()
{
    int speed = ui->speed_slider->value();
    std::string typeMaze = (ui->type->currentText()).toStdString();
    emit startGame(typeMaze, speed);
}

void GameStartOptionsWidget::on_backbut_clicked()
{
    emit back_to_main_menu();
}

