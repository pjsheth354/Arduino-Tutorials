int buttonPin = 10;
int ledPin = 13;
int buttonStateOld = 1;
int buttonStateNew;
int ledState = 0;
int waitTime = 100;

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin,INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonStateNew = digitalRead(buttonPin);
  if (buttonStateOld == 0 && buttonStateNew == 1){
      if (ledState == 0){
          digitalWrite(ledPin,HIGH);
          ledState = 1;
        }
      else {
          digitalWrite(ledPin,LOW);
          ledState = 0;
      }
  }
  buttonStateOld = buttonStateNew;
}
