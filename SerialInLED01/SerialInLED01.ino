
int LED8[] = {1,2,3,4,5,6,7,8};

void setup() {
  // put your setup code here, to run once:
  
  for(int i = 0; i < 8; i++){
    
    pinMode(LED8[i], OUTPUT);
    
    digitalWrite(LED8[i],LOW);
    
  }
  
  Serial.begin(9600);
  
}

int sw = 1;
int ledno = 0;

void loop() {
  // put your main code here, to run repeatedly:
  
  if(Serial.available()){
    
  char in = Serial.read();
    if(in == '0')sw = 1;
    if(in == '1')sw = -1;
  
  }
  ledno += sw;
  digitalWrite(LED8[ledno%8], HIGH);
  delay(300);
  digitalWrite(LED8[ledno%8], LOW);
  delay(300);
}
