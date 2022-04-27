#include "core/Application.hpp"

Application::Application() :
    testRect (Rectangle(Vector2D(100, 100), 100, 100, Color::blue)),
    testLine (Line(Vector2D(100, 100), Vector2D(500, 300), Color::green)),
    patrolProgress (0.0f),
    progressor (0.1)
{}

void Application::initialize() {
    SDL_Init(SDL_INIT_EVERYTHING);
    Window::initialize();
    Render::initialize();
    ApplicationState::initialized = true;
}

void Application::run() {

    Clock::update();

    Event::handle();

    // update the rectangle via lerp
    patrolProgress += progressor * Clock::dt;
    
    if (patrolProgress > 1.0f) {
        patrolProgress = 1.0f;
        progressor = -progressor;
    }
    else if (patrolProgress < 0.0f) {
        patrolProgress = 0.0f;
        progressor = -progressor;
    }

    Vector2D p1 = Vector2D(100, 100);
    Vector2D p2 = Vector2D(500, 300);
    Vector2D currentPosition = p1.lerp(p2, patrolProgress);
    testRect.moveTo (currentPosition);

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
