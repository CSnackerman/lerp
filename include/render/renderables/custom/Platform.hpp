#ifndef PLATFORM_H
#define PLATFORM_H

#include "core/Clock.hpp"
#include "render/Render.hpp"
#include "render/renderables/primitives/Rectangle.hpp"

class Platform {
protected:
    Rectangle rectangle;

public:
    Platform() = delete;
    Platform (
        Vector2D position,
        float width,
        float height,
        Color color
    );
    
    void moveTo(Vector2D position);
    void render();
};

#endif