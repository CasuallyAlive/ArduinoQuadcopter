#include "Quadcopter.h"

Quadcopter::Quadcopter(const std::array<int, 4> &motorArmIds) : MAX_MOTOR_SPEED(255),
                                                                MAX_ANGLE(30),
                                                                isArmed(false),
                                                                motorArmIds(motorArmIds),
                                                                motorArmSpeeds({0, 0, 0, 0})
{
}
void Quadcopter::setIsArmed(bool isArmed)
{
    this->isArmed = isArmed;
}

bool Quadcopter::isCurrentlyArmed()
{
    return isArmed;
}
