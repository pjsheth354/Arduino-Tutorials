//Practice Pullup and Pulldown Resistor where Pullup operates inverterly and Pulldown works normally as High as 1 and Low as 0

int buttonPin = 12;
int ledPin = 13;
int buttonState;
int waitTime = 100;

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin,INPUT);
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(buttonPin);
  digitalWrite(ledPin,buttonState);
  Serial.println(buttonState);
  delay(waitTime);
}
