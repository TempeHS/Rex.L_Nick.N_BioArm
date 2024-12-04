#include "Ultrasonic.h"
#include <Servo.h>

Ultrasonic distanceSensor(6);

Servo servo1;  
Servo servo2;  
Servo servo3;  
Servo servo4; 
Servo servo5; 
int Range;

void setup() {
  sensorsetup();
  servosetup();
}

void loop() {
  sensorRead();

  if (Range <= 2) {
    armclose();
  } else if (Range <= 5) {
    armhalfclose();
  } else {
    armopen();
  }

  delay(100);
}