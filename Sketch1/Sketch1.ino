#define gre A0
#define red 11
#define yel 12

void setup()
{
    pinMode (gre, OUTPUT);
    pinMode (red, OUTPUT);
    pinMode (yel, OUTPUT);
}

void loop()
{
    digitalWrite (red, HIGH);
    digitalWrite (yel, LOW);
    digitalWrite (gre, LOW);
    delay (4000);

    digitalWrite (red, LOW);
    digitalWrite (yel, LOW);
    digitalWrite (gre, LOW);
    delay (250);

    digitalWrite (red, HIGH);
    digitalWrite (yel, HIGH);
    digitalWrite (gre, LOW);
    delay (250);

    digitalWrite (red, LOW);
    digitalWrite (yel, LOW);
    digitalWrite (gre, LOW);
    delay (250);

    digitalWrite (red, HIGH);
    digitalWrite (yel, HIGH);
    digitalWrite (gre, LOW);
    delay (250);

    digitalWrite (red, LOW);
    digitalWrite (yel, LOW);
    digitalWrite (gre, LOW);
    delay (250);

    digitalWrite (red, LOW);
    digitalWrite (yel, LOW);
    digitalWrite (gre, HIGH);
    delay (4000);
}
