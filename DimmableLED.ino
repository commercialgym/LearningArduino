int potPin=A2;
int Gpin=6;
float potVal;
float LEDVal;
int delayT=250;

void setup() {
  // put your setup code here, to run once:
  pinMode(potPin,INPUT);
  pinMode(Gpin,OUTPUT);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  potVal=analogRead(potPin);
  LEDVal=(255./1023.)*potVal;
  analogWrite(Gpin,LEDVal);
  Serial.println(LEDVal);
  delay(delayT);
}
