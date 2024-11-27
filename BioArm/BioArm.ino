#include "Ultrasonic.h"
#include <Servo.h>


// Create an ultrasonic sensor object on pin 6
Ultrasonic distanceSensor(6);


// Create servo objects for three servos
Servo servo1;  
Servo servo2;  
Servo servo3;  


void setup() {
  sensorsetup();  
  servosetup(); // Starts servo setup
}

void loop() {
  sensorRead();
  int Range;
  Range = sensorRead;
  
  if (Range <= 5) {
  armhalfclose();
  }
  else {
    armopen();
  }
  if (Range <= 3) {
    armclose();
  }
  else {
    armclose();
  }
  if (Range >= 5) {
    armopen();
  }

  delay(100); // Small delay 
}
