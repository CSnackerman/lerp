#ifndef CIRCLE_H
#define CIRCLE_H

#include "Vector2D.hpp"
#include "Color.hpp"

struct Circle {
    Vector2D position;
    Color color;
    float radius;

    Circle();
    Circle(Vector2D position, Color color, float radius);
};

#endif