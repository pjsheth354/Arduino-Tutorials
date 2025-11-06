//Code for Red Light Blink 5 times, Yellow Blink 10 times, Green Blink 15 times

#define Pin_Red 12
#define Pin_Yellow 11
#define Pin_Green 10
 
void setup() {
  // put your setup code here, to run once:
pinMode(Pin_Red, OUTPUT);
pinMode(Pin_Yellow, OUTPUT);
pinMode(Pin_Green, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 int i = 0; 
  //Red Light Blink 5 times

for(i=0;i<5;i++){
  digitalWrite(Pin_Red,HIGH);
  delay(250);
  digitalWrite(Pin_Red,LOW);
  delay(250);
  }
 delay(500);
 
// Yellow Light Blink 10 times
 for(i=0;i<10;i++){
  digitalWrite(Pin_Yellow,HIGH);
  delay(250);
  digitalWrite(Pin_Yellow,LOW);
  delay(250);
  }

 delay(500);
 
// Green Light Blink 15 times
 for(i=0;i<15;i++){
  digitalWrite(Pin_Green,HIGH);
  delay(250);
  digitalWrite(Pin_Green,LOW);
  delay(250);
  }
  
delay(1000);
}
