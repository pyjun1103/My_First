#include <LiquidCrystal.h>

LiquidCrystal myLCD(7,8,9,10,11,12);

void setup() {
  myLCD.begin(16,2); // 16x2 LCD will used by me
  myLCD.clear(); // LCD display clear
  Serial.begin(9600);
}
char input = 0;
void loop() {
  myLCD.setCursor(0,0); // place cursor on 1,1
  myLCD.print("Hello world");
  
  myLCD.setCursor(0,1); // place cursor on 2,1
  myLCD.setCursor(2,1); // place cursor on 2,6
  myLCD.print("I'm Korean!!");
}
