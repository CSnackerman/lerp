#include "render/renderables/primitives/Circle.hpp"

Circle::Circle() :
    position (Vector2D()),
    color (Color::red),
    radius (3.0f)
{}

Circle::Circle(Vector2D position, Color color, float radius) :
    position (position),
    color (color),
    radius (radius)
{}