#pragma once

class MotorDriver {
public:
    virtual void begin() = 0;
    virtual void forward(int speed) = 0;
    virtual void backward(int speed) = 0;
    virtual void stop() = 0;
};