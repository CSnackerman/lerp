#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <SDL_rect.h>

#include "Vector2D.hpp"
#include "Color.hpp"

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

private:
    void sync();
};

#endif