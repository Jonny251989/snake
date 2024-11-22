#include "view.h"
#include "ui_view.h"
#include "gamecontroller.h"
#include "snake.h"

View::View(SnakeGameController* game, QWidget *parent): QGraphicsView(parent), m_game(game){
    setFocusPolicy(Qt::NoFocus);
    this->setFixedHeight(550);
    this->setFixedWidth(550);
    int width_ = 520;
    int heigth_ = 520;
    this->setGeometry(0,0, width_, heigth_);
    this->setMinimumSize(width_, heigth_);

    scene = new QGraphicsScene(this);

    this->reload_all_objects();
    this->preparation_for_flashing();

    this->setScene(scene);
    scene->setSceneRect(0,0, 500, 500); // Устанавливаем область графической сцены

    this->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff); // Отключим скроллбар по горизонтали
    this->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);   // Отключим скроллбар по вертикали
    this->setAlignment(Qt::AlignCenter);                        // Делаем привязку содержимого к центру
    this->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);    // Растягиваем содержимое по виджету

    connect(m_game, &SnakeGameController::updated, this, &View::updateFoodAndSnake);
    connect(m_game, &SnakeGameController::signalForBlinkingSnake, this, &View::blink);
    connect(m_game, &SnakeGameController::signalForStopBlinkingSnake, this, &View::stopBlink);
    connect(m_game, &SnakeGameController::gameOver, this, &View::gameOver);
}

void View::preparation_for_flashing(){
    flashingColorHead = QColor(Qt::white);
    flashingColorTail = QColor(Qt::white);
    blinkColorHead = QColor(Qt::darkRed);
    blinkColorTail = QColor(Qt::red);
    timerForBlinking = new QTimer();
}

void View::stopBlink(){
    timerForBlinking->stop();
    delete timerForBlinking;
    this->preparation_for_flashing();
}

void View::blink(){
    timerForBlinking = new QTimer();
    connect( timerForBlinking, &QTimer::timeout, this, &View::blinkSnake);
    timerForBlinking->start(350);
}

void View::blinkSnake(){
    std::swap(blinkColorHead, flashingColorHead);
    std::swap(blinkColorTail, flashingColorTail);
}

void View::reload_all_objects() {
    QColor m_color = QColor(Qt::darkBlue);
    QPen pen_free_item(Qt::black, 1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin);
    for(int rows = 0; rows < 10; ++rows){
        for(int columns = 0; columns < 10; ++columns){
            auto item = new QGraphicsRectItem(
                columns*w_rect, rows*h_rect,
                w_rect, h_rect);
            item->setPen(pen_free_item);
            item->setZValue(0);
            scene->addItem(item);
        }
    }
    std::string typeOfMaze = m_game->getMaze()->gettype();

    if(m_game->getMaze()->gettypeafterupdate(typeOfMaze) != "0"){
        auto moze_items = m_game->getMaze()->getMaze();
        for (auto it = moze_items.begin(); it != moze_items.end(); ++it) {
            QGraphicsRectItem* mozeItem = new QGraphicsRectItem(it->x * w_rect,
                                                                    it->y * h_rect,
                                                                    w_rect, h_rect);
            mozeItem->setBrush(QBrush(m_color));
            scene->addItem(mozeItem);
        }
    }
    updateFoodAndSnake();

    fitInView(0, 0, SIZE_FIELD * w_rect, SIZE_FIELD * h_rect, Qt::KeepAspectRatio); //TODO: move
}

void View::updateFoodAndSnake() {
    QColor snake_head_effect_color = QColor(246, 7, 250);
    QColor snake_tail_effect_color = QColor(Qt::darkBlue);
    QColor food_color(0, 250, 30);
    QColor elixir_color(133, 237, 237);

    for (auto item : m_moved_items) {
        scene->removeItem(item);
        delete item;
    }
    m_moved_items.clear();

    this->drawSnake(snake_head_effect_color, snake_tail_effect_color);
    this->drawEat(food_color, elixir_color);
}

void View::drawSnake(QColor snake_head_effect_color, QColor snake_tail_effect_color){
    auto snake_items = m_game->getSnake()->getSnake();
    auto snake_head = snake_items.front();
    bool mode_eat = m_game->get_eat_effect();
    bool mode_elixir = m_game->get_immortality_mode();
    std::size_t blink_count = m_game->get_blink_count();
    QGraphicsRectItem* snakeHeadItem = new QGraphicsRectItem(snake_head.x * w_rect,
                                                            snake_head.y * h_rect,
                                                            w_rect, h_rect);
    //Если соблюдается следующие условие- голова змейки выделяется особым цветом при съедании еды (режим элексира выключен)
    if(mode_eat && mode_elixir == false && blink_count == 0){
        snakeHeadItem->setBrush(QBrush(snake_head_effect_color));
        scene->addItem(snakeHeadItem);
        m_moved_items.push_back(snakeHeadItem);
    }else{
        snakeHeadItem->setBrush(QBrush(blinkColorHead));
        scene->addItem(snakeHeadItem);
        m_moved_items.push_back(snakeHeadItem);
    }
    std::size_t count = 1;
    for (auto it = std::next(snake_items.begin()); it != snake_items.end(); ++it) {

        QGraphicsRectItem* snakeItem = new QGraphicsRectItem(it->x * w_rect,
                                                                it->y * h_rect,
                                                                w_rect, h_rect);
        if(mode_eat == true && mode_elixir == false ){

            if(count == blink_count){
                snakeItem->setBrush(QBrush(snake_tail_effect_color));

                if( blink_count == snake_items.size()){
                    mode_eat = false;
                    m_game->blink_count_NULL();
                }
            }else
              snakeItem->setBrush(QBrush(blinkColorTail));

            count++;
        }else
           snakeItem->setBrush(QBrush(blinkColorTail));
        scene->addItem(snakeItem);
        m_moved_items.push_back(snakeItem);
    }
}

void View::drawEat(QColor food_color, QColor elixir_color){
    for (auto food : m_game->getFood()) {
        QGraphicsEllipseItem* foodItem = new QGraphicsEllipseItem(food->x * w_rect + 10,
                                                                  food->y * h_rect + 10,
                                                                  w_rect-20, h_rect-20);
        foodItem->setBrush(QBrush(food_color));
        scene->addItem(foodItem);
        m_moved_items.push_back(foodItem);
    }
    for (auto elixir : m_game->getElixir()) {
        QGraphicsEllipseItem* elixirItem = new QGraphicsEllipseItem(elixir->x * w_rect + 5,
                                                                  elixir->y * h_rect + 5,
                                                                  w_rect-10, h_rect-10);
        elixirItem->setBrush(QBrush(elixir_color));
        scene->addItem(elixirItem);
        m_moved_items.push_back(elixirItem);
    }
}

void View::gameOver(){
    QMessageBox::information(
        this,
        tr("Fail!"),
        tr("Game Over!"));
}

View::~View(){

}