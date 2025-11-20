int buzzPin = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<=255;i=i+5){
    analogWrite(buzzPin,i);
  }
}
