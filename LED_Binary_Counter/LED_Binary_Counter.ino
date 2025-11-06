//LED Binary Counter

#define Led_R_Bit0 9
#define Led_G_Bit1 10
#define Led_B_Bit2 11
#define Led_Y_Bit3 12

int delay_timer = 1000;

void setup() {
  // put your setup code here, to run once:
pinMode(Led_R_Bit0, OUTPUT);
pinMode(Led_G_Bit1, OUTPUT);
pinMode(Led_B_Bit2, OUTPUT);
pinMode(Led_Y_Bit3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int i = 0;
for (i=0; i<16; i++){

  //For Bit 0
  if (i%2 > 0){
    digitalWrite(Led_R_Bit0,HIGH);
    } 
  else {
    digitalWrite(Led_R_Bit0,LOW);
    }

   //For Bit 1
   if (i%4 > 1){
    digitalWrite(Led_G_Bit1,HIGH);
    } 
  else {
    digitalWrite(Led_G_Bit1,LOW);
    }

   //For Bit 2
   if (i%8 > 3){
    digitalWrite(Led_B_Bit2,HIGH);
    } 
  else {
    digitalWrite(Led_B_Bit2,LOW);
    }

   //For Bit 3
   if (i%16 > 7){
    digitalWrite(Led_Y_Bit3,HIGH);
    } 
  else {
    digitalWrite(Led_Y_Bit3,LOW);
    }

  delay(delay_timer);
  }
}
