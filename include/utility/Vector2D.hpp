#ifndef VECTOR2D_H
#define VECTOR2D_H

class Vector2D {
public:
    float x, y;

    Vector2D();
    Vector2D(float x, float y);
    
    // Operator overloading
    void operator= (const Vector2D& rhs);

    // Public API
    Vector2D lerp (Vector2D p1, Vector2D p2, float percent);
};

#endif