float length_rectangle;
float area_rectangle;
int waitTime = 500;
String areaString = "Area of the Rectangle = ";

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.print("The Length is: ");
while(Serial.available()==0){}
length_rectangle = Serial.parseFloat();
Serial.println(length_rectangle);
delay(waitTime);
area_rectangle = length_rectangle*length_rectangle;
Serial.print(areaString);
Serial.println(area_rectangle);
}
