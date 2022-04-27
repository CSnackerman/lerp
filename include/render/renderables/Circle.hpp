#ifndef CIRCLE_H
#define CIRCLE_H

#include <SDL_render.h>

#include "utility/Vector2D.hpp"
#include "utility/Color.hpp"

struct Circle {
    Vector2D position;
    Color color;
    float radius;

    Circle();
    Circle(Vector2D position, Color color, float radius);
};

#endif