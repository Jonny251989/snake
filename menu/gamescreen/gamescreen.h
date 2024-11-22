#pragma once

#include <QWidget>
#include <string>
#include "view.h"
#include <QLabel>
#include "item.h"
#include "elixir.h"
#include "gamecontroller.h"
#include "scoremodel.h"
#include "inputname.h"

class GameScreen : public QWidget{
    Q_OBJECT
private:
    QGridLayout* layout;
    SnakeGameController* m_game;
    View* m_view;
    QLCDNumber* scoreLCD;
    QLCDNumber* timer_elixir_end_LCD;
    QGraphicsView* view;
    QTimer* timer_run_game;
    QTimer* timerKey;
    QTimer* timerCreateElixir;
    QTimer* timer_disappears;
    QTimer* timerForFinishedImmortalMode;
    std::string m_player_name;
    std::string typeOfLabirint;
    int speedOfSnake;

public:
    GameScreen(QWidget *parent = nullptr);
    ~GameScreen();

public slots:
    void startGame(std::string type, int speedOfSnake);
    void gameStop();
    void slot_for_start_immortal_mode();
    void slot_for_start_disappears();
    void slot_for_finished_immortal_mode();
    void slot_for_finished_disappears();

signals:
    void send_key_press(QKeyEvent* event);
    void to_back_to_start();
    void send_scores(int, std::string, int);

protected:
    virtual void keyPressEvent(QKeyEvent* event) override;
};