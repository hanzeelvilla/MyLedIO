# MyLedIO Library

**MyLedIO** is a simple Arduino library for controlling multiple LEDs connected to a digital output pin.  
It allows easy initialization and state management for turning the LED on or off.

## Features

- Easy setup with `init()`
- Simple methods to turn the LED on/off
- Retrieve current LED state with `getState()`

## Installation

1. Download the repository as a ZIP file or clone it to your Arduino libraries folder

```bash
git clone git clone https://github.com/hanzeelvilla/MyLedIO.git
```

2. Place the **MyLedIO** folder into your Arduino libraries directory (typically Documents/Arduino/libraries on most systems).
3. Restart the Arduino IDE if it was open during installation.

## Getting Started

To begin using the **MyLedIO** library, follow these steps:

1.  **Connect your LED**

    - Connect the longer leg (anode) of the LED to a digital pin on your Arduino (e.g., pin 15).
    - Connect the shorter leg (cathode) to a resistor (220Ω recommended), then to GND.

    > [!WARNING]
    > Ensure the led is connected properly to avoid short circuits or damage to the board.

2.  **Include the library in your sketch**  
    Add this at the top of your `.ino` file:
    ```cpp
    #include "MyLedIO.h"
    ```
3.  **Create an instance**
    
    Define your LED object by passing the pin number:
    ```cpp
    MyLedIO redLed(15);
    ```
4.  **Initialize in `setup()`**
    ```cpp
    void setup() {
      redLed.init();
    }
    ```
5. **Control the LED in `loop()`**
    ```cpp
    void loop() {
      redLed.turnOn();
      delay(1000);
      redLed.turnOff();
      delay(1000);
    }
    ```

## Methods

| Method            | Description                               | Returns   |
|-------------------|-------------------------------------------|-----------|
| `init()`          | Initializes the LED pin as an output and turns it off. | `void`    |
| `turnOn()`        | Turns the LED on.                         | `void`    |
| `turnOff()`       | Turns the LED off.                        | `void`    |
| `getState()`      | Returns the current state of the LED.     | `bool` (`true` if ON, `false` if OFF) |