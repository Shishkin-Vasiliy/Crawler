#pragma once

#include "TestMotorDriver.h"

enum class Direction {
    FORWARD,
    BACKWARD,
    STOP
};

class MovementController {
private:
    Direction currentDirection = Direction::STOP;   
    MotorDriver& motor;

public:
    MovementController(MotorDriver& motor);

    void move(Direction direction, int speed);
};