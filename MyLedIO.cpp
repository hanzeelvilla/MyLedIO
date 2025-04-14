#include "MyLedIO.h"

MyLedIO::MyLedIO(int _pin) {
  pin = _pin;
  state = false;
}

void MyLedIO::init() {
  pinMode(pin, OUTPUT);
  turnOff();
}

void MyLedIO::turnOn() {
  digitalWrite(pin, HIGH);  
  state = true;
}

void MyLedIO::turnOff() {
  digitalWrite(pin, LOW);
  state = false;
}

bool MyLedIO::getState() {
  return state;
}