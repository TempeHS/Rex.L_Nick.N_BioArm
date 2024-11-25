
#include <Servo.h>

Servo servo1;  // create servo object for servo on pin 5
Servo servo2;  // create servo object for servo on pin 4
Servo servo3;  // create servo object for servo on pin 3



void setup() {
  // Attach servos to their respective pins
  attachsetup();
}

void loop() {
  // Read the state of the button
  servorotations();

  // Small delay to debounce the button
  delay(10);
}