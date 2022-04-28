#include "core/Application.hpp"

Application::Application() :
    p1 ({100, 100}),
    p2 ({700, 500}),
    patrolProgress (0.0f),
    progressor (0.2)
{
    testRect = Rectangle(p1, 50, 50, Color::magenta);
    testLine = Line(p1, p2, Color::cyan);
}

void Application::initialize() {
    SDL_Init(SDL_INIT_EVERYTHING);
    Window::initialize();
    Render::initialize();
    ApplicationState::initialized = true;
}

void Application::run() {

    Clock::update();

    Event::handle();

    // update testRect position via lerp
    patrolProgress += progressor * Clock::dt;

    if (patrolProgress > 1.0f) {
        patrolProgress = 1.0f;
        progressor = -progressor;
    }
    else if (patrolProgress < 0.0f) {
        patrolProgress = 0.0f;
        progressor = -progressor;
    }
    Vector2D newPosition = p1.lerp(p2, patrolProgress);
    testRect.moveTo (newPosition);
    // -----

    Render::clear();

    Render::rectangle(testRect);
    Render::line(testLine);

    Render::update();
}

void Application::quit() {
    Window::destroy();
    Render::destroy();
    SDL_Quit();
}
