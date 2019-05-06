/*
  Fishtank
   - Water Level
   - Food on Time
   - Lights on Time
   - Bubbler on Time
   - Temperature every hour
   - Summary on Bluetooth

*/

#define btRx          0
#define btTx          1
#define tempPin       2
#define servoPin      3
#define echoPin       4
#define trigPin       5
#define mstrRelayPin2 6
#define auxRelayPin2  7
// Pin 8-13 used by LCD

void setup()
{
  Serial.begin(9600);
  setupBTLink();
  setupTemp();
  setupRelay();
  setupWater();
  setupFeeder();
  btLinkLoop();
}

void loop()
{
  if(timeToLight)
    masterOn();
    
  if(timeToFeed)
    dropFood(2);
  
  if(timeToGadget)
    auxOn();
  
  if(timeToHealthCheck)
  {
    checkLevel();
    getTemp();
  }
  
  if(timeToGadgetOff)
    auxOff();
  
  if(timeToSleep)
    masterOff();

  btLinkLoop();

}
