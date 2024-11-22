#include "elixir.h"

Elixir::Elixir(const Item& position, QObject *parent)
    : QObject(parent), Item(position.x, position.y) {

}
