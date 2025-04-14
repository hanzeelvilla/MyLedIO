#ifndef MyLedIO_H
#define MyLedIO_H

#include <Arduino.h>

class MyLedIO {
  private:
    int pin;
    bool state;

  public:
    MyLedIO(int _pin);
    void init();
    void turnOn();
    void turnOff();
    bool getState();
};

#endif