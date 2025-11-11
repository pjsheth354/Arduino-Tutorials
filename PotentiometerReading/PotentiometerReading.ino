//Read the voltage in the circuit using Potentiometer
//Potentiometer Pin Connection Pin1 = 5V, Pin2 = GND and Pin3 = measurePin(A0)

float readValue;
int waitTime = 500;
int measurePin = A0;
int batteryLedFullCharge = 12;
int batteryLedLowCharge = 11;
void setup() {
  // put your setup code here, to run once:
  pinMode(measurePin,INPUT);
  pinMode(batteryLedFullCharge, OUTPUT);
  pinMode(batteryLedLowCharge, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  readValue = (5./1023.)*analogRead(measurePin);
  if (readValue >= 4.5){
    Serial.print("Charge Full: Voltage = ");
    digitalWrite(batteryLedFullCharge, HIGH);
    digitalWrite(batteryLedLowCharge, LOW);
    }
   else if (readValue <= 2.5){
    Serial.print("Charge Low: Voltage = ");
    digitalWrite(batteryLedFullCharge, LOW);
    digitalWrite(batteryLedLowCharge, HIGH);
    }
   else {
    Serial.print("Good Battery: Voltage = ");
    digitalWrite(batteryLedFullCharge, LOW);
    digitalWrite(batteryLedLowCharge, LOW);
    }
  Serial.println(readValue);
  delay(waitTime);
}
