#include "render/custom/PatrolPlatform.hpp"

PatrolPlatform::PatrolPlatform (
    Vector2D position,
    float width,
    float height,
    Color color
)
    : Platform {position, width, height, color}
    , isPatrolling (false)
    , patrol_1 ({0.0f, 0.0f})
    , patrol_2 ({0.0f, 0.0f})
    , patrolPercent (0.0f)
    , patrolProgressor (0.3f)
{}

void PatrolPlatform::setPatrol(Vector2D p1, Vector2D p2) {
    patrol_1 = p1;
    patrol_2 = p2;
    activate();
}

void PatrolPlatform::patrol() {
    patrolPercent += patrolProgressor * Clock::dt;

    if (patrolPercent > 1.0f) {
        patrolPercent = 1.0f;
        patrolProgressor = -patrolProgressor;
    }
    else if (patrolPercent < 0.0f) {
        patrolPercent = 0.0f;
        patrolProgressor = -patrolProgressor;
    }
    
    moveTo (
        patrol_1.lerp(patrol_2, patrolPercent)
    );
}

void PatrolPlatform::activate() { isPatrolling = true; }
void PatrolPlatform::deactivate() { isPatrolling = false; }