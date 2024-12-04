void sensorsetup() {
  Serial.begin(9600);
}

void sensorRead() {
  int Range;
  Range = distanceSensor.distanceRead();
  Serial.print(Range);
  Serial.println(" cm");
}
