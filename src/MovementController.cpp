#include "MovementController.h"
#include "Arduino.h"

MovementController::MovementController(MotorDriver& motor)
    : motor(motor) {}

void MovementController::move(
    Direction direction,
    int speed
) {
    speed = constrain(speed, 0, 255);

    if (direction == Direction::STOP)
    {
        motor.stop();
        currentDirection = Direction::STOP;
        return;
    }

    if (direction != currentDirection)
    {
        motor.stop();
        delay(200);
        currentDirection = direction;
    }
    
    if (direction == Direction::FORWARD) 
        motor.forward(speed);
    else
        motor.backward(speed);
}