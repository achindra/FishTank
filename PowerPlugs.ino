/*
 * PowerPlugs
 * Use Relays to control Light, Bubbler and Filter
 */

#ifndef mstrRelayPin1
#define mstrRelayPin1 6 
#endif

#ifndef auxRelayPin2
#define auxRelayPin2 7 
#endif

void setupRelay()
{
  pinMode(mstrRelayPin1, OUTPUT);
  pinMode(auxRelayPin2, OUTPUT);
}

void masterOn()
{
  digitalWrite(mstrRelayPin1, HIGH);
}

void masterOff()
{
  digitalWrite(mstrRelayPin1, LOW);
}

void auxOn()
{
  digitalWrite(auxRelayPin2, HIGH);
}

void auxOff()
{
  digitalWrite(auxRelayPin2, LOW);
}

