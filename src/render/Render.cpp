#include "render/Render.hpp"

// static init

SDL_Renderer* Render::renderer = nullptr;

// initializers

void Render::initialize() {
    Render::renderer = SDL_CreateRenderer(
        Window::getSDL_Window(),
        -1,
        SDL_RENDERER_ACCELERATED
    );
}

void Render::destroy() {
    SDL_DestroyRenderer(Render::renderer);
}

// utility 

void Render::clear() {
    Render::setColor(Color::darkpurple);
    SDL_RenderClear(Render::renderer);
}

void Render::update() {
    SDL_RenderPresent(Render::renderer);
}

void Render::setColor(Color color) {
    unsigned char red   = (color.value >> 24) & 0xFF;
    unsigned char green = (color.value >> 16) & 0xFF;
    unsigned char blue  = (color.value >> 8) & 0xFF;
    unsigned char alpha = color.value & 0xFF;

    SDL_SetRenderDrawColor (Render::renderer, red, green, blue, alpha);
}


// draw functions

void Render::line(Line& line) {
    int x1 = static_cast <int> (line.p1.x);
    int y1 = static_cast <int> (line.p1.y);
    int x2 = static_cast <int> (line.p2.x);
    int y2 = static_cast <int> (line.p2.y);

    Render::setColor(line.color);
    SDL_RenderDrawLine(Render::renderer, x1, y1, x2, y2);
}

void Render::rectangle(Rectangle& rectangle) {
    Render::setColor(rectangle.color);
    SDL_RenderFillRect(Render::renderer, &rectangle.sdl_rect);
}

void Render::circle(Circle& circle) {
}
