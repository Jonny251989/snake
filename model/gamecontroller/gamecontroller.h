#pragma once

#include <QObject>
#include <random>
#include <QGraphicsItem>
#include <iostream>
#include <QString>
#include <QKeyEvent>
#include <QTimer>
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
    size_t mSecondsToEnd, score, speed;
    bool immortality_mode = false;
    bool mode_eat = false;
    size_t blink_count = 0;
    bool is_food_eats = false;
    bool is_game_finished = false;
public:
    SnakeGameController(QObject *parent = nullptr,  std::string  = "Без Лабиринта", size_t speedOfSnake_ = 150);
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
    void AppearanceOfSnakeDependingOnTypeOfMaze(const std::string& type);
    void setterOfSpeed(size_t speed_);
    void generate_eats(const EatType& typeOfEat);
    void activated_immortality_mode();
    bool checkingCordsForMatchWithSnakeAndMoze(size_t x, size_t y, const EatType& typeOfEat);
    bool collisionWithItselfOrMaze();
    void collisionWithEats();
    void collisionWithFood(const Item& head);
    void collisionWithElixir(const Item& head);
    ~SnakeGameController();
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
    void elixirtimerChanged(const int);
    void elixirtimerChanged(const QString);
    void scoreChanged(int);
    void signal_for_start_immortal_mode();
    void signal_for_finished_immortal_mode();
    void signal_for_start_disappears();
    void signal_for_finished_disappears();
};