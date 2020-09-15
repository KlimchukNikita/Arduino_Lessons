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
    String message = myNextion.listen ();

    if (message == "65 1 3 1 ffff ffff ffff")
    {
        myNextion.setComponentText ("b1", String ("ON"));
        digitalWrite (13, HIGH);
    }
    
    if (message == "65 1 4 1 ffff ffff ffff")
    {
        myNextion.setComponentText ("b2", String ("OFF"));
        digitalWrite (13, LOW);
    }
}
