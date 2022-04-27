#include "core/Clock.hpp"

// static init
Uint32 Clock::delay = 5;        // ms
Uint32 Clock::prevTime = 0.0f;  // ms
Uint32 Clock::currTime = 0.0f;  // ms
float Clock::dt = 0.0f;         // s
int Clock::fps = 0;
std::vector <float> Clock::frameTimes = std::vector<float>();

void Clock::update() {
    SDL_Delay(Clock::delay);
    Clock::currTime = SDL_GetTicks();
    int elapsed = static_cast <int> (currTime - prevTime);
    Clock::dt = elapsed / 1000.0f;
    Clock::frameTimes.push_back(Clock::dt);
    Clock::prevTime = Clock::currTime;

    // calculate fps
    if (Clock::frameTimes.size() > 60) {
        float sum = 0.0f;
        for (auto &frameTime : Clock::frameTimes) {
            sum += frameTime;
        }
        float avg = sum / Clock::frameTimes.size();

        Clock::fps = 1.0f / avg;

        Window::setTitle("Lerp - " + std::to_string(Clock::fps) + " fps");
        Clock::frameTimes.clear();
    }
}