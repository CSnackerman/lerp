#include "core/Application.hpp"

Application::Application() :
    testRect (Rectangle(Vector2D(100, 100), 100, 100, Color::blue)),
    testLine (Line(Vector2D(100, 100), Vector2D(500, 300), Color::green))
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
