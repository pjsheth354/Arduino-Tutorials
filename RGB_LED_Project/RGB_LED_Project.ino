int greenPin = 10;
int redPin = 12;
int bluePin = 11;
int waitTime = 1000;
String colorString;

void setup() {
  // put your setup code here, to run once:
  pinMode(greenPin,OUTPUT);
  pinMode(bluePin,OUTPUT);
  pinMode(redPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("What color do you want to lightup? ");
  while(Serial.available()==0){}
  colorString = Serial.readString();
  colorString.trim();
  Serial.println(colorString);
  if(colorString == "Red"){
    digitalWrite(redPin,HIGH);
    digitalWrite(greenPin,LOW);
    digitalWrite(bluePin,LOW);
    delay(waitTime);
  }
  else if(colorString == "Blue"){
    digitalWrite(redPin,LOW);
    digitalWrite(greenPin,LOW);
    digitalWrite(bluePin,HIGH);
    delay(waitTime);
  }
  else if(colorString == "Green"){
    digitalWrite(redPin,LOW);
    digitalWrite(greenPin,HIGH);
    digitalWrite(bluePin,LOW);
    delay(waitTime);
  }
  else if(colorString == "Off"){
    digitalWrite(redPin,LOW);
    digitalWrite(greenPin,LOW);
    digitalWrite(bluePin,LOW);
    delay(waitTime);
  }
  else if(colorString == "Yellow"){
    analogWrite(redPin,255);
    analogWrite(greenPin,255);
    analogWrite(bluePin,0);
    delay(waitTime);
  }
  else if(colorString == "Magneta"){
    analogWrite(redPin,255);
    analogWrite(greenPin,0);
    analogWrite(bluePin,255);
    delay(waitTime);
  }
  else if(colorString == "Cyan"){
    analogWrite(redPin,0);
    analogWrite(greenPin,255);
    analogWrite(bluePin,255);
    delay(waitTime);
  }
  else if(colorString == "Black"){
    analogWrite(redPin,0);
    analogWrite(greenPin,0);
    analogWrite(bluePin,0);
    delay(waitTime);
  }
  else if(colorString == "White"){
    analogWrite(redPin,255);
    analogWrite(greenPin,255);
    analogWrite(bluePin,255);
    delay(waitTime);
  }
  else{
    digitalWrite(redPin,LOW);
    digitalWrite(greenPin,LOW);
    digitalWrite(bluePin,LOW);
    delay(waitTime);
  }
}
