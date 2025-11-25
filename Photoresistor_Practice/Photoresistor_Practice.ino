int photoPin = A0;
int waitTime = 500;
int redLed = 11;
int greenLed = 10;
float photoValue;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(photoPin, INPUT);
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  photoValue = analogRead(photoPin);
  Serial.println(photoValue);
  if(photoValue > 400){
      digitalWrite(greenLed, HIGH);
      digitalWrite(redLed, LOW);
      delay(waitTime);
    }
   else{
      digitalWrite(greenLed, LOW);
      digitalWrite(redLed, HIGH);
      delay(waitTime);
    }
    delay(waitTime);
}
