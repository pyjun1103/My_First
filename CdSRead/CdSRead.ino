void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(7,OUTPUT);
}

int Min = 0;
int Max = 1023;


void loop() {
  // put your main code here, to run repeatedly:
int aIn = analogRead(A1);

//if(Max < aIn) Max = aIn; // maximum size
//if(Min > aIn) Min = aIn; // minimum size

int Avg = 980;
Serial.println(aIn);
delay(200);
if(Avg < aIn) {
  digitalWrite(7,HIGH);
  delay(200);
  digitalWrite(7,LOW);
  delay(200);
  } else {
    digitalWrite(7,LOW);
  }

}
