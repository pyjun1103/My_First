#include <LiquidCrystal.h>

LiquidCrystal myLCD(7,8,9,10,11,12);

void setup() {
  myLCD.begin(16,2); // 16x2 LCD will used by me
  myLCD.clear(); // LCD display clear
  Serial.begin(9600);
}

int count = 0;
void loop() {
  myLCD.clear();
String s = "";
  if(Serial.available()){
    while(Serial.available()){
      char c = Serial.read(); //char
      s+=c; // inputed Alphabet will be trans into String
    }
  }
  myLCD.setCursor(0,0); // place cursor on 1,1
  myLCD.print("Hello world");
  
  myLCD.setCursor(0,1); // place cursor on 2,1
  
  delay(1000);
  myLCD.print(count++);

  myLCD.setCursor(5,1); // place cursor on 2,6
  myLCD.print(s);
  delay(2000);
}
