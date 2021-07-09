#include "myClass.h"
myClass myClassInstance("Bob");
myClass mySecondClassInstance("Mary");
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);// for debugging
}

void loop() {
  // put your main code here, to run repeatedly:
   Serial.println(myClassInstance.getName()); // prints "Bob"
   Serial.println(mySecondClassInstance.getName()); // prints "Mary"
  
}
