/*
 * WaterLevel
 * Find level of water, throw an ultrasound pulse and calculate debth
*/

#ifndef echoPin
#define echoPin 4
#endif

#ifndef trigPin
#define trigPin 5
#endif

void setupWater()
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

float checkLevel()
{
  long duration, distance;

  //pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
  distance = (duration / 2) / 29.1;
  Serial.print("distance: ");
  Serial.println(distance);
  return distance;
}


