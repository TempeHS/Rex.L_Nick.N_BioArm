void servosetup() {
  servo1.attach(5);
  servo2.attach(4);
  servo3.attach(3);
  servo4.attach(7);
  servo5.attach(8);
}


void armclose() {
    servo1.write(0);   
    servo2.write(0);   
    servo3.write(0);   
    servo4.write(0); 
    servo5.write(0); 
}

void armhalfclose() {
    servo1.write(45);   
    servo2.write(45);   
    servo3.write(45);   
    servo4.write(45); 
    servo5.write(45); 
}

void armopen() {
    servo1.write(90); 
    servo2.write(90);  
    servo3.write(90); 
    servo4.write(90); 
    servo5.write(90);  
}

