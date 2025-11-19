int GreenPin = 10;
int RedPin = 12;
int BluePin = 11;
int waitTime = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(GreenPin,OUTPUT);
  pinMode(RedPin,OUTPUT);
  pinMode(BluePin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(GreenPin,HIGH);
  delay(waitTime);
  digitalWrite(GreenPin,LOW);
  delay(waitTime);
  digitalWrite(RedPin,HIGH);
  delay(waitTime);
  digitalWrite(RedPin,LOW);
  delay(waitTime);
  digitalWrite(BluePin,HIGH);
  delay(waitTime);
  digitalWrite(BluePin,LOW);
  delay(waitTime);
}
