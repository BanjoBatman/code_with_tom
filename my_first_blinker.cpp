
#include "my_first_blinker.h"
#include <Arduino.h> // for LED_BUILTIN and HIGH
void my_first_blinker::doBlink() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
