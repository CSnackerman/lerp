#include "Event.h"

// static init
SDL_Event Event::e = SDL_Event();

// Private helpers
bool Event::handleQuit() {
    if(Event::e.type == SDL_QUIT) {
        ApplicationState::running = false;
        return true;
    }
    return false; 
}

// Public API
void Event::handle() {
    while (SDL_PollEvent(&Event::e)) {
        if (handleQuit()) continue;
    }
}