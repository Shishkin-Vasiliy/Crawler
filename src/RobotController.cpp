#include "RobotController.h"

RobotController::RobotController(
    MovementController& movement
) : movement(movement) {}

void RobotController::begin() 
{
    stop();
}

void RobotController::moveForward(int speed) 
{
    movement.move(Direction::FORWARD, speed);
}

void RobotController::moveBackward(int speed) 
{
    movement.move(Direction::BACKWARD, speed);
}

void RobotController::stop()
{
    movement.move(Direction::STOP, 0);
}