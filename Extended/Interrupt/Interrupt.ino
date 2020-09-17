int i = 0;

volatile int state = LOW;

void setup()
{
    pinMode (10, OUTPUT);
    pinMode (2, INPUT_PULLUP);
    attachInterrupt (digitalPinToInterrupt (2), qwerty, CHANGE);
    Serial.begin (9600);
}

void loop()
{
    digitalWrite (10, state);
    Serial.println (i);
}

void qwerty()
{
    state = !state;
    i++;
}
