bool flag = false;

int i = 0;
int arr[5];

volatile int state = LOW;

void setup()
{
    pinMode (10, OUTPUT);
    pinMode (2, INPUT_PULLUP);
    attachInterrupt (digitalPinToInterrupt (2), qwerty, RISING);
    Serial.begin (9600);
}

void loop()
{
    if (flag)
    {
        for (int j = 0; j < 5; j++)
        {
            Serial.println (arr[j]);
        }

        flag = false;
    }

    digitalWrite (10, state);
}

void qwerty()
{
    state = !state;
    arr [i] = analogRead (3);
    i++;
    if (i > 4)
    {
        flag = true;
        i = 0;
    }
}
