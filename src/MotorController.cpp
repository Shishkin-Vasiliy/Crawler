#include "MotorController.h"

MotorController::MotorController(uint8_t dirPin, uint8_t pwmPin)
    : dirPin(dirPin), pwmPin(pwmPin) {}

void MotorController::begin() {
    pinMode(dirPin, OUTPUT);
    pinMode(pwmPin, OUTPUT);

    digitalWrite(dirPin, LOW);
    analogWrite(pwmPin, 0);
}

void MotorController::setMotion(Direction direction, int speed) {
    speed = constrain(speed, 0, 255);

    if (direction == Direction::STOP || speed == 0) {
        stop();
        return;
    }

    if (currentDirection != Direction::STOP &&
        currentDirection != direction) {
        analogWrite(pwmPin, 0);
        delay(200);
    }

    if (direction == Direction::FORWARD) {
        digitalWrite(dirPin, LOW);
    }
    else {
        digitalWrite(dirPin, HIGH);
    }

    analogWrite(pwmPin, speed);

    currentDirection = direction;
}

void MotorController::stop() {
    analogWrite(pwmPin, 0);
    currentDirection = Direction::STOP;
}