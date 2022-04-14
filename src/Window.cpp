#include "Window.hpp"

// static init
SDL_Window* Window::sdl_window = nullptr;
const int Window::WIDTH = 800;
const int Window::HEIGHT = 600;


// public API
void Window::initialize() {
    Window::sdl_window = SDL_CreateWindow(
        "Lerp",
        SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
        Window::WIDTH, Window::HEIGHT,
        0
    );
}

void Window::destroy() {
    SDL_DestroyWindow(Window::getSDL_Window());
}

SDL_Window* Window::getSDL_Window() {
    return Window::sdl_window;
}