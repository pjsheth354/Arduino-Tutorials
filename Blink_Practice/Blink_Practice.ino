//Traffic Signal Code

#define Pin_Number_Red 13
#define Pin_Number_Yellow 12
#define Pin_Number_Green 11
void setup() {
  // put your setup code here, to run once:
pinMode (Pin_Number_Red, OUTPUT);
pinMode (Pin_Number_Yellow, OUTPUT);
pinMode (Pin_Number_Green, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//digitalWrite(Pin_Number, HIGH);
//delay(900); //Duty Cycle is still 1 sec but For that the cycle is 1/10th sec is OFF and 9/10th sec is ON
//digitalWrite(Pin_Number, LOW);
//delay(100);
digitalWrite(Pin_Number_Red, HIGH);
digitalWrite(Pin_Number_Yellow, LOW);
digitalWrite(Pin_Number_Green, LOW);
delay(2500);
digitalWrite(Pin_Number_Red, LOW);
digitalWrite(Pin_Number_Yellow, HIGH);
digitalWrite(Pin_Number_Green, LOW);
delay(2500);
digitalWrite(Pin_Number_Red, LOW);
digitalWrite(Pin_Number_Yellow, LOW);
digitalWrite(Pin_Number_Green, HIGH);
delay(2500);
digitalWrite(Pin_Number_Red, LOW);
digitalWrite(Pin_Number_Yellow, LOW);
digitalWrite(Pin_Number_Green, LOW);
delay(1000);
}
