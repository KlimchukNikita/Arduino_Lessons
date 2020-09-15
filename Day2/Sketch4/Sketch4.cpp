#define ledPin 9
#define potPin A0

void setup()
{
    pinMode (ledPin, OUTPUT);
    pinMode (potPin, INPUT);
}

void loop()
{
    int rotation, brightness;
    rotation = analogRead (potPin);
    brightness = rotation / 4;
    analogWrite (ledPin, brightness);
}
