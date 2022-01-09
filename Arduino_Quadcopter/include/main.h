#ifndef main_h
#define main_h

#include <Arduino.h>
#include "Quadcopter.h"
#include <ArduinoBLE.h>
#include <Arduino_LSM6DS3.h>

Quadcopter myQuad;
BLEDevice remote;
bool successfulSetup;

#endif