#pragma once 

#include <QObject>
#include <QGraphicsItem>
#include <iostream>
#include <QString>
#include <QTimer>
#include <iterator>
#include <list>
#include "item.h"

class Snake {
private:
    size_t length_;
    std::list<Item> segments;
    Direction next_direction;
    Direction current_direction;
    int score;

public:
    Snake(size_t length_ = 3);
    void checkBorder();
    bool intersect( Item &item );
    void oneStep(Direction direction);
    void setStartPosition(int x, int y);
    void setDirection(Direction nex_direction);
    bool collisionsBorder(); 
    void lengthUp();
    std::list<Item> getSnake();
    void correctDirection(Direction nex_direction_);
};