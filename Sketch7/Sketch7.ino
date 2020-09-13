#include <SoftwareSerial.h>
#include <Nextion.h>

SoftwareSerial nextion (2, 3);
Nextion myNextion (nextion, 9600);

void setup()
{
    Serial.begin (9600);
    myNextion.init ();
    pinMode (13, OUTPUT);
}

void loop()
{
    myNextion.setComponentText ("t0", String ("Hello World!"));
    delay (500);
    myNextion.setComponentText ("t0", String ("Yes"));
    delay (500);
}
