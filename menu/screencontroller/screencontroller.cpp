#include "screencontroller.h"


ScreenController::ScreenController(QWidget *parent) :
    QWidget(parent), m_stackedLayout(this) {

    StartWidget* m_start(new StartWidget(this));
    ScreenScores* m_score (new ScreenScores(this));
    GameStartOptionsWidget* m_main(new GameStartOptionsWidget(this));
    GameScreen* m_game(new GameScreen(this));

    m_stackedLayout.addWidget(m_start);
    m_stackedLayout.addWidget(m_score);
    m_stackedLayout.addWidget(m_main);
    m_stackedLayout.addWidget(m_game);

    connect(m_start, SIGNAL(on_game()), this, SLOT(on_2menu()));
    connect(m_start, SIGNAL(to_score()), this, SLOT(on_2scores()));

    connect(m_main, SIGNAL(startGame(std::string, int)), this, SLOT(on_game(std::string, int)));
    connect(this, SIGNAL(to_game(std::string, int)), m_game, SLOT(startGame(std::string, int)));

    connect(m_game, SIGNAL(send_scores(int, std::string, int)), this, SLOT(on_game_finished(int, std::string, int)));
    connect(m_main, SIGNAL(back_to_main_menu()), this, SLOT(to_start_menu()));

    connect(m_score, SIGNAL(closed()), this, SLOT(to_start_menu_back()));

    connect(this, SIGNAL(scoreScreenShowed()), m_score, SLOT(reload_scores()));
    connect(this, SIGNAL(gameFinished(int, std::string, int)), m_score, SLOT(showInsertScore(int, std::string, int)));
}

void ScreenController::on_game(std::string type_, int speed_){
   m_stackedLayout.setCurrentIndex(3);

   emit to_game( type_, speed_);
}


void ScreenController::to_start_menu_back(){
    m_stackedLayout.setCurrentIndex(0);
}

void ScreenController::to_start_menu(){
    m_stackedLayout.setCurrentIndex(0);
}


void ScreenController::on_2menu() {
    m_stackedLayout.setCurrentIndex(2);
}

void ScreenController::on_2scores() {
    m_stackedLayout.setCurrentIndex(1);
    emit scoreScreenShowed();
}

void ScreenController::on_game_finished(int score, std::string typeOfMaze, int speed) {
    std::vector<ScoreModel::PlayerResult> scores = ScoreModel::get_scores();

    if (scores.size() > ScreenScores::MaxScoresCount)
        scores.resize(ScreenScores::MaxScoresCount);

    if (scores.size() < ScreenScores::MaxScoresCount || scores.back().score < score) {
        on_2scores();
        emit gameFinished(score, typeOfMaze, speed);
    }
    else {
        on_2menu();
    }
}


