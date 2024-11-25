#pragma once

#include <QObject>
#include "item.h"

class Elixir : public QObject, public Item {
    Q_OBJECT
public:
    explicit Elixir(const Item& position, QObject *parent = nullptr);
};