void setup() {
  // put your setup code here, to run once:
pinMode(11,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//digitalWrite(11,HIGH);
//delay(80);
//
//digitalWrite(11,LOW);
//delay(80);

for(int i = 0; i<255; i++){
  analogWrite(11,i);
  delay(100);
 }

for(int i = 255; i>0; i--){
  analogWrite(11,i);
  delay(100);
 }
}
