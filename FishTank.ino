/*
   Feeder
   Use Servo to dump food
*/

#include <Servo.h>

#ifndef servoPin
#define servoPin 3
#endif

Servo myservo;  // create servo object to control a servo
int pos = 0;    // variable to store the servo position

void setupFeeder()
{
  myservo.attach(servoPin);  // attaches the servo on pin 9 to the servo object
}
void dropFood(int count)
{
  while (count != 0)
  {
    for (pos = 0; pos <= 180; pos += 5) // goes from 0 degrees to 180 degrees
    { // in steps of 1 degree
      myservo.write(pos);              // tell servo to go to position in variable 'pos'
      delay(15);                       // waits 15ms for the servo to reach the position
    }
    for (pos = 180; pos >= 0; pos -= 5) // goes from 180 degrees to 0 degrees
    {
      myservo.write(pos);              // tell servo to go to position in variable 'pos'
      delay(15);                       // waits 15ms for the servo to reach the position
    }
    count--;
  }
}
