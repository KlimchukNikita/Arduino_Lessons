#define photo A1
#define gre 10
#define yel 12
#define red A0

void setup()
{
    Serial.begin (9600);
    pinMode (photo, INPUT);
    pinMode (gre, OUTPUT);
    pinMode (yel, OUTPUT);
    pinMode (red, OUTPUT);
}

void loop()
{
    int a = (analogRead(photo));
    
    switch (a)
    {
        case(800):
        Serial.println ("1");
        digitalWrite (gre, HIGH);
        digitalWrite (yel, LOW);
        digitalWrite (red, LOW);
        
        case(600):
        Serial.println ("2");
        digitalWrite (gre, LOW);
        digitalWrite (yel, HIGH);
        digitalWrite (red, LOW);
        
        case(400):
        Serial.println ("3");
        digitalWrite (gre, LOW);
        digitalWrite (yel, LOW);
        digitalWrite (red, HIGH);
        
        break;
    }
}
