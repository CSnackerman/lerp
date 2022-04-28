#ifndef RENDER_H
#define RENDER_H

#include <iostream>

#include <SDL_render.h>
#include <SDL2_gfxPrimitives.h>

#include "core/Window.hpp"

#include "render/primitives/Line.hpp"
#include "render/primitives/Rectangle.hpp"
#include "render/primitives/Circle.hpp"

class Render {
private:
    static SDL_Renderer* renderer;

public:
    static void initialize();
    static void destroy();
    static void clear();
    static void update();
    static void setColor(Color color);

    // draw functions
    static void line(Line& line);
    static void rectangle(Rectangle& rectangle);
    static void circle(Circle& circle);
};

#endif