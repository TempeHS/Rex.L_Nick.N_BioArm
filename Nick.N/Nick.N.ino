
#include <Servo.h>

Servo servo1;  // create servo object for servo on pin 5
Servo servo2;  // create servo object for servo on pin 4
Servo servo3;  // create servo object for servo on pin 3

const int buttonPin = 8; // pin connected to the button
int buttonState = 0;     // variable to store the button state

void setup() {
  // Attach servos to their respective pins
  attachsetup();
}

void loop() {
  // Read the state of the button
  buttonState = digitalRead(buttonPin);

  servorotations();

  // Small delay to debounce the button
  delay(10);
}