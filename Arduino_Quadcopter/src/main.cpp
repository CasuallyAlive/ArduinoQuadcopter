#include "main.h"

void setup()
{
  Serial.begin(9600);
  successfulSetup = IMU.begin(); // initiates the IMU and returns a logical high if the IMU was successfully setup,

  // Setup bluetooth with master
}

void loop()
{
  // put your main code here, to run repeatedly:
}