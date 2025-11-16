//Practicing For Loops

int redLED = 12;
int blueLED = 13;
int waitTime = 500;
int redBlink = 5;
int blueBlink = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(redLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int i = 0;

  for(i=0;i<redBlink;i++){
    digitalWrite(redLED, HIGH);
    delay(waitTime);
    digitalWrite(redLED, LOW);
    delay(waitTime);
    }
  delay(waitTime);
  for(i=0;i<blueBlink;i++){
    digitalWrite(blueLED, HIGH);
    delay(waitTime);
    digitalWrite(blueLED, LOW);
    delay(waitTime);
    }
}
