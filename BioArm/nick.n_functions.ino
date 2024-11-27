void servosetup() {
  // Attach servos to their respective pins
  servo1.attach(5);
  servo2.attach(4);
  servo3.attach(3);
}

void armclose() {
    servo1.write(0);   // Move servo1 back to 0 degrees
    servo2.write(0);   // Move servo2 back to 0 degrees
    servo3.write(0);   // Move servo3 back to 0 degrees
}

void armopen() {
    servo1.write(90);  // Move servo1 to 90 degrees
    servo2.write(90);  // Move servo2 to 90 degrees
    servo3.write(90);  // Move servo3 to 90 degrees 
}










