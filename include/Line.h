#ifndef LINE_H
#define LINE_H

#include "Vector2D.h"
#include "Color.h"

struct Line {
public:
    Vector2D p1;
    Vector2D p2;
    Color color;

    Line();
    Line(
        Vector2D p1,
        Vector2D p2,
        Color color
    );
};

#endif