void attachsetup() {
 servo1.attach(5);
  servo2.attach(4);
  servo3.attach(3);
pinMode(buttonPin, INPUT);
}

void servorotations (){
 if (buttonState == HIGH) { // Button is pressed
    servo1.write(90);  // move servo1 to 90 degrees
    servo2.write(90);  // move servo2 to 90 degrees
    servo3.write(90);  // move servo3 to 90 degrees
  } else { // Button is not pressed
    servo1.write(0);   // move servo1 back to 0 degrees
    servo2.write(0);   // move servo2 back to 0 degrees
    servo3.write(0);   // move servo3 back to 0 degrees
  }

}