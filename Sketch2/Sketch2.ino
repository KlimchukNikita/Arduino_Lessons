#define photo A1

void setup()
{
    Serial.begin (9600);
    pinMode (photo, INPUT);
}

void loop()
{
    int a = (analogRead(photo));

    if (a < 500)
    {
        Serial.println ("Good Morning World!");
    }
    
    else
    {
        Serial.println ("Good Night World!");
    }
}
