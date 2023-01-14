#include "subsystemmotors.h"

SubsystemMotors::SubsystemMotors(QObject *parent)
    : QObject{parent}
{
    motor_Head = std::make_unique<Control_Motor>(10);
    motor_X = std::make_unique<Control_Motor>();
    motor_Y = std::make_unique<Control_Motor>();

}

int SubsystemMotors::Speed(int s) const
{

}

int SubsystemMotors::SpeedUp(int s) const
{

}

int SubsystemMotors::SpeedDown(int s) const
{

}


