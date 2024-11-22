#include "startwidget.h"
#include "ui_startwidget.h"


StartWidget::StartWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StartWidget)
{
    ui->setupUi(this);
}

void StartWidget::re_open(){
    this->show();
}

void StartWidget::on_game_clicked()
{
    emit on_game();
}

void StartWidget::on_score_clicked()
{
    emit to_score();
}

void StartWidget::on_quitbut_clicked()
{
    QApplication::quit();
}

StartWidget::~StartWidget()
{
    delete ui;
}

