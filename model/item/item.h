#pragma once 

extern const int SIZE_FIELD;
extern const int width;
extern const int height;
extern int hold;
extern const int w_rect;
extern const int h_rect;
extern const int TOP;

enum MazeType {
    WithoutLabirint, WithBorder, Labirint_1, Labirint_2, Labirint_3, Labirint_4, Labirint_5, Labirint_6
};

enum EatType {
    FOOD,ELIXIR
};

enum class Direction {
    LEFT,
    RIGHT,
    UP,
    DOWN
};

struct Item{
    int x, y;
    Item(int x_ = 0, int y_ = 0);
    bool operator==(const Item& first);
    ~Item();
};