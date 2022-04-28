#include "render/renderables/custom/Platform.hpp"

Platform::Platform (
    Vector2D position,
    float width,
    float height,
    Color color
) : 
    rectangle ({position, width, height, color})
{}

void Platform::moveTo(Vector2D position) {
    this->rectangle.moveTo(position);
}

void Platform::render() {
    Render::setColor (this->rectangle.color);
    Render::rectangle (this->rectangle);
}