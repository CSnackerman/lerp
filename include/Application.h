#ifndef APPLICATION_H
#define APPLICATION_H

#include <SDL.h>

#include "ApplicationState.h"
#include "Window.h"
#include "Render.h"
#include "Event.h"
#include "Rectangle.h"
#include "Line.h"
#include "Circle.h"

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