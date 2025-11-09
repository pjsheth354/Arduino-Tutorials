//Battery Voltage Measurement Circuit Design

int readPin = A0;
int waitTime = 500;
float readVoltage;

void setup() {
  // put your setup code here, to run once:
pinMode(readPin,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
readVoltage = (5./1023.)*(9100./5100.)*analogRead(readPin);
Serial.println(readVoltage);
delay(waitTime);
}
