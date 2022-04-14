#ifndef CIRCLE_H
#define CIRCLE_H

#include "Vector2D.h"
#include "Color.h"

struct Circle {
    Vector2D position;
    Color color;
    float radius;

    Circle();
    Circle(Vector2D position, Color color, float radius);
};

#endif