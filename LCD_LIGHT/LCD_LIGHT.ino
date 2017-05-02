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
  int light = analogRead(A5); // 0~1023, through light amount

  myLCD.setCursor(0,0);
  myLCD.print("Current Light");
  myLCD.setCursor(0,1);
  myLCD.print(light);

  delay(1000);
}
