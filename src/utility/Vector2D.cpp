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

Vector2D Vector2D::lerp (Vector2D p2, float percent) {
    if (percent < 0.0f || percent > 1.0f) {
        std::cout << "[WARN] invalid percent in Vector2D::lerp()" << std::endl;
        return *this;
    }

    float dx = p2.x - this->x;
    float dy = p2.y - this->y;
    return Vector2D(this->x + dx * percent, this->y + dy * percent);
}