#include "Ultrasonic.h"
#include <Servo.h>


// Create an ultrasonic sensor object on pin 6
Ultrasonic distanceSensor(6);


// Create servo objects for three servos
Servo servo1;  
Servo servo2;  
Servo servo3;  


void setup() {
  Serial.begin(9600); // Initialize serial communication for debugging
  
  servosetup(); // Initialize servo attachments
}


void loop() {
  
  delay(100); // Small delay for stability
  long Range = distanceSensor.read(); // Reads distance from ultrasonic sensor
  Serial.print(Range);
  Serial.println(" cm");

    if (Range >= 5) {
    armclose();
  }

  if (Range >=5) {
    armopen();
  }
  servorotations(Range); // Pass range to the servo function
}
