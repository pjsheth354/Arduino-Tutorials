#define Led_Yellow 12
#define Led_Blue 11
#define Led_Green 10

int dit = 300;
int dah = 700;
int long_delay = 1000;

void setup() {
  // put your setup code here, to run once:
pinMode(Led_Yellow, OUTPUT);
pinMode(Led_Blue, OUTPUT);
pinMode(Led_Green, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(Led_Yellow, HIGH);
delay(dit);
digitalWrite(Led_Yellow, LOW);
delay(dit);
digitalWrite(Led_Yellow, HIGH);
delay(dit);
digitalWrite(Led_Yellow, LOW);
delay(dit);
digitalWrite(Led_Yellow, HIGH);
delay(dit);
digitalWrite(Led_Yellow, LOW);
delay(dit);

digitalWrite(Led_Blue, HIGH);
delay(dah);
digitalWrite(Led_Blue, LOW);
delay(dah);
digitalWrite(Led_Blue, HIGH);
delay(dah);
digitalWrite(Led_Blue, LOW);
delay(dah);
digitalWrite(Led_Blue, HIGH);
delay(dah);
digitalWrite(Led_Blue, LOW);
delay(dah);

digitalWrite(Led_Green, HIGH);
delay(dit);
digitalWrite(Led_Green, LOW);
delay(dit);
digitalWrite(Led_Green, HIGH);
delay(dit);
digitalWrite(Led_Green, LOW);
delay(dit);
digitalWrite(Led_Green, HIGH);
delay(dit);
digitalWrite(Led_Green, LOW);
delay(dit);

delay(long_delay);
}
