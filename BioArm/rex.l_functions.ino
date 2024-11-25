void sensorSetup() {
  Serial.begin(9600);
}

void sensorRead() {
  long Range;
  Range = distanceSensor.distanceRead();
  Serial.print(Range);
  Serial.println(" cm");
}