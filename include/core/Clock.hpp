#ifndef CLOCK_H
#define CLOCK_H

#include <vector>

#include <SDL_timer.h>

#include "core/Window.hpp"

class Clock {
private:
    static Uint32 delay;    // ms
    static Uint32 prevTime; // ms
    static Uint32 currTime; // ms
    static std::vector <float> frameTimes;
    static int fps;

public:
    static float dt;    // s

    static void update();
};

#endif