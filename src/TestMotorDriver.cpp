#include "TestMotorDriver.h"

void TestMotorDriver::begin()
{
    Serial.println("Motor driver initialized");
}

void TestMotorDriver::forward(int speed)
{
    Serial.print("Moving FORWARD, speed: ");
    Serial.println(speed);
}

void TestMotorDriver::backward(int speed)
{
    Serial.print("Moving BACKWARD, speed: ");
    Serial.println(speed);
}

void TestMotorDriver::stop()
{
    Serial.println("Motor STOP");
}