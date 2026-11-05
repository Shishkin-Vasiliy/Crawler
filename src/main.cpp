#include <Arduino.h>

#include "TestMotorDriver.h"
#include "MovementController.h"
#include "RobotController.h"

TestMotorDriver motor;

MovementController movement(motor);

RobotController robot(movement);

void setup()
{
  Serial.begin(9600);

  motor.begin();

  robot.stop();
}

void loop()
{
  robot.moveForward(150);

  delay(2000);

  robot.stop();

  delay(1000);

  robot.moveBackward(200);

  delay(2000);

  robot.stop();

  delay(1000);
}