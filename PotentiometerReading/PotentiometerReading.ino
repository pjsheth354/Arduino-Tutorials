//Read the voltage in the circuit using Potentiometer
//Potentiometer Pin Connection Pin1 = 5V, Pin2 = GND and Pin3 = measurePin(A0)

float readValue;
int waitTime;
int measurePin = A0;

void setup() {
  // put your setup code here, to run once:
  pinMode(measurePin,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  readValue = (5./1023.)*analogRead(measurePin);
  Serial.println(readValue);
}
