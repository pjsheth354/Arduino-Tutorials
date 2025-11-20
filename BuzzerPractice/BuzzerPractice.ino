int buzzPin = 11;
int potPin = A0;
int waitTime = 1000;
float potValue;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(potPin,INPUT);
  pinMode(buzzPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  potValue = analogRead(potPin);
  Serial.println(potValue);
  while(potValue>800){
    digitalWrite(buzzPin,HIGH);
    potValue = analogRead(potPin);
    Serial.println(potValue);
  }
  digitalWrite(buzzPin,LOW);
}
