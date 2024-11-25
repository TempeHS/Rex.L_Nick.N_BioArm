#include "Ultrasonic.h"

Ultrasonic distanceSensor(6);

void setup() {
  sensorsetup();
}

void loop() {
  sensorRead();
}