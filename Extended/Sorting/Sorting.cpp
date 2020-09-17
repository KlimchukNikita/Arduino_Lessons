int pin = 13;

bool flag = false;

volatile int state = LOW;

int i = 0;
int arr[10];

void setup()
{
    pinMode (pin, OUTPUT);
    attachInterrupt (digitalPinToInterrupt (2), led, CHANGE);
    Serial.begin (9600);
}

void loop()
{
    digitalWrite (pin, state);

    if (flag)
    {
        for (int j = 0; j < 10; j++)
        {
            Serial.println (arr[j]);
        }

        flag = false;
    }
}

void led()
{
    state = !state;
    arr[i] = analogRead (A4);

    if (i >= 10)
    {
        flag = true;
        i = 0;
    }

    i++;
}
