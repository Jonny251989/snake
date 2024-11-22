#pragma once

#include <QObject>
#include <QPainter>
#include <iostream>
#include <fstream>
#include <QGraphicsTextItem>
#include <QString>
#include <QTimer>
#include <list>
#include <string>
#include <map>
#include "item.h"

class Mazes: public QObject {
    Q_OBJECT
private:
        std::list<Item> labirint;
        std::string type;
public:
    Mazes(QObject *parent = nullptr, std::string type_ = "Без лабиринта");
    std::list<Item> getMaze();
    void readFileWithMazes();
    std::string gettypeafterupdate(std::string type_);
    std::string gettype();
    ~Mazes();
};