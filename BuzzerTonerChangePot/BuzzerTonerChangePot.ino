int potPin = A0;
int buzzPin = 11;
float potValue;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(potPin,INPUT);
  pinMode(buzzPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  potValue = ((9.7165)*(analogRead(potPin)-1023))+10000;
  Serial.println(potValue);
  digitalWrite(buzzPin,HIGH);
  delay(potValue);
  digitalWrite(buzzPin,LOW);
  delay(potValue);
}
