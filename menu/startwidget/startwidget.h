#pragma once 

#include <QWidget>
#include <QApplication>
#include "view.h"
#include <QLabel>
#include "item.h"
#include "elixir.h"
#include "gamecontroller.h"
#include "view.h"
#include "scoremodel.h"
#include "inputname.h"

namespace Ui {
class StartWidget;
}

class StartWidget : public QWidget
{
    Q_OBJECT

public:
    explicit StartWidget(QWidget *parent = nullptr);
    ~StartWidget();

private:
    Ui::StartWidget *ui;

private slots:
    void re_open();

    void on_game_clicked();
    void on_score_clicked();
    void on_quitbut_clicked();

signals:
    void on_game();
    void to_score();
};