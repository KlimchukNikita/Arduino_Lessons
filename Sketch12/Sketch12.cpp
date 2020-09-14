#include <LiquidCrystal.h>

LiquidCrystal lcd (13, 12, 11, 10, 9, 8);

void setup()
{
    lcd.begin (16, 2);
}
void loop()
{
    delay (500);
    lcd.setCursor (0, 0);
    lcd.print ("Hello World!");
    delay (500);
    lcd.setCursor (0, 1);
    lcd.print ("Good By World!");
}
