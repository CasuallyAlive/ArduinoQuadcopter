#include "Quadcopter.h"

Quadcopter::Quadcopter(const std::array<int, 4> &motorArms) : MAX_MOTOR_SPEED(255),
                                                              MAX_ANGLE(30),
                                                              isArmed(false)
{
    this->motorArms = std::array<int, 4>(motorArms);
}
void Quadcopter::setIsArmed(bool isArmed)
{
    this->isArmed = isArmed;
}

bool Quadcopter::isCurrentlyArmed()
{
    return isArmed;
}
