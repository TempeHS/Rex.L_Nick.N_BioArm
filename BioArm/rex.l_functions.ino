void sensorsetup() {
  Serial.begin(9600);
}

void sensorRead() {
  Range = distanceSensor.distanceRead();
  Serial.print(Range);
  Serial.println(" cm");
}

