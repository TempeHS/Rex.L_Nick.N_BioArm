/*Rex:
Doc: https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/tree/main/TempeHS_Sensor_Catalogue/Sensor_Kit/Ultrasonic_Ranger
Ultra pin 1
Digit Display pin 2

Nick:
Doc: https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/tree/main/TempeHS_Sensor_Catalogue/Sensor_Kit/Servo_Motor
servo 1 pin 3
servo 2 pin 4
servo 3 pin 5
servo 4 pin 6
servo 5 pin 7
1x Ultrasonic Sensor
5x Servo Motors
1x 4-Digit Display
*/

#include "Ultrasonic.h"
#include <Servo.h>

Ultrasonic distanceSensor(6);



void setup() {
  Serial.begin(9600);
  Servo servo1;  // create servo object for servo on pin 5
  Servo servo2;  // create servo object for servo on pin 4
  Servo servo3;  // create servo object for servo on pin 3
  servo1.attach(5);  // attaches the servo on pin 5 to the servo object
  servo2.attach(4);  // attaches the servo on pin 4 to the servo object
  servo3.attach(3);  // attaches the servo on pin 3 to the servo object
}

void loop() {
  int Range;
  Range = distanceSensor.distanceRead();
  Serial.print(Range);
  Serial.println(" cm");

  if (Range <10) { 
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