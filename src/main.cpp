#include "core/Application.hpp"

int main() {

    Application app;

    app.initialize();

    while (ApplicationState::running) {
        app.run();
    }

    app.quit();

    return 0;
}