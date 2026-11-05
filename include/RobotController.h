#pragma once

#include "MovementController.h"

class RobotController {
private:
    MovementController& movement;

public:
    RobotController(MovementController& movement);

    void begin();

    void moveForward(int speed);
    void moveBackward(int speed);
    void stop();
};