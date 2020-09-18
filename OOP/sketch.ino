#include "link.cpp"
void setup() {
  blinkLED pin13(13);  // put your setup code here, to run once:
}

void loop() {
  pin13.On(1000);  // put your main code here, to run repeatedly:
  pin13.Off(1000);
}
