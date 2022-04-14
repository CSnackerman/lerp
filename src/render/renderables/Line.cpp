#include "render/renderables/Line.hpp"

Line::Line() :
    p1 (Vector2D(0, 0)),
    p2 (Vector2D(1, 1)),
    color (Color::red)
{}

Line::Line(
    Vector2D p1, 
    Vector2D p2, 
    Color color
) :
    p1 (p1),
    p2 (p2),
    color (color)
{}
