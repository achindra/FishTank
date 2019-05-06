/*
   WaterLevel
   Use DS18B20 waterproof
*/

#include <OneWire.h>
#include <DallasTemperature.h>

#ifndef tempPin
#define tempPin 2
#endif

extern OneWire ds(tempPin);
extern DallasTemperature sensors(&ds);

void setupTemp()
{
  sensors.begin();
}

float getTemp() {
  sensors.requestTemperatures();
  Serial.print("Temperature for Device 1 is: ");
  Serial.println(sensors.getTempCByIndex(0));
  Serial.println(sensors.getTempFByIndex(0));
}

