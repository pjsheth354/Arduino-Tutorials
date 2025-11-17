int potPin = A0;
int ledPin = 12;
int waitTime = 500;
float potValue;

void setup() {
  // put your setup code here, to run once:
pinMode(potPin, INPUT);
pinMode(ledPin, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
potValue = analogRead(potPin);
while(potValue>1000){
  digitalWrite(ledPin,HIGH);
  potValue = analogRead(potPin);
  delay(waitTime);
}
digitalWrite(ledPin,LOW);
delay(waitTime);
}
