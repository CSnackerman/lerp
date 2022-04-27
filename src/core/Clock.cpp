#include "core/Clock.hpp"

// static init
Uint32 Clock::delay = 3;        // ms
Uint32 Clock::prevTime = 0.0f;  // ms
Uint32 Clock::currTime = 0.0f;  // ms
float Clock::dt = 0.0f;         // s

void Clock::update() {
    SDL_Delay(Clock::delay);
    Clock::currTime = SDL_GetTicks();
}