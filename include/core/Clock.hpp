#ifndef CLOCK_H
#define CLOCK_H

#include <SDL_timer.h>

class Clock {
private:
    static Uint32 delay;    // ms
    static Uint32 prevTime; // ms
    static Uint32 currTime; // ms
    
public:
    static float dt;    // s

    static void update();
};

#endif