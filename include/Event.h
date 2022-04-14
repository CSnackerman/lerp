#ifndef EVENT_H
#define EVENT_H

#include <SDL_events.h>

#include "ApplicationState.h"

class Event {
private:
    static SDL_Event e;

    static bool handleQuit();

public:
    static void handle();
};

#endif