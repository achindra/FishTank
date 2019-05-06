/*
   BTLink
   BlueTooth link
*/
#include <SoftwareSerial.h>

#ifndef btTx
#define btTx 1
#endif

#ifndef btRx
#define btRx 0
#endif

SoftwareSerial btLink(btRx, btTx);

void setupBTLink()
{
  btLink.begin(9600);
}

void btLinkLoop()
{
  while(btLink.available())
  {
    Serial.write(btLink.read());
    btLink.println("Ack");
  }
}

