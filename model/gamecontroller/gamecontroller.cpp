#include "gamecontroller.h"

#include <algorithm>
#include <random>
#include "snake.h"
#include <QTime>

SnakeGameController::SnakeGameController(QObject *parent,  std::string type, int speedOfSnake_): QObject(parent), typeOfMaze(type), speed(speedOfSnake_){
    speed = speedOfSnake_;
    next_direction_snake = Direction::RIGHT;
    score = 0;
    mSecondsToEnd = 7;

    snake = new Snake;
    maze = new Mazes(parent, typeOfMaze);

    this->AppearanceOfSnakeDependingOnTypeOfMaze(typeOfMaze);

}

void SnakeGameController::stop() {
   emit gameOver();
}

void SnakeGameController::step() {

    snake->oneStep(next_direction_snake);
    this->collisionWithEats();

    if(isDeadAfterMove() && immortality_mode == false){
        this->stop();
    }
    emit updated();
}

bool SnakeGameController::isDeadAfterMove(){

    if(this->collisionWithItselfOrMaze()){
        return true;
    }
    return false;
}

void SnakeGameController::collisionWithFood(const Item head){
    std::list<Food*>::iterator eated_food_it = std::find_if(food.begin(), food.end(), [=](Food* food) {
        return *food == head;
    });
    if (food.end() != eated_food_it) {
        snake->lengthUp();
        food.erase(eated_food_it);
        mode_eat = true; //включение режима, при котором будет отображаться визуализация "переваривания" еды
        blink_count = -1;
        this->score = score + 1;
        emit scoreChanged(score);
    }
    if (food.empty()) {
        this->generate_eats(EatType::FOOD);
    }
    //визуализация "переваривания" еды
    if(mode_eat){
        this->blink_count++;
    }
}

void SnakeGameController::collisionWithElixir(const Item head){
    std::list<Elixir*>::iterator eated_elixir_it = std::find_if(elixir.begin(), elixir.end(), [=](Elixir* elixir) {
        return *elixir == head;
    });
    if (elixir.end() != eated_elixir_it) {
        elixir.erase(eated_elixir_it);
        this->activated_immortality_mode();
        emit signal_for_finished_disappears();
    }
}

void SnakeGameController::collisionWithEats(){
    Item head = snake->getSnake().front();
    collisionWithFood(head);
    collisionWithElixir(head);
}

void SnakeGameController::activated_immortality_mode(){
    //отправляем сигнал для начала визуализации режима бессмертия миганием
    emit signalForBlinkingSnake();
    emit signal_for_start_immortal_mode();
    immortality_mode = true; // режим бессмертия
}

void SnakeGameController::countdownToEndImmortalityMode(){

        emit elixirtimerChanged(mSecondsToEnd--);

        if (mSecondsToEnd < 0){
            emit signal_for_finished_immortal_mode();
            emit signalForStopBlinkingSnake(); // сигнал на оключения мигания во время движения в режиме бессмертия
            emit elixirtimerChanged("");
            mSecondsToEnd = 10;
            immortality_mode = false; //отключение режима бессмертия
        }
}

bool SnakeGameController::collisionWithItselfOrMaze(){

    std::list<Item> snakeItems = snake->getSnake();
    Item head = snakeItems.front();

    auto segmentsOfCollision = std::find_if(std::next(snakeItems.begin(), 1), snakeItems.end(), [=](Item item){
        return (head.x == item.x && head.y == item.y);
    });
    if(segmentsOfCollision != snakeItems.end())
        return true;

    std::list<Item> cordsOfmoze = maze->getMaze(); // лист с координатами лабиринта
    auto segmentsOfCollisionWithMaze = std::find_if(cordsOfmoze.begin(), cordsOfmoze.end(), [=](Item item){
        return (head.x == item.x && head.y == item.y);
    });
    if(segmentsOfCollisionWithMaze != cordsOfmoze.end())
        return true;

    return false;
}

bool SnakeGameController:: checkingCordsForMatchWithSnakeAndMoze(int x,int y, EatType typeOfEat){
    for (auto snakeItem : snake->getSnake()) {
        if (snakeItem.x == x && snakeItem.y == y)
            return true;
    }
    for (auto mozeItem : maze->getMaze()) {
        if (mozeItem.x == x && mozeItem.y == y)
            return true;
    }

    if(typeOfEat == EatType::FOOD){
        for (auto elixirItem : this->getElixir()) {
            if (elixirItem->x == x && elixirItem->y == y)
                return true;
        }
    }
    else{
        for (auto eatItem : this->getFood()) {
            if (eatItem->x == x && eatItem->y == y)
                return true;
        }
    }
    return false;
}

void SnakeGameController::generate_eats(EatType typeOfEat){

   while(true){
       int x = std::experimental::randint(0,9);
       int y = std::experimental::randint(0,9);

       if(this -> checkingCordsForMatchWithSnakeAndMoze(x,y, typeOfEat)){
           continue;
       }
       if(typeOfEat == EatType::FOOD){
           Food* one_food = new Food(Item(x,y));
           food.push_front(one_food);
           break;
       }
       else{
         Elixir* one_elixir = new Elixir(Item(x,y));
         elixir.push_front(one_elixir);
         emit signal_for_start_disappears();
         break;
       }
    }
}

void SnakeGameController::removeElixirAfterEndOfTimer(){
        immortality_mode = false;
        Elixir* one_elixir = this->getElixir().front();
        elixir.remove(one_elixir);
        delete one_elixir;
        emit signal_for_finished_disappears();
}

void SnakeGameController:: generate_elixir() {
    this->generate_eats(EatType::ELIXIR);
}

void SnakeGameController::AppearanceOfSnakeDependingOnTypeOfMaze(std::string type)
{
    if (type == "Без лабиринта")
        snake->setStartPosition(0,1);
    else if (type == "С бортами" || type == "Тип 1" || type == "Тип 3" || type == "Тип 4" )
        snake->setStartPosition(1,2);
    else if (type == "Тип 2")
        snake->setStartPosition(0,5);
    else
        snake->setStartPosition(0,0);
}

void SnakeGameController::blink_count_NULL(){
    this->blink_count = -1;
}

void SnakeGameController::blink_count_Up(){
    this->blink_count++;
}

void SnakeGameController::setterOfSpeed(int speed_){
    this->speed = speed_;

}

std::size_t SnakeGameController::get_blink_count(){
    return blink_count;
}

Mazes* SnakeGameController::getMaze(){
    return maze;
}

bool SnakeGameController::get_eat_effect(){
    return mode_eat;
}

Snake* SnakeGameController::getSnake(){
    return snake;
}

std::list<Food*> SnakeGameController::getFood(){
    return food;
}

std::list<Elixir* > SnakeGameController::getElixir(){
    return elixir;
}
bool SnakeGameController::get_immortality_mode(){
    return immortality_mode;
}

void SnakeGameController::keyPress(QKeyEvent* event){
    switch (event->key()) {
        case Qt::Key_Left:
            next_direction_snake = Direction::LEFT;
            break;
        case Qt::Key_Right:
            next_direction_snake =Direction::RIGHT;
            break;
        case Qt::Key_Up:
            next_direction_snake =Direction::UP;
            break;
        case Qt::Key_Down:
            next_direction_snake =Direction::DOWN;
            break;
    }
}

SnakeGameController::~SnakeGameController(){
}


