#ifndef WINDOW_H
#define WINDOW_H

#include <iostream>
#include <string>
#include <sstream>

#include <SDL.h>

class Window {
private:
    static SDL_Window* sdl_window;
    static const int WIDTH;
    static const int HEIGHT;

public:
    static void initialize();
    static void destroy();
    static SDL_Window* getSDL_Window();
    static void setTitle(std::string title);
};

#endif