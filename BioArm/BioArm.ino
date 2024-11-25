/*Rex:
Doc: https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/tree/main/TempeHS_Sensor_Catalogue/Sensor_Kit/Ultrasonic_Ranger
Ultra pin 6
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

// Create an ultrasonic sensor object on pin 6
Ultrasonic distanceSensor(6);

// Create servo objects for three servos
Servo servo1;  
Servo servo2;  
Servo servo3;  

void setup() {
  sensorsetup (); //Ultrasonic Setup
  attachsetup (); 
}

void loop() {
  long Range = distanceSensor.read(); //Reads distance
  Serial.print(Range);
  Serial.println(" cm");

  servorotations();
  }

  // Small delay for better stability and to reduce the frequency of sensor readings
  delay(100);
}

/*#include "Ultrasonic.h"
#include <Servo.h>


// Create an ultrasonic sensor object on pin 6
Ultrasonic distanceSensor(6);


// Create servo objects for three servos
Servo servo1;  
Servo servo2;  
Servo servo3;  


void setup() {
  Serial.begin(9600); // Initialize serial communication for debugging
  
  attachsetup(); // Initialize servo attachments
}


void loop() {
  long Range = distanceSensor.read(); // Reads distance from ultrasonic sensor
  Serial.print(Range);
  Serial.println(" cm");


  servorotations(Range); // Pass range to the servo function
  
  delay(100); // Small delay for stability
}
*/