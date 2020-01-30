#include "UltrasonicSensor.h"

UltrasonicSensor mySensor(5,6);
void setup()
{
  Serial.begin(9600);
  float a = mySensor.Get();
  float b = mySensor.GetAvg();
}

void loop()
{
  Serial.println(mySensor.Get());
}
