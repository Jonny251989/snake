#include "food.h"

Food::Food(const Item& position, QObject *parent): QObject(parent), Item(position.x, position.y) {

}