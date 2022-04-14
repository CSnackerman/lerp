#include "render/renderables/Rectangle.hpp"

Rectangle::Rectangle() :
    sdl_rect (SDL_Rect()),
    position (Vector2D()),
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
    sdl_rect (SDL_Rect()),
    position (position),
    color (color),
    width (width),
    height (height)
{
    sync();
}

// private utility

void Rectangle::sync() {
    sdl_rect.x = static_cast <int> (position.x);
    sdl_rect.y = static_cast <int> (position.y);
    sdl_rect.w = static_cast <int> (width);
    sdl_rect.h = static_cast <int> (height);
}