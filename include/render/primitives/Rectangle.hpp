#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <SDL_rect.h>

#include "utility/Vector2D.hpp"
#include "utility/Color.hpp"

struct Rectangle {
    SDL_Rect sdl_rect;
    Vector2D position;
    float width, height;
    Color color;

    Rectangle();
    Rectangle(
        Vector2D position, 
        float width,
        float height,
        Color color
    );

    void moveTo(Vector2D position);

private:
    void sync();
};

#endif