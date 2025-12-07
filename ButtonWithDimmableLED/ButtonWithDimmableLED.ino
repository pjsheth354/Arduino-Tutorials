int buttonPin1 = 8;
int buttonPin2 = 9;
int ledPin = 10;
int buzzPin = 11;
int waitTime = 150;
int buttonState1;
int buttonState2;
int buttonCount;

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);
  if(buttonState1 == 1){
      buttonCount = buttonCount + 5;
    }
  if(buttonState2 == 1){
      buttonCount = buttonCount - 5;
    }
  if(buttonCount > 255){
    buttonCount = 255;
    digitalWrite(buzzPin,HIGH);
    delay(waitTime);
    digitalWrite(buzzPin,LOW);
    }
  if(buttonCount < 0){
    buttonCount = 0;
    digitalWrite(buzzPin,HIGH);
    delay(waitTime);
    digitalWrite(buzzPin,LOW);
    }

  analogWrite(ledPin,buttonCount);
  delay(waitTime);
  Serial.println(buttonCount);
}
