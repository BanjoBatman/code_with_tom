#include "slow_blink.h"
#include <Arduino.h> // for LED_BUILTIN and HIGH
void slow_blink::doBlink() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(10000);                       // wait for 10 seconds
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(10000);                       // wait for 10 seconds
}
