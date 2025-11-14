//Dimmable LED Project

int ledPin = 12;
int potPin = A0;
int readValue;
float voltageValue;
int delayTime = 500;

void setup() {
  // put your setup code here, to run once:
pinMode(ledPin, OUTPUT);
pinMode(potPin, INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
voltageValue = (255./1023.)*analogRead(potPin);
Serial.println(voltageValue);
analogWrite(ledPin, voltageValue);
delay(delayTime);
}
