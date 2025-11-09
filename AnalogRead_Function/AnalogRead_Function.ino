#define LED_PIN_13 A0
#define delay_time 500

void setup() {
  // put your setup code here, to run once:
pinMode(LED_PIN_13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int i = 150;
for(i=150; i<256; i++){
  analogWrite(LED_PIN_13,i);
  delay(delay_time);
  if (i==255){
    for(i=255;i>151;i--){
      analogWrite(LED_PIN_13,i);
      delay(delay_time);
      }
    }
  }
}

//Notes
// I understand that when we use AnalogWrite command and varies the value from 0 to 255 then it doesnot reduces
// the voltage but it makes an average by changing the signal like PWM 
// So, the voltage reamins the same like 5V and 0V but if we are giving the analogWrite(127)
// So, the duty cycle becomes 50% that 5V for 50% of time and 0V for 50% of time.
// So, it does like that (5V(0.5)+ 0(0.5)) = 2.5V where 0.5 is percentage
// So, analogWrite(20) (5V(0.2) + 0 (0.8)) = 1V output
