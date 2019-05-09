#include <Arduino.h>

//Blinking LED on Arduino-Pin 6 (Pin 7 of ATtiny)

void setup() {
  pinMode(6, OUTPUT);
}
void loop() {
  digitalWrite(6,HIGH);
  delay(1000);
  digitalWrite(6,LOW);
  delay(1000);
}
