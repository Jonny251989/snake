#include "snake.h"

Snake::Snake(int length_) : length(length_) {
    length = 3;
    current_direction = Direction::RIGHT;
}

void Snake::setStartPosition(int x, int y){
    segments.emplace_front(Item(x,y));
}

void Snake::checkBorder(){ //изменение координат

    std::list<Item>::iterator i;

    for(i = segments.begin();  i != segments.end(); i++){

        if ( i->x > 9){
            i->x = 0;
        }
        else if ( i->x < 0){
            i->x = 9;
        }
        else if ( i->y > 9){
            i->y = 0;
        }
        else if ( i->y < 0){
            i->y = 9;
        }
    }
}

void Snake::correctDirection(Direction next_direction_){


    switch ( next_direction_ ) {
    case Direction::LEFT:
        if ( current_direction == Direction::RIGHT ) {
            return;
        } break;
    case Direction::RIGHT:
        if ( current_direction == Direction::LEFT ) {
            return;
        } break;
    case Direction::UP:
        if ( current_direction == Direction::DOWN ) {
            return;
        } break;
    case Direction::DOWN:
        if ( current_direction == Direction::UP ) {
            return;
        } break;
    }
    current_direction = next_direction_;

}

void Snake::lengthUp(){
    this->length = length + 1;
}


void Snake::oneStep( Direction direction ) {

    this->correctDirection(direction);

    if ( segments.size() == this->length ) {
        segments.pop_back();
    }


    Item second = segments.front();
    Item head = second;


    switch ( current_direction ) {
    case Direction::LEFT:
        head.y = second.y;
        head.x = second.x - 1;
        break;
    case Direction::RIGHT:
        head.y = second.y;
        head.x = second.x + 1;
        break;
    case Direction::UP:
        head.y = second.y - 1;
        head.x = second.x;
        break;
    case Direction::DOWN:
        head.y = second.y + 1;
        head.x = second.x;
        break;
    }
    segments.push_front(head);

    checkBorder(); // проверка координат на выход за пределы поля с последующим изменением координат

}


std::list<Item> Snake::getSnake(){
    return segments;
}
