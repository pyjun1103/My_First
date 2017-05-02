#define blTX 2
#define blRX 3

#include <SoftwareSerial.h>
SoftwareSerial blPort(blTX,blRX);

void setup() {
Serial.begin(9600);
blPort.begin(9600);
}

void loop() {
  //did BlueTooth send us something?
  if(blPort.available()) {
//    char c = blPort.read();
//    if(c=='A')Serial.println("에어컨");
    Serial.write(blPort.read());
  }
  //did we send data to BlueTooth with Serial monitor?
  if(Serial.available()){
    blPort.write(Serial.read());
  }
}
