#pragma once

#include <QObject>
#include "item.h"

class Food : public QObject, public Item {
    Q_OBJECT
public:
    explicit Food(const Item& position, QObject *parent = nullptr);
};

