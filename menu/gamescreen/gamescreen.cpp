#include "gamescreen.h"

GameScreen::GameScreen(QWidget *parent): QWidget(parent) {
    this->setFocus();

    layout = new QGridLayout(this);
    this->setLayout(layout);

    timer_run_game = new QTimer();
    timerKey = new QTimer(); // Таймер считывания событий клавиатуры
    timerCreateElixir = new QTimer(); // Таймер создания эликсира
    //timer_disappears = new QTimer; // Таймер отчёта для исчезновения эликсира

}

void GameScreen::keyPressEvent(QKeyEvent* event){
    emit send_key_press(event);
}

void GameScreen::startGame(std::string type, int speedOfSnake_) {
    typeOfLabirint = type;
    speedOfSnake = speedOfSnake_;

    m_game = new SnakeGameController(this, type, speedOfSnake);
    m_view = new View(m_game, this);
    m_view->show();

    scoreLCD = new QLCDNumber(this);
    scoreLCD->display(QString::number(0));
    scoreLCD->show();

    timer_elixir_end_LCD = new QLCDNumber(this);
    timer_elixir_end_LCD -> display("");   
    timer_elixir_end_LCD ->show();


    layout->addWidget(scoreLCD, 0, 1);
    layout->addWidget(timer_elixir_end_LCD, 0, 0);
    layout->addWidget(m_view, 1, 0, 1, 2);

    connect(this, &GameScreen::send_key_press, m_game, &SnakeGameController::keyPress );

    connect(m_game, SIGNAL(scoreChanged(int)), scoreLCD, SLOT(display(int)));
    connect(m_game, SIGNAL(elixirtimerChanged(int)), timer_elixir_end_LCD, SLOT(display(int)));
    connect(m_game, SIGNAL(elixirtimerChanged(QString)), timer_elixir_end_LCD, SLOT(display(QString)));

    connect(m_game, SIGNAL(gameOver()), this, SLOT(gameStop()));

    connect(timer_run_game, &QTimer::timeout, m_game,  &SnakeGameController::step );
    connect(timerCreateElixir,  &QTimer::timeout, m_game, &SnakeGameController:: generate_elixir);
    //connect(timer_disappears, &QTimer::timeout, m_game, &SnakeGameController::removeElixirAfterEndOfTimer);

    connect(m_game, &SnakeGameController::signal_for_start_immortal_mode, this, &GameScreen::slot_for_start_immortal_mode);
    connect(m_game, &SnakeGameController::signal_for_start_disappears, this, &GameScreen::slot_for_start_disappears);

    connect(m_game, &SnakeGameController::signal_for_finished_immortal_mode, this, &GameScreen::slot_for_finished_immortal_mode);
    connect(m_game, &SnakeGameController::signal_for_finished_disappears, this, &GameScreen::slot_for_finished_disappears);

    timer_run_game -> start(1000/speedOfSnake);
    timerKey->start(1);

    timerCreateElixir->setSingleShot(true);
    timerCreateElixir->start(5000);

}


void GameScreen::gameStop(){
    int currentScore = scoreLCD->value();
    timer_run_game -> stop();
    emit send_scores(currentScore, typeOfLabirint, speedOfSnake);
}

void GameScreen::slot_for_start_disappears(){
    timer_disappears = new QTimer;
    timer_disappears->start(10000);
    connect(timer_disappears, &QTimer::timeout, m_game, &SnakeGameController::removeElixirAfterEndOfTimer);
}

void GameScreen::slot_for_start_immortal_mode(){
    timerForFinishedImmortalMode = new QTimer();
    connect(timerForFinishedImmortalMode, &QTimer::timeout, m_game,  &SnakeGameController::countdownToEndImmortalityMode );
    timerForFinishedImmortalMode->start(1500); // таймер отсчёта окончания эффекта эликсира
    // режим бессмертия(после съедания эликсира) увеличивает скорость смейки до окончания режима
    timer_run_game -> start(120);
}

void GameScreen::slot_for_finished_disappears(){
    timer_disappears->stop();
    delete timer_disappears;
    timer_disappears = nullptr;
    timerCreateElixir->setSingleShot(true);
    //Эликсир будет создаваться каждые 15сек., независимо от того, съела ли его змейка или нет
    timerCreateElixir -> start (25000);
}

void GameScreen::slot_for_finished_immortal_mode(){
    timerForFinishedImmortalMode->stop();
    delete timerForFinishedImmortalMode;
    timer_run_game -> start(1000/speedOfSnake); // возвращение скорости в границы выбранной в настроеках скорости
}




GameScreen::~GameScreen()
{

}
