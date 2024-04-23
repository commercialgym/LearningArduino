int j = 1;
int delayT = 750;
int x=15;
int y=41;
int z;
String meowString= " + ";
float pi=3.14;
float r=2;
float area;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  area=pi*r*r;
  Serial.print("A circle with radius ");
  Serial.print(r);
  Serial.print(" has an area of ");
  Serial.print(area);
  Serial.println(".");
  delay(delayT);
  r=r+5;
}
