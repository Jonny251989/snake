#ifndef SCREENCONTROLLER_H
#define SCREENCONTROLLER_H

#include <QWidget>
#include <QLabel>
#include "item.h"
#include "elixir.h"
#include "gamecontroller.h"
#include "scoremodel.h"
#include "inputname.h"
#include "startwidget.h"
#include "gamestartoptionswidget.h"
#include "gamescreen.h"
#include <QStackedLayout>
#include "screenscores.h"



class ScreenController: public QWidget {
    Q_OBJECT
public:
    explicit ScreenController(QWidget *parent = 0);

public slots:

    void on_2scores();
    void on_2menu();
    void on_game(std::string, int);
    void to_start_menu();
    void on_game_finished(int, std::string, int);
    void to_start_menu_back();

signals:
    void scoreScreenShowed();
    void gameScreenShowed(QString& levelpath);
    void gameFinished(int, std::string, int);
    void to_game(std::string, int);
    void menuScreenShowed();
    void needInsertScore(int score);

private:
    QStackedLayout m_stackedLayout;
    QTimer* timer_run_game;
    std::string name;
    std::string typeOfMaze;
    int score;
    int speed;
};

#endif // SCREENCONTROLLER_H
