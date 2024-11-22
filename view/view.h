#pragma once

#include <QObject>
#include <QWidget>
#include <QGraphicsItem>
#include <QGraphicsView>
#include <QLayout>
#include <QGraphicsScene>
#include <QPainter>
#include <iostream>
#include <QGraphicsLayout>
#include <QKeyEvent>
#include <QString>
#include <QLCDNumber>
#include <QMessageBox>
#include <QTimer>
#include <iterator>
#include <list>
#include "item.h"
#include "elixir.h"
#include "gamecontroller.h"
\
class SnakeGameController;
class Snake;
class View : public QGraphicsView{
    Q_OBJECT
public:
    View(SnakeGameController* game, QWidget *parent = nullptr);
    ~View();
    void preparation_for_flashing();
    void reload_all_objects();
    void drawEat(QColor, QColor);
    void drawSnake(QColor, QColor);

public slots:
    void updateFoodAndSnake();
    void blink();
    void blinkSnake();
    void stopBlink();
    void gameOver();

private:
    QGraphicsScene* scene;
    SnakeGameController* m_game;
    std::list<QGraphicsItem*> m_moved_items;
    QTimer* timerForBlinking;
    QColor flashingColorHead;
    QColor flashingColorTail;
    QColor blinkColorHead;
    QColor blinkColorTail;

};