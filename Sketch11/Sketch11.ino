#define ledPin 9
#define potPin A0

void setup()
{
    pinMode (ledPin, OUTPUT);
    pinMode (potPin, INPUT);
}

void loop()
{
    int val, brightness;
    val = analogRead (potPin);
    brightness = map (val, 0, 1023, 250, 0);
    analogWrite (ledPin, brightness);
}
