#include <DHT.h>

dht DHT;

#define RHT03_PIN 5;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int chk = DHT.read22(RHT_PIN);
if(chk == DHTLIB_OK) Serial.print("OK \t");
if(chk == DHTLIB_ERROR_CHECKSUB) Serial.print("ChkSum Error \t");
if(chk == DHTLIB_ERROR_TIMEOUT) Serial.print("Time Out \t");
Serial.print("No Error \t");

Serial.print(DHT.humidity);
Serial.print("\t");
Serial.print(DHT.temperature);

delay(1000);

}

