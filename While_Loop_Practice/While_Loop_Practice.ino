int j = 0;
int waitTime = 500;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
while(j<=10){
  Serial.println(j);
  delay(waitTime);
  }
  Serial.println();
}
