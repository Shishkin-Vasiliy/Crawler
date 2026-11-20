#pragma once

#include <Arduino.h>

enum class Direction {
    FORWARD,
    BACKWARD,
    STOP
};

class MotorController {
private:
    const uint8_t dirPin;
    const uint8_t pwmPin;

    Direction currentDirection = Direction::STOP;

public:
    MotorController(uint8_t dirPin, uint8_t pwmPin);

    void begin();
    void setMotion(Direction direction, int speed);
    void stop();
};