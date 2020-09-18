#include "Arduino.h"
class blinkLED
{
  private:
    int pin;
    int mode;
  public:
    blinkLED(int);
    void On();
    void Off();
}
