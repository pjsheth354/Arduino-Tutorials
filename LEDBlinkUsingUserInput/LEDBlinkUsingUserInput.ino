int numBlinks;
int ledPin = 12;
int waitTime = 500;
String onScreenValue = "Enter the Number of LED Blinks: ";
String printMsg = "The Blinks are: ";

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(ledPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(onScreenValue);
  while(Serial.available() == 0){
    }
  numBlinks = Serial.parseInt();
  Serial.print(printMsg);
  Serial.println(numBlinks);
  for(int i=1; i<=numBlinks; i++){
    digitalWrite(ledPin, HIGH);
    delay(waitTime);
    digitalWrite(ledPin, LOW);
    delay(waitTime);
  }
}
