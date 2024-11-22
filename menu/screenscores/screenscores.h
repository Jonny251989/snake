#ifndef SCREENSCORES_H
#define SCREENSCORES_H

#include <QWidget>
#include <scoremodel.h>

namespace Ui {
class ScreenScores;
}

class ScreenScores : public QWidget
{
    Q_OBJECT

public:
    explicit ScreenScores(QWidget *parent);
    static const int MaxScoresCount = 10;

    ~ScreenScores();

public slots:
    void reload_scores();
    void showInsertScore(int, std::string, int);
    void on_closed();
    void disabled_items();

signals:
    void closed();

private:
    bool isCorrectname(std::string name);
    int m_scorePos; //!< position for current game score

private:
    Ui::ScreenScores *ui;
};

#endif // SCREENSCORES_H
