#include "MyLedIO.h"

#define RED_LED_PIN 15

MyLedIO redLed(RED_LED_PIN);

void setup() {
  Serial.begin(115200);
  redLed.init();
}

void loop() {
  Serial.println("Led ON");
  redLed.turnOn();
  delay(2000);
  Serial.println("Led OFF");
  redLed.turnOff();
  delay(2000);
}