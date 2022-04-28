#include "render/renderables/primitives/Rectangle.hpp"

Rectangle::Rectangle() :
    sdl_rect ({0, 0, 1, 1}),
    position ({0, 0}),
    width (100.0f),
    height (100.0f),
    color (Color::red)
{
    sync();
}

Rectangle::Rectangle(
    Vector2D position, 
    float width, 
    float height,
    Color color
) :
    sdl_rect ({0, 0, 1, 1}),
    position (position),
    width (width),
    height (height),
    color (color)
{
    sync();
}

void Rectangle::moveTo(Vector2D position) {
    this->position = position;
    sync();
}

// private utility

void Rectangle::sync() {
    sdl_rect.x = static_cast <int> (position.x - width / 2);
    sdl_rect.y = static_cast <int> (position.y - height / 2);
    sdl_rect.w = static_cast <int> (width);
    sdl_rect.h = static_cast <int> (height);
}