String StringRed = "Red";
String StringBlue = "Blue";
String StringGreen = "Green";
String StringValue;
int redLed = 10;
int blueLed = 11;
int greenLed = 12;
int waitTime = 1000;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redLed,OUTPUT);
  pinMode(blueLed,OUTPUT);
  pinMode(greenLed, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Which LED you want to lightup? Please Enter Red, Blue or Green");
  while(Serial.available()==0){}
  StringValue = Serial.readString();
  StringValue.trim();
  Serial.println(StringValue);
  if(StringValue == StringRed){
    digitalWrite(redLed,HIGH);
    digitalWrite(blueLed,LOW);
    digitalWrite(greenLed,LOW);
    delay(waitTime);
    }
  else if(StringValue == StringBlue){
    digitalWrite(redLed,LOW);
    digitalWrite(blueLed,HIGH);
    digitalWrite(greenLed,LOW);
    delay(waitTime); 
  }
  else if(StringValue == StringGreen){
    digitalWrite(redLed,LOW);
    digitalWrite(blueLed,LOW);
    digitalWrite(greenLed,HIGH);
    delay(waitTime);
  }
  else {
    digitalWrite(blueLed,LOW);
    digitalWrite(redLed,LOW);
    digitalWrite(greenLed,LOW);
    delay(waitTime);
  }
}
