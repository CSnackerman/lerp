#ifndef VECTOR2D_H
#define VECTOR2D_H

#include <iostream>

class Vector2D {
public:
    float x, y;

    Vector2D();
    Vector2D(float x, float y);
    
    // Operator overloading
    void operator= (const Vector2D& rhs);

    // Public API
    Vector2D lerp (const Vector2D& p2, const float& percent);
};

#endif