int buzzPin = 11;
int waitTimeone = 10;
int waitTimetwo = 20;
int i;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(i=0;i<100;i++){
    digitalWrite(buzzPin,HIGH);
    delay(waitTimeone);
    digitalWrite(buzzPin,LOW);
    delay(waitTimetwo);
  }
}
