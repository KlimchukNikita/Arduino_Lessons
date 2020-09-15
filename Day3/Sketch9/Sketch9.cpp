#define ledPin 12
#define button 10

void setup()
{
    pinMode (ledPin, OUTPUT);
    pinMode (button, INPUT);
    Serial.begin (9600);
}

void loop()
{
    int button1 = digitalRead (button);
    
    if (button1 == 1)
    {
        for (int i = 0; i < 10; i++)
        {
            int res = i % 2;
            Serial.println (i);

            if (res > 0)
            {
                digitalWrite (ledPin, LOW);
                delay (100);
            }
            
            else
            {
                digitalWrite (ledPin, HIGH);
                delay (100);
            }
            
            Serial.println (i);
        }
        
        delay (1000);
    }
    
    else
    {
        digitalWrite (ledPin, HIGH);
    }
}
