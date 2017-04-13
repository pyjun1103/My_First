
int LED8[] = {1,2,3,4,5,6,7,8};

void setup() {
  // put your setup code here, to run once:

  for(int i = 0; i < 8; i++){
    pinMode(LED8[i],OUTPUT);
  }

}

int sw = LOW;
void loop() {
  // put your main code here, to run repeatedly:

 int count = 0;
 
 for( ;; ){
  count++;
  digitalWrite(LED8[count%8], sw);
  delay(100);

  if(count % 8 == 0) sw ^= 1;

 }

}
