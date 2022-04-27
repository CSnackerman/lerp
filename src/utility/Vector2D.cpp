#include "utility/Vector2D.hpp"

Vector2D::Vector2D() :
    x(0.0f),
    y(0.0f)
{}

Vector2D::Vector2D(float x, float y) :
    x(x),
    y(y)
{}

void Vector2D::operator= (const Vector2D& rhs) {
    this->x = rhs.x;
    this->y = rhs.y;
}

Vector2D lerp (Vector2D p1, Vector2D p2, float percent) {
    return Vector2D();
}