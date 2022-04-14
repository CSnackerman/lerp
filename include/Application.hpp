#ifndef APPLICATION_H
#define APPLICATION_H

#include <SDL.h>

#include "ApplicationState.hpp"
#include "Window.hpp"
#include "Render.hpp"
#include "Event.hpp"
#include "Rectangle.hpp"
#include "Line.hpp"
#include "Circle.hpp"

class Application {
private:
    Rectangle testRect;
    Line testLine;
    
public:
    Application();
    void initialize();
    void run();
    void quit();
    
};

#endif