#include "core/Application.hpp"

Application::Application() :
    testRect(Rectangle()),
    testLine(Line(Vector2D(0, 0), Vector2D(800, 600), Color::green))
{}

void Application::initialize() {
    SDL_Init(SDL_INIT_EVERYTHING);
    Window::initialize();
    Render::initialize();
    ApplicationState::initialized = true;
}

void Application::run() {
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