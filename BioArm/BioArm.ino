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

// Links ultrasonic sensor to pin 6
Ultrasonic distanceSensor(6);

// Declares all 3 servos
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

  // If the distance is less than or equal to 10 cm, set the servos to 90 degrees
  if (Range <= 10) {
    servo1.write(90);  
    servo2.write(90);  
    servo3.write(90);  
  }
  else {
    // If the distance is greater than 10 cm, return the servos to 0 degrees
    servo1.write(0);
    servo2.write(0);
    servo3.write(0);
  }

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