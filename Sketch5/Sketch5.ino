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
    brightness = map (rotation, 0, 1023, 3500, 4500);
    tone (ledPin, brightness, 20);
}
