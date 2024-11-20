#include "Ultrasonic.h"

Ultrasonic distanceSensor(6);

void setup() {
  Serial.begin(9600);
}

void loop() {
  int Range;
  Range = distanceSensor.distanceRead();
  Serial.print(Range);
  Serial.println(" cm");
}