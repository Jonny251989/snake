#include "item.h"

const int SIZE_FIELD = 10;
const int width = 500;
const int height = 500;
int hold = 10;
const int w_rect = 50;
const int h_rect = 50;
const int TOP = 10;

Item::Item(int x_, int y_): x(x_), y(y_){


}

bool Item::operator==(const Item& newItem){
    return ((newItem.x== this->x) && (newItem.y== this->y));
}

Item::~Item(){

}
