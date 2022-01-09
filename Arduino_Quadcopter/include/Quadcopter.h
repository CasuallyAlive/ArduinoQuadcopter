#ifndef Quadcopter_h
#define Quadcopter_h

#include <Arduino.h>
#include <array>
#include <Arduino_LSM6DS3.h>

class Quadcopter
{
private:
    const int MAX_MOTOR_SPEED;
    const float MAX_ANGLE; // in degrees

    bool isArmed;
    std::array<int, 4> motorArmIds;
    std::array<int, 4> motorArmSpeeds;
    std::array<int, 3> angularVelocities;
    std::array<int, 3> acceleration;

public:
    Quadcopter(const std::array<int, 4> &);
    /**
     * @brief Set the Armed status of the Quadcopter
     * 
     * @param armed 
     */
    void setIsArmed(bool armed);
    /**
     * @brief Set the Mode of the quadcopter: i.e.,
     * 
     * Angle: Self stabilizing mode with fixed angle pitch and roll
     * Acro: No self stabilizing with operator having full control
     * Camera-Guided: uses the camera to control the quadcopter (computer vision guided controls)
     */
    void setMode();
    bool isCurrentlyArmed();
    void increaseMotorSpeed();
};

#endif