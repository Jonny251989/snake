#pragma once

#include <QObject>
#include <random>
#include <QGraphicsItem>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <iostream>
#include <QString>
#include <QKeyEvent>
#include <QTimer>
#include <QTime>
#include <QObject>
#include <iterator>
#include <list>
#include <QKeyEvent>
#include <experimental/random>

#include "snake.h"
#include "item.h"
#include "food.h"
#include "maze.h"
#include "elixir.h"

class View;
class Snake;
class SnakeGameController : public QObject {
    Q_OBJECT

private:
    Snake* snake;
    Mazes* maze;
    std::list<Food*> food;
    std::list<Elixir*> elixir;
    Direction next_direction_snake;
    EatType typeOfEat;

    std::string typeOfMaze;
    const int speed_key = 1;
    int mSecondsToEnd;
    int score, speed;
    QTime countdowntime;

    bool immortality_mode = false;
    bool mode_eat = false;
    std::size_t blink_count = 0;
    bool is_food_eats = false;
    bool is_game_finished = false;

public:
    SnakeGameController(QObject *parent = nullptr,  std::string  = "Без Лабиринта", int speedOfSnake_ = 150);
    ~SnakeGameController();

    Snake* getSnake();
    std::list<Food* > getFood();
    std::list<Elixir* > getElixir();
    Mazes* getMaze();
    bool get_eat_effect();
    bool get_immortality_mode();
    std::size_t get_blink_count();
    void blink_count_Up();
    void blink_count_NULL();
    void stop();
    bool isDeadAfterMove();
    void AppearanceOfSnakeDependingOnTypeOfMaze(std::string type);
    void setterOfSpeed(int speed_);
    void generate_eats(EatType typeOfEat);
    void activated_immortality_mode();
    bool checkingCordsForMatchWithSnakeAndMoze(int x,int y, EatType typeOfEat);
    bool collisionWithItselfOrMaze();
    void collisionWithEats();
    void collisionWithFood(const Item head);
    void collisionWithElixir(const Item head);
public slots:
    void keyPress(QKeyEvent* event);
    void step();
    void generate_elixir();
    void removeElixirAfterEndOfTimer();
    void countdownToEndImmortalityMode();
signals:
    void updated();
    void gameOver();
    void singnalForRemoveElixirFromScene(Elixir*elixir);
    void signalForBlinkingSnake();
    void signalForStopBlinkingSnake();
    void elixirtimerChanged(int);
    void elixirtimerChanged(QString);
    void elixirtimerChanged(QTime);
    void scoreChanged(int);
    void signal_for_start_immortal_mode();
    void signal_for_finished_immortal_mode();
    void signal_for_start_disappears();
    void signal_for_finished_disappears();
};