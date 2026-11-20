#include <Arduino.h>
#include "MotorController.h"

MotorController motor(7, 5);

void setup() {
    motor.begin();
}


void loop() {
    motor.setMotion(Direction::FORWARD, 80);
    delay(3000);

    motor.stop();
    delay(2000);
}