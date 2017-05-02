#define TRIGGER 4
#define ECHO 3

#define Buzzer 5

#define LED_R 7
#define LED_Y 8
#define LED_G 9
int i;
void setup() {
pinMode(ECHO, INPUT);
pinMode(TRIGGER, OUTPUT);
Serial.begin(9600);
pinMode(Buzzer, OUTPUT);
for(i=7; i<=9; i++) {
  pinMode(i,OUTPUT);
  }
}

void loop() {
float duration, distance;
digitalWrite(TRIGGER,HIGH);
delay(10);
digitalWrite(TRIGGER, LOW);

duration = pulseIn(ECHO, HIGH);
distance = (float)((duration*340)/10000) / 2;

Serial.print(distance);
Serial.println("cm");
if(distance > 20){
  digitalWrite(LED_G,HIGH);
  delay(500);
  digitalWrite(LED_G, LOW);
  delay(500);
}
if(distance > 15 && distance < 20){
  tone(Buzzer, 523.25, 360);
  digitalWrite(LED_G,HIGH);
  delay(200);
  digitalWrite(LED_G,LOW);
  delay(200);
}
if(distance > 10 && distance < 15){
    tone(Buzzer, 587.32, 280);
    digitalWrite(LED_Y,HIGH);
    delay(100);
    digitalWrite(LED_Y,LOW);
    delay(100);
}
if(distance < 10){
      tone(Buzzer, 659.25, 100); 
      digitalWrite(LED_R,HIGH);
      delay(50);
      digitalWrite(LED_R,LOW);
      delay(50);
}
delay(100);
}
