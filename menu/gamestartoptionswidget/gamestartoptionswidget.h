#pragma once

#include <QWidget>
#include <QDebug>
#include "view.h"
#include <QLabel>
#include "item.h"
#include "elixir.h"
#include "gamecontroller.h"
#include "view.h"

QT_BEGIN_NAMESPACE
namespace Ui { class GameStartOptionsWidget; }
QT_END_NAMESPACE

class GameStartOptionsWidget : public QWidget {
    Q_OBJECT

public:
    GameStartOptionsWidget(QWidget *parent = nullptr);

signals:
    void startGame(std::string, int);
    void back_to_main_menu();

private slots:
    void on_game_button_clicked();
    void on_backbut_clicked();

private:
    Ui::GameStartOptionsWidget *ui;
};