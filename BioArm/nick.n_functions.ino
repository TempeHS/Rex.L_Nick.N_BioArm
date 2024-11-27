void attachsetup() {
  // Attach servos to their respective pins
  servo1.attach(5);
  servo2.attach(4);
  servo3.attach(3);
}


void servorotations(long distance) {
  // Adjust servo positions based on distance
  if (distance < 10) { // If distance is less than 10 cm
    servo1.write(90);  // Move servo1 to 90 degrees
    servo2.write(90);  // Move servo2 to 90 degrees
    servo3.write(90);  // Move servo3 to 90 degrees
  } else { // If distance is greater than 10 cm
    servo1.write(0);   // Move servo1 back to 0 degrees
    servo2.write(0);   // Move servo2 back to 0 degrees
    servo3.write(0);   // Move servo3 back to 0 degrees
  }
}







