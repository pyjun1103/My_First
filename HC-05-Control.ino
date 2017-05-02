#define blTX 2
#define blRX 3
#define LED_G 7
#define LED_Y 6
#define LED_R 5

#include <SoftwareSerial.h>
SoftwareSerial blPort(blTX,blRX);

void setup() {
Serial.begin(9600);
blPort.begin(9600);
for(int i = 5; i<=7; i++){
  pinMode(i,OUTPUT);
  }
}

void loop() {
//did BlueTooth send us something?
  if(blPort.available()) {
    char c = blPort.read();
    if(c=='A') {
      Serial.println("AirCon");
      digitalWrite(LED_R, !digitalRead(LED_R));
    }
    if(c=='B') {
      Serial.println("Boiler");
      digitalWrite(LED_Y, !digitalRead(LED_Y));
    }
    if(c=='1') {
      Serial.println("Light 1");
      digitalWrite(LED_G, !digitalRead(LED_G));
    }
//    Serial.write(blPort.read());
    
  }
  //did we send data to BlueTooth with Serial monitor?
  if(Serial.available()){
    blPort.write(Serial.read());
  }
}
