#ifndef APPLICATION_H
#define APPLICATION_H

#include <SDL.h>

#include "core/Application.hpp"
#include "core/ApplicationState.hpp"
#include "core/Clock.hpp"
#include "core/Window.hpp"
#include "core/Event.hpp"

#include "render/Render.hpp"
#include "render/renderables/Rectangle.hpp"
#include "render/renderables/Line.hpp"
#include "render/renderables/Circle.hpp"

class Application {
private:
    Rectangle testRect;
    Line testLine;
    float patrolProgress;
    float progressor;
    
public:
    Application();
    void initialize();
    void run();
    void quit();
    
};

#endif