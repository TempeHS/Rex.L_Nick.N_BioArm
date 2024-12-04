#include "Ultrasonic.h"
#include <Wire.h>
#include <U8g2lib.h>
#include <Arduino.h>

Ultrasonic distanceSensor(6);

U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* clock=*/ SCL, /* data=*/ SDA, /* reset=*/ U8X8_PIN_NONE);  // High speed I2C

void setup() {
  //sensorsetup();
  u8g2.begin();
}

void loop() {
  //sensorRead();
  u8g2.clearBuffer();                  // clear the internal memory
  u8g2.setFont(u8g2_font_ncenB08_tr);  // choose a suitable font
  u8g2.setCursor(0, 10);              // Set cursor to first line
  u8g2.print("Hello World!");         // write something to the internal memory
  u8g2.sendBuffer();                  // transfer internal memory to the display
  delay(1000);  
}


    




