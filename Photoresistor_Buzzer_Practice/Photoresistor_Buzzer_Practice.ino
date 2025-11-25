int photoPin = A0;
int buzzPin = 11;
float photoValue;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buzzPin,OUTPUT);
  pinMode(photoPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  photoValue = analogRead(photoPin);
  Serial.println(photoValue);
  digitalWrite(buzzPin,HIGH);
  delay(photoValue);
  digitalWrite(buzzPin,LOW);
  delay(photoValue);
}
