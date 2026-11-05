#pragma once

#include "MotorDriver.h"
#include <Arduino.h>

class TestMotorDriver : public MotorDriver
{
public:
    void begin() override;
    void forward(int speed) override;
    void backward(int speed) override;
    void stop() override;
};