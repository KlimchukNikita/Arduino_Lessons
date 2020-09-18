#include "link.h"
class blinkLED
{
  private:

  public:
    blinkLED::blinkLED(int pin1)
    {
      pin = pin1;
      pinMode(pin, OUTPUT);
    }
    void blinkLED::On(int Delay)
    {
      digitalWrite(pin, 1);
      delay(Delay);
    }
    void blinkLED::Off(int Delay)
    {
      digitalWrite(pin, 1);
      delay(Delay);
    }
}
