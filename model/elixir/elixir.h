#ifndef ELIXIR_H
#define ELIXIR_H


#include <QObject>
#include <cstdlib> // для std::rand() и std::srand()
#include <ctime>   // для std::time()
#include <random>

#include "item.h"

class Elixir : public QObject, public Item {
    Q_OBJECT
public:
    explicit Elixir(const Item& position, QObject *parent = nullptr);
};


#endif // ELIXIR_H
