int LED8[] = {1,2,3,4,5,6,7,8};
void setup() {
  // put your setup code here, to run once:
  for(int i = 0; i < 8; i++){
    pinMode(LED8[i], OUTPUT);
    digitalWrite(LED8[i],LOW);
  }
  Serial.begin(9600);
}
int ledon = 0;
void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
  char in = Serial.read();
  ledon = in - '0';

  int ledState = digitalRead(LED8[ledon]);
  digitalWrite(LED8[ledon], !ledState);
  }
}
