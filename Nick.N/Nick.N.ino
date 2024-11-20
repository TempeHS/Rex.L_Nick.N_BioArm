
#include <Servo.h>

Servo servo1;  // create servo object for servo on pin 5
Servo servo2;  // create servo object for servo on pin 4
Servo servo3;  // create servo object for servo on pin 3

const int buttonPin = 8; // pin connected to the button
int buttonState = 0;     // variable to store the button state

void setup() {
  // Attach servos to their respective pins
  servo1.attach(5);
  servo2.attach(4);
  servo3.attach(3);

  // Set button pin as input
  pinMode(buttonPin, INPUT);
}

void loop() {
  // Read the state of the button
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) { // Button is pressed
    servo1.write(90);  // move servo1 to 90 degrees
    servo2.write(90);  // move servo2 to 90 degrees
    servo3.write(90);  // move servo3 to 90 degrees
  } else { // Button is not pressed
    servo1.write(0);   // move servo1 back to 0 degrees
    servo2.write(0);   // move servo2 back to 0 degrees
    servo3.write(0);   // move servo3 back to 0 degrees
  }

  // Small delay to debounce the button
  delay(10);
}