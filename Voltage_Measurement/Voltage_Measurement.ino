int Pin_Value = A0;

void setup() {
  // put your setup code here, to run once:
  pinMode(Pin_Value, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  float VoltageMeasure = (5./1023.)*analogRead(Pin_Value);
  Serial.println(VoltageMeasure);
}
