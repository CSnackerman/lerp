#ifndef PATROL_PLATFORM_H
#define PATROL_PLATFORM_H

#include "render/renderables/custom/Platform.hpp"

class PatrolPlatform : public Platform {
private:
    Vector2D patrol_1;
    Vector2D patrol_2;
    float patrolPercent;
    float patrolProgressor;

public:
    PatrolPlatform() = delete;
    PatrolPlatform (
        Vector2D position,
        float width,
        float height,
        Color color
    );

    void setPatrol(Vector2D p1, Vector2D p2);
    void patrol();
};

#endif